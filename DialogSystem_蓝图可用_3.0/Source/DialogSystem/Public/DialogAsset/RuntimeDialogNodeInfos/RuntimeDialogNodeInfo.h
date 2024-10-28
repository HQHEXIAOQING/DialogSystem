#pragma once
#include "DialogAsset/RuntimeDialogNodeInfoBase.h"
#include "RuntimeDialogNodeInfo.generated.h"

class UDialogNodeEffectorBase;
class UDialogNodeConditionBase;
//输出引脚数据
USTRUCT(BlueprintType)
struct FDialogOutPinData
{
	GENERATED_BODY()
	//引脚名称
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="引脚名称",Category="DialogOutPinData")
	FText DialogNodeTitle = FText::FromString(TEXT("默认输出"));
	//执行条件组（全部符合才能使用此引脚）
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="执行条件组",Category="DialogOutPinData")
	TArray<UDialogNodeConditionBase*> DialogNodeCondition;
};

//***********************************************************************
//对话节点信息
UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeDialogNodeInfo : public URuntimeDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//使用此节点的对象
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="对话对象ID",Category="RuntimeDialogNodeInfo")
	FName DialogActorId = TEXT("");
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="节点标题",Category="RuntimeDialogNodeInfo")
	FText DialogNodeTitle = FText::FromString(TEXT("对话节点"));
	//对话内容
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="对话内容",Category="RuntimeDialogNodeInfo")
	FText DialogText;
	//关联效果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话关联效果组",Category="RuntimeDialogNodeInfo")
	TArray<UDialogNodeEffectorBase*> DialogNodeEffectorArray;
	//输出选项数据
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="输出选项数据",Category="RuntimeDialogNodeInfo")
	TArray<FDialogOutPinData> DialogOutPinArray;


	//对话节点颜色
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="对话节点颜色",Category="DialogNode")
	FLinearColor DialogNodeColor = FLinearColor::Green;
	URuntimeDialogNodeInfo()
	{
		DialogOutPinArray.Add(FDialogOutPinData());
		DialogOutPinArray.Add(FDialogOutPinData());
	}
};
