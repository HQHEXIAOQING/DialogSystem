#include "DialogSystemApp/DialogGraph/DialogNodes/DialogStartNode.h"

UEdGraphPin* UDialogStartNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	//创建引脚
	FName Category = (Direction == EEdGraphPinDirection::EGPD_Input) ?"Inputs" : "Outputs";
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory ="DialogPin";
	return Pin;
}