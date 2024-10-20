#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfoBase.h"
#include "DialogNodeInfo.generated.h"

UCLASS(BlueprintType)
class DIALOGSYSTEM_API UDialogNodeInfo:public UDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//标题
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="标题",Category="DialogNodeInfo")
	FText Title;
	//对话内容
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话内容",Category="DialogNodeInfo")
	FText DialogText;
	//可用选项
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="可用选项",Category="DialogNodeInfo")
	TArray<FText> DialogResponses;

	//节点颜色设置
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="节点颜色",Category="DialogNodeInfo")
	FLinearColor DialogNodeColor = FLinearColor::Green;
	
};
