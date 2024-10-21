// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogSystemEditor.h"

#include "DialogAssetAction.h"
#include "EdGraphUtilities.h"
#include "IAssetTools.h"
//#include "SGraphPin.h"
#include "EdGraph/EdGraphPin.h"
#include "KismetPins/SGraphPinColor.h"
#define LOCTEXT_NAMESPACE "FDialogSystemEditorModule"

//*************************************************************
//TODO::创建自定义引脚样式添加
class SDialogGraphPin :public SGraphPin
{
public:
	SLATE_BEGIN_ARGS( SDialogGraphPin ){}
	SLATE_END_ARGS()
	//复写构造函数
	void Construct(const FArguments& InArgs,UEdGraphPin* InGraphPinObj){SGraphPin::Construct(SGraphPin::FArguments(),InGraphPinObj);}

protected:
	//重载函数
	//设置Pin的颜色
	virtual FSlateColor GetPinColor() const override{return FSlateColor(FLinearColor::Green);}
};
	
//对话引脚资产操作。
struct FDialogPinFactory : FGraphPanelPinFactory
{
	virtual ~FDialogPinFactory(){}
	//重载函数
	virtual TSharedPtr<SGraphPin> CreatePin(UEdGraphPin* Pin) const override
	{
		if("DialogPin" == Pin->PinType.PinSubCategory){return SNew(SDialogGraphPin,Pin);}
		return nullptr;
	}
};

//*************************************************************
//模块的入口
void FDialogSystemEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//注册对话系统到资产工具中。
	//获取资产工具
	IAssetTools& AssetTool = IAssetTools::Get();
	//注册一个资产分类
	EAssetTypeCategories::Type Category = AssetTool.RegisterAdvancedAssetCategory("DialogSystem",FText::FromString(TEXT("对话系统")));
	//TODO::这里扩展操作
	//创建一个对话资产操作
	TSharedRef<IAssetTypeActions> AssetTypeAction = MakeShareable(new DialogAssetAction(Category));

	//TODO::这里注册操作
	AssetTool.RegisterAssetTypeActions(AssetTypeAction);

	_PinFactory = MakeShareable(new FDialogPinFactory());
	FEdGraphUtilities::RegisterVisualPinFactory(_PinFactory);
	
}

void FDialogSystemEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEdGraphUtilities::UnregisterVisualPinFactory(_PinFactory);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialogSystemEditorModule, DialogSystemEditor)