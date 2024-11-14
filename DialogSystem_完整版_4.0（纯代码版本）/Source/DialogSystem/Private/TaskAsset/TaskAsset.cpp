#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/HQTaskSystem.h"
#include "TaskAsset/RuntimeTaskGraph.h"
#include "TaskAsset/RuntimeTaskNodeInfoBase.h"
#include "TaskAsset/SecondaryTaskBase.h"
#include "TaskAsset/TaskAssetObjectInfo.h"
#include "TaskAsset/TaskConditionBase.h"
#include "TaskAsset/TaskNodeEffectorBase.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"
#include "UObject/ObjectSaveContext.h"

bool UTaskAsset::InitTaskAsset(UHQTaskSystem* NewHQTaskSystem,AActor* NewTaskSource)
{
	TaskCurrentId = "StartNode";
	TaskSource = NewTaskSource;
	TaskTagArray.Empty();
	//循环调用效果器
	for(UTaskEffectorBase* TaskEffector:RuntimeTaskGraph->Map_NodeIdToNode["StartNode"]->RuntimeDialogNodeInfoBase->TaskEffectorArray)
	{
		TaskEffector->TaskEffectorPlay(this);
	}
	//初始化所有数据
	HQTaskSystem = NewHQTaskSystem;
	if(TaskAssetObjectInfoBaseClass)
	{
		TaskAssetObjectInfoBase = NewObject<UTaskAssetObjectInfoBase>(this,TaskAssetObjectInfoBaseClass);
		TaskAssetObjectInfoBase->TaskAsset = this;
		TaskAssetObjectInfoBase->TaskSystem = HQTaskSystem;
		TaskAssetObjectInfoBase->InitTaskAssetObjectInfo(Map_IdToValue);
	}else{UE_LOG(LogTemp,Error,TEXT("TaskAsset::InitTaskAsset 没有有效的TaskAssetObjectInfoBaseClass对象！"));}
	//设置阶段到阶段一
	SettingCurrent(RuntimeTaskGraph->Map_NodeIdToNode["StartNode"]->OutputTaskPinArray[0]->Connection->NodeId);
	return true; 
}

void UTaskAsset::SettingCurrent(FName TaskNodeId)
{
	//设置当前阶段
	TaskCurrentId = TaskNodeId;
	switch (RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->TaskNodeType )
	{
	case ETaskNodeType::UnKnown:break;
	case ETaskNodeType::TaskStartNode:break;
	case ETaskNodeType::TaskNode:
		{
			URuntimeTaskNodeInfo* TaskNodeInfo = Cast<URuntimeTaskNodeInfo>(RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->RuntimeDialogNodeInfoBase);
			if(!TaskNodeInfo){break;}
			//循环调用效果器
			for(UTaskEffectorBase* TaskEffector:TaskNodeInfo->TaskEffectorArray){TaskEffector->TaskEffectorPlay(this);}
			//设置所有分段任务默认值
			for (auto Secondary:TaskNodeInfo->Map_IdToSecondaryTaskArray)
			{
				//设置对应初始化参数
				Secondary.Value->IsTrigger = false;
				Secondary.Value->SecondaryTaskResult = ETaskResultType::None;
			}
			break;
		}
	case ETaskNodeType::TaskEndNode:
		URuntimeTaskEndNodeInfo* TaskEndNodeInfo = Cast<URuntimeTaskEndNodeInfo>(RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->RuntimeDialogNodeInfoBase);
		if(!TaskEndNodeInfo){break;}
		//循环调用效果器
		for(UTaskEffectorBase* TaskEffector:TaskEndNodeInfo->TaskEffectorArray){TaskEffector->TaskEffectorPlay(this);}
		TaskAssetObjectInfoBase->TaskEnd(TaskEndNodeInfo);
		//调用任务结束事件。   
		HQTaskSystem->TaskEnd(TaskId,TaskEndNodeInfo->TaskResult);
		break;
	}
	//阶段发生变化时需要更新全部数据。
	HQTaskSystem->UpdateTask(TaskId);
}

