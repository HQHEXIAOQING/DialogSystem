#include "TaskAsset/HQTaskSystem.h"

#include "TaskAsset/SecondaryTaskBase.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/TaskConditionBase.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"

void UHQTaskSystem::TaskInitialize(TSubclassOf<UTaskSystemDataObject> NewTaskSystemDataObject)
{
	//置空任务
	Map_TaskIdToTaskAsset.Empty();
	TaskSystemDataObject = NewObject<UTaskSystemDataObject>(this,NewTaskSystemDataObject);
	TaskSystemDataObject->BlueprintTaskInitialize();
	//TODO::还没有处理保存相关逻辑，需要自行扩展保存的逻辑。
	//………………
}

//添加一个任务内容
bool UHQTaskSystem::AddTask(UTaskAsset* TaskAsset, AActor* TaskSourceActor)
{
	if(Map_TaskIdToTaskAsset.Find(TaskAsset->TaskId)){return false;}
	//添加一个任务
	Map_TaskIdToTaskAsset.Add(TaskAsset->TaskId, TaskAsset);
	//调用任务包初始化事件
	TaskAsset->InitTaskAsset(this,TaskSourceActor);
	if(!TaskSystemDataObject){UE_LOG(LogTemp,Error,TEXT("没有对应的任务数据！请初始化任务子系统！"));return false;}
	TaskSystemDataObject->BlueprintAddTask(TaskAsset,TaskSourceActor);
	OnTaskAdd.Broadcast(TaskAsset->TaskId);
	return true;
}

//移除一个任务内容
bool UHQTaskSystem::RemoveTask(FName TaskId)
{
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	OnTaskRemove.Broadcast(TaskId);
	Map_TaskIdToTaskAsset.Remove(TaskId);
	UE_LOG(LogTemp,Warning,TEXT("UHQTaskSystem::RemoveTask 移除任务！"));
	return true;
}

//获取正在执行的节点
bool UHQTaskSystem::GetTaskCurrentExecuteNode(FName TaskId,FName& TaskCurrentIdThis)
{
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	TaskCurrentIdThis = Map_TaskIdToTaskAsset[TaskId]->TaskCurrentId;
	return true;
}

bool UHQTaskSystem::GetTaskCurrentUIShowInfo(FName TaskId, URuntimeTaskNodeInfo*& TaskNodeInfo,TArray<USecondaryTaskBase*>& OpenTaskSecondary)
{
	TArray<USecondaryTaskBase*> TaskSecondary;
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	UTaskAsset* TaskAsset = Map_TaskIdToTaskAsset[TaskId];

	TaskNodeInfo = TaskAsset->GetCurrentTaskNodeInfo();
	if(!TaskNodeInfo){return false;}
	
	//循环设置已经触发的内容
	for (TPair<FName, USecondaryTaskBase*> TaskSecondaryTask:TaskNodeInfo->Map_IdToSecondaryTaskArray)
	{
		if(TaskSecondaryTask.Value->IsTrigger)
		{
			TaskSecondary.Add(TaskSecondaryTask.Value);
		}
	}
	OpenTaskSecondary.Empty();
	OpenTaskSecondary = TaskSecondary;
	return true;
}

//获取任务资产和对应任务数据
bool UHQTaskSystem::GetTaskAssetAndInfoFromId(FName TaskId, UTaskAsset*& TaskAsset, UTaskAssetObjectInfoBase*& TaskInfo)
{
	//获取对应的任务包和对话包
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	TaskAsset = Map_TaskIdToTaskAsset[TaskId];
	TaskInfo = TaskAsset->GetTaskAssetObjectInfo();
	return true;
}

//获取任务中的对话包
bool UHQTaskSystem::GetTaskDialogAssetFromId(FName TaskId,FName TaskDialogId, UDialogAsset*& DialogAsset)
{
	//获取对应的任务包和对话包
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	UTaskAsset* TaskAsset = Map_TaskIdToTaskAsset[TaskId];
	if(!TaskAsset->Map_DialogIdToTaskDialogCondition.Find(TaskDialogId)){return false;}
	UDialogAsset* TaskDialog = TaskAsset->Map_DialogIdToTaskDialogCondition[TaskDialogId].UseDialogAsset;
	
	//循环判断此对话包是否可以使用(可以使用的话就直接调用此对话包)
	for(UTaskDialogConditionBase* TaskDialogCondition:TaskAsset->Map_DialogIdToTaskDialogCondition[TaskDialogId].DialogIdToTaskDialogConditionArray)
	{
		if(TaskDialogCondition->TaskAssetConditionIsSucceed(TaskAsset) == false)
		{
			UE_LOG(LogTemp,Warning,TEXT("UHQTaskSystem::GetTaskDialogAssetFromId 对话包使用条件没有通过！"));
			return false;
		}
	}
	DialogAsset = TaskDialog;
	return true;
}

//添加此任务的标签
bool UHQTaskSystem::AddTaskTag(FName TaskId,FName TaskTag)
{
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	Map_TaskIdToTaskAsset[TaskId]->TaskTagArray.Add(TaskTag);
	return true;
}

bool UHQTaskSystem::RemoveTaskTag(FName TaskId,FName TaskTag)
{
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	Map_TaskIdToTaskAsset[TaskId]->TaskTagArray.Remove(TaskTag);
	return true;
}

bool UHQTaskSystem::UpdateTask(FName TaskId)
{
	//更新对应任务资产的任务状态。
	if(!Map_TaskIdToTaskAsset.Find(TaskId)){return false;}
	Map_TaskIdToTaskAsset[TaskId]->UpdateTaskState();
	OnTaskUpdate.Broadcast(TaskId);
	return true;
}

void UHQTaskSystem::TaskEnd(FName TaskId,ETaskResultType TaskResultType)
{
	if(!TaskSystemDataObject){UE_LOG(LogTemp,Error,TEXT("没有对应的任务数据！请初始化任务子系统！"));return;}
	//判断此Id下是否有对象存在。
	if(Map_TaskIdToTaskAsset[TaskId]){TaskSystemDataObject->BlueprintTaskEnd(Map_TaskIdToTaskAsset[TaskId],TaskResultType);}
	RemoveTask(TaskId);
	
}
