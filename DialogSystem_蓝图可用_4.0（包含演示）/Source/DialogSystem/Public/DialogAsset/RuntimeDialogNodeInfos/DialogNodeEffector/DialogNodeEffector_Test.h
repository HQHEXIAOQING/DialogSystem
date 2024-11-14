#pragma once
#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/DialogNodeEffectorBase.h"
#include "SystemValue/SystemValueType.h"
#include "SystemValue/SystemValues/SystemValueType_Bool.h"
#include "TaskAsset/HQTaskSystem.h"
#include "TaskAsset/TaskAssetObjectInfo.h"
#include "DialogNodeEffector_Test.generated.h"

class UTaskAsset;
//对话节点效果器的使用
UCLASS(DisplayName="效果器：屏幕打印")
class DIALOGSYSTEM_API UDialogNodeEffector_Test: public UDialogNodeEffectorBase
{
	GENERATED_BODY()
public:
	//打印信息
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="打印信息",Category="DialogAssetCondition")
	FString PrintText = TEXT("测试文本");
	
	//效果触发
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) override
	{
		BlueprintDialogNodeEffectorPlay(SettingDialogAsset,DialogActor);
		GEngine->AddOnScreenDebugMessage(-1,5.0,FColor::Green,PrintText);
	}
};

//触发任务
UCLASS(DisplayName="触发任务")
class DIALOGSYSTEM_API UDialogNodeEffector_Task: public UDialogNodeEffectorBase
{
	GENERATED_BODY()
public:
	//任务内容
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="任务内容",Category="DialogAssetCondition")
	UTaskAsset* TaskAsset = nullptr;
	
	//效果触发
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) override
	{
		if(!TaskAsset){return;}
		DialogActor->GetWorld()->GetGameInstance()->GetSubsystem<UHQTaskSystem>()->AddTask(TaskAsset,SettingDialogAsset->Map_NameIDToParticipant["OwningActor"]);
	}
};

//修改任务下变量值
UCLASS(DisplayName="修改任务下变量值")
class DIALOGSYSTEM_API UDialogNodeEffector_ChangeTaskValue: public UDialogNodeEffectorBase
{
	GENERATED_BODY()
public:
	//任务Id
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="任务Id",Category="DialogAssetCondition")
	FName TaskId;
	//修改变量Id对应变量修改内容
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="修改变量Id对应变量修改内容",Category="DialogAssetCondition")
	TMap<FName,USystemValueType*> Map_ValueIdToValue;
	
	//效果触发
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) override
	{
		UTaskAsset* TaskAsset = nullptr;
		UTaskAssetObjectInfoBase* TaskAssetObjectInfo = nullptr;
		UHQTaskSystem* HQTaskSystem = DialogActor->GetWorld()->GetGameInstance()->GetSubsystem<UHQTaskSystem>();
		if(HQTaskSystem->GetTaskAssetAndInfoFromId(TaskId,TaskAsset,TaskAssetObjectInfo))
		{
			for(auto Value:Map_ValueIdToValue)
			{
				if(!TaskAssetObjectInfo->Map_ValueIdToValue.Find(Value.Key)||Value.Value->GetClass() != Map_ValueIdToValue[Value.Key]->GetClass()){continue;}

				//TODO::这里需要扩展其他类型
				//修改布尔对象
				USystemValueType_Bool* ValueType =Cast<USystemValueType_Bool>(Value.Value);
				TaskAssetObjectInfo->SetBoolFromNameId(Value.Key,ValueType->bDefaultValue);
			}
			//设置好对象数据后进行更新
			HQTaskSystem->UpdateTask(TaskId);
		}
	}
};

