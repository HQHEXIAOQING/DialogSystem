#pragma once
#include "NodeType.generated.h"

UENUM(BlueprintType)
enum class EDialogNodeType : uint8
{
	UnKnown				UMETA(DisplayName = "无"),
	DialogStartNode		UMETA(DisplayName = "开始节点"),
	DialogNode			UMETA(DisplayName = "对话节点"),
	DialogJumpNode		UMETA(DisplayName = "跳转节点"),
	DialogEndNode		UMETA(DisplayName = "结束节点"),
};
UENUM(BlueprintType)
enum class ETaskNodeType : uint8
{
	UnKnown				UMETA(DisplayName = "无"),
	TaskStartNode		UMETA(DisplayName = "开始节点"),
	TaskNode			UMETA(DisplayName = "任务节点"),
	TaskEndNode			UMETA(DisplayName = "结束节点"),
};

//任务包中任务结果分类
UENUM(BlueprintType)
enum class ETaskResultType : uint8
{
	None				UMETA(DisplayName = "无"),
	TaskSuccessful		UMETA(DisplayName = "成功"),
	TaskFinish			UMETA(DisplayName = "失败"),
};