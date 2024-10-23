#include "DialogSystemApp/DialogSystemApp.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogAsset/RuntimeDialogGraph.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
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

	//创建操作图表
	_WorkingGraph = FBlueprintEditorUtils::CreateNewGraph(
		_WorkingAsset,
		NAME_None,
		UEdGraph::StaticClass(),
		UDialogGraphSchema::StaticClass()
		);
	//TODO::创建默认节点，图表存储做好后，这里需要修改掉。
	_WorkingGraph->GetSchema()->CreateDefaultNodesForGraph(*_WorkingGraph);
	
	
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

}

void DialogSystemApp::SetWorkingDetailsView(TSharedPtr<IDetailsView> WorkingDetailsView)
{
	_WorkingDetailsView = WorkingDetailsView;
	//TODO::这里是属性窗口设置的位置
}

void DialogSystemApp::SetWorkingGraphEditor(TSharedPtr<SGraphEditor> WorkingGraphEditor)
{
	_WorkingGraphEditor = WorkingGraphEditor;
	if(_WorkingAsset->RuntimeDialogGraph)
	{
		//TODO::这里我们图表存在的话，应该要进行对图表数据的加载。
	}
	else
	{
		_WorkingAsset->RuntimeDialogGraph = NewObject<URuntimeDialogGraph>(_WorkingAsset);
	}
	//通知图表发生改变
	_WorkingGraphEditor->NotifyGraphChanged();
}
