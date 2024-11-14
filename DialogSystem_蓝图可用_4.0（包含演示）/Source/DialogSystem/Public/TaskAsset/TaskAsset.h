#pragma once
#include <functional>
#include "UObject/Object.h"
#include "TaskAsset.generated.h"


class USecondaryTaskBase;
class URuntimeTaskNodeInfo;
class URuntimeTaskGraph;
class UHQTaskSystem;
class UTaskAssetObjectInfoBase;
class USystemValueType;
class UDialogAsset;
class UTaskDialogConditionBase;

USTRUCT(BlueprintType)
struct FTaskDialogCondition
{
	GENERATED_BODY()

	//对话包使用条件组
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话包使用条件组",Category = "TaskDialogCondition")
	TArray<UTaskDialogConditionBase*> DialogIdToTaskDialogConditionArray;
	//使用的对话包
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="使用的对话包",Category = "TaskDialogCondition")
	TObjectPtr<UDialogAsset> UseDialogAsset;
	
	FTaskDialogCondition(){}
};

//任务资产类型
UCLASS(Blueprintable)
class DIALOGSYSTEM_API UTaskAsset:public UObject
{
	GENERATED_BODY()
public:
	//任务资产Id
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务资产Id",Category = "TaskAsset")
	FName TaskId = TEXT("TaskId");
	//变量Id对应变量
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Instanced,DisplayName="变量Id对应变量",Category="TaskAsset")
	TMap<FName,USystemValueType*> Map_IdToValue;
	//任务资产对应数据类
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务资产对应数据类",Category = "TaskAsset")
	TSubclassOf<UTaskAssetObjectInfoBase> TaskAssetObjectInfoBaseClass = nullptr;
	//资产的名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务资产名称",Category = "TaskAsset")
	FString AssetName = TEXT("资产名称");
	//对话包对应条件组
	UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditInline = "true"),DisplayName="对话包对应条件组",Category = "TaskAsset")
	TMap<FName,FTaskDialogCondition> Map_DialogIdToTaskDialogCondition;
	
	//********************************************************
	//数据记录
	
	//运行时存储的图表
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="运行时存储的图表",Category = "TaskAssetInfo")
	URuntimeTaskGraph* RuntimeTaskGraph = nullptr;
	//节点全局ID
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="节点全局ID",Category = "TaskAssetInfo")
	int32 TaskGlobalNodeId = 0;
	//任务来源
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务来源",Category = "TaskAssetInfo")
	AActor* TaskSource = nullptr;
	//当前执行的节点Id
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="当前执行的节点Id",Category = "TaskAssetInfo")
	FName TaskCurrentId = "StartNode";
	//任务标签集
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务标签集",Category = "TaskAssetInfo")
	TArray<FName> TaskTagArray;
	//当前使用的任务子系统
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务子系统",Category = "TaskAssetInfo")
	UHQTaskSystem* HQTaskSystem = nullptr;
	//处理任务数据内容对象
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务数据",Category = "TaskAssetInfo")
	UTaskAssetObjectInfoBase* TaskAssetObjectInfoBase = nullptr;
	
	//********************************************************
	//函数

	//构造函数
	UTaskAsset(){}

	
	//初始化事件
	bool InitTaskAsset(UHQTaskSystem* NewHQTaskSystem,AActor* NewTaskSource);
	//阶段变化调用
	void SettingCurrent(FName TaskNodeId);
	//刷新任务状态
	void UpdateTaskState();
	//判断分段任务是否有结果
	bool IsResultFromSecondaryTask(USecondaryTaskBase* SecondaryTask,FName SecondaryId);
	//获取当前的任务节点信息(如果当前节点不是任务节点，就会输出空)
	URuntimeTaskNodeInfo* GetCurrentTaskNodeInfo() const;
	//获取当前属性
	UTaskAssetObjectInfoBase* GetTaskAssetObjectInfo() const;
	
	//保存重载
	virtual void PreSave(FObjectPreSaveContext SaveContext) override;
	//设置函数指针指向位置
	void SetPreSaveListener(std::function<void()> OnPreSaveListener){_OnPreSaveListener = OnPreSaveListener;}
private:
	//创建一个函数指针变量。
	std::function<void()> _OnPreSaveListener = nullptr;
};