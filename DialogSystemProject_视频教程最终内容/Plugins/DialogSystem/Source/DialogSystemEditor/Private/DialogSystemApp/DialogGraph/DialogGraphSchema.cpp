#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h"

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
	//创建一个对话结束节点
	TSharedPtr<FNewNodeAction> NewEndNodeAction(
		new FNewNodeAction(
			UDialogGraphEndNode::StaticClass(),
			FText::FromString(TEXT("对话节点组")),
			FText::FromString(TEXT("创建结束节点")),
			FText::FromString(TEXT("创建一个结束对话的节点")),
			0));
	//在菜单上下文中添加对这个节点的操作
	ContextMenuBuilder.AddAction(NewNodeAction);
	ContextMenuBuilder.AddAction(NewEndNodeAction);
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
	//创建了开始节点，设置基本信息
	UDialogGraphStartNode* StartNode = NewObject<UDialogGraphStartNode>(&Graph);

	//初始化开始节点
	StartNode->CreateNewGuid();
	StartNode->NodePosX = 0;
	StartNode->NodePosY = 0;
	StartNode->InitNodeInfo(Graph.GetOuter(),"StartNode");
	
	StartNode->CreateDefaultDialogOutputPin();
	
	//图表进行更新。
	Graph.AddNode(StartNode);
	Graph.Modify();
}

UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location,bool bSelectNewNode)
{
	//创建一个节点。
	UDialogGraphNodeBase* NewNode = NewObject<UDialogGraphNodeBase>(ParentGraph,_ClassTemplate);
	UDialogAsset* DialogAsset = Cast<UDialogAsset>(ParentGraph->GetOuter());
	//初始化节点基本设置。
	NewNode->CreateNewGuid();
	NewNode->NodePosX = Location.X;
	NewNode->NodePosY = Location.Y;
	//TODO::这里是对节点进行初始化的位置。
	NewNode->InitNodeInfo(ParentGraph->GetOuter(),FName(FString::Printf(TEXT("NodeId.%d"),DialogAsset->DialogNodeId)));
	DialogAsset->DialogNodeId++;
	
	
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


















