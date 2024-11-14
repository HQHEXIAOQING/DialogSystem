// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphEndNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphEndNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphEndNode_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNodeBase();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphEndNode
void UDialogGraphEndNode::StaticRegisterNativesUDialogGraphEndNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphEndNode);
UClass* Z_Construct_UClass_UDialogGraphEndNode_NoRegister()
{
	return UDialogGraphEndNode::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphEndNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogNodes/DialogGraphEndNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphEndNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogGraphEndNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphEndNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphEndNode_Statics::ClassParams = {
	&UDialogGraphEndNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphEndNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphEndNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphEndNode()
{
	if (!Z_Registration_Info_UClass_UDialogGraphEndNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphEndNode.OuterSingleton, Z_Construct_UClass_UDialogGraphEndNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphEndNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphEndNode>()
{
	return UDialogGraphEndNode::StaticClass();
}
UDialogGraphEndNode::UDialogGraphEndNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphEndNode);
UDialogGraphEndNode::~UDialogGraphEndNode() {}
// End Class UDialogGraphEndNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphEndNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphEndNode, UDialogGraphEndNode::StaticClass, TEXT("UDialogGraphEndNode"), &Z_Registration_Info_UClass_UDialogGraphEndNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphEndNode), 2230072599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphEndNode_h_5014017(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphEndNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphEndNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
