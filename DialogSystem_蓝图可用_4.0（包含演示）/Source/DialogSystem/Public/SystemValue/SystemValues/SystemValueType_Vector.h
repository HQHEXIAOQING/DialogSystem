#pragma once
#include "SystemValue/SystemValueType.h"
#include "SystemValueType_Vector.generated.h"

UCLASS(DisplayName="向量")
class DIALOGSYSTEM_API USystemValueType_Vector: public USystemValueType
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="向量值",Category="SystemValueType_Vector")
	FVector DefaultVector;
};
