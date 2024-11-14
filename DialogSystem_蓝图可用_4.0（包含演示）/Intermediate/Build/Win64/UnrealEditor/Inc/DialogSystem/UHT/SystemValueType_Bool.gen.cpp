// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/SystemValue/SystemValues/SystemValueType_Bool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemValueType_Bool() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Bool();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Bool_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class USystemValueType_Bool
void USystemValueType_Bool::StaticRegisterNativesUSystemValueType_Bool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemValueType_Bool);
UClass* Z_Construct_UClass_USystemValueType_Bool_NoRegister()
{
	return USystemValueType_Bool::StaticClass();
}
struct Z_Construct_UClass_USystemValueType_Bool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
		{ "IncludePath", "SystemValue/SystemValues/SystemValueType_Bool.h" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Bool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultValue_MetaData[] = {
		{ "Category", "SystemValueType_Bool" },
		{ "DisplayName", "\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Bool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDefaultValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemValueType_Bool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USystemValueType_Bool_Statics::NewProp_bDefaultValue_SetBit(void* Obj)
{
	((USystemValueType_Bool*)Obj)->bDefaultValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemValueType_Bool_Statics::NewProp_bDefaultValue = { "bDefaultValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USystemValueType_Bool), &Z_Construct_UClass_USystemValueType_Bool_Statics::NewProp_bDefaultValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultValue_MetaData), NewProp_bDefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemValueType_Bool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemValueType_Bool_Statics::NewProp_bDefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Bool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USystemValueType_Bool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemValueType,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Bool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemValueType_Bool_Statics::ClassParams = {
	&USystemValueType_Bool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USystemValueType_Bool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Bool_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Bool_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemValueType_Bool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemValueType_Bool()
{
	if (!Z_Registration_Info_UClass_USystemValueType_Bool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemValueType_Bool.OuterSingleton, Z_Construct_UClass_USystemValueType_Bool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemValueType_Bool.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USystemValueType_Bool>()
{
	return USystemValueType_Bool::StaticClass();
}
USystemValueType_Bool::USystemValueType_Bool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemValueType_Bool);
USystemValueType_Bool::~USystemValueType_Bool() {}
// End Class USystemValueType_Bool

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Bool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemValueType_Bool, USystemValueType_Bool::StaticClass, TEXT("USystemValueType_Bool"), &Z_Registration_Info_UClass_USystemValueType_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemValueType_Bool), 2573695493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Bool_h_3922801820(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Bool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Bool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
