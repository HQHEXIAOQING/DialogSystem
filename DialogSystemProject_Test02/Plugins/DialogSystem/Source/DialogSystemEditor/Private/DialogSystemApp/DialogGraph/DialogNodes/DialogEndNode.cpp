#include "DialogSystemApp/DialogGraph/DialogNodes/DialogEndNode.h"

#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogNode.h"

FText UDialogEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	//设置节点的标题，如果大于15个就用省略号显示后续文字。
	FString TitleName = GetEndNodeInfo()->Title.ToString();
	if(TitleName.Len()>15)
	{
		TitleName = TitleName.Left(15)+TEXT("...");
	}
	//先判断是否是跳转。
	if(GetEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::JumpNode)
	{
		//循环所有的对话节点查找目标对话节点标题
		TArray<UDialogNode*> DialogNodeArray;
		GetGraph()->GetNodesOfClass(DialogNodeArray);
		bool HasNode = false;
		for(UDialogNode* DialogNode:DialogNodeArray)
		{
			if(DialogNode->GetNodeInfo()->DialogNodeId == GetEndNodeInfo()->JumpDialogNodeId)
			{
				//找到对应ID的节点后设置标题并退出。
				TitleName = TitleName + TEXT("跳转到:") + DialogNode->GetNodeInfo()->Title.ToString();
				HasNode = true;
				break;
			}
		}
		return (HasNode)?FText::FromString(TitleName):FText::FromString(TEXT("无效，这里没有跳转！！！"));
	}
	return FText::FromString(TitleName);
}

FLinearColor UDialogEndNode::GetNodeTitleColor() const
{
	if(GetEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::JumpNode)
	{
		//循环所有的对话节点查找目标对话节点标题
		TArray<UDialogNode*> DialogNodeArray;
		GetGraph()->GetNodesOfClass(DialogNodeArray);
		bool HasNode = false;
		for(UDialogNode* DialogNode:DialogNodeArray)
		{
			if(DialogNode->GetNodeInfo()->DialogNodeId == GetEndNodeInfo()->JumpDialogNodeId)
			{
				HasNode = true;
				break;
			}
		}
		return (HasNode)?FLinearColor::Blue:FLinearColor::Red;
	}
	return FLinearColor::Blue;
}

void UDialogEndNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点操作")));
	UDialogEndNode* Node = (UDialogEndNode*)this;
	
	Section.AddMenuEntry(
	"DeleteEntry",
	FText::FromString(TEXT("删除节点")),
	FText::FromString(TEXT("删除节点")),
	FSlateIcon(),
	FUIAction(FExecuteAction::CreateLambda(
		[Node]()
		{
			//移除自己本身，数据会跟着自己节点走，所以这里已经移除了对应的节点信息了。
			Node->GetGraph()->RemoveNode(Node);
	})));
}

UEdGraphPin* UDialogEndNode::CreateDefaultInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
}

UEdGraphPin* UDialogEndNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	//创建引脚
	FName Category = (Direction == EEdGraphPinDirection::EGPD_Input) ?"Inputs" : "Outputs";
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory ="DialogPin";
	return Pin;
}