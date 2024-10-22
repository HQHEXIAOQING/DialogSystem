#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"

//添加菜单上下文的Action
void UDialogGraphNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	//Super::GetNodeContextMenuActions(Menu, Context);
	//获取工具菜单添加操作
	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点的操作")));
	//获取自己本身
	UDialogGraphNode* Node =(UDialogGraphNode*)this;

	//添加一个Action
	Section.AddMenuEntry(
		"AddPin",
		FText::FromString(TEXT("添加引脚")),
		FText::FromString(TEXT("添加一个输出引脚")),
		FSlateIcon(),
		//创建一个函数绑定
		FUIAction(FExecuteAction::CreateLambda(
			[Node]()
			{
				//创建一个输出引脚
				Node->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("默认输出"));
				//通知图表发生了变化，并更新图表。
				Node->GetGraph()->NotifyGraphChanged();
				Node->GetGraph()->Modify();
			})));
	Section.AddMenuEntry(
	"RemoveLastPin",
	FText::FromString(TEXT("移除引脚")),
	FText::FromString(TEXT("移除最后一个输出引脚")),
	FSlateIcon(),
	//创建一个函数绑定
	FUIAction(FExecuteAction::CreateLambda(
		[Node]()
		{
			//移除最后一个输出引脚
			//Node->RemovePinAt(Node->GetAllPins().Num()-1,EEdGraphPinDirection::EGPD_Output);
			UEdGraphPin* Pin = Node->GetPinAt(Node->Pins.Num()-1);
			if(Pin->Direction!=EEdGraphPinDirection::EGPD_Input)
			{
				Node->RemovePin(Pin);
			}
			
			//通知图表发生了变化，并更新图表。
			Node->GetGraph()->NotifyGraphChanged();
			Node->GetGraph()->Modify();
		})));
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

//创建一个引脚
UEdGraphPin* UDialogGraphNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "DialogPin";
	return Pin;
	
	//return Super::CreateDialogPin(Direction, Name);
}

UEdGraphPin* UDialogGraphNode::CreateDefaultDialogInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
}

void UDialogGraphNode::CreateDefaultDialogOutputPin()
{
	CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("输出"));
}
