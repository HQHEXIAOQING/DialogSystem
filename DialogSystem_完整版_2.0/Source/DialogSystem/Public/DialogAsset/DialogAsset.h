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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="运行时存储的图表",Category = "DialogAsset")
	URuntimeDialogGraph* RuntimeDialogGraph = nullptr;
	//节点全局ID
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,DisplayName="节点全局ID",Category = "DialogAsset")
	int32 DialogGlobalNodeId;

	//函数
	virtual void PreSave(FObjectPreSaveContext SaveContext) override
	{
		//如果指向的位置有函数，我应该调用一下这个函数，这里指向的是APP中保存数据的函数。
		if(_OnPreSaveListener)
		{
			_OnPreSaveListener();
		}
		Super::PreSave(SaveContext);
	}
	//设置函数指针指向位置
	void SetPreSaveListener(std::function<void()> OnPreSaveListener){_OnPreSaveListener = OnPreSaveListener;}
private:
	//创建一个函数指针变量。
	std::function<void()> _OnPreSaveListener = nullptr;
};
