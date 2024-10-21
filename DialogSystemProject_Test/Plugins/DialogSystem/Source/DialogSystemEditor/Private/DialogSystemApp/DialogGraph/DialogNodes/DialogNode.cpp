#include "DialogSystemApp/DialogGraph/DialogNodes/DialogNode.h"

#include "BlueprintActionDatabase.h"

//设置标题
FText UDialogNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	//设置节点的标题，如果大于15个就用省略号显示后续文字。
	if(!_NodeBaseInfo->DialogContent.IsEmpty())
	{
		FString TitleName = _NodeBaseInfo->DialogContent.ToString();
		if(TitleName.Len()>15)
		{
			TitleName = TitleName.Left(15)+TEXT("...");
		}
		return FText::FromString(TitleName);
	}
	return _NodeBaseInfo->Title;
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
				Node->_NodeBaseInfo->OutPinDataArray.Add(FOutPinData());
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
			Node->_NodeBaseInfo->OutPinDataArray.RemoveAt(Node->_NodeBaseInfo->OutPinDataArray.Num()-1);
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
	Super::CreateDefaultOutPins();
	CreateDialogPin(EEdGraphPinDirection::EGPD_Output,TEXT("默认输出"));
	GetNodeInfo()->OutPinDataArray.Add(FOutPinData());
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
}
