#pragma once
#include "UObject/Object.h"
#include "SecondaryTaskBase.generated.h"

enum class ETaskResultType : uint8;
class USecondaryTaskAchievedConditionBase;
class UTaskEffectorBase;
class USecondaryTaskConditionBase;
class UTaskAsset;

//达成条件组
USTRUCT(BlueprintType)
struct FSecondaryTaskAchievedData
{
	GENERATED_BODY()
	//结果达成条件
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="结果达成条件组",Category="TaskOutPinData")
	TArray<USecondaryTaskAchievedConditionBase*> SecondaryTaskAchievedConditionArray;
	//任务结果效果集
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="任务结果效果集",Category="SecondaryTaskBase")
	TArray<UTaskEffectorBase*> SecondaryTaskResultEffector;
};

//分段任务的使用基类
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API USecondaryTaskBase: public UObject
{
	GENERATED_BODY()
public:
	//***************************************************
	//变量

	//UI文本
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="UI文本",Category="SecondaryTaskBase")
	FText UMGText = FText::FromString(TEXT("UI文本"));
	//是否为隐藏任务
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="是否为隐藏任务",Category="SecondaryTaskBase")
	bool IsHidden = false;
	//分段任务解锁条件组
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="分段任务解锁条件组",Category="SecondaryTaskBase")
	TArray<USecondaryTaskConditionBase*> SecondaryTaskConditionArray;
	//分段任务效果集
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="分段任务效果集",Category="SecondaryTaskBase")
	TArray<UTaskEffectorBase*> SecondaryTaskEffector;
	//结果类型对应达成条件
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="结果类型对应达成条件",Category="SecondaryTaskBase")
	TMap<ETaskResultType,FSecondaryTaskAchievedData> Map_SecondaryTaskTypeToCondition;

	
	//最终结果
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="最终结果",Category="SecondaryTaskBaseInfo")
	ETaskResultType SecondaryTaskResult= ETaskResultType::None;
	//是否触发
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="是否触发",Category="SecondaryTaskBaseInfo")
	bool IsTrigger = false;
};



//任务效果器的使用基类
UCLASS(Blueprintable,DisplayName="正常任务分配")
class DIALOGSYSTEM_API UTaskSecondaryTask: public USecondaryTaskBase
{
	GENERATED_BODY()
};


