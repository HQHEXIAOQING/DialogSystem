#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "DialogGraphSchema.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphSchema: public UEdGraphSchema
{
	GENERATED_BODY()
public:
	//重载函数
	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* a, const UEdGraphPin* b) const override;
	virtual void CreateDefaultNodesForGraph(UEdGraph& Graph) const override;
	
};

USTRUCT(BlueprintType)
struct DIALOGSYSTEMEDITOR_API FNewNodeAction :public FEdGraphSchemaAction
{
	GENERATED_BODY()
	FNewNodeAction(){}
	FNewNodeAction(UClass* classTemplate,FText inNodeCategory,FText inMenuDesc,FText inTooltip,const int32 inGrouping)
		:FEdGraphSchemaAction(inNodeCategory,inMenuDesc,inTooltip,inGrouping),_classTemplate(classTemplate){}

	//重载函数
	virtual UEdGraphNode* PerformAction(UEdGraph* parentGraph,UEdGraphPin* fromPin,const FVector2D location,bool bSelectNewNode) override;

protected:
	UClass* _classTemplate = nullptr;

};







