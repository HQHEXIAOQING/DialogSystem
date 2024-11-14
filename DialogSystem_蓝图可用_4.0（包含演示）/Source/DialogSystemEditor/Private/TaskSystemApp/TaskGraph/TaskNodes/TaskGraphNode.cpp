#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h"

//添加菜单上下文的Action
void UTaskGraphNode::GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const
{
	//Super::GetNodeContextMenuActions(Menu, Context);
	//获取工具菜单添加操作
	FToolMenuSection& Section = Menu->AddSection("SectionName",FText::FromString(TEXT("对话节点的操作")));
	//获取自己本身
	UTaskGraphNode* Node =(UTaskGraphNode*)this;

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
				Node->GetNodeInfo()->TaskOutPinArray.Add(FTaskOutPinData());
				Node->SysncPinsWithResponses();
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
			Node->GetNodeInfo()->TaskOutPinArray.RemoveAt(Node->GetNodeInfo()->TaskOutPinArray.Num() - 1);
			Node->SysncPinsWithResponses();
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
UEdGraphPin* UTaskGraphNode::CreateTaskPin(EEdGraphPinDirection Direction, FName Name)
{
	FName Category = (Direction==EEdGraphPinDirection::EGPD_Input) ? TEXT("Inputs") : TEXT("Outputs");
	UEdGraphPin* Pin = CreatePin(Direction,Category,Name);
	Pin->PinType.PinSubCategory = "TaskPin";
	return Pin;
	//return Super::CreateDialogPin(Direction, Name);
}

UEdGraphPin* UTaskGraphNode::CreateDefaultTaskInputPin()
{
	return CreateTaskPin(EEdGraphPinDirection::EGPD_Input,TEXT("Input"));
}

void UTaskGraphNode::CreateDefaultTaskOutputPin()
{
	CreateTaskPin(EEdGraphPinDirection::EGPD_Output,TEXT("输出"));
}

void UTaskGraphNode::OnPropertiesChanged()
{
	Super::OnPropertiesChanged();
	SysncPinsWithResponses();
}

void UTaskGraphNode::SysncPinsWithResponses()
{
	//TODO::这里要书写节点同步的逻辑！
	URuntimeTaskNodeInfo* DialogNodeInfo = GetNodeInfo();
	if(!DialogNodeInfo){return;}
	//创建图表节点和节点信息引脚数量（去掉输入的一个）
	int NumGraphNodePins = Pins.Num()-1;
	int NumInfoPins = DialogNodeInfo->TaskOutPinArray.Num();
	//保持一致引脚数量
	while(NumGraphNodePins>NumInfoPins)
	{
		RemovePinAt(NumGraphNodePins-1,EEdGraphPinDirection::EGPD_Output);
		NumGraphNodePins--;
	}
	while(NumInfoPins>NumGraphNodePins)
	{
		CreateTaskPin(EEdGraphPinDirection::EGPD_Output,FName(DialogNodeInfo->TaskOutPinArray[NumGraphNodePins].TaskNodeTitle.ToString()));
		NumGraphNodePins++;
	}
	//设置引脚名称对应，循环设置所有引脚。
	int Index = 1;
	for(FTaskOutPinData& OutPinData : DialogNodeInfo->TaskOutPinArray)
	{
		//循环设置引脚名称
		GetPinAt(Index)->PinName = FName(OutPinData.TaskNodeTitle.ToString());
		Index++;
	}
}
