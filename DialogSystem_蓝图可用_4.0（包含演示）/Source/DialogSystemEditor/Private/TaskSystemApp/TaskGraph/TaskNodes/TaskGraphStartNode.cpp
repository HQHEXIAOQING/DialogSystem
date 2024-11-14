#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h"

UEdGraphPin* UTaskGraphStartNode::CreateTaskPin(EEdGraphPinDirection Direction, FName Name)
{
	//创建开始的输出引脚。
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "TaskPin";
	return Pin;
}

void UTaskGraphStartNode::CreateDefaultTaskOutputPin()
{
	CreateTaskPin(EEdGraphPinDirection::EGPD_Output,TEXT("开始"));
}
