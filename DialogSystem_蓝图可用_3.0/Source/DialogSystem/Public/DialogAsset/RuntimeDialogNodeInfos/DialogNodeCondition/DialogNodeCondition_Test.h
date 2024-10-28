#pragma once
#include "DialogAsset/DialogConditionBase.h"
#include "DialogNodeCondition_Test.generated.h"

class URuntimeDialogNode;
//对话节点使用条件
UCLASS(DisplayName="测试对话节点使用条件")
class DIALOGSYSTEM_API UDialogNodeCondition_Test : public UDialogNodeConditionBase
{
	GENERATED_BODY()
public:
    UDialogNodeCondition_Test(){}
    
	//测试结果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="测试结果",Category="DialogAssetCondition")
	bool TestBool = false;
	
	//条件判断(是否成立？)
	virtual bool DialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset,URuntimeDialogNode* LastDialogNode,URuntimeDialogNode* NextDialogNode)override
	{return BlueprintDialogNodeConditionIsSucceed(SettingDialogAsset,LastDialogNode,NextDialogNode)&&TestBool;}
};