#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowTabFactory.h"

class DialogSystemApp;

class DialogAssetPropertiesTabFactory:public FWorkflowTabFactory
{
public:
	DialogAssetPropertiesTabFactory(TSharedPtr<DialogSystemApp> app);

	//重载函数
	virtual TSharedRef<SWidget> CreateTabBody(const FWorkflowTabSpawnInfo& info) const override;
	virtual FText GetTabToolTipText(const FWorkflowTabSpawnInfo& info) const override;

private:
	TWeakPtr<DialogSystemApp> _app;

};
