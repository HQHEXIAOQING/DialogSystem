// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskStartNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTaskStartNodeInfo() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskStartNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskStartNodeInfo_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeTaskStartNodeInfo
void URuntimeTaskStartNodeInfo::StaticRegisterNativesURuntimeTaskStartNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskStartNodeInfo);
UClass* Z_Construct_UClass_URuntimeTaskStartNodeInfo_NoRegister()
{
	return URuntimeTaskStartNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskStartNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskStartNodeInfo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskStartNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeTaskNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::ClassParams = {
	&URuntimeTaskStartNodeInfo::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskStartNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskStartNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskStartNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeTaskStartNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskStartNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskStartNodeInfo>()
{
	return URuntimeTaskStartNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskStartNodeInfo);
URuntimeTaskStartNodeInfo::~URuntimeTaskStartNodeInfo() {}
// End Class URuntimeTaskStartNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskStartNodeInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTaskStartNodeInfo, URuntimeTaskStartNodeInfo::StaticClass, TEXT("URuntimeTaskStartNodeInfo"), &Z_Registration_Info_UClass_URuntimeTaskStartNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskStartNodeInfo), 2450392644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskStartNodeInfo_h_3036422221(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskStartNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskStartNodeInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
