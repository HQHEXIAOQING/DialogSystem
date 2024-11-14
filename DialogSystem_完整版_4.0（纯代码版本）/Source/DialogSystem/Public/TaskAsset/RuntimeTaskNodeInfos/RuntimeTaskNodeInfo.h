#pragma once
#include "TaskAsset/RuntimeTaskNodeInfoBase.h"
#include "RuntimeTaskNodeInfo.generated.h"

class USecondaryTaskBase;
class UTaskEffectorBase;
class UTaskPinUseConditionBase;

//输出引脚数据
USTRUCT(BlueprintType)
struct FTaskOutPinData
{
	GENERATED_BODY()
	//引脚名称
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="引脚名称",Category="TaskOutPinData")
	FText TaskNodeTitle = FText::FromString(TEXT("默认输出"));
	//引脚使用条件
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="引脚使用条件",Category="TaskOutPinData")
	TArray<UTaskPinUseConditionBase*> PinUseCondition;
};

//***********************************************************************
//对话节点信息
UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeTaskNodeInfo : public URuntimeTaskNodeInfoBase
{
	GENERATED_BODY()
public:
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点标题",Category="RuntimeTaskNodeInfo")
	FText TaskNodeTitle = FText::FromString(TEXT("任务节点"));
	//UI文本
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="UI文本",Category="RuntimeTaskNodeInfo")
	FText UMGText = FText::FromString(TEXT("UI文本"));
	//输出选项数据
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="输出选项数据",Category="RuntimeTaskNodeInfo")
	TArray<FTaskOutPinData> TaskOutPinArray;
	//次要任务节点集
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="分任务Id到次要任务节点集",Category="RuntimeTaskNodeInfo")
	TMap<FName,USecondaryTaskBase*> Map_IdToSecondaryTaskArray;
	
	//对话节点颜色
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点颜色",Category="TaskNode")
	FLinearColor TaskNodeColor = FLinearColor::Green;
	
	URuntimeTaskNodeInfo()
	{
		TaskOutPinArray.Add(FTaskOutPinData());
		TaskOutPinArray.Add(FTaskOutPinData());
	}
};
