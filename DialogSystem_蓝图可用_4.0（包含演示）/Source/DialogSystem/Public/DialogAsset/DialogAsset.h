#pragma once
#include <functional>
#include "Coreminimal.h"
#include "DialogAsset.generated.h"

class URuntimeDialogPin;
struct FDialogOutPinData;
class URuntimeDialogEndNodeInfo;
class URuntimeDialogNode;
class UDialogAssetConditionBase;
class UParticipantConditionBase;
class URuntimeDialogGraph;
class URuntimeDialogNodeInfo;
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
	
	FParticipantCondition()
	{
	}
};

//对话资产类型
UCLASS(Blueprintable)
class DIALOGSYSTEM_API UDialogAsset:public UObject
{
	GENERATED_BODY()
public:
	//*************************************************
	//变量数据类型声明

	//对话资产触发检测设置

	//检测半径
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="检测半径",Category = "DialogAsset")
	float Radius = 500.0;
	//检测方式
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="检测方式",Category = "DialogAsset")
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECollisionChannel::ECC_Visibility;

	
	//资产的名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话资产名称",Category = "DialogAsset")
	FText AssetName = FText::FromString(TEXT("资产名称"));
	//对话类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话类型",Category = "DialogAsset")
	EDialogType DialogType = EDialogType::Conversation;
	//对话包条件
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话包条件",Category = "DialogAsset")
	TArray<UDialogAssetConditionBase*> DialogAssetConditionArray;
	//参与者条件
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="参与者条件",Category = "DialogAsset")
	TMap<FName,FParticipantCondition> Map_NameIDToParticipantCondition;
	
	//********************************************************
	//数据记录
	//运行时存储的图表
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="运行时存储的图表",Category = "DialogAssetInfo")
	URuntimeDialogGraph* RuntimeDialogGraph = nullptr;
	//节点全局ID
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="节点全局ID",Category = "DialogAssetInfo")
	int32 DialogGlobalNodeId = 0;
	//参与者Id以及对应参与者
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="参与者Id以及对应参与者",Category = "DialogAssetInfo")
	TMap<FName,AActor*> Map_NameIDToParticipant;
	//引脚Id对应引脚经过次数
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="引脚Id对应引脚经过次数",Category = "DialogAssetInfo")
	TMap<FGuid,int32> Map_PinIDToPinNum;
	
	UDialogAsset()
	{
		Map_NameIDToParticipant.Add("OwningActor",nullptr);
		Map_NameIDToParticipant.Add("PlayerActor",nullptr);
	}


	//********************************************************
	//函数实现
	
	//初始化对话资产（判断是否可以使用此对话资产,输入拥有对象）
	UFUNCTION(BlueprintCallable,DisplayName="初始化对话资产",Category="DialogAsset")
	bool DialogAssetInit(AActor* Owning,AActor* PlayerActor);
	//获取首个对话节点
	UFUNCTION(BlueprintCallable,DisplayName="获取首个对话节点",Category="DialogAsset")
	URuntimeDialogNode* GetDialogNodeFromFirst(URuntimeDialogNodeInfo* &DialogNodeInfo);
	//获取对话节点以及对应的节点信息(确保输入Id为对话节点的Id，如果不是对话节点Id就会找不到对应的节点信息)
	UFUNCTION(BlueprintCallable,DisplayName="获取对话节点信息",Category="DialogAsset")
	bool GetDialogNodeFromDialogId(FName DialogNodeId,URuntimeDialogNodeInfo* &DialogNodeInfo,URuntimeDialogNode* &DialogNode);
	//获取结束节点以及结束节点信息
	UFUNCTION(BlueprintCallable,DisplayName="获取对话结束节点信息",Category="DialogAsset")
	bool GetDialogEndNodeFromDialogId(FName DialogNodeId,URuntimeDialogEndNodeInfo* &DialogNodeInfo,URuntimeDialogNode* &DialogNode);
	//获取此对话节点的下一句对话。
	UFUNCTION(BlueprintCallable,DisplayName="获取对话节点下选项",Category="DialogAsset")
	bool GetOutputPinFromDialogNode(URuntimeDialogNode* DialogNode,TMap<URuntimeDialogPin*, FDialogOutPinData>& Map_OutPinToOutPinData,bool &IsPlayerOption);
	//对话节点开始执行(输入当前对话节点，如果从引脚处触发请输入对应引脚，如果没有，请忽略！)
	UFUNCTION(BlueprintCallable,DisplayName="对话节点开始执行",Category="DialogAsset")
	bool DialogNodeInit(URuntimeDialogNode* DialogNode,URuntimeDialogPin* DialogNodePin);
	
	//函数
	virtual void PreSave(FObjectPreSaveContext SaveContext) override;
	//设置函数指针指向位置
	void SetPreSaveListener(std::function<void()> OnPreSaveListener){_OnPreSaveListener = OnPreSaveListener;}
private:
	//创建一个函数指针变量。
	std::function<void()> _OnPreSaveListener = nullptr;
};
