#include "DialogSystemApp/DialogSystemApp.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/RuntimeDialogGraph.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"
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

//节点上的属性发生变化时调用
void DialogSystemApp::OnPropertiesChanged(const FPropertyChangedEvent&)
{
	if(_WorkingGraphEditor)
	{
		//判断当前选择的节点是否等于一个
		if(_WorkingGraphEditor->GetSelectedNodes().Num() == 1)
		{
			UDialogGraphNodeBase* SelectedNode = Cast<UDialogGraphNodeBase>(_WorkingGraphEditor->GetSelectedNodes().Array()[0]);
			SelectedNode->OnNodeInfoPropertiesChanged();
		}
		_WorkingGraphEditor->NotifyGraphChanged();
	}
}

void DialogSystemApp::OnClose()
{
	_WorkingAsset->SetOnDialogAssetPreSave(nullptr);
	//保存时更新图表数据到资产。
	UpdateDialogAssetFromEditorGraph();
	FWorkflowCentricApplication::OnClose();
}

void DialogSystemApp::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit)
{
	//创建数组类型的对象
	TArray<UObject*> ObjectsToEdit;
	ObjectsToEdit.Add( ObjectToEdit );

	//创建操作资产
	_WorkingAsset = Cast<UDialogAsset>(ObjectToEdit);
	_WorkingAsset->SetOnDialogAssetPreSave([this]()
	{
		//保存时更新图表数据到资产。
		UpdateDialogAssetFromEditorGraph();
	});
	
	//创建操作图表
	_WorkingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_WorkingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UDialogGraphSchema::StaticClass()
		);
	
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

	//更新资产数据到图表中。
	UpdateEditorGraphFromDialogAsset();

}

