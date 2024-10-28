// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeCondition/DialogNodeCondition_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogNodeCondition_Test() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeCondition_Test();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeCondition_Test_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeConditionBase();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UDialogNodeCondition_Test
void UDialogNodeCondition_Test::StaticRegisterNativesUDialogNodeCondition_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogNodeCondition_Test);
UClass* Z_Construct_UClass_UDialogNodeCondition_Test_NoRegister()
{
	return UDialogNodeCondition_Test::StaticClass();
}
struct Z_Construct_UClass_UDialogNodeCondition_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe6\xb5\x8b\xe8\xaf\x95\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfos/DialogNodeCondition/DialogNodeCondition_Test.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeCondition/DialogNodeCondition_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestBool_MetaData[] = {
		{ "Category", "DialogAssetCondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb5\x8b\xe8\xaf\x95\xe7\xbb\x93\xe6\x9e\x9c\n" },
#endif
		{ "DisplayName", "\xe6\xb5\x8b\xe8\xaf\x95\xe7\xbb\x93\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/DialogNodeCondition/DialogNodeCondition_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb5\x8b\xe8\xaf\x95\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_TestBool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TestBool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogNodeCondition_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDialogNodeCondition_Test_Statics::NewProp_TestBool_SetBit(void* Obj)
{
	((UDialogNodeCondition_Test*)Obj)->TestBool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogNodeCondition_Test_Statics::NewProp_TestBool = { "TestBool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogNodeCondition_Test), &Z_Construct_UClass_UDialogNodeCondition_Test_Statics::NewProp_TestBool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestBool_MetaData), NewProp_TestBool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogNodeCondition_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogNodeCondition_Test_Statics::NewProp_TestBool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeCondition_Test_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogNodeCondition_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDialogNodeConditionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeCondition_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogNodeCondition_Test_Statics::ClassParams = {
	&UDialogNodeCondition_Test::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogNodeCondition_Test_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeCondition_Test_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeCondition_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogNodeCondition_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogNodeCondition_Test()
{
	if (!Z_Registration_Info_UClass_UDialogNodeCondition_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogNodeCondition_Test.OuterSingleton, Z_Construct_UClass_UDialogNodeCondition_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogNodeCondition_Test.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogNodeCondition_Test>()
{
	return UDialogNodeCondition_Test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogNodeCondition_Test);
UDialogNodeCondition_Test::~UDialogNodeCondition_Test() {}
// End Class UDialogNodeCondition_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeCondition_DialogNodeCondition_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogNodeCondition_Test, UDialogNodeCondition_Test::StaticClass, TEXT("UDialogNodeCondition_Test"), &Z_Registration_Info_UClass_UDialogNodeCondition_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogNodeCondition_Test), 2125201604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeCondition_DialogNodeCondition_Test_h_2349452310(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeCondition_DialogNodeCondition_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_DialogNodeCondition_DialogNodeCondition_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
