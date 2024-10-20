#include "DialogGraph/DialogGraphSchema.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfo.h"
#include "DialogGraph/DialogGraphNode/DialogGraphEndNode.h"
#include "DialogGraph/DialogGraphNode/DialogGraphNode.h"
#include "DialogGraph/DialogGraphNode/DialogStartGraphNode.h"

void UDialogGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const
{
	//TODO::添加节点操作的地方。
	TSharedPtr<FNewNodeAction> newNodeAction(
		new FNewNodeAction(
			UDialogGraphNode::StaticClass(),
			FText::FromString(TEXT("对话节点组")),
			FText::FromString(TEXT("一个新的对话节点")),
			FText::FromString(TEXT("创建一个新的对话节点")),
			0
		)
	);
	TSharedPtr<FNewNodeAction> newEndNodeAction(
		new FNewNodeAction(
			UDialogGraphEndNode::StaticClass(),
			FText::FromString(TEXT("对话节点组")),
			FText::FromString(TEXT("一个新的结束节点")),
			FText::FromString(TEXT("创建一个新的结束节点")),
			0
		)
	);
	
	ContextMenuBuilder.AddAction(newNodeAction);
	ContextMenuBuilder.AddAction(newEndNodeAction);
	//Super::GetGraphContextActions(ContextMenuBuilder);
}

//创建连线
const FPinConnectionResponse UDialogGraphSchema::CanCreateConnection(const UEdGraphPin* a, const UEdGraphPin* b) const
{
	// 判断链接是否一致
	if(!a&&!b){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT(""));}
	//不允许两个相等的Pin进行链接，例如，输入连输入，输出连输出，这是错误的，我们需要提示一个消息。
	if(a->Direction ==b->Direction){return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW,TEXT("不允许相等的Pin链接！"));}

	//TODO:这里决定链接方式，可以进枚举中选择链接的方式，这里默认，一个输入接口只能连入一个对象。
	return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_AB,TEXT(""));
	//return Super::CanCreateConnection(a, b);

}

//生成默认的资产节点
void UDialogGraphSchema::CreateDefaultNodesForGraph(UEdGraph& Graph) const
{
	Super::CreateDefaultNodesForGraph(Graph);
	UDialogStartGraphNode* startNode = NewObject<UDialogStartGraphNode>(&Graph);
	startNode->CreateNewGuid();
	startNode->NodePosX = 0;
	startNode->NodePosY = 0;

	startNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(TEXT("Start")));
	
	Graph.AddNode(startNode);
	Graph.Modify();
	
}

//TODO:创建节点的操作实现
UEdGraphNode* FNewNodeAction::PerformAction(UEdGraph* parentGraph, UEdGraphPin* fromPin, const FVector2D location,
	bool bSelectNewNode)
{
	UDialogGraphNodeBase* result = NewObject<UDialogGraphNodeBase>(parentGraph,_classTemplate);
	//创建全局唯一标识
	result->CreateNewGuid();
	
	result->NodePosX = location.X;
	result->NodePosY = location.Y;
	result->InitNodeInfo(result);
	//result->SetNodeInfo(NewObject<UDialogNodeInfo>(result));
	/*
	//输入Pin
	result->CreatePin(
	EEdGraphPinDirection::EGPD_Input,
	TEXT("Inputs"),
	TEXT("SomeInput"));

	//输出Pin
	result->CreatePin(
	EEdGraphPinDirection::EGPD_Output,
	TEXT("Outputs"),
	TEXT("Output1"));
	result->CreatePin(
	EEdGraphPinDirection::EGPD_Output,
	TEXT("Inputs"),
	TEXT("Output2"));
	*/

	UEdGraphPin* input = result->CreateDefaultInputPin();
	result->CreateDefaultOutputPins();
	//UEdGraphPin* input = result->CreateDialogPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
	/*
	FString defaultResponse =TEXT("Continue");
	result->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(defaultResponse));
	result->GetNodeInfo()->DialogResponses.Add(FText::FromString(defaultResponse));
	*/

	//result->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("Output1"));
	//result->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("Output2"));

	//判断输入节点是否有效（存在）
	if(fromPin)
	{
		//尝试链接节点
		result->GetSchema()->TryCreateConnection(fromPin,input);
	}

	parentGraph->Modify();
	parentGraph->AddNode(result,true,true);
	
	return result;
	//return FEdGraphSchemaAction::PerformAction(parentGraph, fromPin, location, bSelectNewNode);
}
