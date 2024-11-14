#pragma once
#include "SystemValue/SystemValueType.h"
#include "SystemValueType_Object.generated.h"

UCLASS(DisplayName="对象值")
class DIALOGSYSTEM_API USystemValueType_Object: public USystemValueType
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="对象值",Category="USystemValueType_Object")
	UObject* DefaultObject;
};
