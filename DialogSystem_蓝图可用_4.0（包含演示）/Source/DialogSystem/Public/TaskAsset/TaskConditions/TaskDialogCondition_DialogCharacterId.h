#pragma once
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/TaskAssetObjectInfo.h"
#include "TaskAsset/TaskConditionBase.h"
#include "TaskDialogCondition_DialogCharacterId.generated.h"

UCLASS(DisplayName="必须的角色")
class DIALOGSYSTEM_API UTaskDialogCondition_DialogCharacterId :public UTaskDialogConditionBase
{
	GENERATED_BODY()
public:
	UTaskDialogCondition_DialogCharacterId(){}

	//必须的角色标签
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="必须的角色标签",Category="TaskAsset")
	FName CharacterId;
	//对应黑板值位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对应黑板值位置",Category="TaskAsset")
	FName BackCharacterId;
	
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool TaskAssetConditionIsSucceed(UTaskAsset* SettingTaskAsset) override
	{
		UObject* NewObject = nullptr;
		if(SettingTaskAsset->GetTaskAssetObjectInfo()->GetObjectFromNameId(BackCharacterId,NewObject))
		{
			ACharacter* Character = Cast<ACharacter>(NewObject);
			if (Character == nullptr){return false;}
			if(Character->Tags.Contains(CharacterId)){return true;}
			UE_LOG(LogTemp,Warning,TEXT("UTaskDialogCondition_DialogCharacterId::TaskAssetConditionIsSucceed  没有这个标签！"))
		}
		return false;
	}
};