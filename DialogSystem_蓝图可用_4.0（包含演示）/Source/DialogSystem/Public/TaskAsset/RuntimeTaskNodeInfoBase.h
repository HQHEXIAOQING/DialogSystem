#pragma once
#include "UObject/Object.h"
#include "RuntimeTaskNodeInfoBase.generated.h"

class UTaskEffectorBase;

UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeTaskNodeInfoBase : public UObject
{
	GENERATED_BODY()
public:

	//任务节点效果集
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="任务节点效果集",Category="RuntimeTaskNodeInfoBase")
	TArray<UTaskEffectorBase*> TaskEffectorArray;
	
	//节点Id
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点Id",Category="RuntimeTaskNodeInfoBase")
	FName TaskNodeId;
	URuntimeTaskNodeInfoBase(){}
};
