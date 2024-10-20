#include "DialogSystemApp/DialogSystemApp.h"
#include "BlueprintEditor.h"
#include "DialogSystemApp/DialogSystemMode.h"
#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfo.h"
#include "DialogGraph/DialogGraphNode/DialogGraphNode.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "DialogGraph/DialogGraphSchema.h"
#include "DialogGraphRuntime/DialogRuntimeGraph.h"
#include "DialogGraph/DialogGraphNode/DialogStartGraphNode.h"
#include "DialogGraph/DialogGraphNode/DialogGraphEndNode.h"

DEFINE_LOG_CATEGORY_STATIC(DialogSystemAppLog, Log, All)

void DialogSystemApp::RegisterTabSpawners(const TSharedRef<FTabManager>& tabManager)
{
	FWorkflowCentricApplication::RegisterTabSpawners(tabManager);
}

void DialogSystemApp::InitEditor(const EToolkitMode::Type mode, const TSharedPtr<class IToolkitHost>& initToolkitHost,
	UObject* inObject)
{
	TArray<UObject*> objectsToEdit;
	objectsToEdit.Add(inObject);

	//添加操作资产的位置  
	_workingAsset =Cast<UDialogAsset>(inObject);
	_workingAsset->SetPreSaveListener([this](){OnWorkingAssetPreSave();});
	
	_workingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_workingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UDialogGraphSchema::StaticClass()
	);
	
	//父类中实现的编辑器初始化内容
	InitAssetEditor(
		mode,
		initToolkitHost,
		"DialogSystemApp",
		FTabManager::FLayout::NullLayout,
		true,//创建默认独立菜单  
		true,//创建默认工具栏
		objectsToEdit
	);

	//添加App的模式。
	AddApplicationMode("DialogSystemMode",MakeShareable(new DialogSystemMode(SharedThis(this))));
	//设置模式。
	SetCurrentMode("DialogSystemMode");
	//从资产更新图表
	UpdateEditorGraphFromWorkingAsset();
	//添加图表数据发生变化时的绑定事件。
	//_graphChangeListenerHandle =_workingGraph->AddOnGraphChangedHandler(FOnGraphChanged::FDelegate::CreateSP(this,&DialogSystemApp::OnGraphChanged));
	
}

void DialogSystemApp::SetSelectedNodeDetailView(TSharedPtr<IDetailsView> detailsView)
{
	_selectedDetailsView = detailsView;
	_selectedDetailsView->OnFinishedChangingProperties().AddRaw(this,&DialogSystemApp::OnNodeDetailViewPropertyUpdate);
}

void DialogSystemApp::OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection)
{
	/*
	for (UObject* obj:selection)
	{
		UDialogGraphNode* node =Cast<UDialogGraphNode>(obj);
		if (node)
		{
			_selectedDetailsView->SetObject(node->GetNodeInfo());
			return;
		}
	}
	*/
	UDialogGraphNodeBase* selectedNode = GetSelectedNode(selection);
	if(selectedNode){_selectedDetailsView->SetObject(selectedNode->GetNodeInfo());}
	else{_selectedDetailsView->SetObject(nullptr);}

}

void DialogSystemApp::OnClose()
{
	UpdateWorkingAssetFromGraph();
	//_workingGraph->RemoveOnGraphChangedHandler(_graphChangeListenerHandle);
	_workingAsset->SetPreSaveListener(nullptr);
	FWorkflowCentricApplication::OnClose();
}

void DialogSystemApp::OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& event)
{
	if(_workingGraphUi!= nullptr)
	{
		UDialogGraphNodeBase* dialogNode = GetSelectedNode(_workingGraphUi->GetSelectedNodes());
		if(dialogNode){dialogNode->OnProrpertiesChanged();}
		_workingGraphUi->NotifyGraphChanged();
	}
}

void DialogSystemApp::OnWorkingAssetPreSave()
{
	//更新图表在保存前进行。
	UpdateWorkingAssetFromGraph();
}

