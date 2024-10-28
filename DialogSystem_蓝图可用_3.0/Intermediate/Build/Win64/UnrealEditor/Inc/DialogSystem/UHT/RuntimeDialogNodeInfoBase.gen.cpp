// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeDialogNodeInfoBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeDialogNodeInfoBase
void URuntimeDialogNodeInfoBase::StaticRegisterNativesURuntimeDialogNodeInfoBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogNodeInfoBase);
UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister()
{
	return URuntimeDialogNodeInfoBase::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfoBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeId_MetaData[] = {
		{ "Category", "RuntimeDialogPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfoBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogNodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogNodeInfoBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::NewProp_DialogNodeId = { "DialogNodeId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfoBase, DialogNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeId_MetaData), NewProp_DialogNodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::NewProp_DialogNodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::ClassParams = {
	&URuntimeDialogNodeInfoBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogNodeInfoBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogNodeInfoBase.OuterSingleton, Z_Construct_UClass_URuntimeDialogNodeInfoBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogNodeInfoBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogNodeInfoBase>()
{
	return URuntimeDialogNodeInfoBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogNodeInfoBase);
URuntimeDialogNodeInfoBase::~URuntimeDialogNodeInfoBase() {}
// End Class URuntimeDialogNodeInfoBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfoBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDialogNodeInfoBase, URuntimeDialogNodeInfoBase::StaticClass, TEXT("URuntimeDialogNodeInfoBase"), &Z_Registration_Info_UClass_URuntimeDialogNodeInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogNodeInfoBase), 1927722033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfoBase_h_3415584845(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfoBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
