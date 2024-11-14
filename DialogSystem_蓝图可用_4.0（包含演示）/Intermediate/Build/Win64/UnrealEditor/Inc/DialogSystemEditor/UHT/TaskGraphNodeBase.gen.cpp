// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskSystemApp/TaskGraph/TaskGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGraphNodeBase() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNodeBase();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphNodeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskGraphNodeBase
void UTaskGraphNodeBase::StaticRegisterNativesUTaskGraphNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskGraphNodeBase);
UClass* Z_Construct_UClass_UTaskGraphNodeBase_NoRegister()
{
	return UTaskGraphNodeBase::StaticClass();
}
struct Z_Construct_UClass_UTaskGraphNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskSystemApp/TaskGraph/TaskGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskGraphNodeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeNodeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskGraphNodeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeNodeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskGraphNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskGraphNodeBase_Statics::NewProp_RuntimeNodeInfo = { "RuntimeNodeInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskGraphNodeBase, RuntimeNodeInfo), Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeNodeInfo_MetaData), NewProp_RuntimeNodeInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskGraphNodeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskGraphNodeBase_Statics::NewProp_RuntimeNodeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNodeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskGraphNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskGraphNodeBase_Statics::ClassParams = {
	&UTaskGraphNodeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaskGraphNodeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNodeBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskGraphNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskGraphNodeBase()
{
	if (!Z_Registration_Info_UClass_UTaskGraphNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskGraphNodeBase.OuterSingleton, Z_Construct_UClass_UTaskGraphNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskGraphNodeBase.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskGraphNodeBase>()
{
	return UTaskGraphNodeBase::StaticClass();
}
UTaskGraphNodeBase::UTaskGraphNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskGraphNodeBase);
UTaskGraphNodeBase::~UTaskGraphNodeBase() {}
// End Class UTaskGraphNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphNodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskGraphNodeBase, UTaskGraphNodeBase::StaticClass, TEXT("UTaskGraphNodeBase"), &Z_Registration_Info_UClass_UTaskGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskGraphNodeBase), 2708243748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphNodeBase_h_69021433(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphNodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
