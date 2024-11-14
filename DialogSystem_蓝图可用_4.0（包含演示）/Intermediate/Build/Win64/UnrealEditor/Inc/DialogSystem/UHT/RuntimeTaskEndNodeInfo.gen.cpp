// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTaskEndNodeInfo() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskEndNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskEndNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeTaskEndNodeInfo
void URuntimeTaskEndNodeInfo::StaticRegisterNativesURuntimeTaskEndNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskEndNodeInfo);
UClass* Z_Construct_UClass_URuntimeTaskEndNodeInfo_NoRegister()
{
	return URuntimeTaskEndNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogEndNodeTitle_MetaData[] = {
		{ "Category", "RuntimeTaskEndNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskResult_MetaData[] = {
		{ "Category", "RuntimeTaskEndNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogEndNodeTitle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskEndNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_DialogEndNodeTitle = { "DialogEndNodeTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskEndNodeInfo, DialogEndNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogEndNodeTitle_MetaData), NewProp_DialogEndNodeTitle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_TaskResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_TaskResult = { "TaskResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskEndNodeInfo, TaskResult), Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskResult_MetaData), NewProp_TaskResult_MetaData) }; // 2271008850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_DialogEndNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_TaskResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::NewProp_TaskResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeTaskNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::ClassParams = {
	&URuntimeTaskEndNodeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskEndNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskEndNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskEndNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeTaskEndNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskEndNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskEndNodeInfo>()
{
	return URuntimeTaskEndNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskEndNodeInfo);
URuntimeTaskEndNodeInfo::~URuntimeTaskEndNodeInfo() {}
// End Class URuntimeTaskEndNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskEndNodeInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTaskEndNodeInfo, URuntimeTaskEndNodeInfo::StaticClass, TEXT("URuntimeTaskEndNodeInfo"), &Z_Registration_Info_UClass_URuntimeTaskEndNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskEndNodeInfo), 2824042915U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskEndNodeInfo_h_633469787(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskEndNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskEndNodeInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
