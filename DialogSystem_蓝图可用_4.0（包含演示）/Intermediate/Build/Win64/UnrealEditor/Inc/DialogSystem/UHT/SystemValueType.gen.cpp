// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/SystemValue/SystemValueType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemValueType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class USystemValueType
void USystemValueType::StaticRegisterNativesUSystemValueType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemValueType);
UClass* Z_Construct_UClass_USystemValueType_NoRegister()
{
	return USystemValueType::StaticClass();
}
struct Z_Construct_UClass_USystemValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SystemValue/SystemValueType.h" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValueType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemValueType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USystemValueType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemValueType_Statics::ClassParams = {
	&USystemValueType::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemValueType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemValueType()
{
	if (!Z_Registration_Info_UClass_USystemValueType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemValueType.OuterSingleton, Z_Construct_UClass_USystemValueType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemValueType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USystemValueType>()
{
	return USystemValueType::StaticClass();
}
USystemValueType::USystemValueType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemValueType);
USystemValueType::~USystemValueType() {}
// End Class USystemValueType

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValueType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemValueType, USystemValueType::StaticClass, TEXT("USystemValueType"), &Z_Registration_Info_UClass_USystemValueType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemValueType), 2196413960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValueType_h_3897755662(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValueType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValueType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
