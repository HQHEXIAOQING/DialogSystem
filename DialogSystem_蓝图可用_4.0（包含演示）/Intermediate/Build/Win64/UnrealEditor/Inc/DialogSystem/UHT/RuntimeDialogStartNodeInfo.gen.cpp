// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogStartNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeDialogStartNodeInfo() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogStartNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogStartNodeInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeDialogStartNodeInfo
void URuntimeDialogStartNodeInfo::StaticRegisterNativesURuntimeDialogStartNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogStartNodeInfo);
UClass* Z_Construct_UClass_URuntimeDialogStartNodeInfo_NoRegister()
{
	return URuntimeDialogStartNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogStartNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogStartNodeInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogStartNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeDialogNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::ClassParams = {
	&URuntimeDialogStartNodeInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogStartNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogStartNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogStartNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeDialogStartNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogStartNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogStartNodeInfo>()
{
	return URuntimeDialogStartNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogStartNodeInfo);
URuntimeDialogStartNodeInfo::~URuntimeDialogStartNodeInfo() {}
// End Class URuntimeDialogStartNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogStartNodeInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDialogStartNodeInfo, URuntimeDialogStartNodeInfo::StaticClass, TEXT("URuntimeDialogStartNodeInfo"), &Z_Registration_Info_UClass_URuntimeDialogStartNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogStartNodeInfo), 2475572631U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogStartNodeInfo_h_1486680527(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogStartNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogStartNodeInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
