#include "DialogSystemApp/DialogSystemApp.h"

#include "DDSFile.h"
#include "DialogAsset/DialogAsset.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphNodeBase.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphSchema.h"
#include "Interfaces/IHttpResponse.h"
#include "Kismet2/BlueprintEditorUtils.h"

void DialogSystemApp::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit)
{
	//创建数组类型的对象
	TArray<UObject*> ObjectsToEdit;
	ObjectsToEdit.Add( ObjectToEdit );

	//添加操作资产
	_WorkingAsset =Cast<UDialogAsset>(ObjectToEdit);
	//_WorkingAsset->SetPreSaveListener([this](){OnWorkingAssetPreSave();});

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

}

//图表发生变化时调用
void DialogSystemApp::OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection)
{
	//设置图表发生变化时调用的事件
	UDialogGraphNodeBase* SelectedNode = GetSelectedNode(selection);
	if (SelectedNode){_SelectedDetailsView->SetObject(SelectedNode->GetNodeInfoBase());}
	else{_SelectedDetailsView->SetObject(nullptr);}
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

//获取当前选择的节点
UDialogGraphNodeBase* DialogSystemApp::GetSelectedNode(const FGraphPanelSelectionSet& Selection)
{
	// 判断选择是否为一个！
	if(Selection.Num() == 1)
	{
		UDialogGraphNodeBase* DialogNode = Cast<UDialogGraphNodeBase>(Selection.Array()[0]);
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
