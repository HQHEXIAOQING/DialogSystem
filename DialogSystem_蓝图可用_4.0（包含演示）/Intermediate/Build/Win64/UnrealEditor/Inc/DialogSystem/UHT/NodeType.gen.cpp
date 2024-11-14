// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/NodeType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeType() {}

// Begin Cross Module References
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_EDialogNodeType();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskNodeType();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
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
		{ "DialogJumpNode.DisplayName", "\xe8\xb7\xb3\xe8\xbd\xac\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogJumpNode.Name", "EDialogNodeType::DialogJumpNode" },
		{ "DialogNode.DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogNode.Name", "EDialogNodeType::DialogNode" },
		{ "DialogStartNode.DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\x8a\x82\xe7\x82\xb9" },
		{ "DialogStartNode.Name", "EDialogNodeType::DialogStartNode" },
		{ "ModuleRelativePath", "Public/NodeType.h" },
		{ "UnKnown.DisplayName", "\xe6\x97\xa0" },
		{ "UnKnown.Name", "EDialogNodeType::UnKnown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogNodeType::UnKnown", (int64)EDialogNodeType::UnKnown },
		{ "EDialogNodeType::DialogStartNode", (int64)EDialogNodeType::DialogStartNode },
		{ "EDialogNodeType::DialogNode", (int64)EDialogNodeType::DialogNode },
		{ "EDialogNodeType::DialogJumpNode", (int64)EDialogNodeType::DialogJumpNode },
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

// Begin Enum ETaskNodeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskNodeType;
static UEnum* ETaskNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogSystem_ETaskNodeType, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("ETaskNodeType"));
	}
	return Z_Registration_Info_UEnum_ETaskNodeType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UEnum* StaticEnum<ETaskNodeType>()
{
	return ETaskNodeType_StaticEnum();
}
struct Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NodeType.h" },
		{ "TaskEndNode.DisplayName", "\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9" },
		{ "TaskEndNode.Name", "ETaskNodeType::TaskEndNode" },
		{ "TaskNode.DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9" },
		{ "TaskNode.Name", "ETaskNodeType::TaskNode" },
		{ "TaskStartNode.DisplayName", "\xe5\xbc\x80\xe5\xa7\x8b\xe8\x8a\x82\xe7\x82\xb9" },
		{ "TaskStartNode.Name", "ETaskNodeType::TaskStartNode" },
		{ "UnKnown.DisplayName", "\xe6\x97\xa0" },
		{ "UnKnown.Name", "ETaskNodeType::UnKnown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskNodeType::UnKnown", (int64)ETaskNodeType::UnKnown },
		{ "ETaskNodeType::TaskStartNode", (int64)ETaskNodeType::TaskStartNode },
		{ "ETaskNodeType::TaskNode", (int64)ETaskNodeType::TaskNode },
		{ "ETaskNodeType::TaskEndNode", (int64)ETaskNodeType::TaskEndNode },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	"ETaskNodeType",
	"ETaskNodeType",
	Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DialogSystem_ETaskNodeType()
{
	if (!Z_Registration_Info_UEnum_ETaskNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskNodeType.InnerSingleton, Z_Construct_UEnum_DialogSystem_ETaskNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskNodeType.InnerSingleton;
}
// End Enum ETaskNodeType

// Begin Enum ETaskResultType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETaskResultType;
static UEnum* ETaskResultType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETaskResultType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETaskResultType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogSystem_ETaskResultType, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("ETaskResultType"));
	}
	return Z_Registration_Info_UEnum_ETaskResultType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UEnum* StaticEnum<ETaskResultType>()
{
	return ETaskResultType_StaticEnum();
}
struct Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x8c\x85\xe4\xb8\xad\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\xe5\x88\x86\xe7\xb1\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/NodeType.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "ETaskResultType::None" },
		{ "TaskFinish.DisplayName", "\xe5\xa4\xb1\xe8\xb4\xa5" },
		{ "TaskFinish.Name", "ETaskResultType::TaskFinish" },
		{ "TaskSuccessful.DisplayName", "\xe6\x88\x90\xe5\x8a\x9f" },
		{ "TaskSuccessful.Name", "ETaskResultType::TaskSuccessful" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x8c\x85\xe4\xb8\xad\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\xe5\x88\x86\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETaskResultType::None", (int64)ETaskResultType::None },
		{ "ETaskResultType::TaskSuccessful", (int64)ETaskResultType::TaskSuccessful },
		{ "ETaskResultType::TaskFinish", (int64)ETaskResultType::TaskFinish },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	"ETaskResultType",
	"ETaskResultType",
	Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType()
{
	if (!Z_Registration_Info_UEnum_ETaskResultType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETaskResultType.InnerSingleton, Z_Construct_UEnum_DialogSystem_ETaskResultType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETaskResultType.InnerSingleton;
}
// End Enum ETaskResultType

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_NodeType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogNodeType_StaticEnum, TEXT("EDialogNodeType"), &Z_Registration_Info_UEnum_EDialogNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 390593274U) },
		{ ETaskNodeType_StaticEnum, TEXT("ETaskNodeType"), &Z_Registration_Info_UEnum_ETaskNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1014033701U) },
		{ ETaskResultType_StaticEnum, TEXT("ETaskResultType"), &Z_Registration_Info_UEnum_ETaskResultType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2271008850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_NodeType_h_3860846687(TEXT("/Script/DialogSystem"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_NodeType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_NodeType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
