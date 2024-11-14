// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/DialogAsset.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogGraph.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAssetConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogEndNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogGraph_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNode_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogPin_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_EDialogType();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogOutPinData();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FParticipantCondition();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Enum EDialogType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogType;
static UEnum* EDialogType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DialogSystem_EDialogType, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("EDialogType"));
	}
	return Z_Registration_Info_UEnum_EDialogType.OuterSingleton;
}
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogType>()
{
	return EDialogType_StaticEnum();
}
struct Z_Construct_UEnum_DialogSystem_EDialogType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BubbleText.DisplayName", "\xe6\xb0\x94\xe6\xb3\xa1\xe5\xbc\xb9\xe6\xa1\x86" },
		{ "BubbleText.Name", "EDialogType::BubbleText" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "Conversation.DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86" },
		{ "Conversation.Name", "EDialogType::Conversation" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogType::BubbleText", (int64)EDialogType::BubbleText },
		{ "EDialogType::Conversation", (int64)EDialogType::Conversation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DialogSystem_EDialogType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	"EDialogType",
	"EDialogType",
	Z_Construct_UEnum_DialogSystem_EDialogType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DialogSystem_EDialogType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DialogSystem_EDialogType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DialogSystem_EDialogType()
{
	if (!Z_Registration_Info_UEnum_EDialogType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogType.InnerSingleton, Z_Construct_UEnum_DialogSystem_EDialogType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogType.InnerSingleton;
}
// End Enum EDialogType

// Begin ScriptStruct FParticipantCondition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParticipantCondition;
class UScriptStruct* FParticipantCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParticipantCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParticipantCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParticipantCondition, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("ParticipantCondition"));
	}
	return Z_Registration_Info_UScriptStruct_ParticipantCondition.OuterSingleton;
}
template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<FParticipantCondition>()
{
	return FParticipantCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParticipantCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe6\x9d\xa1\xe4\xbb\xb6\xe5\xaf\xb9\xe5\xba\x94\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe6\x9d\xa1\xe4\xbb\xb6\xe5\xaf\xb9\xe5\xba\x94\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantConditionArray_MetaData[] = {
		{ "Category", "DialogNodeBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantConditionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticipantConditionArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParticipantCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FParticipantCondition_Statics::NewProp_ParticipantConditionArray_Inner = { "ParticipantConditionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UParticipantConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParticipantCondition_Statics::NewProp_ParticipantConditionArray = { "ParticipantConditionArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParticipantCondition, ParticipantConditionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantConditionArray_MetaData), NewProp_ParticipantConditionArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParticipantCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticipantCondition_Statics::NewProp_ParticipantConditionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParticipantCondition_Statics::NewProp_ParticipantConditionArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticipantCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParticipantCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	&NewStructOps,
	"ParticipantCondition",
	Z_Construct_UScriptStruct_FParticipantCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticipantCondition_Statics::PropPointers),
	sizeof(FParticipantCondition),
	alignof(FParticipantCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParticipantCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParticipantCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParticipantCondition()
{
	if (!Z_Registration_Info_UScriptStruct_ParticipantCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParticipantCondition.InnerSingleton, Z_Construct_UScriptStruct_FParticipantCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParticipantCondition.InnerSingleton;
}
// End ScriptStruct FParticipantCondition

// Begin Class UDialogAsset Function DialogAssetInit
struct Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics
{
	struct DialogAsset_eventDialogAssetInit_Parms
	{
		AActor* Owning;
		AActor* PlayerActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x88\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7,\xe8\xbe\x93\xe5\x85\xa5\xe6\x8b\xa5\xe6\x9c\x89\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xef\xbc\x88\xe5\x88\xa4\xe6\x96\xad\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7,\xe8\xbe\x93\xe5\x85\xa5\xe6\x8b\xa5\xe6\x9c\x89\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owning;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_Owning = { "Owning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventDialogAssetInit_Parms, Owning), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventDialogAssetInit_Parms, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAsset_eventDialogAssetInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventDialogAssetInit_Parms), &Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_Owning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_PlayerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "DialogAssetInit", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::DialogAsset_eventDialogAssetInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::DialogAsset_eventDialogAssetInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_DialogAssetInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_DialogAssetInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execDialogAssetInit)
{
	P_GET_OBJECT(AActor,Z_Param_Owning);
	P_GET_OBJECT(AActor,Z_Param_PlayerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DialogAssetInit(Z_Param_Owning,Z_Param_PlayerActor);
	P_NATIVE_END;
}
// End Class UDialogAsset Function DialogAssetInit

// Begin Class UDialogAsset Function DialogNodeInit
struct Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics
{
	struct DialogAsset_eventDialogNodeInit_Parms
	{
		URuntimeDialogNode* DialogNode;
		URuntimeDialogPin* DialogNodePin;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xa7\xe8\xa1\x8c(\xe8\xbe\x93\xe5\x85\xa5\xe5\xbd\x93\xe5\x89\x8d\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbb\x8e\xe5\xbc\x95\xe8\x84\x9a\xe5\xa4\x84\xe8\xa7\xa6\xe5\x8f\x91\xe8\xaf\xb7\xe8\xbe\x93\xe5\x85\xa5\xe5\xaf\xb9\xe5\xba\x94\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\xb2\xa1\xe6\x9c\x89\xef\xbc\x8c\xe8\xaf\xb7\xe5\xbf\xbd\xe7\x95\xa5\xef\xbc\x81)\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xa7\xe8\xa1\x8c" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe5\xbc\x80\xe5\xa7\x8b\xe6\x89\xa7\xe8\xa1\x8c(\xe8\xbe\x93\xe5\x85\xa5\xe5\xbd\x93\xe5\x89\x8d\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xbb\x8e\xe5\xbc\x95\xe8\x84\x9a\xe5\xa4\x84\xe8\xa7\xa6\xe5\x8f\x91\xe8\xaf\xb7\xe8\xbe\x93\xe5\x85\xa5\xe5\xaf\xb9\xe5\xba\x94\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe6\xb2\xa1\xe6\x9c\x89\xef\xbc\x8c\xe8\xaf\xb7\xe5\xbf\xbd\xe7\x95\xa5\xef\xbc\x81)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodePin;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_DialogNode = { "DialogNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventDialogNodeInit_Parms, DialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_DialogNodePin = { "DialogNodePin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventDialogNodeInit_Parms, DialogNodePin), Z_Construct_UClass_URuntimeDialogPin_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAsset_eventDialogNodeInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventDialogNodeInit_Parms), &Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_DialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_DialogNodePin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "DialogNodeInit", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::DialogAsset_eventDialogNodeInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::DialogAsset_eventDialogNodeInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_DialogNodeInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_DialogNodeInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execDialogNodeInit)
{
	P_GET_OBJECT(URuntimeDialogNode,Z_Param_DialogNode);
	P_GET_OBJECT(URuntimeDialogPin,Z_Param_DialogNodePin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DialogNodeInit(Z_Param_DialogNode,Z_Param_DialogNodePin);
	P_NATIVE_END;
}
// End Class UDialogAsset Function DialogNodeInit

// Begin Class UDialogAsset Function GetDialogEndNodeFromDialogId
struct Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics
{
	struct DialogAsset_eventGetDialogEndNodeFromDialogId_Parms
	{
		FName DialogNodeId;
		URuntimeDialogEndNodeInfo* DialogNodeInfo;
		URuntimeDialogNode* DialogNode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9\xe4\xbb\xa5\xe5\x8f\x8a\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9\xe4\xbb\xa5\xe5\x8f\x8a\xe7\xbb\x93\xe6\x9d\x9f\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNodeId = { "DialogNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogEndNodeFromDialogId_Parms, DialogNodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNodeInfo = { "DialogNodeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogEndNodeFromDialogId_Parms, DialogNodeInfo), Z_Construct_UClass_URuntimeDialogEndNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNode = { "DialogNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogEndNodeFromDialogId_Parms, DialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAsset_eventGetDialogEndNodeFromDialogId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventGetDialogEndNodeFromDialogId_Parms), &Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_DialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "GetDialogEndNodeFromDialogId", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::DialogAsset_eventGetDialogEndNodeFromDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::DialogAsset_eventGetDialogEndNodeFromDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execGetDialogEndNodeFromDialogId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogNodeId);
	P_GET_OBJECT_REF(URuntimeDialogEndNodeInfo,Z_Param_Out_DialogNodeInfo);
	P_GET_OBJECT_REF(URuntimeDialogNode,Z_Param_Out_DialogNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDialogEndNodeFromDialogId(Z_Param_DialogNodeId,P_ARG_GC_BARRIER(Z_Param_Out_DialogNodeInfo),P_ARG_GC_BARRIER(Z_Param_Out_DialogNode));
	P_NATIVE_END;
}
// End Class UDialogAsset Function GetDialogEndNodeFromDialogId

// Begin Class UDialogAsset Function GetDialogNodeFromDialogId
struct Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics
{
	struct DialogAsset_eventGetDialogNodeFromDialogId_Parms
	{
		FName DialogNodeId;
		URuntimeDialogNodeInfo* DialogNodeInfo;
		URuntimeDialogNode* DialogNode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbb\xa5\xe5\x8f\x8a\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf(\xe7\xa1\xae\xe4\xbf\x9d\xe8\xbe\x93\xe5\x85\xa5Id\xe4\xb8\xba\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84Id\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9Id\xe5\xb0\xb1\xe4\xbc\x9a\xe6\x89\xbe\xe4\xb8\x8d\xe5\x88\xb0\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf)\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbb\xa5\xe5\x8f\x8a\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf(\xe7\xa1\xae\xe4\xbf\x9d\xe8\xbe\x93\xe5\x85\xa5Id\xe4\xb8\xba\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84Id\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x98\xaf\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9Id\xe5\xb0\xb1\xe4\xbc\x9a\xe6\x89\xbe\xe4\xb8\x8d\xe5\x88\xb0\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNodeId = { "DialogNodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogNodeFromDialogId_Parms, DialogNodeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNodeInfo = { "DialogNodeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogNodeFromDialogId_Parms, DialogNodeInfo), Z_Construct_UClass_URuntimeDialogNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNode = { "DialogNode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogNodeFromDialogId_Parms, DialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAsset_eventGetDialogNodeFromDialogId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventGetDialogNodeFromDialogId_Parms), &Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_DialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "GetDialogNodeFromDialogId", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::DialogAsset_eventGetDialogNodeFromDialogId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::DialogAsset_eventGetDialogNodeFromDialogId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execGetDialogNodeFromDialogId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_DialogNodeId);
	P_GET_OBJECT_REF(URuntimeDialogNodeInfo,Z_Param_Out_DialogNodeInfo);
	P_GET_OBJECT_REF(URuntimeDialogNode,Z_Param_Out_DialogNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDialogNodeFromDialogId(Z_Param_DialogNodeId,P_ARG_GC_BARRIER(Z_Param_Out_DialogNodeInfo),P_ARG_GC_BARRIER(Z_Param_Out_DialogNode));
	P_NATIVE_END;
}
// End Class UDialogAsset Function GetDialogNodeFromDialogId

// Begin Class UDialogAsset Function GetDialogNodeFromFirst
struct Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics
{
	struct DialogAsset_eventGetDialogNodeFromFirst_Parms
	{
		URuntimeDialogNodeInfo* DialogNodeInfo;
		URuntimeDialogNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe9\xa6\x96\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\xa6\x96\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe9\xa6\x96\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::NewProp_DialogNodeInfo = { "DialogNodeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogNodeFromFirst_Parms, DialogNodeInfo), Z_Construct_UClass_URuntimeDialogNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetDialogNodeFromFirst_Parms, ReturnValue), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::NewProp_DialogNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "GetDialogNodeFromFirst", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::DialogAsset_eventGetDialogNodeFromFirst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::DialogAsset_eventGetDialogNodeFromFirst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execGetDialogNodeFromFirst)
{
	P_GET_OBJECT_REF(URuntimeDialogNodeInfo,Z_Param_Out_DialogNodeInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URuntimeDialogNode**)Z_Param__Result=P_THIS->GetDialogNodeFromFirst(P_ARG_GC_BARRIER(Z_Param_Out_DialogNodeInfo));
	P_NATIVE_END;
}
// End Class UDialogAsset Function GetDialogNodeFromFirst

// Begin Class UDialogAsset Function GetOutputPinFromDialogNode
struct Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics
{
	struct DialogAsset_eventGetOutputPinFromDialogNode_Parms
	{
		URuntimeDialogNode* DialogNode;
		TMap<URuntimeDialogPin*,FDialogOutPinData> Map_OutPinToOutPinData;
		bool IsPlayerOption;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe4\xb8\x8b\xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d\xe3\x80\x82\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xb8\x8b\xe9\x80\x89\xe9\xa1\xb9" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe6\xad\xa4\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe4\xb8\x8b\xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_OutPinToOutPinData_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_OutPinToOutPinData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_OutPinToOutPinData;
	static void NewProp_IsPlayerOption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerOption;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_DialogNode = { "DialogNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetOutputPinFromDialogNode_Parms, DialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData_ValueProp = { "Map_OutPinToOutPinData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogOutPinData, METADATA_PARAMS(0, nullptr) }; // 2549834857
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData_Key_KeyProp = { "Map_OutPinToOutPinData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeDialogPin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData = { "Map_OutPinToOutPinData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogAsset_eventGetOutputPinFromDialogNode_Parms, Map_OutPinToOutPinData), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2549834857
void Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_IsPlayerOption_SetBit(void* Obj)
{
	((DialogAsset_eventGetOutputPinFromDialogNode_Parms*)Obj)->IsPlayerOption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_IsPlayerOption = { "IsPlayerOption", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventGetOutputPinFromDialogNode_Parms), &Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_IsPlayerOption_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAsset_eventGetOutputPinFromDialogNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAsset_eventGetOutputPinFromDialogNode_Parms), &Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_DialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_Map_OutPinToOutPinData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_IsPlayerOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAsset, nullptr, "GetOutputPinFromDialogNode", nullptr, nullptr, Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::DialogAsset_eventGetOutputPinFromDialogNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::DialogAsset_eventGetOutputPinFromDialogNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogAsset::execGetOutputPinFromDialogNode)
{
	P_GET_OBJECT(URuntimeDialogNode,Z_Param_DialogNode);
	P_GET_TMAP_REF(URuntimeDialogPin*,FDialogOutPinData,Z_Param_Out_Map_OutPinToOutPinData);
	P_GET_UBOOL_REF(Z_Param_Out_IsPlayerOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOutputPinFromDialogNode(Z_Param_DialogNode,Z_Param_Out_Map_OutPinToOutPinData,Z_Param_Out_IsPlayerOption);
	P_NATIVE_END;
}
// End Class UDialogAsset Function GetOutputPinFromDialogNode

// Begin Class UDialogAsset
void UDialogAsset::StaticRegisterNativesUDialogAsset()
{
	UClass* Class = UDialogAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogAssetInit", &UDialogAsset::execDialogAssetInit },
		{ "DialogNodeInit", &UDialogAsset::execDialogNodeInit },
		{ "GetDialogEndNodeFromDialogId", &UDialogAsset::execGetDialogEndNodeFromDialogId },
		{ "GetDialogNodeFromDialogId", &UDialogAsset::execGetDialogNodeFromDialogId },
		{ "GetDialogNodeFromFirst", &UDialogAsset::execGetDialogNodeFromFirst },
		{ "GetOutputPinFromDialogNode", &UDialogAsset::execGetOutputPinFromDialogNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAsset);
UClass* Z_Construct_UClass_UDialogAsset_NoRegister()
{
	return UDialogAsset::StaticClass();
}
struct Z_Construct_UClass_UDialogAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "IncludePath", "DialogAsset/DialogAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8d\x8a\xe5\xbe\x84\n" },
#endif
		{ "DisplayName", "\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8d\x8a\xe5\xbe\x84" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8d\x8a\xe5\xbe\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa3\x80\xe6\xb5\x8b\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "DisplayName", "\xe6\xa3\x80\xe6\xb5\x8b\xe6\x96\xb9\xe5\xbc\x8f" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogType_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogAssetConditionArray_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_NameIDToParticipantCondition_MetaData[] = {
		{ "Category", "DialogAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeDialogGraph_MetaData[] = {
		{ "Category", "DialogAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//********************************************************\n//\xe6\x95\xb0\xe6\x8d\xae\xe8\xae\xb0\xe5\xbd\x95\n//\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8\n" },
#endif
		{ "DisplayName", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\xb0\xe6\x8d\xae\xe8\xae\xb0\xe5\xbd\x95\n\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogGlobalNodeId_MetaData[] = {
		{ "Category", "DialogAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_NameIDToParticipant_MetaData[] = {
		{ "Category", "DialogAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85Id\xe4\xbb\xa5\xe5\x8f\x8a\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\n" },
#endif
		{ "DisplayName", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85Id\xe4\xbb\xa5\xe5\x8f\x8a\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85Id\xe4\xbb\xa5\xe5\x8f\x8a\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_PinIDToPinNum_MetaData[] = {
		{ "Category", "DialogAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9aId\xe5\xaf\xb9\xe5\xba\x94\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x8f\xe8\xbf\x87\xe6\xac\xa1\xe6\x95\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9aId\xe5\xaf\xb9\xe5\xba\x94\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x8f\xe8\xbf\x87\xe6\xac\xa1\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9aId\xe5\xaf\xb9\xe5\xba\x94\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x8f\xe8\xbf\x87\xe6\xac\xa1\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogAssetConditionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogAssetConditionArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_NameIDToParticipantCondition_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_NameIDToParticipantCondition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_NameIDToParticipantCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeDialogGraph;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogGlobalNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_NameIDToParticipant_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_NameIDToParticipant_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_NameIDToParticipant;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Map_PinIDToPinNum_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_PinIDToPinNum_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_PinIDToPinNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogAsset_DialogAssetInit, "DialogAssetInit" }, // 1731041789
		{ &Z_Construct_UFunction_UDialogAsset_DialogNodeInit, "DialogNodeInit" }, // 3658671083
		{ &Z_Construct_UFunction_UDialogAsset_GetDialogEndNodeFromDialogId, "GetDialogEndNodeFromDialogId" }, // 1336394834
		{ &Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromDialogId, "GetDialogNodeFromDialogId" }, // 3954463178
		{ &Z_Construct_UFunction_UDialogAsset_GetDialogNodeFromFirst, "GetDialogNodeFromFirst" }, // 2687386536
		{ &Z_Construct_UFunction_UDialogAsset_GetOutputPinFromDialogNode, "GetOutputPinFromDialogNode" }, // 4143396679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogType = { "DialogType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, DialogType), Z_Construct_UEnum_DialogSystem_EDialogType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogType_MetaData), NewProp_DialogType_MetaData) }; // 1624709352
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogAssetConditionArray_Inner = { "DialogAssetConditionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogAssetConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogAssetConditionArray = { "DialogAssetConditionArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, DialogAssetConditionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogAssetConditionArray_MetaData), NewProp_DialogAssetConditionArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition_ValueProp = { "Map_NameIDToParticipantCondition", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FParticipantCondition, METADATA_PARAMS(0, nullptr) }; // 861874038
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition_Key_KeyProp = { "Map_NameIDToParticipantCondition_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition = { "Map_NameIDToParticipantCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, Map_NameIDToParticipantCondition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_NameIDToParticipantCondition_MetaData), NewProp_Map_NameIDToParticipantCondition_MetaData) }; // 861874038
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_RuntimeDialogGraph = { "RuntimeDialogGraph", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, RuntimeDialogGraph), Z_Construct_UClass_URuntimeDialogGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeDialogGraph_MetaData), NewProp_RuntimeDialogGraph_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogGlobalNodeId = { "DialogGlobalNodeId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, DialogGlobalNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogGlobalNodeId_MetaData), NewProp_DialogGlobalNodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant_ValueProp = { "Map_NameIDToParticipant", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant_Key_KeyProp = { "Map_NameIDToParticipant_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant = { "Map_NameIDToParticipant", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, Map_NameIDToParticipant), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_NameIDToParticipant_MetaData), NewProp_Map_NameIDToParticipant_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum_ValueProp = { "Map_PinIDToPinNum", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum_Key_KeyProp = { "Map_PinIDToPinNum_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum = { "Map_PinIDToPinNum", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogAsset, Map_PinIDToPinNum), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_PinIDToPinNum_MetaData), NewProp_Map_PinIDToPinNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogAssetConditionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogAssetConditionArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipantCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_RuntimeDialogGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_DialogGlobalNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_NameIDToParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogAsset_Statics::NewProp_Map_PinIDToPinNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAsset_Statics::ClassParams = {
	&UDialogAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAsset()
{
	if (!Z_Registration_Info_UClass_UDialogAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAsset.OuterSingleton, Z_Construct_UClass_UDialogAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAsset.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogAsset>()
{
	return UDialogAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAsset);
UDialogAsset::~UDialogAsset() {}
// End Class UDialogAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogType_StaticEnum, TEXT("EDialogType"), &Z_Registration_Info_UEnum_EDialogType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1624709352U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParticipantCondition::StaticStruct, Z_Construct_UScriptStruct_FParticipantCondition_Statics::NewStructOps, TEXT("ParticipantCondition"), &Z_Registration_Info_UScriptStruct_ParticipantCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParticipantCondition), 861874038U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAsset, UDialogAsset::StaticClass, TEXT("UDialogAsset"), &Z_Registration_Info_UClass_UDialogAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAsset), 1395610937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_2325814172(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
