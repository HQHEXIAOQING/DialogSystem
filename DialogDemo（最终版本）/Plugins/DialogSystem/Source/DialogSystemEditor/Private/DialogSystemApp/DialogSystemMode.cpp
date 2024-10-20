#include "DialogSystemApp/DialogSystemMode.h"
#include "DialogSystemApp/DialogSystemApp.h"
#include "DialogSystemApp/DialogAssetPrimaryTab/DialogAssetPrimaryTabFactory.h"
#include "DialogSystemApp/DialogAssetPropertiesTab/DialogAssetPropertiesTabFactory.h"

DialogSystemMode::DialogSystemMode(TSharedPtr<DialogSystemApp> app):
FApplicationMode("DialogSystemApp")
{
	_app = app;
	//注册自定义的选项卡。
	_tabs.RegisterFactory(MakeShareable(new DialogAssetPrimaryTabFactory(app)));
	_tabs.RegisterFactory(MakeShareable(new DialogAssetPropertiesTabFactory(app)));
	
	//视口中设置自定义选项卡的布局
	TabLayout = FTabManager::NewLayout("DialogSystemApp_Layout_V1")
	->AddArea(
		FTabManager::NewPrimaryArea()
		->SetOrientation(Orient_Vertical)
		->Split(
			FTabManager::NewSplitter()
			->SetOrientation(Orient_Horizontal)
			->Split(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.75)
				->AddTab("DialogPrimaryTab",ETabState::OpenedTab)
			)
			->Split(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.25)
				->AddTab("DialogPropertiesTab",ETabState::OpenedTab)
			)
		)
	);
	
}

void DialogSystemMode::RegisterTabFactories(TSharedPtr<FTabManager> inTabManager)
{
	//FApplicationMode::RegisterTabFactories(inTabManager);

	TSharedPtr<DialogSystemApp> app = _app.Pin();
	app->PushTabFactories(_tabs);
	FApplicationMode::RegisterTabFactories(inTabManager);
}

void DialogSystemMode::PreDeactivateMode()
{
	FApplicationMode::PreDeactivateMode();
}

void DialogSystemMode::PostActivateMode()
{
	FApplicationMode::PostActivateMode();
}
