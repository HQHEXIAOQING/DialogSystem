#pragma once
#include "UObject/Object.h"
#include "DialogNodeEffectorBase.generated.h"

class UDialogAsset;

//对话节点效果器的使用
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UDialogNodeEffectorBase: public UObject
{
	GENERATED_BODY()
public:
	//效果触发
	UFUNCTION(BlueprintCallable,DisplayName="效果调用",Category="DialogNodeEffectorBase")
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) {BlueprintDialogNodeEffectorPlay(SettingDialogAsset,DialogActor);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="效果扩展",Category="DialogNodeEffectorBase")
	void BlueprintDialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor);
};