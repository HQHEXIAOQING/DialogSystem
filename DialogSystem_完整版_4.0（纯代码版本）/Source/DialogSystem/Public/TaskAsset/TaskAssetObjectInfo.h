#pragma once
#include "TaskAssetObjectInfo.generated.h"

class URuntimeTaskEndNodeInfo;
enum class ETaskResultType : uint8;
class URuntimeTaskNodeInfo;
class USystemValueType;
class UTaskAsset;
class UHQTaskSystem;
//任务资产类型
UCLASS(Blueprintable,BlueprintType)
class DIALOGSYSTEM_API UTaskAssetObjectInfoBase:public UObject//, public IGameplayTaskOwnerInterface
{
	GENERATED_BODY()
public:
	//******************************************************
	//变量
	
	//当前使用的任务子系统
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务子系统",Category = "TaskAssetObjectInfoBase")
	UHQTaskSystem* TaskSystem;
	//对应任务资产
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="任务资产",Category = "TaskAssetObjectInfoBase")
	UTaskAsset* TaskAsset;
	//变量Id对应变量
	UPROPERTY()
	TMap<FName,USystemValueType*> Map_ValueIdToValue;
	UPROPERTY()
	UWorld* World = nullptr;
	
	//构造函数，数据初始化
	UTaskAssetObjectInfoBase():
	TaskSystem(nullptr),
	TaskAsset(nullptr)
	{}
	virtual UWorld* GetWorld() const override;
	//******************************************************
	//函数

	//获取对应命名下的布尔值
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取布尔值",Category="CustomValueCategory")
	virtual bool GetBoolFromNameId(FName ValueId,bool& Value);
	//设置对应命名下的布尔值
	UFUNCTION(BlueprintCallable,DisplayName="设置布尔值",Category="CustomValueCategory")
	virtual bool SetBoolFromNameId(FName ValueId,bool Value);
	//获取对应命名下的Object
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取对象值",Category="CustomValueCategory")
	virtual bool GetObjectFromNameId(FName ValueId,UObject*& Value);
	//设置对应命名下的Object
	UFUNCTION(BlueprintCallable,DisplayName="设置对象值",Category="CustomValueCategory")
	virtual bool SetObjectFromNameId(FName ValueId,UObject* Value);
	//获取对应命名下的向量
	UFUNCTION(BlueprintCallable,BlueprintPure,DisplayName="获取向量值",Category="CustomValueCategory")
	virtual bool GetVectorFromNameId(FName ValueId,FVector& Value);
	//设置对应命名下的向量
	UFUNCTION(BlueprintCallable,DisplayName="设置向量值",Category="CustomValueCategory")
	virtual bool SetVectorFromNameId(FName ValueId,FVector Value);

	
	UFUNCTION(BlueprintCallable,DisplayName="初始化数据")
	virtual void InitTaskAssetObjectInfo(TMap<FName,USystemValueType*> NewValueIdToValueMap);
	UFUNCTION(BlueprintCallable,DisplayName="任务阶段改变")
	virtual void TaskSecondaryChanged(URuntimeTaskNodeInfo* TaskNodeInfo,FName ChangedSecondaryId,ETaskResultType TaskResultType);
	UFUNCTION(BlueprintCallable,DisplayName="任务阶段改变")
	virtual void TaskEnd(URuntimeTaskEndNodeInfo* TaskNodeInfo);
	//初始化扩展
	UFUNCTION(BlueprintImplementableEvent,DisplayName="初始化扩展")
	void BlueprintInitTaskAssetObjectInfo();
	//任务阶段改变
	UFUNCTION(BlueprintImplementableEvent,DisplayName="任务阶段改变通知")
	void BlueprintTaskSecondaryChanged(URuntimeTaskNodeInfo* TaskNodeInfo,FName ChangedSecondaryId,ETaskResultType TaskResultType);
	//任务结束通知
	UFUNCTION(BlueprintImplementableEvent,DisplayName="任务结束通知")
	void BlueprintTaskEnd(URuntimeTaskEndNodeInfo* TaskNodeInfo);

	
	
};