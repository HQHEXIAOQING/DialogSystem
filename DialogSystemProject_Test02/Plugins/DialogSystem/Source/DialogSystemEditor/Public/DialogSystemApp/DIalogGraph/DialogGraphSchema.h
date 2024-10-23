#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "DialogGraphSchema.generated.h"

//图表的模式
UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphSchema :public UEdGraphSchema
{
	GENERATED_BODY()
public:
	//重载函数
	///获取所有可以操作的Action
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
	//判断两个引脚之间是否可以相连
	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const override;
	//创建此图表默认的节点
	virtual void CreateDefaultNodesForGraph(UEdGraph& Graph) const override;
	
};

//自定义操作Action
USTRUCT(BlueprintType)
struct DIALOGSYSTEMEDITOR_API FNewNodeAction: public FEdGraphSchemaAction
{
	GENERATED_BODY()
	FNewNodeAction(){}
	//调用父类构造函数。
	FNewNodeAction(UClass* InClass,FText InNodeCategory,FText InMenuDesc,FText InTooltip,const int32 InGrouping):
	FEdGraphSchemaAction(InNodeCategory,InMenuDesc,InTooltip,InGrouping),
	_ClassTemplate(InClass)
	{}
	//重载函数
	//执行Action
	virtual UEdGraphNode* PerformAction(UEdGraph* ParentGraph,UEdGraphPin* FromPin,const FVector2D Loction,bool bSelectNewNode)override;
protected:
	UClass* _ClassTemplate = nullptr;
	
};
