#include "TaskSystemApp/TaskGraph/TaskGraphSchema.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h"

//注册右键菜单中的Action
void UTaskGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	//Super::GetGraphContextActions(ContextMenuBuilder);
	//TODO::这里是注册图表右键下菜单中的Action。

	//创建一个对话节点
	TSharedPtr<FNewTaskNodeAction> NewNodeAction(
	new FNewTaskNodeAction(
		UTaskGraphNode::StaticClass(),
		FText::FromString(TEXT("任务节点组")),
		FText::FromString(TEXT("创建任务节点")),
		FText::FromString(TEXT("创建一个新的任务节点")),
		0));
	TSharedPtr<FNewTaskNodeAction> NewEndNodeAction(
	new FNewTaskNodeAction(
		UTaskGraphEndNode::StaticClass(),
		FText::FromString(TEXT("任务节点组")),
		FText::FromString(TEXT("创建任务结束节点")),
		FText::FromString(TEXT("创建一个新的任务结束节点")),
		0));
	//在菜单上下文中添加对这个节点的操作
	ContextMenuBuilder.AddAction(NewNodeAction);
	ContextMenuBuilder.AddAction(NewEndNodeAction);
	
}

const FPinConnectionResponse UTaskGraphSchema::CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const
{
	//TODO::这里是决定图表中节点的连接方式
	//判断AB是否有效，判断AB是否相等，判断输入节点，根据不同输入节点设置连接方式。
	if(!A&&!B){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT(""));}
	//TODO::现在允许自己链接自己！之后修改可以取消下方的注释。
	//if(A->GetOwningNode()==B->GetOwningNode()){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("不允许同节点相连。"));}
	if(A->Direction == B->Direction){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("相同节点不允许链接"));}
	if(A->Direction == EEdGraphPinDirection::EGPD_Input){return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_B,TEXT(""));}
	else{return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_A,TEXT(""));}
}

void UTaskGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	//TODO::这里是书写图表默认节点的位置。
	//Super::CreateDefaultNodesForGraph(Graph);
	//创建了开始节点，设置基本信息
	UTaskGraphStartNode* StartNode = NewObject<UTaskGraphStartNode>(&Graph);
	StartNode->CreateNewGuid();
	StartNode->NodePosX = 0;
	StartNode->NodePosY = 0;
	StartNode->CreateDefaultTaskOutputPin();
	//初始化节点数据
	StartNode->InitNodeInfo(Cast<UTaskAsset>(Graph.GetOuter()));
	
	//图表进行更新。
	Graph.AddNode(StartNode);
	Graph.Modify();
}

UEdGraphNode* FNewTaskNodeAction::PerformAction(UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location,bool bSelectNewNode)
{
	
	//if(_ClassTemplate == UDialogGraphJumpNode::StaticClass()){return nullptr;}
	//创建一个节点。
	UTaskGraphNodeBase* NewNode = NewObject<UTaskGraphNodeBase>(ParentGraph,_ClassTemplate);
	NewNode->CreateNewGuid();
	NewNode->NodePosX = Location.X;
	NewNode->NodePosY = Location.Y;
	//TODO::这里是对节点进行初始化的位置。
	//初始化节点数据
	NewNode->InitNodeInfo(Cast<UTaskAsset>(ParentGraph->GetOuter()));
	
	//创建默认引脚
	UEdGraphPin* Input =NewNode->CreateDefaultTaskInputPin();
	//NewNode->CreateDefaultDialogOutputPin();
	NewNode->OnPropertiesChanged();
	//判断输出引脚是否有效，有效的话，尝试将输入引脚跟节点创建的输入引脚进行链接。
	if(FromPin){NewNode->GetSchema()->TryCreateConnection(Input,FromPin);}

	//通知调用此节点Action的图表，进行刷新和添加当前创建的节点。
	ParentGraph->Modify();
	ParentGraph->AddNode(NewNode);
	
	return nullptr;
}




