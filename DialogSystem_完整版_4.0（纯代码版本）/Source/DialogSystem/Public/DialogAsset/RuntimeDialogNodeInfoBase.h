#pragma once
#include "UObject/Object.h"
#include "RuntimeDialogNodeInfoBase.generated.h"

class UDialogNodeEffectorBase;

UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeDialogNodeInfoBase : public UObject
{
	GENERATED_BODY()
public:
	
	//节点Id
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点Id",Category="RuntimeDialogNodeInfoBase")
	FName DialogNodeId;
	//关联效果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话关联效果组",Category="RuntimeDialogNodeInfoBase")
	TArray<UDialogNodeEffectorBase*> DialogNodeEffectorArray;

	
	URuntimeDialogNodeInfoBase(){}
};
