#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"

class DialogSystemApp;

class DialogAssetPrimaryTabFactory:public FWorkflowTabFactory
{
public:
	DialogAssetPrimaryTabFactory(TSharedPtr<DialogSystemApp> app);

	//重载函数
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& info) const override;
	virtual FText GetTabToolTipText(const FWorkflowTabSpawnInfo& info) const override;

private:
	TWeakPtr<DialogSystemApp> _app;

};
