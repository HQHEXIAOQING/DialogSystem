// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeEffector/DialogNodeEffector_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogNodeEffector_Test() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffector_Test();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffector_Test_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffectorBase();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UDialogNodeEffector_Test
void UDialogNodeEffector_Test::StaticRegisterNativesUDialogNodeEffector_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogNodeEffector_Test);
UClass* Z_Construct_UClass_UDialogNodeEffector_Test_NoRegister()
{
	return UDialogNodeEffector_Test::StaticClass();
}
struct Z_Construct_UClass_UDialogNodeEffector_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xef\xbc\x9a\xe5\xb1\x8f\xe5\xb9\x95\xe6\x89\x93\xe5\x8d\xb0" },
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfos/DialogNodeEffector/DialogNodeEffector_Test.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeEffector/DialogNodeEffector_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrintText_MetaData[] = {
		{ "Category", "DialogAssetCondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x89\x93\xe5\x8d\xb0\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "DisplayName", "\xe6\x89\x93\xe5\x8d\xb0\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeEffector/DialogNodeEffector_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\x93\xe5\x8d\xb0\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrintText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogNodeEffector_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDialogNodeEffector_Test_Statics::NewProp_PrintText = { "PrintText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogNodeEffector_Test, PrintText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrintText_MetaData), NewProp_PrintText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogNodeEffector_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogNodeEffector_Test_Statics::NewProp_PrintText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffector_Test_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogNodeEffector_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogNodeEffectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffector_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogNodeEffector_Test_Statics::ClassParams = {
	&UDialogNodeEffector_Test::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogNodeEffector_Test_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffector_Test_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffector_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogNodeEffector_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogNodeEffector_Test()
{
	if (!Z_Registration_Info_UClass_UDialogNodeEffector_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogNodeEffector_Test.OuterSingleton, Z_Construct_UClass_UDialogNodeEffector_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogNodeEffector_Test.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogNodeEffector_Test>()
{
	return UDialogNodeEffector_Test::StaticClass();
}
UDialogNodeEffector_Test::UDialogNodeEffector_Test(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogNodeEffector_Test);
UDialogNodeEffector_Test::~UDialogNodeEffector_Test() {}
// End Class UDialogNodeEffector_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeEffector_DialogNodeEffector_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogNodeEffector_Test, UDialogNodeEffector_Test::StaticClass, TEXT("UDialogNodeEffector_Test"), &Z_Registration_Info_UClass_UDialogNodeEffector_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogNodeEffector_Test), 144515555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeEffector_DialogNodeEffector_Test_h_172030783(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeEffector_DialogNodeEffector_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeEffector_DialogNodeEffector_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
