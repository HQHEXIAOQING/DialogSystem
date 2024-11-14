#pragma once
#include "TaskAsset/TaskNodeEffectorBase.h"
#include "TaskEffector_PrintText.generated.h"
//任务效果器的使用
UCLASS(DisplayName="打印文本")
class DIALOGSYSTEM_API UTaskEffector_PrintText: public UTaskEffectorBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="打印文本",Category="TaskEffector_PrintText")
	FText TaskText;
	
	//效果触发
	virtual void TaskEffectorPlay(UTaskAsset* SettingTaskAsset) override
	{
		GEngine->AddOnScreenDebugMessage(-1,5,FColor::Blue,TaskText.ToString());
		BlueprintTaskEffectorPlay(SettingTaskAsset);
	}
};
