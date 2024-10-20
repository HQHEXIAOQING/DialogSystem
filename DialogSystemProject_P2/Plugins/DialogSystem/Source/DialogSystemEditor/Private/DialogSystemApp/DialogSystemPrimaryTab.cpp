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
	return SNew(STextBlock).Text(FText::FromString(TEXT("这里打开了一个主要的视口！")));
}

FText DialogSystemPrimaryTab::GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const
{
	return FText::FromString(TEXT("主视口"));
}
