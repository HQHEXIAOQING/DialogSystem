#include "DialogSystemApp/DialogSystemPropertiesTabFactory.h"
#include "DialogSystemApp/DialogSystemApp.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"
#include "DialogAsset/DialogAsset.h"

DialogSystemPropertiesTabFactory::DialogSystemPropertiesTabFactory(TSharedPtr<DialogSystemApp> App):
FWorkflowTabFactory("DialogSystemPropertiesTab",App)
{
	//设置App的引用
	_App = App;
	//选项卡的基本设置
	TabLabel = FText::FromString(TEXT("属性窗口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个属性窗口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示属性视口"));
}

TSharedRef<SWidget> DialogSystemPropertiesTabFactory::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{

	TSharedPtr<DialogSystemApp> App = _App.Pin();
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.bHideSelectionTip = true;
	DetailsViewArgs.bLockable = false;
	DetailsViewArgs.bSearchInitialKeyFocus = true;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.bShowOptions = true;
	DetailsViewArgs.bShowModifiedPropertiesOption = false;
	DetailsViewArgs.bShowScrollBar = false;
	DetailsViewArgs.NotifyHook = nullptr;

	TSharedPtr<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObject(App->GetWorkingAsset());
	//TODO::这里还有一个属性窗口，还没有做！
	TSharedPtr<IDetailsView> SelectedDetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	SelectedDetailsView->SetObject(nullptr);
	App->SetSelectedNodeDetailView(SelectedDetailsView);

	
	return SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.FillHeight(1.0f)
		.HAlign(HAlign_Fill)
		[
			DetailsView.ToSharedRef()
		]
		+SVerticalBox::Slot()
		.FillHeight(1.0f)
		.HAlign(HAlign_Fill)
		[
			SelectedDetailsView.ToSharedRef()
		];

	//return SNew(STextBlock).Text(FText::FromString(TEXT("这里打开了一个主要的视口！")));
}

FText DialogSystemPropertiesTabFactory::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const
{
	return FText::FromString(TEXT("属性窗口"));
}
