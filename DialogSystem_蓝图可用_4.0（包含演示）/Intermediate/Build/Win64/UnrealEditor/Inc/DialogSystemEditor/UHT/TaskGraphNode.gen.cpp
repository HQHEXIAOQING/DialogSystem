// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGraphNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNode_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNodeBase();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskGraphNode
void UTaskGraphNode::StaticRegisterNativesUTaskGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskGraphNode);
UClass* Z_Construct_UClass_UTaskGraphNode_NoRegister()
{
	return UTaskGraphNode::StaticClass();
}
struct Z_Construct_UClass_UTaskGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskGraphNode_Statics::ClassParams = {
	&UTaskGraphNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskGraphNode()
{
	if (!Z_Registration_Info_UClass_UTaskGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskGraphNode.OuterSingleton, Z_Construct_UClass_UTaskGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskGraphNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskGraphNode>()
{
	return UTaskGraphNode::StaticClass();
}
UTaskGraphNode::UTaskGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskGraphNode);
UTaskGraphNode::~UTaskGraphNode() {}
// End Class UTaskGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskGraphNode, UTaskGraphNode::StaticClass, TEXT("UTaskGraphNode"), &Z_Registration_Info_UClass_UTaskGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskGraphNode), 529226185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_3660354844(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
