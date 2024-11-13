#pragma once
#include "DialogAsset/DialogConditionBase.h"
#include "DialogAssetCondition_Test.generated.h"

UCLASS(DisplayName="测试对话包条件")
class DIALOGSYSTEM_API UDialogAssetCondition_Test :public UDialogAssetConditionBase
{
	GENERATED_BODY()
public:
	UDialogAssetCondition_Test(){}

	//测试结果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="测试结果",Category="DialogAssetCondition")
	bool TestBool = false;

	
	//重载判断逻辑
	virtual bool DialogPacketConditionIsSucceed(UDialogAsset* SettingDialogAsset)override
	{
		return BlueprintIsSucceed()&&TestBool;
	}
};