#include "DialogGraph/DialogGraphNode/DialogStartGraphNode.h"

UEdGraphPin* UDialogStartGraphNode::CreateDialogPin(EEdGraphPinDirection direction, FName name)
{
	FName category = TEXT("Outputs");
	FName subcategory = TEXT("StartPin");

	UEdGraphPin* pin = CreatePin(direction,category,name);
	pin->PinType.PinSubCategory = subcategory;

	return pin;
}
