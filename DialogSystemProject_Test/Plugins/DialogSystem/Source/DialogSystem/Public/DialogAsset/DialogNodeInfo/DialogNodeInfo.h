#pragma once
#include "CoreMinimal.h"
#include "DialogNodeInfoBase.h"
#include "DialogNodeInfo.generated.h"

UCLASS()
class DIALOGSYSTEM_API UDialogNodeInfo: public UDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点标题",Category="DialogNodeInfo")
	FText Title = FText::FromString(TEXT("默认标题"));
	//对话内容
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="对话内容",Category="DialogNodeInfo")
	FText DialogContent = FText::FromString(TEXT("对话内容"));

	
};
