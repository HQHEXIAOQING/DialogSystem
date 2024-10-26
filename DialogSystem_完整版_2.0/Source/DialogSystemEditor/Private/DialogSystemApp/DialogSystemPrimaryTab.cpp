#include "DialogSystemApp/DialogSystemPrimaryTab.h"
#include "DialogSystemApp/DialogSystemApp.h"

DialogSystemPrimaryTab::DialogSystemPrimaryTab(TSharedPtr<DialogSystemApp> App):
FWorkflowTabFactory("DialogSystemAppPrimaryTab",App)
{
	//设置App的引用
	_App = App;
	//选项卡的基本设置
	TabLabel = FText::FromString(TEXT("主视口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个主视口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示主视口"));
}

TSharedRef<SWidget> DialogSystemPrimaryTab::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{

	TSharedPtr<DialogSystemApp> App = _App.Pin();
	SGraphEditor::FGraphEditorEvents GraphEvents;
	GraphEvents.OnSelectionChanged.BindRaw(App.Get(),&DialogSystemApp::OnGraphNodeSelectionChanged);

	
	//创建一个图表的视口。
	TSharedPtr<SGraphEditor> GraphEdtior
	=SNew(SGraphEditor)
		.IsEditable(true)//是否可以编辑
		.GraphEvents(GraphEvents)
		.GraphToEdit(App->GetWorkingGraph());//设置当前创建的图表视口正在编辑的图表对象。
	//设置App中对视口的引用。
	App->SetWorkingGraphEditor(GraphEdtior);
	//返回创建一个带有图表的窗口
	return SNew(SVerticalBox)+SVerticalBox::Slot().FillHeight(1.0f).HAlign(HAlign_Fill)[GraphEdtior.ToSharedRef()];
}

FText DialogSystemPrimaryTab::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const
{
	return FText::FromString(TEXT("主视口"));
}
