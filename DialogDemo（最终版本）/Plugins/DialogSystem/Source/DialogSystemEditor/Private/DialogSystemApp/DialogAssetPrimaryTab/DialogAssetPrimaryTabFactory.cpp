#include "DialogSystemApp/DialogAssetPrimaryTab/DialogAssetPrimaryTabFactory.h"
#include "DialogSystemApp/DialogSystemApp.h"
#include "DialogAsset/DialogAsset.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"
#include "GraphEditor.h"
#include "Editor/UnrealEd/Public/Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"

//构造设置
DialogAssetPrimaryTabFactory::DialogAssetPrimaryTabFactory(TSharedPtr<DialogSystemApp> app):
FWorkflowTabFactory(FName("DialogPrimaryTab"),app)
{
	_app = app;
	TabLabel = FText::FromString(TEXT("主视口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个主要视口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示主要视口"));
}

TSharedRef<SWidget> DialogAssetPrimaryTabFactory::CreateTabBody(const FWorkflowTabSpawnInfo& info) const
{
	//return FWorkflowTabFactory::CreateTabBody(info);
	//return SNew(STextBlock).Text(FText::FromString(TEXT("打开了一个窗口！")));

	TSharedPtr<DialogSystemApp> app = _app.Pin();
	SGraphEditor::FGraphEditorEvents graphEvents;
	graphEvents.OnSelectionChanged.BindRaw(app.Get(),&DialogSystemApp::OnGraphSelectionChanged);
	
	TSharedPtr<SGraphEditor> graphEditor =
		SNew(SGraphEditor)
		.IsEditable(true)
		.GraphEvents(graphEvents)
		.GraphToEdit(app->GetWorkingGraph());
	app->SetWorkingGraphUi(graphEditor);
	
	return SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.FillHeight(1.0f)
		.HAlign(HAlign_Fill)
		[
			graphEditor.ToSharedRef()
		]
		;
	
}

FText DialogAssetPrimaryTabFactory::GetTabToolTipText(const FWorkflowTabSpawnInfo& info) const
{
	//return FWorkflowTabFactory::GetTabToolTipText(info);
	return FText::FromString(TEXT("主要的编辑窗口"));
}
