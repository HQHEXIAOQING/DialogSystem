#include "DialogGraph/DialogGraphNode/DialogGraphEndNode.h"

FText UDialogGraphEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if(_nodeInfo!=nullptr&&_nodeInfo->Action!=EDialogNodeAction::None)
	{
		FString result = UEnum::GetDisplayValueAsText(_nodeInfo->Action).ToString();
		if(_nodeInfo->ActionData.IsEmpty())
		{
			FString actionData = _nodeInfo->ActionData;
			if(actionData.Len()>15)
			{
				actionData = actionData.Left(15)+TEXT("...");
			}
			result+=TEXT(".")+actionData;
		}
		return FText::FromString(result);
	}
	return FText::FromString(TEXT("End"));
}

void UDialogGraphEndNode::GetNodeContextMenuActions(class UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const
{
	//Super::GetNodeContextMenuActions(Menu, Context);
	FToolMenuSection& section = Menu->AddSection("SectionName",FText::FromString(TEXT("结束节点")));

	//TODO::这个位置是注册按钮，以及书写按钮事件的地方。
	UDialogGraphEndNode* node = (UDialogGraphEndNode*)this;
	section.AddMenuEntry(
	"DeleteEntry",
	FText::FromString(TEXT("删除节点")),
	FText::FromString(TEXT("删除这个节点")),
	FSlateIcon(),
	FUIAction(FExecuteAction::CreateLambda(
	[node]()
	{
		node->GetGraph()->RemoveNode(node);
		})));
	
}

UEdGraphPin* UDialogGraphEndNode::CreateDialogPin(EEdGraphPinDirection direction, FName name)
{

	FName catrgory = TEXT("Inputs");
	FName subcategory = TEXT("EndPin");

	UEdGraphPin* pin =CreatePin(direction,catrgory,name);
	pin->PinType.PinSubCategory = subcategory;
	return pin;

	//return Super::CreateDialogPin(direction, name);
}

UEdGraphPin* UDialogGraphEndNode::CreateDefaultInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input,FName(TEXT("Finish")));
	//return Super::CreateDefaultInputPin();
}
