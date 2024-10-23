#include "DialogSystemApp/DialogSystemApp.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/DialogRuntimeGraph.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphSchema.h"
#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogEndNode.h"
#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogNode.h"
#include "DialogSystemApp/DIalogGraph/DialogNodes/DialogStartNode.h"
#include "Kismet2/BlueprintEditorUtils.h"

DEFINE_LOG_CATEGORY_STATIC(DialogSystemAppLog, Log, All)

//关闭这个App的时候需要设置资产中的数据保存对应函数为空。
void DialogSystemApp::OnClose()
{
	if(_WorkingAsset)
	{
		_WorkingAsset->SetPreSaveListener(nullptr);
		UpdateWorkingAssetFromEditorGraph();
	}
	FWorkflowCentricApplication::OnClose();
}

void DialogSystemApp::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit)
{
	//创建数组类型的对象
	TArray<UObject*> ObjectsToEdit;
	ObjectsToEdit.Add( ObjectToEdit );

	//添加操作资产
	_WorkingAsset =Cast<UDialogAsset>(ObjectToEdit);
	//设置保存时需要调用的函数。
	_WorkingAsset->SetPreSaveListener([this](){UpdateWorkingAssetFromEditorGraph();});

	//添加操作的图表
	_WorkingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_WorkingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UDialogGraphSchema::StaticClass());
	
	//初始化资产编辑器。
	InitAssetEditor(
		Mode,
		InitToolkitHost,
		"DialogSystemApp",
		FTabManager::FLayout::NullLayout,
		true,//是否创建独立菜单。
		true,//是否创建默认工具栏
		ObjectsToEdit);

	//添加App的模式。
	AddApplicationMode("DialogSystemAppMode",MakeShareable(new DialogSystemAppMode(SharedThis(this))));
	//设置当前使用的模式为我们自定义的Mode的模式。
	SetCurrentMode("DialogSystemAppMode");

	//初始化图表中的数据
	UpdateEditorGraphFromWorkingAsset ();

}

//图表发生变化时调用
void DialogSystemApp::OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection)
{
	//设置图表发生变化时调用的事件
	UDialogGraphNodeBase* SelectedNode = GetSelectedNode(selection);
	if (SelectedNode)
	{
		_SelectedDetailsView->SetObject(SelectedNode->GetNodeInfoBase());
		//UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::OnGraphSelectionChanged:: 找到了应该显示的对象%s"),*SelectedNode->GetNodeInfoBase()->GetName());
	}
	else
	{
		//UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::OnGraphSelectionChanged:: 没找到应该显示的对象"));
		_SelectedDetailsView->SetObject(nullptr);
	}
}

//节点的选择发生变化时调用
void DialogSystemApp::SetSelectedNodeDetailView(TSharedPtr<IDetailsView> NewDetailsView)
{
	_SelectedDetailsView = NewDetailsView;
	_SelectedDetailsView->OnFinishedChangingProperties().AddRaw(this,&DialogSystemApp::OnNodeDetailViewPropertyUpdate);
}
//属性发生变化时调用
void DialogSystemApp::OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& Event)
{
	if(_WorkingGraphUi)
	{
		UDialogGraphNodeBase* DialogNode = GetSelectedNode(_WorkingGraphUi->GetSelectedNodes());
		if(DialogNode){DialogNode->OnPropertiesChanged();}
		_WorkingGraphUi->NotifyGraphChanged();
	}
}

