// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/DialogNodeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogNodeType() {}

// Begin Cross Module References
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_EDialogNodeType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Enum EDialogNodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogNodeType;
static UEnum* EDialogNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogSystem_EDialogNodeType, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("EDialogNodeType"));
	}
	return Z_Registration_Info_UEnum_EDialogNodeType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogNodeType>()
{
	return EDialogNodeType_StaticEnum();
}
struct Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DialogEndNode.DisplayName", "\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogEndNode.Name", "EDialogNodeType::DialogEndNode" },
		{ "DialogNode.DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogNode.Name", "EDialogNodeType::DialogNode" },
		{ "DialogStartNode.DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogStartNode.Name", "EDialogNodeType::DialogStartNode" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogNodeType.h" },
		{ "UnKnown.DisplayName", "\xe6\x97\xa0" },
		{ "UnKnown.Name", "EDialogNodeType::UnKnown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogNodeType::UnKnown", (int64)EDialogNodeType::UnKnown },
		{ "EDialogNodeType::DialogStartNode", (int64)EDialogNodeType::DialogStartNode },
		{ "EDialogNodeType::DialogNode", (int64)EDialogNodeType::DialogNode },
		{ "EDialogNodeType::DialogEndNode", (int64)EDialogNodeType::DialogEndNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	"EDialogNodeType",
	"EDialogNodeType",
	Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DialogSystem_EDialogNodeType()
{
	if (!Z_Registration_Info_UEnum_EDialogNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogNodeType.InnerSingleton, Z_Construct_UEnum_DialogSystem_EDialogNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogNodeType.InnerSingleton;
}
// End Enum EDialogNodeType

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogNodeType_StaticEnum, TEXT("EDialogNodeType"), &Z_Registration_Info_UEnum_EDialogNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1377183849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeType_h_3317450583(TEXT("/Script/DialogSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
