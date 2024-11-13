#include "TaskSystemApp/TaskSystemApp.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "TaskAsset/RuntimeTaskGraph.h"
#include "TaskAsset/RuntimeTaskNodeInfoBase.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskSystemApp/TaskSystemAppMode.h"
#include "TaskSystemApp/TaskGraph/TaskGraphNodeBase.h"
#include "TaskSystemApp/TaskGraph/TaskGraphSchema.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h"
#include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h"


void TaskSystemApp::OnGraphNodeSelectionChanged(const FGraphPanelSelectionSet& Selections)
{
	//TODO::这是时选择的节点发生变化调用事件
	if(_WorkingDetailsView)
	{
		//循环所有的对象
		for(UObject* Obj:Selections)
		{
			//查找我们的节点，并设置像是属性的对象。
			UTaskGraphNodeBase* TaskNode = Cast<UTaskGraphNodeBase>(Obj);
			if(TaskNode&&TaskNode->GetRuntimeNodeInfoBase())
			{
				_WorkingDetailsView->SetObject(TaskNode->GetRuntimeNodeInfoBase());
				return;
			}
		}
		_WorkingDetailsView->SetObject(nullptr);
	}
}

void TaskSystemApp::OnClose()
{
	FWorkflowCentricApplication::OnClose();
	_WorkingAsset->SetPreSaveListener(nullptr);
}

void TaskSystemApp::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit)
{
	//创建数组类型的对象
	TArray<UObject*> ObjectsToEdit;
	ObjectsToEdit.Add( ObjectToEdit );

	//创建操作资产
	_WorkingAsset = Cast<UTaskAsset>(ObjectToEdit);
	_WorkingAsset->SetPreSaveListener([this](){UpdateTaskGraphToDialogAsset();});

	//创建操作图表
	_WorkingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_WorkingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UTaskGraphSchema::StaticClass()
		);
	
	//TODO::创建默认节点，图表存储做好后，这里需要修改掉。
	//_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
	//初始化资产编辑器。
	InitAssetEditor(
		Mode,
		InitToolkitHost,
		"TaskSystemApp",
		FTabManager::FLayout::NullLayout,
		true,//是否创建独立菜单。
		true,//是否创建默认工具栏
		ObjectsToEdit);
	//添加App的模式。
	AddApplicationMode("TaskSystemAppMode",MakeShareable(new TaskSystemAppMode(SharedThis(this))));
	//设置当前使用的模式为我们自定义的Mode的模式。
	SetCurrentMode("TaskSystemAppMode");

	UpdateTaskAssetToDialogGraph();
}

//更新图表数据到资产
void TaskSystemApp::UpdateTaskGraphToDialogAsset()
{
	if(!_WorkingGraph){return;}
	//获取运行时图表。
	URuntimeTaskGraph* RuntimeGraph = NewObject<URuntimeTaskGraph>(_WorkingAsset);
	//获取所有的对话节点，循环所有的对话节点。
	TArray<UTaskGraphNodeBase*> Nodes;
	_WorkingGraph->GetNodesOfClass(Nodes);

	//创建所有引脚对象以及Id对应的运行时节点对象。
	TArray<std::pair<FGuid,FGuid>> EditorGraphPins;
	TMap<FGuid,URuntimeTaskPin*> Map_EditorGraphPinIdToRuntimePin;
	
	for(UTaskGraphNodeBase* EditorNode:Nodes)
	{
		//获取节点数据
		URuntimeTaskNodeInfoBase* RuntimeNodeInfo = EditorNode->GetRuntimeNodeInfoBase();
		if(!RuntimeNodeInfo){continue;}
		//创建运行时保存的节点
		URuntimeTaskNode* RuntimeNode = NewObject<URuntimeTaskNode>(_WorkingAsset);	
		
		//循环节点中所有引脚
		for (UEdGraphPin* EditorNodePin:EditorNode->Pins)
		{
			//创建运行时的引脚，设置基本信息
			URuntimeTaskPin* RuntimeNodePin = NewObject<URuntimeTaskPin>(RuntimeNode);
			RuntimeNodePin->TaskPinId = EditorNodePin->PinId;
			RuntimeNodePin->TaskPinName = EditorNodePin->PinName;
			RuntimeNodePin->NodeId = RuntimeNodeInfo->TaskNodeId;
			if (EditorNodePin->Direction == EEdGraphPinDirection::EGPD_Input)
			{
				RuntimeNode->InputTaskPin = RuntimeNodePin;
			}else
			{
				//判断是否有链接，是否为输出引脚
				if(EditorNodePin->HasAnyConnections())
				{
					//每个输出引脚只会有一个链接，所以这里Linked里边的参数也只会有一个。
					EditorGraphPins.Add(std::make_pair(EditorNodePin->PinId,EditorNodePin->LinkedTo[0]->PinId));
				}
				RuntimeNode->OutputTaskPinArray.Add(RuntimeNodePin);
			}
			Map_EditorGraphPinIdToRuntimePin.Add(EditorNodePin->PinId,RuntimeNodePin);
		}
		//添加运行时节点信息
		RuntimeNode->TaskNodePosition = FVector2D(EditorNode->NodePosX, EditorNode->NodePosY);
		RuntimeNode->TaskNodeType = EditorNode->GetTaskNodeType();
		RuntimeNode->RuntimeDialogNodeInfoBase = RuntimeNodeInfo;
		//添加节点Id对应的节点。
		RuntimeGraph->Map_NodeIdToNode.Add(RuntimeNodeInfo->TaskNodeId,RuntimeNode);
	}
	//循环设置引脚对应信息
	for(std::pair<FGuid,FGuid> RuntimePinId:EditorGraphPins)
	{
		Map_EditorGraphPinIdToRuntimePin[RuntimePinId.first]->Connection = Map_EditorGraphPinIdToRuntimePin[RuntimePinId.second];
	}
	_WorkingAsset->RuntimeTaskGraph = RuntimeGraph;
}

