#pragma once
#include "UObject/Object.h"
#include "TaskConditionBase.generated.h"

class UTaskAsset;
//*************************************************************
//任务资产中对话包使用条件基类
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UTaskDialogConditionBase :public UObject
{
	GENERATED_BODY()
public:
	UTaskDialogConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool TaskAssetConditionIsSucceed(UTaskAsset* SettingTaskAsset) {return BlueprintIsSucceed(SettingTaskAsset);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="TaskDialogConditionBase")
	bool BlueprintIsSucceed(UTaskAsset* SettingTaskAsset);
};

//*************************************************************
//任务资产中引脚使用条件
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UTaskPinUseConditionBase :public UObject
{
	GENERATED_BODY()
public:
	UTaskPinUseConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool TaskAssetConditionIsSucceed(UTaskAsset* SettingTaskAsset) {return BlueprintIsSucceed(SettingTaskAsset);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="TaskPinUseConditionBase")
	bool BlueprintIsSucceed(UTaskAsset* SettingTaskAsset);
};

//*************************************************************
//次要任务解锁条件
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API USecondaryTaskConditionBase :public UObject
{
	GENERATED_BODY()
public:
	USecondaryTaskConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool SecondaryTaskConditionIsSucceed(UTaskAsset* SettingTaskAsset) {return BlueprintSecondaryTaskIsSucceed(SettingTaskAsset);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="SecondaryTaskConditionBase")
	bool BlueprintSecondaryTaskIsSucceed(UTaskAsset* SettingTaskAsset);
};

//*************************************************************
//次要任务达成条件
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API USecondaryTaskAchievedConditionBase :public UObject
{
	GENERATED_BODY()
public:
	USecondaryTaskAchievedConditionBase(){}
	//设置判断函数，这里判断过程可以由子项重载决定。
	virtual bool SecondaryTaskAchievedConditionIsSucceed(UTaskAsset* SettingTaskAsset) {return BlueprintSecondaryAchievedTaskIsSucceed(SettingTaskAsset);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="SecondaryTaskConditionBase")
	bool BlueprintSecondaryAchievedTaskIsSucceed(UTaskAsset* SettingTaskAsset);
};





