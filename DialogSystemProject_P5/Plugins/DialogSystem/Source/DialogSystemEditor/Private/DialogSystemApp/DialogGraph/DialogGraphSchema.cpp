#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"

//注册右键菜单中的Action
void UDialogGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	//Super::GetGraphContextActions(ContextMenuBuilder);
	//TODO::这里是注册图表右键下菜单中的Action。

	//创建一个对话节点
	TSharedPtr<FNewNodeAction> NewNodeAction(
		new FNewNodeAction(
			UDialogGraphNode::StaticClass(),
			FText::FromString(TEXT("对话节点组")),
			FText::FromString(TEXT("创建对话节点")),
			FText::FromString(TEXT("创建一个新的对话节点")),
			0));
	//在菜单上下文中添加对这个节点的操作
	ContextMenuBuilder.AddAction(NewNodeAction);
}

const FPinConnectionResponse UDialogGraphSchema::CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const
{
	//TODO::这里是决定图表中节点的连接方式
	//判断AB是否都有效，无效就不能连接。
	if (!A&&!B){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT(""));}
	//判断AB的类型是一致，如果一致就不能连接。
	if(A->Direction == B->Direction){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("两个相同的引脚不能进行链接"));}
	if(A->GetOwningNode() == B->GetOwningNode()){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("不能连接到节点本身的引脚上"));}
	
	//这里默认断开AB两个引脚上的所有链接，然后重新指定AB进行链接。
	return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_AB,TEXT(""));
}

void UDialogGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	//TODO::这里是书写图表默认节点的位置。
	//Super::CreateDefaultNodesForGraph(Graph);
}

UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location,bool bSelectNewNode)
{
	//创建一个节点。
	UDialogGraphNodeBase* NewNode = NewObject<UDialogGraphNodeBase>(ParentGraph,_ClassTemplate);
	NewNode->CreateNewGuid();
	NewNode->NodePosX = Location.X;
	NewNode->NodePosY = Location.Y;
	//TODO::这里是对节点进行初始化的位置。
	NewNode->InitNodeInfo();
	
	//创建默认引脚
	UEdGraphPin* Input =NewNode->CreateDefaultDialogInputPin();
	NewNode->CreateDefaultDialogOutputPin();
	//判断输出引脚是否有效，有效的话，尝试将输入引脚跟节点创建的输入引脚进行链接。
	if(FromPin){NewNode->GetSchema()->TryCreateConnection(Input,FromPin);}

	//通知调用此节点Action的图表，进行刷新和添加当前创建的节点。
	ParentGraph->Modify();
	ParentGraph->AddNode(NewNode);
	
	return NewNode;
}


















