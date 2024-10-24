#pragma once
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "DialogAsset/DialogAsset.h"

class DialogAssetAction :public FAssetTypeActions_Base
{
public:
	DialogAssetAction(EAssetTypeCategories::Type Category){_AssetTypeCategory = Category;}
	//**********************************************
	//重载函数

	//获取显示名称
	virtual FText GetName() const override{return FText::FromString(TEXT("对话资产"));}
	//获取显示颜色
	virtual FColor GetTypeColor() const override{return FColor::Green;}
	//获取分类
	virtual uint32 GetCategories() override{return _AssetTypeCategory;}
	//获取操作资产类
	virtual UClass* GetSupportedClass() const override{return UDialogAsset::StaticClass();}


	//重载打开资产操作
	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;

private:
	EAssetTypeCategories::Type _AssetTypeCategory;

	
};
