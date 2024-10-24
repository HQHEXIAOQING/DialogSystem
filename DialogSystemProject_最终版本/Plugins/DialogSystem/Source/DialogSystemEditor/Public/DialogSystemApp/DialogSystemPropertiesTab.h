#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"


class DialogSystemApp;
class DialogSystemPropertiesTab:public FWorkflowTabFactory
{
public:
	DialogSystemPropertiesTab(TSharedPtr<DialogSystemApp> App);

	//************************************************
	//重载函数
	
	//创建选项卡主体
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& Info) const override;
	//选项卡提示
	virtual FText GetTabToolTipText(const FWorkflowTabSpawnInfo& Info) const override;
 
private:
	TWeakPtr<DialogSystemApp> _App;
};
