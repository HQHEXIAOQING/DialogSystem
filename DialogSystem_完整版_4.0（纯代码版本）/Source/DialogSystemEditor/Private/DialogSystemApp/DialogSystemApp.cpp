#include "DialogSystemApp/DialogSystemApp.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/RuntimeDialogGraph.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogStartNodeInfo.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphJumpNode.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h"
#include "Kismet2/BlueprintEditorUtils.h"

//选择对象发生变化时调用
void DialogSystemApp::OnGraphNodeSelectionChanged(const FGraphPanelSelectionSet& Selections)
{
	//TODO::这是时选择的节点发生变化调用事件
	if(_WorkingDetailsView)
	{
		//循环所有的对象
		for(UObject* Obj:Selections)
		{
			//查找我们的节点，并设置像是属性的对象。
			UDialogGraphNodeBase* DialogNode = Cast<UDialogGraphNodeBase>(Obj);
			if(DialogNode&&DialogNode->GetRuntimeNodeInfoBase())
			{
				_WorkingDetailsView->SetObject(DialogNode->GetRuntimeNodeInfoBase());
				return;
			}
		}
		_WorkingDetailsView->SetObject(nullptr);
	}
}

void DialogSystemApp::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit)
{
	//创建数组类型的对象
	TArray<UObject*> ObjectsToEdit;
	ObjectsToEdit.Add( ObjectToEdit );

	//创建操作资产
	_WorkingAsset = Cast<UDialogAsset>(ObjectToEdit);
	_WorkingAsset->SetPreSaveListener([this](){UpdateDialogGraphToDialogAsset();});

	//创建操作图表
	_WorkingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_WorkingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UDialogGraphSchema::StaticClass()
		);
	//TODO::创建默认节点，图表存储做好后，这里需要修改掉。
	//_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
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
	UpdateDialogAssetToDialogGraph();

}

//更新图表数据到资产
void DialogSystemApp::UpdateDialogGraphToDialogAsset()
{
	if(!_WorkingGraph){return;}
	//获取运行时图表。
	URuntimeDialogGraph* RuntimeGraph = NewObject<URuntimeDialogGraph>(_WorkingAsset);
	//获取所有的对话节点，循环所有的对话节点。
	TArray<UDialogGraphNodeBase*> Nodes;
	_WorkingGraph->GetNodesOfClass(Nodes);

	//创建所有引脚对象以及Id对应的运行时节点对象。
	TArray<std::pair<FGuid,FGuid>> EditorGraphPins;
	TMap<FGuid,URuntimeDialogPin*> Map_EditorGraphPinIdToRuntimePin;
	
	for(UDialogGraphNodeBase* EditorNode:Nodes)
	{
		//获取节点数据
		URuntimeDialogNodeInfoBase* RuntimeNodeInfo = EditorNode->GetRuntimeNodeInfoBase();
		if(!RuntimeNodeInfo){continue;}
		//创建运行时保存的节点
		URuntimeDialogNode* RuntimeNode = NewObject<URuntimeDialogNode>(_WorkingAsset);	
		
		//循环节点中所有引脚
		for (UEdGraphPin* EditorNodePin:EditorNode->Pins)
		{
			//创建运行时的引脚，设置基本信息
			URuntimeDialogPin* RuntimeNodePin = NewObject<URuntimeDialogPin>(RuntimeNode);
			RuntimeNodePin->DialogPinId = EditorNodePin->PinId;
			RuntimeNodePin->DialogPinName = EditorNodePin->PinName;
			RuntimeNodePin->NodeId = RuntimeNodeInfo->DialogNodeId;
			if (EditorNodePin->Direction == EEdGraphPinDirection::EGPD_Input)
			{
				RuntimeNode->InputDialogPin = RuntimeNodePin;
			}else
			{
				//判断是否有链接，是否为输出引脚
				if(EditorNodePin->HasAnyConnections())
				{
					//每个输出引脚只会有一个链接，所以这里Linked里边的参数也只会有一个。
					EditorGraphPins.Add(std::make_pair(EditorNodePin->PinId,EditorNodePin->LinkedTo[0]->PinId));
				}
				RuntimeNode->OutputDialogPinArray.Add(RuntimeNodePin);
			}
			Map_EditorGraphPinIdToRuntimePin.Add(EditorNodePin->PinId,RuntimeNodePin);
		}
		//添加运行时节点信息
		RuntimeNode->DialogNodePosition = FVector2D(EditorNode->NodePosX, EditorNode->NodePosY);
		RuntimeNode->DialogNodeType = EditorNode->GetDialogNodeType();
		RuntimeNode->RuntimeDialogNodeInfoBase = RuntimeNodeInfo;
		//添加节点Id对应的节点。
		RuntimeGraph->Map_NodeIdToNode.Add(RuntimeNodeInfo->DialogNodeId,RuntimeNode);
	}
	//循环设置引脚对应信息
	for(std::pair<FGuid,FGuid> RuntimePinId:EditorGraphPins)
	{
		Map_EditorGraphPinIdToRuntimePin[RuntimePinId.first]->Connection = Map_EditorGraphPinIdToRuntimePin[RuntimePinId.second];
	}
	_WorkingAsset->RuntimeDialogGraph = RuntimeGraph;
}

