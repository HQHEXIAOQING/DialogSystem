// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskEffectors/TaskEffector_PrintText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskEffector_PrintText() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffector_PrintText();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffector_PrintText_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffectorBase();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskEffector_PrintText
void UTaskEffector_PrintText::StaticRegisterNativesUTaskEffector_PrintText()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskEffector_PrintText);
UClass* Z_Construct_UClass_UTaskEffector_PrintText_NoRegister()
{
	return UTaskEffector_PrintText::StaticClass();
}
struct Z_Construct_UClass_UTaskEffector_PrintText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "DisplayName", "\xe6\x89\x93\xe5\x8d\xb0\xe6\x96\x87\xe6\x9c\xac" },
		{ "IncludePath", "TaskAsset/TaskEffectors/TaskEffector_PrintText.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskEffectors/TaskEffector_PrintText.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskText_MetaData[] = {
		{ "Category", "TaskEffector_PrintText" },
		{ "DisplayName", "\xe6\x89\x93\xe5\x8d\xb0\xe6\x96\x87\xe6\x9c\xac" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskEffectors/TaskEffector_PrintText.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskEffector_PrintText>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTaskEffector_PrintText_Statics::NewProp_TaskText = { "TaskText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskEffector_PrintText, TaskText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskText_MetaData), NewProp_TaskText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskEffector_PrintText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskEffector_PrintText_Statics::NewProp_TaskText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffector_PrintText_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskEffector_PrintText_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskEffectorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffector_PrintText_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskEffector_PrintText_Statics::ClassParams = {
	&UTaskEffector_PrintText::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaskEffector_PrintText_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffector_PrintText_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffector_PrintText_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskEffector_PrintText_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskEffector_PrintText()
{
	if (!Z_Registration_Info_UClass_UTaskEffector_PrintText.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskEffector_PrintText.OuterSingleton, Z_Construct_UClass_UTaskEffector_PrintText_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskEffector_PrintText.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskEffector_PrintText>()
{
	return UTaskEffector_PrintText::StaticClass();
}
UTaskEffector_PrintText::UTaskEffector_PrintText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskEffector_PrintText);
UTaskEffector_PrintText::~UTaskEffector_PrintText() {}
// End Class UTaskEffector_PrintText

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskEffectors_TaskEffector_PrintText_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskEffector_PrintText, UTaskEffector_PrintText::StaticClass, TEXT("UTaskEffector_PrintText"), &Z_Registration_Info_UClass_UTaskEffector_PrintText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskEffector_PrintText), 1760384648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskEffectors_TaskEffector_PrintText_h_3252341480(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskEffectors_TaskEffector_PrintText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskEffectors_TaskEffector_PrintText_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
