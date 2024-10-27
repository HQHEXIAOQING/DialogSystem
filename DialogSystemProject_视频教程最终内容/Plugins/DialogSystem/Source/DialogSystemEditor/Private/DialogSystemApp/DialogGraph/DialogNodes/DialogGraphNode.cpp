#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"

FText UDialogGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	//判断长度，超过十五个字符就使用省略号。
	FString NodeTitle = GetRuntimeNodeInfo()->DialogNodeTitle.ToString();
	if(NodeTitle.Len()>15)
	{
		NodeTitle = NodeTitle.Left(15) + TEXT("...");
	}
	return FText::FromString(NodeTitle);
}

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
				Node->GetRuntimeNodeInfo()->DialogOutPinArray.Add(FDialogOutPinData());
				Node->SynchronousNodeInfoData();
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
			Node->GetRuntimeNodeInfo()->DialogOutPinArray.RemoveAt(Node->GetRuntimeNodeInfo()->DialogOutPinArray.Num()-1);
			Node->SynchronousNodeInfoData();
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
	//循环默认节点信息，生成对应节点。
	for(FDialogOutPinData OutPinData:GetRuntimeNodeInfo()->DialogOutPinArray)
	{
		CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(OutPinData.DialogNodeTitle.ToString()));
	}
	
}

void UDialogGraphNode::SynchronousNodeInfoData()
{
	URuntimeDialogNodeInfo* NodeInfo = GetRuntimeNodeInfo();
	//去掉第一个输入引脚
	int NodePinNum = Pins.Num()-1;
	int NodeInfoNum = NodeInfo->DialogOutPinArray.Num();
	while(NodePinNum>NodeInfoNum)
	{
		RemovePinAt(NodePinNum-1,EEdGraphPinDirection::EGPD_Output);
		NodePinNum--;
	}
	while(NodeInfoNum>NodePinNum)
	{
		CreateDialogPin(EEdGraphPinDirection::EGPD_Output,"");
		NodePinNum++;
	}

	//设置节点对应的名称
	int Index = 1;
	for(FDialogOutPinData OutPinData:NodeInfo->DialogOutPinArray)
	{
		//设置每一个引脚的名称
		GetPinAt(Index)->PinName = FName(OutPinData.DialogNodeTitle.ToString());
		Index++;
	}
}