//从图表更新资产。也就是把当前图表的数据保存到创建的运行时数据中。（保存时调用。）
void DialogSystemApp::UpdateWorkingAssetFromGraph()
{
	//UE_LOG(LogTemp,Error,TEXT("更新数据到图表中"));
	if(_workingAsset==nullptr||_workingGraph==nullptr)return;

	UDialogRuntimeGraph* runtimeGraph = NewObject<UDialogRuntimeGraph>(_workingAsset);
	_workingAsset->Graph = runtimeGraph;

	//创建一个ID对应一个ID的链接
	TArray<std::pair<FGuid,FGuid>> connections;
	//创建一个ID对应一个引脚的链接。
	TMap<FGuid,UDialogRuntimePin*> idToPinMao;

	//循环获取当前编辑器图表中所有的节点
	for(UEdGraphNode* uiNode:_workingGraph->Nodes)
	{
		//判断当前节点是否是对话节点，如果不是就直接跳出
		//UDialogGraphNode* uiGraphNode = Cast<UDialogGraphNode>(uiNode);
		//if(!uiGraphNode){continue;}

		//每一次循环创建一个新的运行时节点数据，记录此节点所在位置，设置节点信息。
		UDialogRuntimeNode* runtimeNode = NewObject<UDialogRuntimeNode>(runtimeGraph);
		runtimeNode->Position = FVector2D(uiNode->NodePosX, uiNode->NodePosY);
		//runtimeNode->NodeInfo = uiGraphNode->GetNodeInfo();
		
		//循环此节点中所有的引脚
		for(UEdGraphPin* uiPin:uiNode->Pins)
		{
			//每一个引脚再创建运行时的引脚数据，设置ID和Name。
			UDialogRuntimePin* runtimePin = NewObject<UDialogRuntimePin>(runtimeGraph);
			runtimePin->PinName = uiPin->PinName;
			runtimePin->PinID = uiPin->PinId;

			//判断是否拥有链接，判断当前的引脚是否为输出，如果都为真，那么就进入
			if(uiPin->HasAnyConnections()&&uiPin->Direction == EEdGraphPinDirection::EGPD_Output)
			{
				//TODO::当前设置为一个输入引脚对应一个输出引脚，所以这里记录只需要拿第一个位置的引脚ID做保存就可以了。之后可以过来修改这里的逻辑。
				//在当前框架下，每个输出引脚只会对应一个输入接口，所以这里添加链接关系时只需要默认获取引脚下第一个链接对象就可以了
				std::pair<FGuid,FGuid> connection = std::make_pair(uiPin->PinId,uiPin->LinkedTo[0]->PinId);
				connections.Add(connection);
				/*
				 *循环获取所有的额链接到的节点，添加对应ID
				for(UEdGraphPin* inputPin:uiPin->LinkedTo)
				{
					std::pair<FGuid,FGuid> connection = std::make_pair(uiPin->PinId,inputPin->PinId);
					connections.Add(connection);
				}
				 */
			}
			//添加这个引脚到TMap中。
			idToPinMao.Add(uiPin->PinId,runtimePin);
			//此循环中判断引脚是否为输入引脚，为真则进入
			if(uiPin->Direction == EEdGraphPinDirection::EGPD_Input)
			{
				//设置当前运行时引脚数据中的输入引脚。
				runtimeNode->InputPin = runtimePin;
			}
			else
			{
				//否则添加到输出引脚组中。
				runtimeNode->OutputPins.Add(runtimePin);
			}
		}
		/*
		//判断uiNode的类型是否是对话节点，为真，进入
		if(uiNode->IsA(UDialogGraphNode::StaticClass()))
		{
			//装换此节点为对话节点，并设置节点信息和节点类型
			UDialogGraphNode* uiGraphNode = Cast<UDialogGraphNode>(uiNode);
			runtimeNode->NodeType =EDialogNodeType::DialogNode;
			runtimeNode->NodeInfo = uiGraphNode->GetNodeInfo();
		}
		//判断UiNode是否是开始节点，为真，进入
		if(uiNode->IsA(UDialogStartGraphNode::StaticClass()))
		{
			//设置节点类型为开始节点。
			runtimeNode->NodeType = EDialogNodeType::StartNode;
		}
		*/
		
		UDialogGraphNodeBase* uiDialogNode = Cast<UDialogGraphNodeBase>(uiNode);
		runtimeNode->NodeInfo = DuplicateObject(uiDialogNode->GetNodeInfo(),runtimeNode);
		runtimeNode->NodeType =uiDialogNode->GetDialogNodeType();
		//在这个节点循环中，添加此运行时节点数据到运行时图表数据中。
		runtimeGraph->Nodes.Add(runtimeNode);
	}

	//循环当前记录的所有输出引脚的对应关系
	for(std::pair<FGuid,FGuid> connection:connections)
	{
		//在Map中获取第一个引脚和第二个引脚的运行数据。
		UDialogRuntimePin* pin1 = idToPinMao[connection.first];
		UDialogRuntimePin* pin2 = idToPinMao[connection.second];
		//设置pin1运行时引脚数据中的链接数据为pin2
		pin1->Connection = pin2;
	}
	
}

