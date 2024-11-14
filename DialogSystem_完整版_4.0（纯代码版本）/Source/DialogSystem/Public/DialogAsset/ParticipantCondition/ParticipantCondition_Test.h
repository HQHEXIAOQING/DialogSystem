#pragma once
#include "DialogAsset/DialogConditionBase.h"
#include "ParticipantCondition_Test.generated.h"
// 参与者条件基类
UCLASS(DisplayName="测试参与者条件")
class DIALOGSYSTEM_API UParticipantCondition_Test :public UParticipantConditionBase
{
	GENERATED_BODY()
public:
	UParticipantCondition_Test(){}
	//重载
	virtual bool ParticipantConditionIsSucceed(UDialogAsset* SettingDialogAsset,AActor* NewActor) override{return BlueprintParticipantConditionIsSucceed(SettingDialogAsset,NewActor);}
};