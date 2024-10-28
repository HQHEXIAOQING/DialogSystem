// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphStartNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNodeBase();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphStartNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphStartNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphStartNode
void UDialogGraphStartNode::StaticRegisterNativesUDialogGraphStartNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphStartNode);
UClass* Z_Construct_UClass_UDialogGraphStartNode_NoRegister()
{
	return UDialogGraphStartNode::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphStartNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphStartNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphStartNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogGraphStartNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphStartNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphStartNode_Statics::ClassParams = {
	&UDialogGraphStartNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphStartNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphStartNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphStartNode()
{
	if (!Z_Registration_Info_UClass_UDialogGraphStartNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphStartNode.OuterSingleton, Z_Construct_UClass_UDialogGraphStartNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphStartNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphStartNode>()
{
	return UDialogGraphStartNode::StaticClass();
}
UDialogGraphStartNode::UDialogGraphStartNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphStartNode);
UDialogGraphStartNode::~UDialogGraphStartNode() {}
// End Class UDialogGraphStartNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphStartNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphStartNode, UDialogGraphStartNode::StaticClass, TEXT("UDialogGraphStartNode"), &Z_Registration_Info_UClass_UDialogGraphStartNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphStartNode), 2717016649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphStartNode_h_2024431476(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphStartNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphStartNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
