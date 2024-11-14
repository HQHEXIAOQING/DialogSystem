// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGraphEndNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphEndNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphEndNode_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNodeBase();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskGraphEndNode
void UTaskGraphEndNode::StaticRegisterNativesUTaskGraphEndNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskGraphEndNode);
UClass* Z_Construct_UClass_UTaskGraphEndNode_NoRegister()
{
	return UTaskGraphEndNode::StaticClass();
}
struct Z_Construct_UClass_UTaskGraphEndNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskGraphEndNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskGraphEndNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphEndNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskGraphEndNode_Statics::ClassParams = {
	&UTaskGraphEndNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphEndNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskGraphEndNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskGraphEndNode()
{
	if (!Z_Registration_Info_UClass_UTaskGraphEndNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskGraphEndNode.OuterSingleton, Z_Construct_UClass_UTaskGraphEndNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskGraphEndNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskGraphEndNode>()
{
	return UTaskGraphEndNode::StaticClass();
}
UTaskGraphEndNode::UTaskGraphEndNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskGraphEndNode);
UTaskGraphEndNode::~UTaskGraphEndNode() {}
// End Class UTaskGraphEndNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskGraphEndNode, UTaskGraphEndNode::StaticClass, TEXT("UTaskGraphEndNode"), &Z_Registration_Info_UClass_UTaskGraphEndNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskGraphEndNode), 1487586344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_2853544278(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
