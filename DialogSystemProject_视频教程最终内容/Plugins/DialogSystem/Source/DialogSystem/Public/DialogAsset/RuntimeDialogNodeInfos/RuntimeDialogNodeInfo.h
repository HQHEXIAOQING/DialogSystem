#pragma once
#include "DialogAsset/RuntimeDialogNodeInfoBase.h"
#include "RuntimeDialogNodeInfo.generated.h"

//输出引脚数据
USTRUCT(BlueprintType)
struct FDialogOutPinData
{
	GENERATED_BODY()
	//引脚名称
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="引脚名称",Category="DialogOutPinData")
	FText DialogNodeTitle = FText::FromString(TEXT("默认输出"));
};

//对话节点信息
UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeDialogNodeInfo : public URuntimeDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="节点标题",Category="RuntimeDialogNodeInfo")
	FText DialogNodeTitle = FText::FromString(TEXT("对话节点"));
	//对话内容
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="对话内容",Category="RuntimeDialogNodeInfo")
	FText DialogText;
	//输出选项数据
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="输出选项数据",Category="RuntimeDialogNodeInfo")
	TArray<FDialogOutPinData> DialogOutPinArray;
	
	URuntimeDialogNodeInfo()
	{
		DialogOutPinArray.Add(FDialogOutPinData());
		DialogOutPinArray.Add(FDialogOutPinData());
	}
};