//更新图表数据到保存的资产中（在资产保存的时候保存进资产数据中。）
void DialogSystemApp::UpdateWorkingAssetFromEditorGraph()
{
	//UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::UpdateWorkingAssetFromEditorGraph调用了"));
	//判断编辑图表与编辑资产是否有效，无效就直接跳出，什么都不用做。
	if(!_WorkingAsset||!_WorkingGraph){return;}
	
	UDialogRuntimeGraph* RuntimeGraph = NewObject<UDialogRuntimeGraph>(_WorkingAsset);
	_WorkingAsset->Graph = RuntimeGraph;

	//创建引脚ID对应链接关系组
	TArray<std::pair<FGuid,FGuid>> Connections;
	//ID对应的引脚信息
	TMap<FGuid,UDialogRuntimePin*> IdToPinMap;
	//获取当前编辑器图表中所有的节点
	//for(UEdGraphNode* UiNode:_WorkingGraph->Nodes)
	TArray<UDialogGraphNodeBase*> NodeBases;
	_WorkingGraph->GetNodesOfClass(NodeBases);
	for(UDialogGraphNodeBase* UiNode:NodeBases)
	{
		if (!UiNode) continue;
		//每找到一个节点就创建一个节点信息
		UDialogRuntimeNode* RuntimeNode = NewObject<UDialogRuntimeNode>(RuntimeGraph);
		//设置位置信息
		RuntimeNode->Position = FVector2D(UiNode->NodePosX, UiNode->NodePosY);

		//循环所有引脚
		for(UEdGraphPin* UiPin:UiNode->Pins)
		{
			if (!UiPin) continue;
			//创建运行时引脚数据
			UDialogRuntimePin* RuntimePin = NewObject<UDialogRuntimePin>(RuntimeGraph);
			//设置引脚名称和设置引脚ID
			RuntimePin->PinName = UiPin->PinName;
			RuntimePin->PinId = UiPin->PinId;
			RuntimePin->DialogNameId = "None";
			//判断是否有链接，并且是否是输出接口（我们输出引脚只会有对应的一个输入引脚，所以循环找所有的输出引脚就可以了） 
			if(UiPin->HasAnyConnections()&&UiPin->Direction == EEdGraphPinDirection::EGPD_Output)
			{
				//创建这个输出引脚和对应的输入引脚的链接。
				std::pair<FGuid,FGuid> Connection = std::make_pair(UiPin->PinId,UiPin->LinkedTo[0]->PinId);
				//添加到总链接中。
				Connections.Add(Connection);
				UDialogGraphNodeBase* GraphNodeBase = Cast<UDialogGraphNodeBase>(UiPin->LinkedTo[0]->GetOwningNode());
				RuntimePin->DialogNameId = GraphNodeBase->GetNodeInfoBase()->DialogNodeId;
			}
			//添加这个引脚ID对应的运行时引脚数据。
			IdToPinMap.Add(UiPin->PinId,RuntimePin);
			//判断此引脚是否为输入引脚
			if(UiPin->Direction == EEdGraphPinDirection::EGPD_Input){RuntimeNode->InputPin = RuntimePin;}
			//为否就是输出引脚
			else{RuntimeNode->OutputPins.Add(RuntimePin);}
		}
		//转换一下节点，这里一定会成功。复制我们创建在图表节点中的信息到我们储存的节点中。
		RuntimeNode->NodeInfo = DuplicateObject(UiNode->GetNodeInfoBase(),RuntimeNode);
		if(!RuntimeNode->NodeInfo){continue;}
		RuntimeNode->NodeType = UiNode->GetDialogNodeType();	
		//在储存的图表数据中添加此节点。
		RuntimeGraph->Map_DialogIndexToNode.Add(RuntimeNode->NodeInfo->DialogNodeId,RuntimeNode);
	}
	//循环当前节点中的链接关系，添加输出引脚关联的输入引脚。
	for(std::pair<FGuid,FGuid> Connection:Connections)
	{
		UDialogRuntimePin* PinA = IdToPinMap[Connection.first];
		UDialogRuntimePin* PinB = IdToPinMap[Connection.second];
		PinA->Connection = PinB;
	}
}

