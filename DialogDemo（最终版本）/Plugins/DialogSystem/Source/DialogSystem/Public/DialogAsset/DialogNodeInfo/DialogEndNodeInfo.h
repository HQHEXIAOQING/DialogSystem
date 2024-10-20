#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfoBase.h"
#include "DialogEndNodeInfo.generated.h"

UENUM(BlueprintType)
enum class EDialogNodeAction : uint8
{
	None		UMETA(DisplayName = "None"),
	StartQuest	UMETA(DisplayName = "开始任务"),
};


UCLASS(BlueprintType)
class DIALOGSYSTEM_API UDialogEndNodeInfo : public UDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//操作类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="操作类型",Category="DialogEndNodeInfo")
	EDialogNodeAction Action = EDialogNodeAction::None;
	//其他数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="其他数据",Category="DialogEndNodeInfo")
	FString ActionData = TEXT("");
	
};
