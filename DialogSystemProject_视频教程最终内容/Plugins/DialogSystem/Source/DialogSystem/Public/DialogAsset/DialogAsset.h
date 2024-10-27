#pragma once
#include <functional>
#include "Coreminimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectSaveContext.h"
#include "DialogAsset.generated.h"

class URuntimeDialogGraph;

UCLASS()
class DIALOGSYSTEM_API UDialogAsset:public UObject
{
	GENERATED_BODY()
public:
	//*************************************************
	//变量数据类型声明
	
	//资产的名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话资产名称",Category = "DialogAsset")
	FString AssetName = TEXT("资产名称");
	//资产的其他数据
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="资产的其他数据",Category = "DialogAsset")
	TArray<FString> AssetData;
	
	
	//运行时存储的图表
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="运行时存储的图表",Category = "DialogAssetInfo")
	URuntimeDialogGraph* RuntimeDialogGraph = nullptr;
	//全局对话Id
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="全局对话Id",Category = "DialogAssetInfo")
	int32 DialogNodeId = 0;




	
	//保存时事件重载
	virtual void PreSave(FObjectPreSaveContext SaveContext) override
	{
		Super::PreSave(SaveContext);
		//保存的时候判断函数指针是否有效
		if (_OnDialogAssetPreSave != nullptr)
		{
			_OnDialogAssetPreSave();
		}
	}
	void SetOnDialogAssetPreSave(std::function<void()> OnDialogAssetPreSave){_OnDialogAssetPreSave =OnDialogAssetPreSave; }
protected:
	//创建一个函数指针的变量
	std::function<void()> _OnDialogAssetPreSave = nullptr;
	
};
