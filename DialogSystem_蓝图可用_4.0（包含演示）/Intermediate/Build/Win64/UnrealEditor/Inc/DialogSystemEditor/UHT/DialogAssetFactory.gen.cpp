// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAssetFactory() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogAssetFactory();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogAssetFactory
void UDialogAssetFactory::StaticRegisterNativesUDialogAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAssetFactory);
UClass* Z_Construct_UClass_UDialogAssetFactory_NoRegister()
{
	return UDialogAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UDialogAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogAssetFactory.h" },
		{ "ModuleRelativePath", "Public/DialogAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAssetFactory_Statics::ClassParams = {
	&UDialogAssetFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAssetFactory()
{
	if (!Z_Registration_Info_UClass_UDialogAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAssetFactory.OuterSingleton, Z_Construct_UClass_UDialogAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAssetFactory.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogAssetFactory>()
{
	return UDialogAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAssetFactory);
UDialogAssetFactory::~UDialogAssetFactory() {}
// End Class UDialogAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAssetFactory, UDialogAssetFactory::StaticClass, TEXT("UDialogAssetFactory"), &Z_Registration_Info_UClass_UDialogAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAssetFactory), 1910136057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogAssetFactory_h_2751066554(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