//资产数据更新到图表(打开编辑器的时候调用)
void DialogSystemApp::UpdateEditorGraphFromDialogAsset()
{
	//判断保存图表是否不存在
	if(!_WorkingAsset->RuntimeDialogGraph)
	{
		_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
		return;
	}

	//记录所有链接的引脚ID,记录所有引脚ID对应的额引脚
	TArray<std::pair<FGuid,FGuid>> Connections;
	TMap<FGuid,UEdGraphPin*> Map_IdToPin;

	for(auto RuntimeNode:_WorkingAsset->RuntimeDialogGraph->Map_DialogNodeIdToRuntimeNode)
	{
		//创建一个新的节点
		UDialogGraphNodeBase* NewNode = nullptr;
		if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogStartNode)
		{
			NewNode = NewObject<UDialogGraphStartNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogNode)
		{
			NewNode = NewObject<UDialogGraphNode>(_WorkingGraph);
		}else if(RuntimeNode.Value->DialogNodeType == EDialogNodeType::DialogEndNode)
		{
			NewNode = NewObject<UDialogGraphEndNode>(_WorkingGraph);
		}else{UE_LOG(LogTemp,Error,TEXT("DialogSystemApp::UpdateEditorGraphFromDialogAsset::这里保存的资产中的节点不对，没有设置好节点类型"));}

		//设置节点的基本信息
		NewNode->CreateNewGuid();
		NewNode->NodePosX = RuntimeNode.Value->DialogNodePosition.X;
		NewNode->NodePosY = RuntimeNode.Value->DialogNodePosition.Y;
		NewNode->SetRuntimeNodeInfoBase(RuntimeNode.Value->RuntimeDialogNodeInfoBase);

		//判断是否拥有输入引脚
		if(RuntimeNode.Value->InputDialogPin)
		{
			//创建输入引脚
			UEdGraphPin* NewInputPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Input,RuntimeNode.Value->InputDialogPin->DialogPinName);
			NewInputPin->PinId = RuntimeNode.Value->InputDialogPin->DialogPinId;
			Map_IdToPin.Add(NewInputPin->PinId,NewInputPin);
		}
		//循环所有输出引脚
		for(URuntimeDialogPin* OutPin:RuntimeNode.Value->OutputDialogPinArray)
		{
			//创建输出引脚
			UEdGraphPin* NewOutputPin = NewNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,OutPin->DialogPinName);
			NewOutputPin->PinId =OutPin->DialogPinId;
			//判断此引脚是否带有链接
			if(OutPin->Connection)
			{
				Connections.Add(std::make_pair(OutPin->DialogPinId,OutPin->Connection->DialogPinId));
			}
			Map_IdToPin.Add(NewOutputPin->PinId,NewOutputPin);
		}
		_WorkingGraph->AddNode(NewNode,true,true);
	}

	//循环设置所有的引脚链接
	for (std::pair<FGuid,FGuid> Connection : Connections)
	{
		Map_IdToPin[Connection.first]->LinkedTo.Add(Map_IdToPin[Connection.second]);
		Map_IdToPin[Connection.second]->LinkedTo.Add(Map_IdToPin[Connection.first]);
	}
	
}
//图表数据更新到资产（保存资产的时候调用）
void DialogSystemApp::UpdateDialogAssetFromEditorGraph()
{
	if(!_WorkingGraph){return;}
	//获取运行时图表
	URuntimeDialogGraph* RuntimeGraph =NewObject<URuntimeDialogGraph>(_WorkingAsset);

	//记录所有链接的引脚ID,记录所有引脚ID对应的额引脚
	TArray<std::pair<FGuid,FGuid>> Connections;
	TMap<FGuid,URuntimeDialogPin*> Map_IdToPin;

	//获取当前图表中的所有节点
	TArray<UDialogGraphNodeBase*> GraphNodes;
	_WorkingGraph->GetNodesOfClass(GraphNodes);

	for(UDialogGraphNodeBase* GraphNode:GraphNodes)
	{
		//获取运行时的节点数据
		URuntimeDialogNodeInfoBase* RuntimeNodeInfo = GraphNode->GetRuntimeNodeInfoBase();
		if(!RuntimeNodeInfo){continue;}

		//设置运行时节点信息的基础信息
		URuntimeDialogNode* RuntimeDialogNode = NewObject<URuntimeDialogNode>(_WorkingAsset);
		RuntimeDialogNode->DialogNodePosition = FVector2D(GraphNode->NodePosX,GraphNode->NodePosY);
		RuntimeDialogNode->DialogNodeType = GraphNode->GetDialogNodeType();
		RuntimeDialogNode->RuntimeDialogNodeInfoBase = RuntimeNodeInfo;
		
		//循环当前节点中的所有引脚
		for(UEdGraphPin* GraphNodePin:GraphNode->Pins)
		{
			//创建运行时的引脚数据
			URuntimeDialogPin* RuntimeNodePin = NewObject<URuntimeDialogPin>(RuntimeDialogNode);
			RuntimeNodePin->DialogPinId = GraphNodePin->PinId;
			RuntimeNodePin->DialogPinName = GraphNodePin->PinName;
			//判断是否是输入引脚
			if(GraphNodePin->Direction == EEdGraphPinDirection::EGPD_Input)
			{
				RuntimeDialogNode->InputDialogPin = RuntimeNodePin;
			}
			if(GraphNodePin->Direction == EEdGraphPinDirection::EGPD_Output)
			{
				//判断是否带有链接
				if(GraphNodePin->HasAnyConnections())
				{
					//添加链接引脚设置
					Connections.Add(std::make_pair(GraphNodePin->PinId,GraphNodePin->LinkedTo[0]->PinId));
				}
				//添加运行时输出引脚到运行时节点
				RuntimeDialogNode->OutputDialogPinArray.Add(RuntimeNodePin);
			}
			//添加引脚对应关系
			Map_IdToPin.Add(RuntimeNodePin->DialogPinId,RuntimeNodePin);
		}
		//在运行时图表中添加Id对应的节点数据
		RuntimeGraph->Map_DialogNodeIdToRuntimeNode.Add(RuntimeNodeInfo->DialogNodeId,RuntimeDialogNode);
	}
	//设置运行时图表到资产中。
	_WorkingAsset->RuntimeDialogGraph = RuntimeGraph;

	//循环设置所有的引脚链接,设置链接对象。
	for (std::pair<FGuid,FGuid> Connection : Connections)
	{
		Map_IdToPin[Connection.first]->Connection = Map_IdToPin[Connection.second];
	}
}

void DialogSystemApp::SetWorkingDetailsView(TSharedPtr<IDetailsView> WorkingDetailsView)
{
	_WorkingDetailsView = WorkingDetailsView;
	//TODO::这里是属性窗口设置的位置
	_WorkingDetailsView->OnFinishedChangingProperties().AddRaw(this,&DialogSystemApp::OnPropertiesChanged);
}

void DialogSystemApp::SetWorkingGraphEditor(TSharedPtr<SGraphEditor> WorkingGraphEditor)
{
	_WorkingGraphEditor = WorkingGraphEditor;
	//通知图表发生改变
	_WorkingGraphEditor->NotifyGraphChanged();
}