//更新资产数据到图表
void DialogSystemApp::UpdateDialogAssetToDialogGraph()
{
	if(!_WorkingAsset->RuntimeDialogGraph){return;}
	
	//创建引脚ID对应链接关系组
	TArray<std::pair<FGuid,FGuid>> Connections;
	//ID对应的引脚信息
	TMap<FGuid,UEdGraphPin*> IdToPinMap;
	
	for(auto RuntimeNode:_WorkingAsset->RuntimeDialogGraph->Map_NodeIdToNode)
	{
		UDialogGraphNodeBase* NewNode = nullptr;
		//判断节点的类型，进行不同的设置。
		if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogStartNode)
		{
			NewNode = NewObject<UDialogGraphStartNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogNode)
		{
			NewNode = NewObject<UDialogGraphNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogEndNode)
		{
			NewNode = NewObject<UDialogGraphEndNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogJumpNode)
		{
			NewNode = NewObject<UDialogGraphJumpNode>(_WorkingGraph);
		}else
		{
			UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::UpdateEditorGraphFromWorkingAsset::这里没有结束节点的信息！"));
			continue;
		}
		//设置节点Id和设置节点位置。
		NewNode->CreateNewGuid();
		NewNode->NodePosX = RuntimeNode.Value->DialogNodePosition.X;
		NewNode->NodePosY = RuntimeNode.Value->DialogNodePosition.Y;
		if(RuntimeNode.Value->RuntimeDialogNodeInfoBase){NewNode->SetRuntimeNodeInfoBase(RuntimeNode.Value->RuntimeDialogNodeInfoBase);}
		else{NewNode->InitNodeInfo(_WorkingAsset);}
		//判断是否有输入引脚
		if(RuntimeNode.Value->InputDialogPin)
		{
			//创建一个输入引脚
			UEdGraphPin* GraphInputPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Input,RuntimeNode.Value->InputDialogPin->DialogPinName);
			//设置引脚Id
			GraphInputPin->PinId = RuntimeNode.Value->InputDialogPin->DialogPinId;
			//TODO::这个模式下，输入引脚不会记录相连的引脚信息，如果后边需要添加输入引脚的链接，那就需要回到这个位置来修改逻辑。

			//添加此引脚到Map中
			IdToPinMap.Add(GraphInputPin->PinId,GraphInputPin);
		}
		//循环所有的输出引脚
		for(URuntimeDialogPin* RuntimeOutputPin:RuntimeNode.Value->OutputDialogPinArray)
		{
			//创建引脚，设置引脚Id
			UEdGraphPin* GraphInputPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,RuntimeOutputPin->DialogPinName);
			GraphInputPin->PinId = RuntimeOutputPin->DialogPinId;
			//判断输出引脚是否带有链接对象
			if(RuntimeOutputPin->Connection){Connections.Add(std::make_pair(RuntimeOutputPin->DialogPinId,RuntimeOutputPin->Connection->DialogPinId));}
			//添加此引脚到Map中
			IdToPinMap.Add(GraphInputPin->PinId,GraphInputPin);
		}
		//在图表中添加节点
		_WorkingGraph->AddNode(NewNode,true,true);
	}
	//循环所有引脚设置引脚的链接。
	for (std::pair<FGuid,FGuid> Connection:Connections)
	{
		IdToPinMap[Connection.first]->LinkedTo.Add(IdToPinMap[Connection.second]);
		IdToPinMap[Connection.second]->LinkedTo.Add(IdToPinMap[Connection.first]);
	}
}

void DialogSystemApp::SetWorkingDetailsView(TSharedPtr<IDetailsView> WorkingDetailsView)
{
	_WorkingDetailsView = WorkingDetailsView;
	//TODO::这里是属性窗口设置的位置
	_WorkingDetailsView->OnFinishedChangingProperties().AddRaw(this,&DialogSystemApp::OnNodeDetailViewPropertyUpdate);
}
//节点信息发生改变时调用
void DialogSystemApp::OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& Event)
{
	if(_WorkingGraphEditor)
	{
		UDialogGraphNodeBase* DialogNode = GetSelectedNode(_WorkingGraphEditor->GetSelectedNodes());
		if(DialogNode){DialogNode->OnPropertiesChanged();}
		_WorkingGraphEditor->NotifyGraphChanged();
	}
}

void DialogSystemApp::OnClose()
{
	FWorkflowCentricApplication::OnClose();
	_WorkingAsset->SetPreSaveListener(nullptr);
}

//获取选择的节点
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


void DialogSystemApp::SetWorkingGraphEditor(TSharedPtr<SGraphEditor> WorkingGraphEditor)
{
	_WorkingGraphEditor = WorkingGraphEditor;
	if(!_WorkingAsset->RuntimeDialogGraph)
	{
		_WorkingAsset->RuntimeDialogGraph = NewObject<URuntimeDialogGraph>(_WorkingAsset);
		_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
	}
	//通知图表发生改变
	_WorkingGraphEditor->NotifyGraphChanged();
}
