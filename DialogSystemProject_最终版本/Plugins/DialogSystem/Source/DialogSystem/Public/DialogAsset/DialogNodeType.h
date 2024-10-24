#pragma once
#include "DialogNodeType.generated.h"

UENUM()
enum class EDialogNodeType : uint8
{
	UnKnown				UMETA(DisplayName = "无"),
	DialogStartNode		UMETA(DisplayName = "开始节点"),
	DialogNode			UMETA(DisplayName = "对话节点"),
	DialogEndNode		UMETA(DisplayName = "结束节点"),
};
