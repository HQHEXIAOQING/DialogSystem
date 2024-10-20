#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/ApplicationMode.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"

class DialogSystemApp;

class DialogSystemMode:public FApplicationMode
{
public:
	DialogSystemMode(TSharedPtr<DialogSystemApp> app);

	//重载父类函数
	virtual void RegisterTabFactories(TSharedPtr<FTabManager> inTabManager) override;//注册选项卡
	virtual void PreDeactivateMode() override;
	virtual void PostActivateMode() override;

private:
	TWeakPtr<DialogSystemApp> _app;
	FWorkflowAllowedTabSet _tabs;//选项卡列表



	
};
