#pragma once
#include "NodeType.h"
#include "TaskAsset/RuntimeTaskNodeInfoBase.h"
#include "RuntimeTaskEndNodeInfo.generated.h"
enum class ETaskResultType : uint8;
//对话节点信息
UCLASS(Blueprintable)
class DIALOGSYSTEM_API URuntimeTaskEndNodeInfo : public URuntimeTaskNodeInfoBase
{
	GENERATED_BODY()
public:
	//结束标题
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="结束标题",Category="RuntimeTaskEndNodeInfo")
	FText DialogEndNodeTitle = FText::FromString(TEXT("结束"));

	//任务结果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="任务结果",Category="RuntimeTaskEndNodeInfo")
	ETaskResultType TaskResult = ETaskResultType::TaskFinish;
	
	URuntimeTaskEndNodeInfo(){}
};
