#pragma once
#include "DialogAsset/RuntimeDialogNodeInfoBase.h"
#include "RuntimeDialogEndNodeInfo.generated.h"

UENUM(Blueprintable)
enum class EDialogEndNodeType : uint8
{
	DialogNodeEnd		UMETA(DisplayName = "对话结束"),
	DialogNodeJump		UMETA(DisplayName = "对话节点跳转"),
};


//对话节点信息
UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeDialogEndNodeInfo : public URuntimeDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//结束标题
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="结束标题",Category="RuntimeDialogEndNodeInfo")
	FText DialogEndNodeTitle = FText::FromString(TEXT("结束"));
	//结束方式
	UPROPERTY(EditAnywhere,BlueprintReadOnly,DisplayName="结束方式",Category="RuntimeDialogEndNodeInfo")
	EDialogEndNodeType DialogEndNodeType = EDialogEndNodeType::DialogNodeEnd;
	//对话跳转的节点Id
	UPROPERTY(
		EditAnywhere,
		BlueprintReadOnly,
		meta=(EditCondition="DialogEndNodeType==EDialogEndNodeType::DialogNodeJump",
			EditConditionHides = "DialogEndNodeType==EDialogEndNodeType::DialogNodeJump"),
			DisplayName="对话跳转的节点Id",
			Category="RuntimeDialogEndNodeInfo")
	FName DialogNodeJump = "None";
	
	URuntimeDialogEndNodeInfo(){}
};
