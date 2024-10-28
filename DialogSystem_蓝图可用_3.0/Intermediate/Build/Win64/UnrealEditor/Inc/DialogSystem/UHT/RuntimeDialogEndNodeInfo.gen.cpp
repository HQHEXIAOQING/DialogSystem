// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeDialogEndNodeInfo() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogEndNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogEndNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_EDialogEndNodeType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Enum EDialogEndNodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogEndNodeType;
static UEnum* EDialogEndNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogEndNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogEndNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogSystem_EDialogEndNodeType, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("EDialogEndNodeType"));
	}
	return Z_Registration_Info_UEnum_EDialogEndNodeType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogEndNodeType>()
{
	return EDialogEndNodeType_StaticEnum();
}
struct Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DialogNodeEnd.DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xbb\x93\xe6\x9d\x9f" },
		{ "DialogNodeEnd.Name", "EDialogEndNodeType::DialogNodeEnd" },
		{ "DialogNodeJump.DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe8\xb7\xb3\xe8\xbd\xac" },
		{ "DialogNodeJump.Name", "EDialogEndNodeType::DialogNodeJump" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogEndNodeType::DialogNodeEnd", (int64)EDialogEndNodeType::DialogNodeEnd },
		{ "EDialogEndNodeType::DialogNodeJump", (int64)EDialogEndNodeType::DialogNodeJump },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	"EDialogEndNodeType",
	"EDialogEndNodeType",
	Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DialogSystem_EDialogEndNodeType()
{
	if (!Z_Registration_Info_UEnum_EDialogEndNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogEndNodeType.InnerSingleton, Z_Construct_UEnum_DialogSystem_EDialogEndNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogEndNodeType.InnerSingleton;
}
// End Enum EDialogEndNodeType

// Begin Class URuntimeDialogEndNodeInfo
void URuntimeDialogEndNodeInfo::StaticRegisterNativesURuntimeDialogEndNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogEndNodeInfo);
UClass* Z_Construct_UClass_URuntimeDialogEndNodeInfo_NoRegister()
{
	return URuntimeDialogEndNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogEndNodeTitle_MetaData[] = {
		{ "Category", "RuntimeDialogEndNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\xa0\x87\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogEndNodeType_MetaData[] = {
		{ "Category", "RuntimeDialogEndNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "DisplayName", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\x96\xb9\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeJump_MetaData[] = {
		{ "Category", "RuntimeDialogEndNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb7\xb3\xe8\xbd\xac\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb7\xb3\xe8\xbd\xac\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "EditCondition", "DialogEndNodeType==EDialogEndNodeType::DialogNodeJump" },
		{ "EditConditionHides", "DialogEndNodeType==EDialogEndNodeType::DialogNodeJump" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb7\xb3\xe8\xbd\xac\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogEndNodeTitle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogEndNodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogEndNodeType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogNodeJump;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogEndNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeTitle = { "DialogEndNodeTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogEndNodeInfo, DialogEndNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogEndNodeTitle_MetaData), NewProp_DialogEndNodeTitle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeType = { "DialogEndNodeType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogEndNodeInfo, DialogEndNodeType), Z_Construct_UEnum_DialogSystem_EDialogEndNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogEndNodeType_MetaData), NewProp_DialogEndNodeType_MetaData) }; // 3432139129
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogNodeJump = { "DialogNodeJump", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogEndNodeInfo, DialogNodeJump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeJump_MetaData), NewProp_DialogNodeJump_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogEndNodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::NewProp_DialogNodeJump,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeDialogNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::ClassParams = {
	&URuntimeDialogEndNodeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogEndNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogEndNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogEndNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogEndNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogEndNodeInfo>()
{
	return URuntimeDialogEndNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogEndNodeInfo);
URuntimeDialogEndNodeInfo::~URuntimeDialogEndNodeInfo() {}
// End Class URuntimeDialogEndNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogEndNodeType_StaticEnum, TEXT("EDialogEndNodeType"), &Z_Registration_Info_UEnum_EDialogEndNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3432139129U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDialogEndNodeInfo, URuntimeDialogEndNodeInfo::StaticClass, TEXT("URuntimeDialogEndNodeInfo"), &Z_Registration_Info_UClass_URuntimeDialogEndNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogEndNodeInfo), 568764176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_3398071738(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
