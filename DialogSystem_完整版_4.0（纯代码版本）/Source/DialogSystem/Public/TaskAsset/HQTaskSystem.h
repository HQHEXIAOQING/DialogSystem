#pragma once
#include "CoreMinimal.h"
#include "RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h"
#include "HQTaskSystem.generated.h"

class USecondaryTaskBase;
class URuntimeTaskNodeInfo;
class UTaskAssetObjectInfoBase;
class UDialogAsset;
class UHQTaskSystem;
class UBlackboardComponent;
class UTaskAsset;

//任务数据内容
UCLASS(Blueprintable,BlueprintType)
class DIALOGSYSTEM_API UTaskSystemDataObject : public UObject
{
	GENERATED_BODY()
public:
	//任务数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务数据",Category="TaskSystemSetting")
	FString Data;

	//*************************************************
	//公开函数
	
	UFUNCTION(BlueprintImplementableEvent,DisplayName="任务系统初始化事件",Category="TaskAssetImplementable")
	void BlueprintTaskInitialize();
	UFUNCTION(BlueprintImplementableEvent,DisplayName="添加任务事件",Category="TaskAssetImplementable")
	void BlueprintAddTask(UTaskAsset* TaskAsset,AActor* TaskSourceActor);
	UFUNCTION(BlueprintImplementableEvent,DisplayName="任务结束事件",Category="TaskAssetImplementable")
	void BlueprintTaskEnd(UTaskAsset* TaskAsset,ETaskResultType TaskResultType);
};

//任务系统管理
UCLASS()
class DIALOGSYSTEM_API UHQTaskSystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
public:
	//构造函数
	UHQTaskSystem(){}
	
    //****************************************************
    //变量

    //当前执行的任务Id对应任务资产
    UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务Id对应任务资产",Category="TaskAsset")
    TMap<FName,UTaskAsset*> Map_TaskIdToTaskAsset;
	//设置任务数据类
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="任务数据",Category="TaskAsset")
	TObjectPtr<UTaskSystemDataObject> TaskSystemDataObject = nullptr;

	//***************************************************************
	//函数
	
	//任务初始化事件
	UFUNCTION(BlueprintCallable,DisplayName="任务系统初始化",Category="TaskAssetFunction")
	void TaskInitialize(TSubclassOf<UTaskSystemDataObject> NewTaskSystemDataObject);
	
	//添加任务条例
	UFUNCTION(BlueprintCallable,DisplayName="添加任务",Category="TaskAssetFunction")
	bool AddTask(UTaskAsset* TaskAsset,AActor* TaskSourceActor);
	//移除任务（输出结果表示任务在移除前是否存在。）
	UFUNCTION(BlueprintCallable,DisplayName="移除任务",Category="TaskAssetFunction")
	bool RemoveTask(FName TaskId);
	
	//添加Id下任务标签（如果此任务不存在则返回否）
	UFUNCTION(BlueprintCallable,DisplayName="添加Id下任务标签",Category="TaskAssetFunction")
	bool AddTaskTag(FName TaskId,FName TaskTag);
	//移除Id下任务标签（如果此任务不存在则返回否）
	UFUNCTION(BlueprintCallable,DisplayName="移除Id下任务标签",Category="TaskAssetFunction")
	bool RemoveTaskTag(FName TaskId,FName TaskTag);


	//获取任务Id下当前执行的阶段（如果此任务不存在则返回否）
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取任务Id下当前执行的阶段",Category="TaskAssetFunction")
	bool GetTaskCurrentExecuteNode(FName TaskId,FName& TaskCurrentIdThis);
	//获取任务下当前任务下阶段的UI文本，和已经触发的子任务的UI文本总和。
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取任务Id下的UI显示信息",Category="TaskAssetFunction")
	bool GetTaskCurrentUIShowInfo(FName TaskId,URuntimeTaskNodeInfo*& TaskNodeInfo,TArray<USecondaryTaskBase*>& OpenTaskSecondary);
	//获取Id下任务资产和任务数据
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取任务资产和任务数据",Category="TaskAssetFunction")
	bool GetTaskAssetAndInfoFromId(FName TaskId,UTaskAsset*& TaskAsset,UTaskAssetObjectInfoBase*& TaskInfo);
	//判断任务中对话是否触发
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取任务对话包",Category="TaskAssetFunction")
	bool GetTaskDialogAssetFromId(FName TaskId,FName TaskDialogId,UDialogAsset*& DialogAsset);
	
	//刷新Id下任务内容（如果此任务不存在则返回否）
	UFUNCTION(BlueprintCallable,DisplayName="刷新Id下任务内容",Category="TaskAssetFunction")
	bool UpdateTask(FName TaskId);
	
	
	//对应任务结束
	void TaskEnd(FName TaskId,ETaskResultType TaskResultType);

	//****************************************************
	//委托
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskAdd,FName,TaskId);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskRemove,FName,TaskId);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTaskUpdate,FName,TaskId);
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category="TaskAssetFunction")
	FOnTaskAdd OnTaskAdd;
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category="TaskAssetFunction")
	FOnTaskRemove OnTaskRemove;
	UPROPERTY(BlueprintAssignable,BlueprintCallable,Category="TaskAssetFunction")
	FOnTaskUpdate OnTaskUpdate;
	
	//**********************************************************************
	//必要函数
	
	//重载必要函数
    virtual bool ShouldCreateSubsystem(UObject* Outer) const override{return true;}
    virtual void Initialize(FSubsystemCollectionBase& Collection) override{}
    virtual void Deinitialize() override{}


};


