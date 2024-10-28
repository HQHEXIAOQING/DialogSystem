// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNode_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNodeBase();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphNode
void UDialogGraphNode::StaticRegisterNativesUDialogGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphNode);
UClass* Z_Construct_UClass_UDialogGraphNode_NoRegister()
{
	return UDialogGraphNode::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphNode_Statics::ClassParams = {
	&UDialogGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphNode()
{
	if (!Z_Registration_Info_UClass_UDialogGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphNode.OuterSingleton, Z_Construct_UClass_UDialogGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphNode>()
{
	return UDialogGraphNode::StaticClass();
}
UDialogGraphNode::UDialogGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphNode);
UDialogGraphNode::~UDialogGraphNode() {}
// End Class UDialogGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphNode, UDialogGraphNode::StaticClass, TEXT("UDialogGraphNode"), &Z_Registration_Info_UClass_UDialogGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphNode), 472113866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_2767904268(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
