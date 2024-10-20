#include "DialogGraph/DialogGraphNode/DialogGraphNode.h"

#include "BlueprintActionDatabase.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfo.h"
#include "Framework/Commands/UIAction.h"

FText UDialogGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	UDialogNodeInfo* nodeInfo = Cast<UDialogNodeInfo>(_nodeInfo);
	//设置节点的标题，如果大于15个就用省略号显示后续文字。
	if(nodeInfo->Title.IsEmpty())
	{
		FString dialogTextStr =nodeInfo->DialogText.ToString();
		if(dialogTextStr.Len() > 15)
		{
			dialogTextStr = dialogTextStr.Left(15)+TEXT("...");
		}
		return FText::FromString(dialogTextStr);
	}
	return nodeInfo->Title;
}

void UDialogGraphNode::GetNodeContextMenuActions(class UToolMenu* Menu,class UGraphNodeContextMenuContext* Context) const
{
	//Super::GetNodeContextMenuActions(Menu, Context);
	FToolMenuSection& section = Menu->AddSection("SectionName",FText::FromString(TEXT("操作")));

	//TODO::这个位置是注册按钮，以及书写按钮事件的地方。
	UDialogGraphNode* node = (UDialogGraphNode*)this;
	section.AddMenuEntry(
		"AddPinEntry",
		FText::FromString(TEXT("添加输出引脚")),
		FText::FromString(TEXT("添加一个新的输出引脚")),
		//这里的图标可以自定义一个图标来显示。
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda(
			[node]()
			{
				node->GetDialogNodeInfo()->DialogResponses.Add(FText::FromString(TEXT("默认引脚")));
				node->SyncPinsWithResponses();
				node->GetGraph()->NotifyGraphChanged();
				node->GetGraph()->Modify();
			})));
	section.AddMenuEntry(
	"DeletePinEntry",
	FText::FromString(TEXT("删除最后一个输出引脚")),
	FText::FromString(TEXT("删除最后一个输出引脚")),
	FSlateIcon(),
	FUIAction(FExecuteAction::CreateLambda(
		[node]()
		{
			UEdGraphPin* pin = node->GetPinAt(node->Pins.Num()-1);
			if (pin->Direction!=EEdGraphPinDirection::EGPD_Input)
			{
				UDialogNodeInfo* nodeInfo = node->GetDialogNodeInfo();
				nodeInfo->DialogResponses.RemoveAt(nodeInfo->DialogResponses.Num()-1);
				node->SyncPinsWithResponses();
				node->GetGraph()->NotifyGraphChanged();
				node->GetGraph()->Modify();	
			}})));

	section.AddMenuEntry(
		"DeleteEntry",
		FText::FromString(TEXT("删除节点")),
		FText::FromString(TEXT("删除这个节点")),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda(
		[node]()
		{
			node->GetGraph()->RemoveNode(node);
			})));
}

UEdGraphPin* UDialogGraphNode::CreateDefaultInputPin()
{
	return CreateDialogPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
}

void UDialogGraphNode::CreateDefaultOutputPins()
{
	Super::CreateDefaultOutputPins();
	FString defaultResponse =TEXT("Continue");
	CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(defaultResponse));
	GetDialogNodeInfo()->DialogResponses.Add(FText::FromString(defaultResponse));

}

UEdGraphPin* UDialogGraphNode::CreateDialogPin(EEdGraphPinDirection direction, FName name)
{
	FName category = (direction == EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	FName subcategory = TEXT("DialogPin");

	UEdGraphPin* pin = CreatePin(direction,category,name);
	pin->PinType.PinSubCategory = subcategory;

	return pin;
	
}

//TODO::这里设置节点和节点数据之间的同步，之后需要同步节点上的内容和数据中的内容的时候，在这个位置进行同步！
void UDialogGraphNode::SyncPinsWithResponses()
{
	//获取节点信息
	UDialogNodeInfo* nodeInfo = GetDialogNodeInfo();
	//创建图表节点和节点信息中引脚数量
	int numGraphNodePins = Pins.Num()-1;
	int numInfoPins = nodeInfo->DialogResponses.Num();

	//重复循环条件，判断图表节点是否比节点信息中的节点数量多
	while (numGraphNodePins > numInfoPins)
	{
		//因为我们的输入节点只会有一个，所以这里的判断中只移除输出节点就可以了。（输入为引脚ID和引脚类型）
		RemovePinAt(numGraphNodePins-1,EEdGraphPinDirection::EGPD_Output);
		//设置图表节点中引脚减一，然后回到While中重复循环。
		numGraphNodePins--;
	}
	//重复循环判断节点信息中的引脚数量是否大于图表中的引脚数量。
	while(numInfoPins > numGraphNodePins)
	{
		//如果为真则在输出引脚的位置添加一个新的引脚，命名为节点信息中的引脚名称设置。
		CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(nodeInfo->DialogResponses[numGraphNodePins].ToString()));
		//添加图表引脚数量。
		numGraphNodePins++;
	}
	
	//创建一个引脚索引（去掉0，因为0就是输入引脚，不应该改变，所以这里从1开始）（同步所有文本。）
	int index = 1;
	//循环所有的节点信息中的文本
	for(const FText& option :nodeInfo->DialogResponses)
	{
		//找到对应引脚设置名称
		GetPinAt(index)->PinName = FName(option.ToString());
		//引脚ID加1。
		index++;
	}
	
}





























