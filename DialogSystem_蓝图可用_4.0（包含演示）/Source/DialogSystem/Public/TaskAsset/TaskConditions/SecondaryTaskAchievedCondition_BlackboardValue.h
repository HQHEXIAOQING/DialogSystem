#pragma once
#include "SystemValue/SystemValues/SystemValueType_Bool.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/TaskAssetObjectInfo.h"
#include "TaskAsset/TaskConditionBase.h"
#include "SecondaryTaskAchievedCondition_BlackboardValue.generated.h"

class USystemValueType;
//键值对比
UCLASS(DisplayName="键值对比")
class DIALOGSYSTEM_API USecondaryTaskAchievedCondition_BlackboardValue :public USecondaryTaskAchievedConditionBase
{
	GENERATED_BODY()
public:
	USecondaryTaskAchievedCondition_BlackboardValue(){}

	//对应黑板键类型和结果
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Instanced,DisplayName="对应黑板键",Category="TaskAsset")
	TObjectPtr<USystemValueType> KeyType;
	//黑板中对应键Id
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="黑板中对应键Id",Category="TaskAsset")
	FName KeyId;
	
	
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool SecondaryTaskAchievedConditionIsSucceed(UTaskAsset* SettingTaskAsset) override
	{
		//判断布尔
		USystemValueType_Bool* BoolA = Cast<USystemValueType_Bool>(KeyType);
		bool bSuccess = false;
		if(SettingTaskAsset->GetTaskAssetObjectInfo()->GetBoolFromNameId(KeyId,bSuccess))
		{
			if(bSuccess == BoolA->bDefaultValue){return true;}
		}
		//TODO::其他的还没有书写


		
		return false;
	}
};

