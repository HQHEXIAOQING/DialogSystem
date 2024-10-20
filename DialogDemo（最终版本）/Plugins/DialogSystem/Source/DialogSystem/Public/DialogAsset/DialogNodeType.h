#pragma once
#include "CoreMinimal.h"
#include "DialogNodeType.generated.h"

//节点类型
UENUM()
enum class EDialogNodeType : uint8
{
	Unknown		UMETA(DisplayName = "无"),
	StartNode	UMETA(DisplayName = "开始节点"),
	DialogNode	UMETA(DisplayName = "对话节点"),
	EndNode		UMETA(DisplayName = "对话节点"),
};