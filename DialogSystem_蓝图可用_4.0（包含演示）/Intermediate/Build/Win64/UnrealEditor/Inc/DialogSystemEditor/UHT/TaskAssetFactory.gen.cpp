// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskAssetFactory() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskAssetFactory();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskAssetFactory
void UTaskAssetFactory::StaticRegisterNativesUTaskAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskAssetFactory);
UClass* Z_Construct_UClass_UTaskAssetFactory_NoRegister()
{
	return UTaskAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UTaskAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskAssetFactory.h" },
		{ "ModuleRelativePath", "Public/TaskAssetFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskAssetFactory_Statics::ClassParams = {
	&UTaskAssetFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskAssetFactory()
{
	if (!Z_Registration_Info_UClass_UTaskAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskAssetFactory.OuterSingleton, Z_Construct_UClass_UTaskAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskAssetFactory.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskAssetFactory>()
{
	return UTaskAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskAssetFactory);
UTaskAssetFactory::~UTaskAssetFactory() {}
// End Class UTaskAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskAssetFactory, UTaskAssetFactory::StaticClass, TEXT("UTaskAssetFactory"), &Z_Registration_Info_UClass_UTaskAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskAssetFactory), 1931869887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskAssetFactory_h_1104487375(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
