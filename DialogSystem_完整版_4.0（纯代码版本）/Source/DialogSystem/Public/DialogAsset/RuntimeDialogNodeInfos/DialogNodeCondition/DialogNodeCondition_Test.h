#pragma once
#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/DialogConditionBase.h"
#include "TaskAsset/HQTaskSystem.h"
#include "DialogNodeCondition_Test.generated.h"

class URuntimeDialogNode;
//对话节点使用条件
UCLASS(DisplayName="测试对话节点使用条件",NotBlueprintable)
class DIALOGSYSTEM_API UDialogNodeCondition_Test : public UDialogNodeConditionBase
{
	GENERATED_BODY()
public:
    UDialogNodeCondition_Test(){}
    
	//测试结果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="测试结果",Category="DialogAssetCondition")
	bool TestBool = false;
	
	//条件判断(是否成立？)
	virtual bool DialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset,URuntimeDialogNode* LastDialogNode,URuntimeDialogNode* NextDialogNode)override
	{return TestBool;}
};

//任务状态
UCLASS(DisplayName="任务状态",NotBlueprintable)
class DIALOGSYSTEM_API UDialogNodeCondition_TaskState : public UDialogNodeConditionBase
{
	GENERATED_BODY()
public:
	UDialogNodeCondition_TaskState(){}

	//任务Id
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="任务Id",Category="DialogAssetCondition")
	FName TaskId = TEXT("任务Id");
	//任务开启状态
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="任务开启状态",Category="DialogAssetCondition")
	bool OpenTask = false;
	
	//条件判断(是否成立？)
	virtual bool DialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset,URuntimeDialogNode* LastDialogNode,URuntimeDialogNode* NextDialogNode)override
	{
		AActor* Player = SettingDialogAsset->Map_NameIDToParticipant["PlayerActor"];
		if (!Player){return false;}
		UHQTaskSystem* HQTaskSystem = Player->GetWorld()->GetGameInstance()->GetSubsystem<UHQTaskSystem>();
		if (!HQTaskSystem){return false;}
		bool TaskState = (HQTaskSystem->Map_TaskIdToTaskAsset.Find(TaskId))?true:false;
		return OpenTask==TaskState;
	}
};
