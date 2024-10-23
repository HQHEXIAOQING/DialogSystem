#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "DialogAsset/DialogAsset.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogEndNode.h"
#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogNode.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogStartNode.h"

void UDialogGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	//Super::GetGraphContextActions(ContextMenuBuilder);
	//TODO::这里是添加菜单中节点的位置。
	TSharedPtr<FNewNodeAction> NewNodeAction(
		new FNewNodeAction(
			UDialogNode::StaticClass(),
			FText::FromString(TEXT("对话节点组")),
			FText::FromString(TEXT("对话节点")),
			FText::FromString(TEXT("创建一个新的对话节点")),
			0));
	TSharedPtr<FNewNodeAction> NewEndNodeAction(
	new FNewNodeAction(
		UDialogEndNode::StaticClass(),
		FText::FromString(TEXT("对话节点组")),
		FText::FromString(TEXT("结束节点")),
		FText::FromString(TEXT("创建一个结束对话的节点")),
		0));
	
	//添加操作到图表菜单中
	ContextMenuBuilder.AddAction(NewNodeAction);
	ContextMenuBuilder.AddAction(NewEndNodeAction);
}

const FPinConnectionResponse UDialogGraphSchema::CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const
{
	//判断AB是否有效，判断AB是否相等，判断输入节点，根据不同输入节点设置连接方式。
	if(!A&&!B){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT(""));}
	//TODO::现在允许自己链接自己！之后修改可以取消下方的注释。
	//if(A->GetOwningNode()==B->GetOwningNode()){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("不允许同节点相连。"));}
	if(A->Direction == B->Direction){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("相同节点不允许链接"));}
	if(A->Direction == EEdGraphPinDirection::EGPD_Input){return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_B,TEXT(""));}
	else{return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_A,TEXT(""));}
	
}

void UDialogGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	Super::CreateDefaultNodesForGraph(Graph);
	//TODO::这里是添加默认节点的位置。
	UDialogStartNode* StartNode = NewObject<UDialogStartNode>(&Graph);
	StartNode->CreateNewGuid();
	StartNode->NodePosX = 0;
	StartNode->NodePosY = 0;
	StartNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("开始"));
	//创建节点，并设置自定义的DialogNodeID
	StartNode->InitNodeInfo(StartNode);
	StartNode->GetNodeInfoBase()->DialogNodeId = "Start";

	//刷新当前图表
	Graph.AddNode(StartNode);
	Graph.Modify();
}

//执行按键的点击操作。
UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Loction,
	bool bSelectNewNode)
{
	//return FEdGraphSchemaAction::PerformAction(ParentGraph, FromPin, Loction, bSelectNewNode);
	//TODO::这里创建节点类型!
	UDialogGraphNodeBase* Result = NewObject<UDialogGraphNodeBase>(ParentGraph,_ClassTemplate);
	Result->CreateNewGuid();
	Result->NodePosX = Loction.X;
	Result->NodePosY = Loction.Y;
	Result->InitNodeInfo(Result);
	
	//调用初始化引脚事件。
	UEdGraphPin* Input = Result->CreateDefaultInputPin();
	Result->CreateDefaultOutPins();
	Result->OnPropertiesChanged();
	
	//获取输入引脚,判断是否可以直接连接。
	if(FromPin){Result->GetSchema()->TryCreateConnection(FromPin,Input);}

	//创建节点，并设置自定义的DialogNodeID
	UDialogAsset* DialogAsset = Cast<UDialogAsset>(ParentGraph->GetOuter());
	DialogAsset->DialogNodeIndex++;
	Result->GetNodeInfoBase()->DialogNodeId = FName(FString::Printf(TEXT("%d"),DialogAsset->DialogNodeIndex));
	
	//更新节点
	ParentGraph->Modify();
	ParentGraph->NotifyGraphChanged();
	ParentGraph->AddNode(Result,true,true);
	
	return Result;
}