//更新资产数据到当前图表中。（理论上只需要再打开的时候调用一次就可以了！）
void DialogSystemApp::UpdateEditorGraphFromWorkingAsset()
{
	//判断是否有保存的图表
	if(!_WorkingAsset->Graph)
	{
		//没有保存的图表的时候，我们应该调用创建默认节点的函数。
		_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
		return;
	}
	//创建引脚ID对应链接关系组
	TArray<std::pair<FGuid,FGuid>> Connections;
	//ID对应的引脚信息
	TMap<FGuid,UEdGraphPin*> IdToPinMap;

	//循环保存的所有节点
	//for(auto  UDialogRuntimeNode* RuntimeNode:_WorkingAsset->Graph->Map_DialogIndexToNode)
	for(auto RuntimeNode :_WorkingAsset->Graph->Map_DialogIndexToNode)
	{
		//创建一个节点
		UDialogGraphNodeBase* NewNode = nullptr;
		//判断节点的类型，进行不同的设置。
		if(RuntimeNode.Value->NodeType == EDialogNodeType::StartNode)
		{
			NewNode = NewObject<UDialogStartNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->NodeType == EDialogNodeType::DialogNode)
		{
			NewNode = NewObject<UDialogNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->NodeType == EDialogNodeType::EndNode)
		{
			NewNode = NewObject<UDialogEndNode>(_WorkingGraph);
		}else
		{
			UE_LOG(DialogSystemAppLog,Error,TEXT("DialogSystemApp::UpdateEditorGraphFromWorkingAsset::这里没有结束节点的信息！"));
			continue;
		}
		//设置生成节点的基本信息
		NewNode->CreateNewGuid();
		NewNode->NodePosX = RuntimeNode.Value->Position.X;
		NewNode->NodePosY = RuntimeNode.Value->Position.Y;
		//判断运行时信息是否存在，如果存在就复制当前的信息到图表节点的信息中。
		if(RuntimeNode.Value->NodeInfo){NewNode->SetNodeInfo(DuplicateObject(RuntimeNode.Value->NodeInfo,RuntimeNode.Value));}
		//没有节点信息的话，初始化一下节点的信息。（这里不用设置，是因为在不同的节点下创建的节点信息是不一样的，具体创建的信息应该跟着节点本身走。）
		else{NewNode->InitNodeInfo(NewNode);}
		//判断当前节点的输入引脚是否有效。
		if(RuntimeNode.Value->InputPin)
		{
			//获取运行时保存的输入引脚
			UDialogRuntimePin* RuntimeInputPin = RuntimeNode.Value->InputPin;
			//创建一个输入引脚
			UEdGraphPin* UiPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Input,RuntimeInputPin->PinName);
			UiPin->PinId = RuntimeInputPin->PinId;
			//判断运行时的输入引脚是否带有关联的输出引脚(我们保存中没有在输入引脚下保存关联关系，所以这里一般是不会进入的。)
			if(RuntimeInputPin->Connection)
			{
				Connections.Add(std::make_pair(RuntimeInputPin->PinId,RuntimeInputPin->Connection->PinId));
			}
			IdToPinMap.Add(RuntimeInputPin->PinId,UiPin);
		}
		//循环所有的输出引脚
		for(UDialogRuntimePin* RuntimeOutputPin:RuntimeNode.Value->OutputPins)
		{
			//创建一个引脚并设置ID
			UEdGraphPin* UiPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,RuntimeOutputPin->PinName);
			UiPin->PinId = RuntimeOutputPin->PinId;
			//判断输出引脚是否带有关联引脚
			if(RuntimeOutputPin->Connection){Connections.Add(std::make_pair(RuntimeOutputPin->PinId,RuntimeOutputPin->Connection->PinId));}
			IdToPinMap.Add(RuntimeOutputPin->PinId,UiPin);
		}
		_WorkingGraph->AddNode(NewNode,true,true);
	}
	//循环设置所有的引脚,并设置连接。
	for(std::pair<FGuid,FGuid> Connection:Connections)
	{
		UEdGraphPin* FromPin = IdToPinMap[Connection.first];
		UEdGraphPin* ToPin = IdToPinMap[Connection.second];
		FromPin->LinkedTo.Add(ToPin);
		ToPin->LinkedTo.Add(FromPin);
	}
}

//获取当前选择的节点
UDialogGraphNodeBase* DialogSystemApp::GetSelectedNode(const FGraphPanelSelectionSet& Selection)
{
	// 判断选择是否为一个！
	if(Selection.Num() == 1)
	{
		UDialogGraphNodeBase* DialogNode = Cast<UDialogGraphNodeBase>(Selection.Array()[0]);
		//UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::GetSelectedNode:: 找到的节点%s"),*DialogNode->GetName());
		if(DialogNode){return DialogNode;}
	}
	else
	{
		//不能选择多个节点。
		//FText MessageDialog = FText::FromString(TEXT("不能选择多个节点！"));
		//FMessageDialog::Open(EAppMsgType::Type::Ok,MessageDialog);
	}
	return nullptr;
}
