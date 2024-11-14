// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/SystemValue/SystemValues/SystemValueType_Object.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemValueType_Object() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Object();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_Object_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class USystemValueType_Object
void USystemValueType_Object::StaticRegisterNativesUSystemValueType_Object()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USystemValueType_Object);
UClass* Z_Construct_UClass_USystemValueType_Object_NoRegister()
{
	return USystemValueType_Object::StaticClass();
}
struct Z_Construct_UClass_USystemValueType_Object_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x80\xbc" },
		{ "IncludePath", "SystemValue/SystemValues/SystemValueType_Object.h" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Object.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultObject_MetaData[] = {
		{ "Category", "USystemValueType_Object" },
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/SystemValue/SystemValues/SystemValueType_Object.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemValueType_Object>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USystemValueType_Object_Statics::NewProp_DefaultObject = { "DefaultObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USystemValueType_Object, DefaultObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultObject_MetaData), NewProp_DefaultObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemValueType_Object_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemValueType_Object_Statics::NewProp_DefaultObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Object_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USystemValueType_Object_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USystemValueType,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Object_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USystemValueType_Object_Statics::ClassParams = {
	&USystemValueType_Object::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USystemValueType_Object_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Object_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USystemValueType_Object_Statics::Class_MetaDataParams), Z_Construct_UClass_USystemValueType_Object_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USystemValueType_Object()
{
	if (!Z_Registration_Info_UClass_USystemValueType_Object.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USystemValueType_Object.OuterSingleton, Z_Construct_UClass_USystemValueType_Object_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USystemValueType_Object.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USystemValueType_Object>()
{
	return USystemValueType_Object::StaticClass();
}
USystemValueType_Object::USystemValueType_Object(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USystemValueType_Object);
USystemValueType_Object::~USystemValueType_Object() {}
// End Class USystemValueType_Object

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Object_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USystemValueType_Object, USystemValueType_Object::StaticClass, TEXT("USystemValueType_Object"), &Z_Registration_Info_UClass_USystemValueType_Object, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USystemValueType_Object), 1580070557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Object_h_456623764(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Object_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_SystemValue_SystemValues_SystemValueType_Object_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
