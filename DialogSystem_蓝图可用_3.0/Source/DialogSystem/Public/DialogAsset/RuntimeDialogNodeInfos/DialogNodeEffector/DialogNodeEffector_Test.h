#pragma once
#include "DialogAsset/DialogNodeEffectorBase.h"
#include "DialogNodeEffector_Test.generated.h"

//对话节点效果器的使用
UCLASS(DisplayName="效果器：屏幕打印")
class DIALOGSYSTEM_API UDialogNodeEffector_Test: public UDialogNodeEffectorBase
{
	GENERATED_BODY()
public:
	//打印信息
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="打印信息",Category="DialogAssetCondition")
	FString PrintText = TEXT("测试文本");
	
	//效果触发
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) override
	{
		BlueprintDialogNodeEffectorPlay(SettingDialogAsset,DialogActor);
		GEngine->AddOnScreenDebugMessage(-1,5.0,FColor::Green,PrintText);
	}
};