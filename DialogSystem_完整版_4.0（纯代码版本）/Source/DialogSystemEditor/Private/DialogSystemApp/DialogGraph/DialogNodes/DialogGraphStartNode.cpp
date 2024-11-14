#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h"

UEdGraphPin* UDialogGraphStartNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	//创建开始的输出引脚。
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "DialogPin";
	return Pin;
}

void UDialogGraphStartNode::CreateDefaultDialogOutputPin()
{
	CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("开始"));
}
