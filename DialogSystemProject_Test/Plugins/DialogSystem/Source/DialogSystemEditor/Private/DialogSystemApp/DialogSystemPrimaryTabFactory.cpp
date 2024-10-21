#include "DialogSystemApp/DialogSystemPrimaryTabFactory.h"
#include "DialogSystemApp/DialogSystemApp.h"

DialogSystemPrimaryTabFactory::DialogSystemPrimaryTabFactory(TSharedPtr<DialogSystemApp> App):
FWorkflowTabFactory("DialogSystemAppPrimaryTab",App)
{
	//设置App的引用
	_App = App;
	//选项卡的基本设置
	TabLabel = FText::FromString(TEXT("主视口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个主视口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示主视口"));
}

TSharedRef<SWidget> DialogSystemPrimaryTabFactory::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{

	TSharedPtr<DialogSystemApp> App = _App.Pin();
	SGraphEditor::FGraphEditorEvents GraphEvents;
	GraphEvents.OnSelectionChanged.BindRaw(App.Get(),&DialogSystemApp::OnGraphSelectionChanged);

	TSharedPtr<SGraphEditor> GraphEditor =
	SNew(SGraphEditor)
	.IsEditable(true)
	.GraphEvents(GraphEvents)
	.GraphToEdit(App->GetWorkingGraph());
	//设置App中的图表
	App->SetWorkingGraphUi(GraphEditor);
	
	return SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.FillHeight(1.0f)
		.HAlign(HAlign_Fill)
		[
			GraphEditor.ToSharedRef()
		];
}

FText DialogSystemPrimaryTabFactory::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const
{
	return FText::FromString(TEXT("主视口"));
}
