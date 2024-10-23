#pragma once
#include <functional>
#include "Coreminimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectSaveContext.h"
#include "DialogAsset.generated.h"

class UParticipantConditionBase;
class UDialogRuntimeGraph;
class UDialogAssetConditionBase;
//对话包类型
UENUM()
enum class EDialogType : uint8
{
	BubbleText		UMETA(DisplayName = "气泡弹框"),
	Conversation	UMETA(DisplayName = "对话框"),
};

//对话条件对应对话节点
USTRUCT(BlueprintType)
struct FParticipantCondition
{
	GENERATED_BODY()
	//参与者条件组
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="参与者条件组",Category="DialogNodeBase")
	TArray<UParticipantConditionBase*> ParticipantConditionArray;
	//参与者对象
	UPROPERTY(BlueprintReadWrite,DisplayName="参与者条件组",Category="DialogNodeBase")
	AActor* Participant;
	FParticipantCondition():
	Participant(nullptr)
	{
	}
};

UCLASS(Blueprintable)
class DIALOGSYSTEM_API UDialogAsset:public UObject
{
	GENERATED_BODY()
public:
	//*************************************************
	//变量数据类型声明
	
	//对话资产的名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话资产名称",Category = "DialogAsset")
	FString AssetName = TEXT("资产名称");
	//对话类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话类型",Category = "DialogAsset")
	EDialogType DialogType = EDialogType::Conversation;
	//对话包条件
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话包条件",Category = "DialogAsset")
	TArray<UDialogAssetConditionBase*> DialogAssetConditionArray;
	//参与者条件
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="参与者条件",Category = "DialogAsset")
	TMap<FName,FParticipantCondition> Map_NameIDToParticipantCondition;
	
	//***********************************************************
	//数据记录
	//保存的图表数据
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="图表数据",Category="DialogAssetSaveInfo")
	UDialogRuntimeGraph* Graph;
	//对话节点全局ID
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="对话节点全局ID",Category = "DialogAssetSaveInfo")
	int32 DialogNodeIndex = 0;

	

	//***********************************************************
	//函数
	virtual void PreSave(FObjectPreSaveContext SaveContext) override
	{
		//如果指向的位置有函数，我应该调用一下这个函数，这里指向的是APP中保存数据的函数。
		if(_OnPreSaveListener)
		{
			_OnPreSaveListener();
		}
		//Super::PreSave(SaveContext);
	}
	//设置函数指针指向位置
	void SetPreSaveListener(std::function<void()> OnPreSaveListener){_OnPreSaveListener = OnPreSaveListener;}
private:
	//创建一个函数指针变量。
	std::function<void()> _OnPreSaveListener = nullptr;
	
	
};