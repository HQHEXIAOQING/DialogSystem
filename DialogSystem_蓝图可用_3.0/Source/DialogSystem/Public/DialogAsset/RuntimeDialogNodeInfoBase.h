#pragma once
#include "UObject/Object.h"
#include "RuntimeDialogNodeInfoBase.generated.h"

UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeDialogNodeInfoBase : public UObject
{
	GENERATED_BODY()
public:
	
	//节点Id
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点Id",Category="RuntimeDialogPin")
	FName DialogNodeId;

	
	URuntimeDialogNodeInfoBase(){}
};
