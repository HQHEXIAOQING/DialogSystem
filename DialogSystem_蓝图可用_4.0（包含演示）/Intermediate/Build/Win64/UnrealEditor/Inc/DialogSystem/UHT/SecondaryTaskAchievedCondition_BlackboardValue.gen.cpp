// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskConditions/SecondaryTaskAchievedCondition_BlackboardValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondaryTaskAchievedCondition_BlackboardValue() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class USecondaryTaskAchievedCondition_BlackboardValue
void USecondaryTaskAchievedCondition_BlackboardValue::StaticRegisterNativesUSecondaryTaskAchievedCondition_BlackboardValue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondaryTaskAchievedCondition_BlackboardValue);
UClass* Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_NoRegister()
{
	return USecondaryTaskAchievedCondition_BlackboardValue::StaticClass();
}
struct Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\xaf\x94\n" },
#endif
		{ "DisplayName", "\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\xaf\x94" },
		{ "IncludePath", "TaskAsset/TaskConditions/SecondaryTaskAchievedCondition_BlackboardValue.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditions/SecondaryTaskAchievedCondition_BlackboardValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x94\xae\xe5\x80\xbc\xe5\xaf\xb9\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyType_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe9\xbb\x91\xe6\x9d\xbf\xe9\x94\xae\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe7\xbb\x93\xe6\x9e\x9c\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe5\xba\x94\xe9\xbb\x91\xe6\x9d\xbf\xe9\x94\xae" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditions/SecondaryTaskAchievedCondition_BlackboardValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe9\xbb\x91\xe6\x9d\xbf\xe9\x94\xae\xe7\xb1\xbb\xe5\x9e\x8b\xe5\x92\x8c\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyId_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\xbb\x91\xe6\x9d\xbf\xe4\xb8\xad\xe5\xaf\xb9\xe5\xba\x94\xe9\x94\xaeId\n" },
#endif
		{ "DisplayName", "\xe9\xbb\x91\xe6\x9d\xbf\xe4\xb8\xad\xe5\xaf\xb9\xe5\xba\x94\xe9\x94\xaeId" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditions/SecondaryTaskAchievedCondition_BlackboardValue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x91\xe6\x9d\xbf\xe4\xb8\xad\xe5\xaf\xb9\xe5\xba\x94\xe9\x94\xaeId" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondaryTaskAchievedCondition_BlackboardValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::NewProp_KeyType = { "KeyType", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskAchievedCondition_BlackboardValue, KeyType), Z_Construct_UClass_USystemValueType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyType_MetaData), NewProp_KeyType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::NewProp_KeyId = { "KeyId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskAchievedCondition_BlackboardValue, KeyId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyId_MetaData), NewProp_KeyId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::NewProp_KeyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::NewProp_KeyId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USecondaryTaskAchievedConditionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::ClassParams = {
	&USecondaryTaskAchievedCondition_BlackboardValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue()
{
	if (!Z_Registration_Info_UClass_USecondaryTaskAchievedCondition_BlackboardValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondaryTaskAchievedCondition_BlackboardValue.OuterSingleton, Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondaryTaskAchievedCondition_BlackboardValue.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USecondaryTaskAchievedCondition_BlackboardValue>()
{
	return USecondaryTaskAchievedCondition_BlackboardValue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondaryTaskAchievedCondition_BlackboardValue);
USecondaryTaskAchievedCondition_BlackboardValue::~USecondaryTaskAchievedCondition_BlackboardValue() {}
// End Class USecondaryTaskAchievedCondition_BlackboardValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_SecondaryTaskAchievedCondition_BlackboardValue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecondaryTaskAchievedCondition_BlackboardValue, USecondaryTaskAchievedCondition_BlackboardValue::StaticClass, TEXT("USecondaryTaskAchievedCondition_BlackboardValue"), &Z_Registration_Info_UClass_USecondaryTaskAchievedCondition_BlackboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondaryTaskAchievedCondition_BlackboardValue), 4039374793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_SecondaryTaskAchievedCondition_BlackboardValue_h_3315153815(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_SecondaryTaskAchievedCondition_BlackboardValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_SecondaryTaskAchievedCondition_BlackboardValue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