void UTaskAsset::UpdateTaskState()
{
	//获取运行时任务节点。（不存在就直接跳出！）
	URuntimeTaskNodeInfo* NodeInfo = GetCurrentTaskNodeInfo();
	if(!NodeInfo){return;}
	//循环所有子任务
	for (auto Secondary:NodeInfo->Map_IdToSecondaryTaskArray)
	{
		//判断是否已经触发(触发了就调用结果判断)
		if(Secondary.Value->IsTrigger)
		{
			//判断是否有结果
			if(IsResultFromSecondaryTask(Secondary.Value,Secondary.Key))
			{
				//任务分段产生结果
				TaskAssetObjectInfoBase->TaskSecondaryChanged(NodeInfo,Secondary.Key,Secondary.Value->SecondaryTaskResult);
			}
		}
		else
		{
			//判断是否可以触发
			bool Result = true;
			for(USecondaryTaskConditionBase* ResultSecTask:Secondary.Value->SecondaryTaskConditionArray)
			{
				//只要有一个为否就不能触发这个分任务
				if(ResultSecTask->SecondaryTaskConditionIsSucceed(this)==false)
				{
					Result = false;
					break;
				}
			}
			//如果触发为真，那么设置触发结果为真的同时判断是否有结果
			if(Result)
			{
				//设置为已经触发，并且判断一次结果
				Secondary.Value->IsTrigger = true;
				//判断是否有结果
				if(IsResultFromSecondaryTask(Secondary.Value,Secondary.Key))
				{
					//任务分段产生结果
					TaskAssetObjectInfoBase->TaskSecondaryChanged(NodeInfo,Secondary.Key,Secondary.Value->SecondaryTaskResult);
				}
			}
		}
	}
	//当前任务节点中所有分段任务状态已经全部更新完成，接下来更新此节点的状态
	//循环所有引脚
	int32 Result = 0;
	for (FTaskOutPinData PinData:NodeInfo->TaskOutPinArray)
	{
		//循环当前引脚的所有条件，有一个没达成就跳到下一个引脚
		bool PinDataIsSucceed = true;
		for (UTaskPinUseConditionBase* PinDataCondition:PinData.PinUseCondition)
		{
			if(PinDataCondition->TaskAssetConditionIsSucceed(this)==false)
			{
				Result++;
				PinDataIsSucceed = false;
				break;
			}
		}
		if(PinDataIsSucceed == false){continue;}

		if(RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->OutputTaskPinArray[Result]&&RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->OutputTaskPinArray[Result]->Connection)
		{
			//获取下一个节点的Id
			FName NextNode = RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->OutputTaskPinArray[Result]->Connection->NodeId;
			SettingCurrent(NextNode);
		}else
		{
			UE_LOG(LogTemp,Error,TEXT("UTaskAsset::UpdateTaskState 节点：%s没有可以链接的下一个节点了！"),*TaskCurrentId.ToString());
		}
		break;
	}
	
}

bool UTaskAsset::IsResultFromSecondaryTask(USecondaryTaskBase* SecondaryTask,FName SecondaryId)
{
	//如果有结果就直接跳过这个分段任务。
	if(SecondaryTask->SecondaryTaskResult != ETaskResultType::None){return true;}
	//结果对象
	//循环所有结果，判断是否有结果
	for (auto ConditionResult:SecondaryTask->Map_SecondaryTaskTypeToCondition)
	{
		ETaskResultType resultType = ConditionResult.Key;
		//判断结果是否达成
		bool ConditionIsTrigger = true;
		for(USecondaryTaskAchievedConditionBase* pair:ConditionResult.Value.SecondaryTaskAchievedConditionArray)
		{
			//只要有一个条件没通过就是没有达成
			if(pair->SecondaryTaskAchievedConditionIsSucceed(this)==false)
			{
				ConditionIsTrigger = false;
				break;
			}
		}
		//如果没有达成就找下一个结果
		if(ConditionIsTrigger == false){continue;}
		//如果达成就设置此结果为最终结果，并且不再检查其他结果
		SecondaryTask->SecondaryTaskResult = resultType;
		//触发所有的结果效果器
		for(UTaskEffectorBase* Effector:SecondaryTask->SecondaryTaskEffector)
		{Effector->TaskEffectorPlay(this);}
		return true;
	}
	return false;
}

URuntimeTaskNodeInfo* UTaskAsset::GetCurrentTaskNodeInfo() const
{
	URuntimeTaskNodeInfo* TaskNode = Cast<URuntimeTaskNodeInfo>(RuntimeTaskGraph->Map_NodeIdToNode[TaskCurrentId]->RuntimeDialogNodeInfoBase);
	return TaskNode;
}

UTaskAssetObjectInfoBase* UTaskAsset::GetTaskAssetObjectInfo() const
{
	return TaskAssetObjectInfoBase;
}

void UTaskAsset::PreSave(FObjectPreSaveContext SaveContext)
{
	//如果指向的位置有函数，我应该调用一下这个函数，这里指向的是APP中保存数据的函数。
	if(_OnPreSaveListener)
	{
		_OnPreSaveListener();
	}
	UObject::PreSave(SaveContext);
}
