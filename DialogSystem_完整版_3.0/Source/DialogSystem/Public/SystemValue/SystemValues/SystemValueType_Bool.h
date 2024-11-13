#pragma once
#include "SystemValue/SystemValueType.h"
#include "SystemValueType_Bool.generated.h"

UCLASS(DisplayName="布尔值")
class DIALOGSYSTEM_API USystemValueType_Bool: public USystemValueType
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="布尔值",Category="SystemValueType_Bool")
	bool bDefaultValue;
};
