// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/ParticipantCondition/ParticipantCondition_Test.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticipantCondition_Test() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantCondition_Test();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantCondition_Test_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantConditionBase();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UParticipantCondition_Test
void UParticipantCondition_Test::StaticRegisterNativesUParticipantCondition_Test()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticipantCondition_Test);
UClass* Z_Construct_UClass_UParticipantCondition_Test_NoRegister()
{
	return UParticipantCondition_Test::StaticClass();
}
struct Z_Construct_UClass_UParticipantCondition_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "DisplayName", "\xe6\xb5\x8b\xe8\xaf\x95\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "IncludePath", "DialogAsset/ParticipantCondition/ParticipantCondition_Test.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/ParticipantCondition/ParticipantCondition_Test.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticipantCondition_Test>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticipantCondition_Test_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UParticipantConditionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticipantCondition_Test_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticipantCondition_Test_Statics::ClassParams = {
	&UParticipantCondition_Test::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticipantCondition_Test_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticipantCondition_Test_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticipantCondition_Test()
{
	if (!Z_Registration_Info_UClass_UParticipantCondition_Test.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticipantCondition_Test.OuterSingleton, Z_Construct_UClass_UParticipantCondition_Test_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticipantCondition_Test.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UParticipantCondition_Test>()
{
	return UParticipantCondition_Test::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticipantCondition_Test);
UParticipantCondition_Test::~UParticipantCondition_Test() {}
// End Class UParticipantCondition_Test

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_ParticipantCondition_ParticipantCondition_Test_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UParticipantCondition_Test, UParticipantCondition_Test::StaticClass, TEXT("UParticipantCondition_Test"), &Z_Registration_Info_UClass_UParticipantCondition_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticipantCondition_Test), 454483586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_ParticipantCondition_ParticipantCondition_Test_h_1842590635(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_ParticipantCondition_ParticipantCondition_Test_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_ParticipantCondition_ParticipantCondition_Test_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
