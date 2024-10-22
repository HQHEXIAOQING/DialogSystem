#include "DialogSystemApp/DialogSystemApp.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "Kismet2/BlueprintEditorUtils.h"

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
