#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h"

FText UTaskGraphEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetEndNodeInfo()->DialogEndNodeTitle;
}

FLinearColor UTaskGraphEndNode::GetNodeTitleColor() const
{
	return FLinearColor::Blue;
}

void UTaskGraphEndNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	Super::GetNodeContextMenuActions(Menu, Context);
	//获取工具菜单添加操作
	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点的操作")));
	//获取自己本身
	UTaskGraphEndNode* Node =(UTaskGraphEndNode*)this;
	
	Section.AddMenuEntry(
	"DeleteNode",
	FText::FromString(TEXT("删除节点")),
	FText::FromString(TEXT("删除此节点")),
	FSlateIcon(),
	//创建一个函数绑定
	FUIAction(FExecuteAction::CreateLambda(
		[Node]()
		{
			//在图表中删除自己本身。
			Node->GetGraph()->RemoveNode(Node);
		})));
}

UEdGraphPin* UTaskGraphEndNode::CreateTaskPin(EEdGraphPinDirection Direction, FName Name)
{
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "TaskPin";
	return Pin;
}

UEdGraphPin* UTaskGraphEndNode::CreateDefaultTaskInputPin()
{
	return CreateTaskPin(EEdGraphPinDirection::EGPD_Input, TEXT("输入"));
}
