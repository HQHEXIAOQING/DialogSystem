#pragma once
#include "CoreMinimal.h"
#include "DialogNodeInfoBase.generated.h"

UCLASS(Blueprintable)
class DIALOGSYSTEM_API UDialogNodeInfoBase: public UObject
{
	GENERATED_BODY()
public:
	//对话节点ID
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="对话节点ID",Category="DialogNodeInfoBase")
	FName DialogNodeId = TEXT("节点ID还没有分配");
	
};