//从资产更新图表,也就是把存储起来的运行时资产数据取出来设置给当前图表（打开编辑器的时候调用）。
void DialogSystemApp::UpdateEditorGraphFromWorkingAsset()
{
	//判断保存资产中的图表是否存在，如果不存在就不需要更新数据,需要创建默认节点。
	if(_workingAsset->Graph == nullptr)
	{
		_workingGraph->GetSchema()->CreateDefaultNodesForGraph(*_workingGraph);
		return;
	}

	//创建一个引脚对引脚的数组，创建一个ID对应一个节点的Map
	TArray<std::pair<FGuid,FGuid>> connections;
	TMap<FGuid,UEdGraphPin*> idToPinMap;

	//循环所有运行时节点数据，数据来源于工作资产中保存的图表数据中的所有节点。
	for(UDialogRuntimeNode* runtimeNode:_workingAsset->Graph->Nodes)
	{
		//创建一个编辑器节点，把编辑器图表传递过去并设置此节点在编辑器中的位置。
		//UDialogGraphNode* newNode = NewObject<UDialogGraphNode>(_workingGraph);

		//判断节点类型，进行不同的设置
		UDialogGraphNodeBase* newNode = nullptr;
		if(runtimeNode->NodeType == EDialogNodeType::StartNode)
		{
			newNode = NewObject<UDialogStartGraphNode>(_workingGraph);
		}else if(runtimeNode->NodeType == EDialogNodeType::DialogNode)
		{
			newNode = NewObject<UDialogGraphNode>(_workingGraph);
		}
		else if(runtimeNode->NodeType == EDialogNodeType::EndNode)
		{
			newNode = NewObject<UDialogGraphEndNode>(_workingGraph);
		}
		else
		{
			UE_LOG(DialogSystemAppLog,Error,TEXT("DialogSystemApp::UpdateEditorGraphFromWorkingAsset::没有结束节点的信息"));
			continue;
		}

		//基本设置
		newNode->CreateNewGuid();
		newNode->NodePosX = runtimeNode->Position.X;
		newNode->NodePosY = runtimeNode->Position.Y;

		//判断节点信息是否存在，
		if(runtimeNode->NodeInfo!=nullptr)
		{
			//存在就设置当前节点中的节点信息为复制当前运行节点中保存的NodeInfo数据（这里为复制属性，不是指针引用。）第二个变量为当前复制体的周期跟随第二个变量的周期。
			newNode->SetNodeInfo(DuplicateObject(runtimeNode->NodeInfo,runtimeNode));
		}
		else
		{
			//如果不存在就创建一个节点数据。
			//newNode->SetNodeInfo(NewObject<UDialogNodeInfo>(runtimeNode));
			//TODO::这里去除掉了开始节点的信息添加，如果需要在开始信息中添加内容，可以在这个位置修改！
			newNode->InitNodeInfo(newNode);
		}
		
		//判断当前循环中的节点是否有输入引脚。为真，则进入
		if(runtimeNode->InputPin !=nullptr)
		{
			//创建一个运行时的引脚数据
			UDialogRuntimePin* runtimePin = runtimeNode->InputPin;
			//创建一个编辑器的引脚数据，并设置编辑器引脚中的ID。
			UEdGraphPin* uiPin =newNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Input,runtimePin->PinName);
			uiPin->PinId = runtimePin->PinID;
			//判断运行时的输入引脚是否有关联的输出节点
			if(runtimePin->Connection!=nullptr)
			{
				//在引脚关联组中添加两个节点的关联信息。
				connections.Add(std::make_pair(runtimePin->PinID,runtimePin->Connection->PinID));
			}
			//添加此引脚到Map中
			idToPinMap.Add(runtimePin->PinID,uiPin);
		}

		//循环当前节点中的所有输出引脚
		for(UDialogRuntimePin* pin:runtimeNode->OutputPins)
		{
			//创建一个输出引脚并设置ID
			UEdGraphPin* uiPin = newNode->CreateDialogPin(EEdGraphPinDirection::EGPD_Output,pin->PinName);
			uiPin->PinId = pin->PinID;

			//判断输出引脚是否带有关联对象
			if(pin->Connection!=nullptr)
			{
				///在引脚关联组中添加两个节点的关联信息。
				connections.Add(std::make_pair(pin->PinID,pin->Connection->PinID));
			}
			//添加此引脚到Map中
			idToPinMap.Add(pin->PinID,uiPin);
		}
		//在工作图表中添加这个节点
		_workingGraph->AddNode(newNode,true,true);
	}

	//循环保存的所有引脚关系，并进行链接
	for(std::pair<FGuid,FGuid> connection:connections)
	{
		UEdGraphPin* fromPin = idToPinMap[connection.first];
		UEdGraphPin* toPin = idToPinMap[connection.second];
		fromPin->LinkedTo.Add(toPin);
		toPin->LinkedTo.Add(fromPin);
	}
}

//返回选择的节点，如果没有，就返空。
UDialogGraphNodeBase* DialogSystemApp::GetSelectedNode(const FGraphPanelSelectionSet& selection)
{
	for (UObject* obj:selection)
	{
		UDialogGraphNodeBase* node =Cast<UDialogGraphNodeBase>(obj);
		if (node){return node;}
	}
	return nullptr;
}















