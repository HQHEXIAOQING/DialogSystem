#pragma once
#include "UObject/Object.h"
#include "TaskNodeEffectorBase.generated.h"

class UTaskAsset;

//任务效果器的使用
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UTaskEffectorBase: public UObject
{
	GENERATED_BODY()
public:
	//效果触发
	UFUNCTION(BlueprintCallable,DisplayName="效果调用",Category="DialogNodeEffectorBase")
	virtual void TaskEffectorPlay(UTaskAsset* SettingTaskAsset) {BlueprintTaskEffectorPlay(SettingTaskAsset);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="效果扩展",Category="DialogNodeEffectorBase")
	void BlueprintTaskEffectorPlay(UTaskAsset* SettingTaskAsset);
};