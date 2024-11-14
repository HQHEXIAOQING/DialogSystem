// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGraphStartNode() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNodeBase();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphStartNode();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphStartNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskGraphStartNode
void UTaskGraphStartNode::StaticRegisterNativesUTaskGraphStartNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskGraphStartNode);
UClass* Z_Construct_UClass_UTaskGraphStartNode_NoRegister()
{
	return UTaskGraphStartNode::StaticClass();
}
struct Z_Construct_UClass_UTaskGraphStartNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskNodes/TaskGraphStartNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskGraphStartNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskGraphStartNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskGraphNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphStartNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskGraphStartNode_Statics::ClassParams = {
	&UTaskGraphStartNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphStartNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskGraphStartNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskGraphStartNode()
{
	if (!Z_Registration_Info_UClass_UTaskGraphStartNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskGraphStartNode.OuterSingleton, Z_Construct_UClass_UTaskGraphStartNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskGraphStartNode.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskGraphStartNode>()
{
	return UTaskGraphStartNode::StaticClass();
}
UTaskGraphStartNode::UTaskGraphStartNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskGraphStartNode);
UTaskGraphStartNode::~UTaskGraphStartNode() {}
// End Class UTaskGraphStartNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphStartNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskGraphStartNode, UTaskGraphStartNode::StaticClass, TEXT("UTaskGraphStartNode"), &Z_Registration_Info_UClass_UTaskGraphStartNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskGraphStartNode), 3276538993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphStartNode_h_778280805(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphStartNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphStartNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
