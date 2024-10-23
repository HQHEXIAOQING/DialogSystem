#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoBase.h"
#include "DialogNodeInfo.generated.h"

class UDialogNodeConditionBase;
class UDialogAsset;

USTRUCT(BlueprintType)
struct FOutPinData
{
	GENERATED_BODY()
	//输出引脚名称
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="输出引脚名称",Category="OutPinData")
	FText OutPinName = FText::FromString(TEXT("默认输出"));
	//执行条件组（全部符合才能使用此引脚）
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="执行条件组",Category="OutPinData")
	TArray<UDialogNodeConditionBase*> DialogNodeCondition;
	
	FOutPinData()
	{}
};

//对话节点效果器的使用
UCLASS(Blueprintable,EditInlineNew,Abstract)
class DIALOGSYSTEM_API UDialogNodeEffectorBase: public UObject
{
	GENERATED_BODY()
public:
	//效果触发
	virtual void DialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor) {BlueprintDialogNodeEffectorPlay(SettingDialogAsset,DialogActor);}
	UFUNCTION(BlueprintImplementableEvent,DisplayName="条件判断扩展",Category="DialogPacketConditionBase")
	void BlueprintDialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset,AActor* DialogActor);
};

//对话节点的使用。
UCLASS()
class DIALOGSYSTEM_API UDialogNodeInfo: public UDialogNodeInfoBase
{
	GENERATED_BODY()
public:
	//使用此节点的对象
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="对话对象ID",Category="DialogNodeInfo")
	FName DialogActorId = TEXT("");
	//节点标题
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点标题",Category="DialogNodeInfo")
	FText Title = FText::FromString(TEXT("默认标题"));
	//对话内容
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="对话内容",Category="DialogNodeInfo")
	FText DialogContent = FText::FromString(TEXT("对话内容"));
	//关联效果
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话关联效果组",Category="DialogNodeInfo")
	TArray<UDialogNodeEffectorBase*> DialogNodeEffectorArray;
	//输出引脚数据
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="输出引脚数据",Category="DialogNodeInfo")
	TArray<FOutPinData> OutPinDataArray;

	//节点颜色
	UPROPERTY(EditAnywhere,BlueprintReadWrite,DisplayName="节点颜色",Category="DialogNodeData")
	FLinearColor NodeColor = FLinearColor::Green;

	UDialogNodeInfo()
	{
		OutPinDataArray.Add(FOutPinData());
	}
};
