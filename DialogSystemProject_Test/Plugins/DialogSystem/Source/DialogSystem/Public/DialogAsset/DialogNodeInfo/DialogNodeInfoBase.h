#pragma once
#include "CoreMinimal.h"
#include "DialogNodeInfoBase.generated.h"

USTRUCT(BlueprintType)
struct FOutPinData
{
	GENERATED_BODY()
	//输出接口名称
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="输出接口名称",Category="DialogNodeInfo")
	FText OutPinName = FText::FromString(TEXT("默认输出"));
	FOutPinData()
	{}
};

UCLASS()
class DIALOGSYSTEM_API UDialogNodeInfoBase: public UObject
{
	GENERATED_BODY()
public:
	//节点颜色
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点颜色",Category="DialogNodeInfoBase")
	FLinearColor NodeColor = FLinearColor::Green;
	//输出引脚数据
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="输出引脚数据",Category="DialogNodeInfo")
	TArray<FOutPinData> OutPinDataArray;
};
