#pragma once
#include "TaskAsset/SecondaryTaskBase.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/TaskConditionBase.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"
#include "TaskPinUseCondition_NeedTask.generated.h"


UCLASS(DisplayName="需要完成的子任务")
class DIALOGSYSTEM_API UTaskPinUseCondition_NeedTask :public UTaskPinUseConditionBase
{
	GENERATED_BODY()
public:
	UTaskPinUseCondition_NeedTask(){}

	//需要完成的阶段任务对应任务状态。
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="需要完成的阶段任务对应任务状态",Category="TaskAsset")
	TMap<FName,ETaskResultType> Map_TaskIdToState;

	
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool TaskAssetConditionIsSucceed(UTaskAsset* SettingTaskAsset)override
	{
		URuntimeTaskNodeInfo* TaskNode = SettingTaskAsset->GetCurrentTaskNodeInfo();
		if (TaskNode == nullptr){return false;}
		TMap<FName,ETaskResultType> TaskIdToState = Map_TaskIdToState;
		for(auto pair:TaskNode->Map_IdToSecondaryTaskArray)
		{
			for(auto Task:TaskIdToState)
			{
				if(pair.Key == Task.Key)
				{
					if(pair.Value->SecondaryTaskResult == ETaskResultType::None){return false;}
				}}}
		return true;
	}
	
};