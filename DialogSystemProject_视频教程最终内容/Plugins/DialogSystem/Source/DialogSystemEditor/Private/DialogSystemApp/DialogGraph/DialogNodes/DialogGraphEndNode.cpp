#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"

FText UDialogGraphEndNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	//判断长度，超过十五个字符就使用省略号。
	FString NodeTitle =TEXT("结束");
	if (GetRuntimeEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::DialogNodeJump)
	{
		NodeTitle = TEXT("跳转:");
		//TODO:还没有书写跳转的内容！

		TArray<UDialogGraphNode*> DialogGraphNodes;
		GetGraph()->GetNodesOfClass(DialogGraphNodes);
		
		for(UDialogGraphNode* DialogGraphNode:DialogGraphNodes)
		{
			if(DialogGraphNode->GetRuntimeNodeInfo()->DialogNodeId == GetRuntimeEndNodeInfo()->DialogNodeJump)
			{
				NodeTitle+= DialogGraphNode->GetRuntimeNodeInfo()->DialogNodeTitle.ToString();
				break;
			}
		}
	}
	return FText::FromString(NodeTitle);
}

FLinearColor UDialogGraphEndNode::GetNodeTitleColor() const
{
	if(GetRuntimeEndNodeInfo()->DialogEndNodeType == EDialogEndNodeType::DialogNodeJump)
	{
		TArray<UDialogGraphNode*> DialogGraphNodes;
		GetGraph()->GetNodesOfClass(DialogGraphNodes);
		
		for(UDialogGraphNode* DialogGraphNode:DialogGraphNodes)
		{
			if(DialogGraphNode->GetRuntimeNodeInfo()->DialogNodeId == GetRuntimeEndNodeInfo()->DialogNodeJump)
			{
				return FLinearColor::Yellow;
			}
		}
		return FLinearColor::Red;	
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
