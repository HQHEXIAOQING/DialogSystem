#include "DialogSystemApp/DialogGraph/DialogNodes/DialogNode.h"

#include "BlueprintActionDatabase.h"

//设置标题
FText UDialogNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	/*
	//设置节点的标题，如果大于15个就用省略号显示后续文字。
	if(!GetNodeInfo()->DialogContent.IsEmpty())
	{
		FString TitleName = GetNodeInfo()->DialogContent.ToString();
		if(TitleName.Len()>15)
		{
			TitleName = TitleName.Left(15)+TEXT("...");
		}
		return FText::FromString(TitleName);
	}
	*/
	return GetNodeInfo()->Title;
}

void UDialogNode::GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const
{
	//Super::GetNodeContextMenuActions(Menu, Context);
	//TODO::添加对话节点上的右键Action的操作

	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点操作")));
	UDialogNode* Node = (UDialogNode*)this;

	Section.AddMenuEntry(
		"AddPinEntry",
		FText::FromString(TEXT("添加输出")),
		FText::FromString(TEXT("添加一个输出引脚")),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda(
			[Node]()
			{
				Node->GetNodeInfo()->OutPinDataArray.Add(FOutPinData());
				Node->SysncPinsWithResponses();
				//通知图表数据变化，更新数据。
				Node->GetGraph()->NotifyGraphChanged();
				Node->GetGraph()->Modify();
			})));
	Section.AddMenuEntry(
	"RemoveLastPinEntry",
	FText::FromString(TEXT("移除引脚")),
	FText::FromString(TEXT("移除最后一个引脚")),
	FSlateIcon(),
	FUIAction(FExecuteAction::CreateLambda(
		[Node]()
		{
			Node->GetNodeInfo()->OutPinDataArray.RemoveAt(Node->GetNodeInfo()->OutPinDataArray.Num()-1);
			Node->SysncPinsWithResponses();
			//通知图表数据变化，更新数据。
			Node->GetGraph()->NotifyGraphChanged();
			Node->GetGraph()->Modify();
		})));
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

UEdGraphPin* UDialogNode::CreateDefaultInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
}

void UDialogNode::CreateDefaultOutPins()
{
	//Super::CreateDefaultOutPins();
	CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("默认输出"));
	SysncPinsWithResponses();
}

UEdGraphPin* UDialogNode::CreateDialogPin(EEdGraphPinDirection Direction, FName Name)
{
	//创建引脚
	FName Category = (Direction == EEdGraphPinDirection::EGPD_Input) ?"Inputs" : "Outputs";
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory ="DialogPin";
	return Pin;
}

void UDialogNode::OnPropertiesChanged()
{
	Super::OnPropertiesChanged();
	SysncPinsWithResponses();
}
void UDialogNode::SysncPinsWithResponses()
{
	//TODO::这里要书写节点同步的逻辑！
	UDialogNodeInfo* DialogNodeInfo = GetNodeInfo();
	//创建图表节点和节点信息引脚数量（去掉输入的一个）
	int NumGraphNodePins = Pins.Num()-1;
	int NumInfoPins = DialogNodeInfo->OutPinDataArray.Num();
	//保持一致引脚数量
	while(NumGraphNodePins>NumInfoPins)
	{
		RemovePinAt(NumGraphNodePins-1,EEdGraphPinDirection::EGPD_Output);
		NumGraphNodePins--;
	}
	while(NumInfoPins>NumGraphNodePins)
	{
		CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(DialogNodeInfo->OutPinDataArray[NumGraphNodePins].OutPinName.ToString()));
		NumGraphNodePins++;
	}
	//设置引脚名称对应，循环设置所有引脚。
	int Index = 1;
	for(FOutPinData& OutPinData : DialogNodeInfo->OutPinDataArray)
	{
		//循环设置引脚名称
		GetPinAt(Index)->PinName = FName(OutPinData.OutPinName.ToString());
		Index++;
	}
}