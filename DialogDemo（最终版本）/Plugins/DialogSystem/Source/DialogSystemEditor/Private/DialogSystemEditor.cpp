// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogSystemEditor.h"
//添加必要头文件
#include "IAssetTools.h"
#include "DialogAssetAction.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"
#include "EdGraphUtilities.h"
#include "KismetPins/SGraphPinColor.h"
#include "EdGraph/EdGraphPin.h"

#define LOCTEXT_NAMESPACE "FDialogSystemEditorModule"

class SDialogGraphPin : public SGraphPin
{
public:
	SLATE_BEGIN_ARGS( SDialogGraphPin ){}
	SLATE_END_ARGS()

	//构造函数
	void Construct(const FArguments& inArgs,UEdGraphPin* inGraphPinObj)
	{
		SGraphPin::Construct(SGraphPin::FArguments(),inGraphPinObj);
	}

protected:
	//重载函数
	//TODO:设置DialogPin的颜色
	virtual FSlateColor GetPinColor() const override{return FSlateColor(FLinearColor::Green);}
};

class SDialogStartGraphPin : public SGraphPin
{
public:
	SLATE_BEGIN_ARGS( SDialogGraphPin ){}
	SLATE_END_ARGS()

	//构造函数
	void Construct(const FArguments& inArgs,UEdGraphPin* inGraphPinObj)
	{
		SGraphPin::Construct(SGraphPin::FArguments(),inGraphPinObj);
	}

protected:
	//重载函数
	//TODO:设置StartPin的颜色
	virtual FSlateColor GetPinColor() const override{return FSlateColor(FLinearColor::Red);}
};

class SDialogEndGraphPin : public SGraphPin
{
public:
	SLATE_BEGIN_ARGS( SDialogGraphPin ){}
	SLATE_END_ARGS()

	//构造函数
	void Construct(const FArguments& inArgs,UEdGraphPin* inGraphPinObj)
	{
		SGraphPin::Construct(SGraphPin::FArguments(),inGraphPinObj);
	}

protected:
	//重载函数
	//TODO:设置StartPin的颜色
	virtual FSlateColor GetPinColor() const override{return FSlateColor(FLinearColor::Blue);}
};

struct FDialogPinFactory : public FGraphPanelPinFactory
{

	virtual ~FDialogPinFactory(){}
	//重载函数
	virtual TSharedPtr<SGraphPin> CreatePin(UEdGraphPin* pin) const override
	{
		if(FName("DialogPin") == pin->PinType.PinSubCategory)
		{
			return SNew(SDialogGraphPin,pin);
		}
		if(FName("StartPin") == pin->PinType.PinSubCategory)
		{
			return SNew(SDialogStartGraphPin,pin);
		}
		if(FName("EndPin") == pin->PinType.PinSubCategory)
		{
			return SNew(SDialogEndGraphPin,pin);
		}
		return nullptr;
	}
};




void FDialogSystemEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	//注册自定义资产在这里
	IAssetTools& assetToolsModule = IAssetTools::Get();
	EAssetTypeCategories::Type assetType = assetToolsModule.RegisterAdvancedAssetCategory(FName("DialogAsset"),FText::FromString(TEXT("对话资产")));
	TSharedPtr<DialogAssetAction> assetAction = MakeShareable(new DialogAssetAction(assetType));
	assetToolsModule.RegisterAssetTypeActions(assetAction.ToSharedRef());

	_styleSet = MakeShareable(new FSlateStyleSet("DialogAssetEditorStyle"));
	TSharedPtr<IPlugin> plugin =IPluginManager::Get().FindPlugin("DialogSystem");
	FString contentDir = plugin->GetContentDir();
	_styleSet->SetContentRoot(contentDir);

	FSlateImageBrush* thumbnailBrush = new FSlateImageBrush(_styleSet->RootToContentDir(TEXT("DialogAssetThumbnail"),TEXT(".png")),FVector2D(128.0,128.0));
	//FSlateImageBrush* iconBrush = new FSlateImageBrush(_styleSet->RootToContentDir(TEXT("DialogAssetIcon"),TEXT(".png")),FVector2D(128.0,128.0));

	//注册自定义图片
	_styleSet->Set("ClassThumbnail.DialogAsset",thumbnailBrush);
	//_styleSet->Set("ClassIcon.DialogAsset",iconBrush);
	FSlateStyleRegistry::RegisterSlateStyle(*_styleSet);

	//注册自定义节点设置
	_pinFactory = MakeShareable(new FDialogPinFactory());
	FEdGraphUtilities::RegisterVisualPinFactory(_pinFactory);
	
}

void FDialogSystemEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	/*
	if (assetAction.IsValid())
	{
		IAssetTools& assetToolsModule = IAssetTools::Get();
		assetToolsModule.UnregisterAssetTypeActions(assetAction.ToSharedRef());  
	}
	*/
	
	//关闭模块时销毁
	FSlateStyleRegistry::UnRegisterSlateStyle(*_styleSet);
	FEdGraphUtilities::UnregisterVisualPinFactory(_pinFactory);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialogSystemEditorModule, DialogSystemEditor)