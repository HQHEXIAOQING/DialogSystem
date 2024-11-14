#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"

#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"

FText UDialogGraphEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if(GetEndNodeInfo()&&GetEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::DialogNodeJump)
	{
		FString NodeTitle = GetEndNodeInfo()->DialogEndNodeTitle.ToString();
		//循环所有的对话节点查找目标对话节点标题
		TArray<UDialogGraphNode*> DialogNodeArray;
		GetGraph()->GetNodesOfClass(DialogNodeArray);
		bool HasNode = false;
		for(UDialogGraphNode* DialogNode:DialogNodeArray)
		{
			if(DialogNode->GetNodeInfo()->DialogNodeId == GetEndNodeInfo()->DialogNodeJump)
			{
				//找到对应ID的节点后设置标题并退出。
				NodeTitle = NodeTitle + TEXT("跳转到:") + DialogNode->GetNodeInfo()->DialogNodeTitle.ToString();
				HasNode = true;
				break;
			}
		}
		return (HasNode)?FText::FromString(NodeTitle):FText::FromString(TEXT("无效，这里没有跳转！！！"));
	}
	return GetEndNodeInfo()->DialogEndNodeTitle;
}

FLinearColor UDialogGraphEndNode::GetNodeTitleColor() const
{
	if(GetEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::DialogNodeJump)
	{
		//循环所有的对话节点查找目标对话节点标题
		TArray<UDialogGraphNode*> DialogNodeArray;
		GetGraph()->GetNodesOfClass(DialogNodeArray);
		bool HasNode = false;
		for(UDialogGraphNode* DialogNode:DialogNodeArray)
		{
			if(DialogNode->GetNodeInfo()->DialogNodeId == GetEndNodeInfo()->DialogNodeJump)
			{
				HasNode = true;
				break;
			}
		}
		return (HasNode)?FLinearColor::Yellow:FLinearColor::Red;
	}
	return FLinearColor::Blue;
}

void UDialogGraphEndNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	Super::GetNodeContextMenuActions(Menu, Context);
	//获取工具菜单添加操作
	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点的操作")));
	//获取自己本身
	UDialogGraphEndNode* Node =(UDialogGraphEndNode*)this;
	
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

UEdGraphPin* UDialogGraphEndNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "DialogPin";
	return Pin;
}

UEdGraphPin* UDialogGraphEndNode::CreateDefaultDialogInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input, TEXT("输入"));
}
