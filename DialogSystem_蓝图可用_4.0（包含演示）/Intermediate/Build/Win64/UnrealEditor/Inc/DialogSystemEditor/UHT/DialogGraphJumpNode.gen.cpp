// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphJumpNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphJumpNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphJumpNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphJumpNode_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNode();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphJumpNode
void UDialogGraphJumpNode::StaticRegisterNativesUDialogGraphJumpNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphJumpNode);
UClass* Z_Construct_UClass_UDialogGraphJumpNode_NoRegister()
{
	return UDialogGraphJumpNode::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphJumpNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphJumpNode.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphJumpNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphJumpNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogGraphJumpNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphJumpNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphJumpNode_Statics::ClassParams = {
	&UDialogGraphJumpNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphJumpNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphJumpNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphJumpNode()
{
	if (!Z_Registration_Info_UClass_UDialogGraphJumpNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphJumpNode.OuterSingleton, Z_Construct_UClass_UDialogGraphJumpNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphJumpNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphJumpNode>()
{
	return UDialogGraphJumpNode::StaticClass();
}
UDialogGraphJumpNode::UDialogGraphJumpNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphJumpNode);
UDialogGraphJumpNode::~UDialogGraphJumpNode() {}
// End Class UDialogGraphJumpNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphJumpNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphJumpNode, UDialogGraphJumpNode::StaticClass, TEXT("UDialogGraphJumpNode"), &Z_Registration_Info_UClass_UDialogGraphJumpNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphJumpNode), 561371949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphJumpNode_h_112290209(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphJumpNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphJumpNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
