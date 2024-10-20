#pragma once
#include <functional>
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogAsset.generated.h"

//*********************************************************
//类设置

class UDialogRuntimeGraph;
//对话资产类
UCLASS(Blueprintable)
class DIALOGSYSTEM_API UDialogAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="DialogAsset")
	FString DialogName = TEXT("书写对话名称");

	//保存的图表数据
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogAsset")
	UDialogRuntimeGraph* Graph = nullptr;


	void SetPreSaveListener(std::function<void()> onPreSaveListener){_onPreSaveListener = onPreSaveListener;}
	//重载函数
	virtual void PreSave(FObjectPreSaveContext saveContext)override;

private:
	std::function<void()> _onPreSaveListener= nullptr;
	
};
