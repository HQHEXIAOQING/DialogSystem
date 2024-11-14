// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/SystemValue/SystemValues/SystemValueType_Vector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemValueType_Vector() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Vector();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Vector_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class USystemValueType_Vector
void USystemValueType_Vector::StaticRegisterNativesUSystemValueType_Vector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemValueType_Vector);
UClass* Z_Construct_UClass_USystemValueType_Vector_NoRegister()
{
	return USystemValueType_Vector::StaticClass();
}
struct Z_Construct_UClass_USystemValueType_Vector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x90\x91\xe9\x87\x8f" },
		{ "IncludePath", "SystemValue/SystemValues/SystemValueType_Vector.h" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Vector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVector_MetaData[] = {
		{ "Category", "SystemValueType_Vector" },
		{ "DisplayName", "\xe5\x90\x91\xe9\x87\x8f\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Vector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemValueType_Vector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USystemValueType_Vector_Statics::NewProp_DefaultVector = { "DefaultVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USystemValueType_Vector, DefaultVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultVector_MetaData), NewProp_DefaultVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemValueType_Vector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemValueType_Vector_Statics::NewProp_DefaultVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Vector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USystemValueType_Vector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemValueType,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Vector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemValueType_Vector_Statics::ClassParams = {
	&USystemValueType_Vector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USystemValueType_Vector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Vector_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Vector_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemValueType_Vector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemValueType_Vector()
{
	if (!Z_Registration_Info_UClass_USystemValueType_Vector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemValueType_Vector.OuterSingleton, Z_Construct_UClass_USystemValueType_Vector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemValueType_Vector.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USystemValueType_Vector>()
{
	return USystemValueType_Vector::StaticClass();
}
USystemValueType_Vector::USystemValueType_Vector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemValueType_Vector);
USystemValueType_Vector::~USystemValueType_Vector() {}
// End Class USystemValueType_Vector

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Vector_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemValueType_Vector, USystemValueType_Vector::StaticClass, TEXT("USystemValueType_Vector"), &Z_Registration_Info_UClass_USystemValueType_Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemValueType_Vector), 3568359621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Vector_h_513035637(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Vector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Vector_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
