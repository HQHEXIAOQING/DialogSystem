#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "TaskGraphSchema.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UTaskGraphSchema:public UEdGraphSchema
{
	GENERATED_BODY()
public:
	//****************************************************
	//重载函数
	//获取右键菜单中的Action
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
	//引脚链接方式(定义连接线的方式)
	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const override;
	//创建此图表的默认节点
	virtual void CreateDefaultNodesForGraph(UEdGraph& Graph) const override;
};

USTRUCT(BlueprintType)
struct DIALOGSYSTEMEDITOR_API FNewTaskNodeAction :public FEdGraphSchemaAction
{
	GENERATED_BODY()
	FNewTaskNodeAction(){}
	FNewTaskNodeAction(UClass* ClassTemplate,FText InNodeCategory, FText InMenuDesc, FText InToolTip, const int32 InGrouping):
	FEdGraphSchemaAction(InNodeCategory, InMenuDesc, InToolTip, InGrouping),
	_ClassTemplate(ClassTemplate)
	{}

	//重载函数
	//执行Action
	virtual UEdGraphNode* PerformAction(UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode) override;
	
protected:
	UClass* _ClassTemplate = nullptr;
};