#include "DialogSystemApp/DialogSystemAppMode.h"
#include "DialogSystemApp/DialogSystemApp.h"
#include "DialogSystemApp/DialogSystemPrimaryTab.h"
#include "DialogSystemApp/DialogSystemPropertiesTab.h"

DialogSystemAppMode::DialogSystemAppMode(TSharedPtr<DialogSystemApp> App):
FApplicationMode("DialogSystemAppMode")
{
	//设置App
	_App = App;

	//TODO::注册选项卡的位置
	//注册一个主视口选项卡
	_Tabs.RegisterFactory(MakeShareable(new DialogSystemPrimaryTab(App)));
	_Tabs.RegisterFactory(MakeShareable(new DialogSystemPropertiesTab(App)));

	//创建一个默认布局。
	TabLayout = FTabManager::NewLayout("DialogSystemApp_Layout_V3")
	->AddArea(
		FTabManager::NewPrimaryArea()
		->SetOrientation(Orient_Vertical)
		//添加一个水平框
		->Split(FTabManager::NewSplitter()
			->SetOrientation(Orient_Horizontal)
			//添加水平框中左边的位置为主视口
			->Split(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.75)
				->AddTab("DialogSystemAppPrimaryTab",ETabState::OpenedTab)
			)
			//添加水平框中右边的位置为属性窗口
			->Split(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.25)
				->AddTab("DialogSystemPropertiesTab",ETabState::OpenedTab))));
}

void DialogSystemAppMode::RegisterTabFactories(TSharedPtr<FTabManager> InTabManager)
{
	//获取当前模式下的App，并推送我们自定义的选项卡设置。
	TSharedPtr<DialogSystemApp> App = _App.Pin();
	App->PushTabFactories(_Tabs);
	FApplicationMode::RegisterTabFactories(InTabManager);
}

void DialogSystemAppMode::PreDeactivateMode()
{
	FApplicationMode::PreDeactivateMode();
}

void DialogSystemAppMode::PostActivateMode()
{
	FApplicationMode::PostActivateMode();
}