//更新资产数据到图表
void TaskSystemApp::UpdateTaskAssetToDialogGraph()
{
	if(!_WorkingAsset->RuntimeTaskGraph){return;}
	
	//创建引脚ID对应链接关系组
	TArray<std::pair<FGuid,FGuid>> Connections;
	//ID对应的引脚信息
	TMap<FGuid,UEdGraphPin*> IdToPinMap;
	
	for(auto RuntimeNode:_WorkingAsset->RuntimeTaskGraph->Map_NodeIdToNode)
	{
		UTaskGraphNodeBase* NewNode = nullptr;
		//判断节点的类型，进行不同的设置。
		if(RuntimeNode.Value->TaskNodeType == ETaskNodeType::TaskStartNode)
		{
			NewNode = NewObject<UTaskGraphStartNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->TaskNodeType == ETaskNodeType::TaskNode)
		{
			NewNode = NewObject<UTaskGraphNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->TaskNodeType == ETaskNodeType::TaskEndNode)
		{
			NewNode = NewObject<UTaskGraphEndNode>(_WorkingGraph);
		}else
		{
			UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::UpdateEditorGraphFromWorkingAsset::这里没有节点的信息！"));
			continue;
		}
		//设置节点Id和设置节点位置。
		NewNode->CreateNewGuid();
		NewNode->NodePosX = RuntimeNode.Value->TaskNodePosition.X;
		NewNode->NodePosY = RuntimeNode.Value->TaskNodePosition.Y;
		if(RuntimeNode.Value->RuntimeDialogNodeInfoBase){NewNode->SetRuntimeNodeInfoBase(RuntimeNode.Value->RuntimeDialogNodeInfoBase);}
		else{NewNode->InitNodeInfo(_WorkingAsset);}
		//判断是否有输入引脚
		if(RuntimeNode.Value->InputTaskPin)
		{
			//创建一个输入引脚
			UEdGraphPin* GraphInputPin = NewNode->CreateTaskPin(EEdGraphPinDirection::EGPD_Input,RuntimeNode.Value->InputTaskPin->TaskPinName);
			//设置引脚Id
			GraphInputPin->PinId = RuntimeNode.Value->InputTaskPin->TaskPinId;
			//TODO::这个模式下，输入引脚不会记录相连的引脚信息，如果后边需要添加输入引脚的链接，那就需要回到这个位置来修改逻辑。

			//添加此引脚到Map中
			IdToPinMap.Add(GraphInputPin->PinId,GraphInputPin);
		}
		//循环所有的输出引脚
		for(URuntimeTaskPin* RuntimeOutputPin:RuntimeNode.Value->OutputTaskPinArray)
		{
			//创建引脚，设置引脚Id
			UEdGraphPin* GraphInputPin = NewNode->CreateTaskPin(EEdGraphPinDirection::EGPD_Output,RuntimeOutputPin->TaskPinName);
			GraphInputPin->PinId = RuntimeOutputPin->TaskPinId;
			//判断输出引脚是否带有链接对象
			if(RuntimeOutputPin->Connection){Connections.Add(std::make_pair(RuntimeOutputPin->TaskPinId,RuntimeOutputPin->Connection->TaskPinId));}
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

UTaskGraphNodeBase* TaskSystemApp::GetSelectedNode(const FGraphPanelSelectionSet& Selection)
{
	// 判断选择是否为一个！
	if(Selection.Num() == 1)
	{
		UTaskGraphNodeBase* TaskNode = Cast<UTaskGraphNodeBase>(Selection.Array()[0]);
		//UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::GetSelectedNode:: 找到的节点%s"),*DialogNode->GetName());
		if(TaskNode){return TaskNode;}
	}
	else
	{
		//不能选择多个节点。
		//FText MessageDialog = FText::FromString(TEXT("不能选择多个节点！"));
		//FMessageDialog::Open(EAppMsgType::Type::Ok,MessageDialog);
	}
	return nullptr;
}

void TaskSystemApp::SetWorkingDetailsView(TSharedPtr<IDetailsView> WorkingDetailsView)
{
	_WorkingDetailsView = WorkingDetailsView;
	//TODO::这里是属性窗口设置的位置
	_WorkingDetailsView->OnFinishedChangingProperties().AddRaw(this,&TaskSystemApp::OnNodeDetailViewPropertyUpdate);
}

//节点信息发生改变时调用
void TaskSystemApp::OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& Event)
{
	if(_WorkingGraphEditor)
	{
		UTaskGraphNodeBase* TaskNode = GetSelectedNode(_WorkingGraphEditor->GetSelectedNodes());
		if(TaskNode){TaskNode->OnPropertiesChanged();}
		_WorkingGraphEditor->NotifyGraphChanged();
	}
}

void TaskSystemApp::SetWorkingGraphEditor(TSharedPtr<SGraphEditor> WorkingGraphEditor)
{
	_WorkingGraphEditor = WorkingGraphEditor;
	if(!_WorkingAsset->RuntimeTaskGraph)
	{
		_WorkingAsset->RuntimeTaskGraph = NewObject<URuntimeTaskGraph>(_WorkingAsset);
		_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
	}
	//通知图表发生改变
	_WorkingGraphEditor->NotifyGraphChanged();
}
