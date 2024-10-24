#include "DialogSystemApp/DialogSystemPropertiesTab.h"

#include "DialogAsset/DialogAsset.h"
#include "DialogSystemApp/DialogSystemApp.h"

DialogSystemPropertiesTab::DialogSystemPropertiesTab(TSharedPtr<DialogSystemApp> App):
FWorkflowTabFactory("DialogSystemPropertiesTab",App)
{
	//设置App的引用
	_App = App;
	//选项卡的基本设置
	TabLabel = FText::FromString(TEXT("属性窗口"));
	ViewMenuDescription = FText::FromString(TEXT("打开一个属性窗口"));
	ViewMenuTooltip = FText::FromString(TEXT("显示属性窗口"));
}

TSharedRef<SWidget> DialogSystemPropertiesTab::CreateTabBody(const FWorkflowTabSpawnInfo& Info) const
{
	//获取我们的App
	TSharedPtr<DialogSystemApp> App = _App.Pin();

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	//创建属性视口参数
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.bAllowSearch = true;
	DetailsViewArgs.bHideSelectionTip = true;
	DetailsViewArgs.bLockable = false;
	DetailsViewArgs.bSearchInitialKeyFocus = true;
	DetailsViewArgs.bUpdatesFromSelection = false;
	DetailsViewArgs.bShowScrollBar = false;
	DetailsViewArgs.bShowOptions = true;
	DetailsViewArgs.bShowModifiedPropertiesOption = false;
	//属性通知句柄.
	DetailsViewArgs.NotifyHook = nullptr;
	
	//创建对话资产属性视口和创建节点选择的属性视口
	TSharedPtr<IDetailsView> DialogAssetDetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DialogAssetDetailsView->SetObject(App->GetWorkingAsset());
	TSharedPtr<IDetailsView> DialogNodeDetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DialogNodeDetailsView->SetObject(nullptr);
	//设置App中对工作属性窗口的引用
	App->SetWorkingDetailsView(DialogNodeDetailsView);
	
	//TODO::这里需要设置选择的节点的属性信息。（还没有填写，等之后创建好节点相关属性后添加！）
	
	return SNew(SVerticalBox)
		//添加一个插槽，放置我们的DialogAsset属性窗口
		+SVerticalBox::Slot().FillHeight(1.0f).HAlign(HAlign_Fill)[DialogAssetDetailsView.ToSharedRef()]
		//添加节点对应的属性窗口
		+SVerticalBox::Slot().FillHeight(1.0f).HAlign(HAlign_Fill)[DialogNodeDetailsView.ToSharedRef()];
}

FText DialogSystemPropertiesTab::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const
{
	return FText::FromString(TEXT("属性窗口"));
}
