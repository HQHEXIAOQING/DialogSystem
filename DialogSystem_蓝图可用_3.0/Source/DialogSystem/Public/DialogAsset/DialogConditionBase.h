#pragma once
#include "UObject/Object.h"
#include "DialogConditionBase.generated.h"

class URuntimeDialogNodeInfoBase;
class UDialogAsset;
class UDialogNodeInfoBase;
//*************************************************************
//对话资产使用条件基类
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UDialogAssetConditionBase :public UObject
{
	GENERATED_BODY()
public:
	UDialogAssetConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool DialogPacketConditionIsSucceed(UDialogAsset* SettingDialogAsset) {return BlueprintIsSucceed();}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="DialogAssetCondition")
	bool BlueprintIsSucceed();
};
//*************************************************************
// 参与者条件基类
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UParticipantConditionBase :public UObject
{
	GENERATED_BODY()
public:
	UParticipantConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool ParticipantConditionIsSucceed(UDialogAsset* SettingDialogAsset,AActor* NewActor) {return BlueprintParticipantConditionIsSucceed(SettingDialogAsset,NewActor);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="DialogPacketConditionBase")
	bool BlueprintParticipantConditionIsSucceed(UDialogAsset* SettingDialogAsset,AActor* NewActor);
};
//***********************************************************
//对话节点使用条件
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UDialogNodeConditionBase : public UObject
{
	GENERATED_BODY()
public:
	//条件判断(是否成立？)
	virtual bool DialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset,URuntimeDialogNode* LastDialogNode,URuntimeDialogNode* NextDialogNode) {return BlueprintDialogNodeConditionIsSucceed(SettingDialogAsset,LastDialogNode,NextDialogNode);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="DialogPacketConditionBase")
	bool BlueprintDialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset,URuntimeDialogNode* LastDialogNode,URuntimeDialogNode* NextDialogNode);
};


