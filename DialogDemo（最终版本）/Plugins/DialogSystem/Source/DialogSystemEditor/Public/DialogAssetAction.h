#pragma once
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "DialogAsset/DialogAsset.h"

//添加对话资产的操作。
class DialogAssetAction :public FAssetTypeActions_Base
{
public:
	//构造时设置分组，在模块开始并注册操作时传入
	DialogAssetAction(EAssetTypeCategories::Type catgory){_assetCatgory = catgory;}

	//实现接口事件
	virtual FText GetName() const override{return FText::FromString(TEXT("对话资产"));}
	virtual FColor GetTypeColor() const override{return FColor::Green;}
	virtual UClass* GetSupportedClass() const override{return UDialogAsset::StaticClass();}
	virtual uint32 GetCategories() override{return _assetCatgory;}

	//打开资产的操作
	virtual void OpenAssetEditor(const TArray<UObject*>& inObjects, TSharedPtr<IToolkitHost> editWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

private:
	//传递的分组
	EAssetTypeCategories::Type _assetCatgory;


};















