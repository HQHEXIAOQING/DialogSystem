#include "DialogSystemApp/DialogAssetPropertiesTab/DialogAssetPropertiesTabFactory.h"
#include "DialogSystemApp/DialogSystemApp.h"
#include "DialogAsset/DialogAsset.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"

//构造设置
DialogAssetPropertiesTabFactory::DialogAssetPropertiesTabFactory(TSharedPtr<DialogSystemApp> app):
FWorkflowTabFactory(FName("DialogPropertiesTab"),app)
{
	_app = app;
	TabLabel = FText::FromString(TEXT("属性窗口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个属性视口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示属性视口"));
}

TSharedRef<SWidget> DialogAssetPropertiesTabFactory::CreateTabBody(const FWorkflowTabSpawnInfo& info) const
{
	//return FWorkflowTabFactory::CreateTabBody(info);
	//return SNew(STextBlock).Text(FText::FromString(TEXT("打开了一个窗口！")));

	TSharedPtr<DialogSystemApp> app = _app.Pin();
	FPropertyEditorModule& propertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	
	FDetailsViewArgs detailsViewArgs;
	detailsViewArgs.bAllowSearch = true;
	detailsViewArgs.bHideSelectionTip = true;
	detailsViewArgs.bLockable = false;
	detailsViewArgs.bSearchInitialKeyFocus = true;
	detailsViewArgs.bUpdatesFromSelection = false;
	detailsViewArgs.bShowOptions = true;
	detailsViewArgs.bShowModifiedPropertiesOption = false;
	detailsViewArgs.bShowScrollBar = false;
	
	//属性发生变化时的通知句柄
	detailsViewArgs.NotifyHook = nullptr;

	TSharedPtr<IDetailsView> detailsView = propertyEditorModule.CreateDetailView(detailsViewArgs);
	detailsView->SetObject(app->GetWorkingAsset());
	TSharedPtr<IDetailsView> selectedDetailsView = propertyEditorModule.CreateDetailView(detailsViewArgs);
	selectedDetailsView->SetObject(nullptr);
	app->SetSelectedNodeDetailView(selectedDetailsView);

	return SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.FillHeight(1.0f)
			.HAlign(HAlign_Fill)
			[
				detailsView.ToSharedRef()
			]
			+SVerticalBox::Slot()
			.FillHeight(1.0f)
			.HAlign(HAlign_Fill)
			[
				selectedDetailsView.ToSharedRef()
			];
	
}

FText DialogAssetPropertiesTabFactory::GetTabToolTipText(const FWorkflowTabSpawnInfo& info) const
{
	//return FWorkflowTabFactory::GetTabToolTipText(info);
	return FText::FromString(TEXT("属性窗口"));
}
