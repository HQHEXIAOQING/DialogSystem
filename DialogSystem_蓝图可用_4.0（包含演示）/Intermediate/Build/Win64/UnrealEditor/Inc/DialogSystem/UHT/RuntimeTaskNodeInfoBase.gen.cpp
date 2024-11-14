// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskNodeInfoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTaskNodeInfoBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffectorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeTaskNodeInfoBase
void URuntimeTaskNodeInfoBase::StaticRegisterNativesURuntimeTaskNodeInfoBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskNodeInfoBase);
UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister()
{
	return URuntimeTaskNodeInfoBase::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TaskAsset/RuntimeTaskNodeInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfoBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskEffectorArray_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfoBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfoBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeId_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfoBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfoBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskEffectorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskEffectorArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskNodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskNodeInfoBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskEffectorArray_Inner = { "TaskEffectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskEffectorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskEffectorArray = { "TaskEffectorArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfoBase, TaskEffectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskEffectorArray_MetaData), NewProp_TaskEffectorArray_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskNodeId = { "TaskNodeId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfoBase, TaskNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeId_MetaData), NewProp_TaskNodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskEffectorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskEffectorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::NewProp_TaskNodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::ClassParams = {
	&URuntimeTaskNodeInfoBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskNodeInfoBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskNodeInfoBase.OuterSingleton, Z_Construct_UClass_URuntimeTaskNodeInfoBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskNodeInfoBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskNodeInfoBase>()
{
	return URuntimeTaskNodeInfoBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskNodeInfoBase);
URuntimeTaskNodeInfoBase::~URuntimeTaskNodeInfoBase() {}
// End Class URuntimeTaskNodeInfoBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfoBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTaskNodeInfoBase, URuntimeTaskNodeInfoBase::StaticClass, TEXT("URuntimeTaskNodeInfoBase"), &Z_Registration_Info_UClass_URuntimeTaskNodeInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskNodeInfoBase), 3353906356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfoBase_h_2297126597(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfoBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
