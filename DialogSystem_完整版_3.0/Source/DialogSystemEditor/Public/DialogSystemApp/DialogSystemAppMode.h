#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/ApplicationMode.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"

class DialogSystemApp;

class DialogSystemAppMode: public FApplicationMode
{
public:
	DialogSystemAppMode(TSharedPtr<DialogSystemApp> App);

	//*************************************************
	//重载父类函数
	//注册选项卡
	virtual void RegisterTabFactories(TSharedPtr<FTabManager> InTabManager) override;
	//禁用模式前调用
	virtual void PreDeactivateMode() override;
	//激活模式后调用
	virtual void PostActivateMode() override;

private:
	//对话编辑器App
	TWeakPtr<DialogSystemApp> _App;
	//此模式下所有的选项卡。
	FWorkflowAllowedTabSet _Tabs;
	
};
