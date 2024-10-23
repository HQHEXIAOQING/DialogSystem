#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoBase.h"
#include "DialogEndNodeInfo.generated.h"


//结束节点类型
UENUM()
enum class EDialogEndNodeType : uint8
{
	EndNode		UMETA(DisplayName = "对话结束"),
	JumpNode	UMETA(DisplayName = "跳转节点"),
};

//结束节点信息
UCLASS()
class DIALOGSYSTEM_API UDialogEndNodeInfo: public UDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点标题",Category="DialogEndNodeInfo")
	FText Title = FText::FromString(TEXT("结束"));
	//结束方式
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="结束方式",Category="DialogEndNodeInfo")
	EDialogEndNodeType DialogEndNodeType = EDialogEndNodeType::EndNode;
	//跳转位置
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditCondition = "DialogEndNodeType == EDialogEndNodeType::JumpNode",EditConditionHides = "DialogEndNodeType == EDialogEndNodeType::JumpNode"),DisplayName="跳转位置",Category="DialogEndNodeInfo")
	FName JumpDialogNodeId;
	
};
