#pragma once
#include "Coreminimal.h"
#include "UObject/Object.h"
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

	
};
