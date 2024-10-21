﻿#pragma once
#include "Coreminimal.h"
#include "UObject/Object.h"
#include "DialogAsset.generated.h"

UCLASS(Blueprintable)
class DIALOGSYSTEM_API UDialogAsset:public UObject
{
	GENERATED_BODY()
public:
	//*************************************************
	//变量数据类型声明
	
	//资产的名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="对话资产名称",Category = "DialogAsset")
	FString AssetName = TEXT("资产名称");
	//数据Array
	UPROPERTY(EditAnywhere, BlueprintReadWrite,DisplayName="数据Array",Category = "DialogAsset")
	TArray<FString> AssetDataArray;

	
};