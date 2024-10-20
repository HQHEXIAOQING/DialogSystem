// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogSystemEditor.h"

#include "DialogAssetAction.h"
#include "IAssetTools.h"

#define LOCTEXT_NAMESPACE "FDialogSystemEditorModule"

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

}

void FDialogSystemEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialogSystemEditorModule, DialogSystemEditor)