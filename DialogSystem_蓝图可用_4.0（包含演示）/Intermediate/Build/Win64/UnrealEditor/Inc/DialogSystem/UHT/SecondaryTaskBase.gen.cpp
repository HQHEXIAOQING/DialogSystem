// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/SecondaryTaskBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondaryTaskBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffectorBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskSecondaryTask();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskSecondaryTask_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTaskAchievedData();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin ScriptStruct FSecondaryTaskAchievedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData;
class UScriptStruct* FSecondaryTaskAchievedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondaryTaskAchievedData, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("SecondaryTaskAchievedData"));
	}
	return Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.OuterSingleton;
}
template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<FSecondaryTaskAchievedData>()
{
	return FSecondaryTaskAchievedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTaskAchievedConditionArray_MetaData[] = {
		{ "Category", "TaskOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9e\x9c\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe7\xbb\x93\xe6\x9e\x9c\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9e\x9c\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTaskResultEffector_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9e\x9c\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryTaskAchievedConditionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryTaskAchievedConditionArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryTaskResultEffector_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryTaskResultEffector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondaryTaskAchievedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskAchievedConditionArray_Inner = { "SecondaryTaskAchievedConditionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USecondaryTaskAchievedConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskAchievedConditionArray = { "SecondaryTaskAchievedConditionArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondaryTaskAchievedData, SecondaryTaskAchievedConditionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTaskAchievedConditionArray_MetaData), NewProp_SecondaryTaskAchievedConditionArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskResultEffector_Inner = { "SecondaryTaskResultEffector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskEffectorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskResultEffector = { "SecondaryTaskResultEffector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondaryTaskAchievedData, SecondaryTaskResultEffector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTaskResultEffector_MetaData), NewProp_SecondaryTaskResultEffector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskAchievedConditionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskAchievedConditionArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskResultEffector_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewProp_SecondaryTaskResultEffector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	&NewStructOps,
	"SecondaryTaskAchievedData",
	Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::PropPointers),
	sizeof(FSecondaryTaskAchievedData),
	alignof(FSecondaryTaskAchievedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSecondaryTaskAchievedData()
{
	if (!Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.InnerSingleton, Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData.InnerSingleton;
}
// End ScriptStruct FSecondaryTaskAchievedData

// Begin Class USecondaryTaskBase
void USecondaryTaskBase::StaticRegisterNativesUSecondaryTaskBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondaryTaskBase);
UClass* Z_Construct_UClass_USecondaryTaskBase_NoRegister()
{
	return USecondaryTaskBase::StaticClass();
}
struct Z_Construct_UClass_USecondaryTaskBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "TaskAsset/SecondaryTaskBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UMGText_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "DisplayName", "UI\xe6\x96\x87\xe6\x9c\xac" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHidden_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe9\x9a\x90\xe8\x97\x8f\xe4\xbb\xbb\xe5\x8a\xa1\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe9\x9a\x90\xe8\x97\x8f\xe4\xbb\xbb\xe5\x8a\xa1" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe4\xb8\xba\xe9\x9a\x90\xe8\x97\x8f\xe4\xbb\xbb\xe5\x8a\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTaskConditionArray_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xa7\xa3\xe9\x94\x81\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xa7\xa3\xe9\x94\x81\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xa7\xa3\xe9\x94\x81\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTaskEffector_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86\n" },
#endif
		{ "DisplayName", "\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x86\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_SecondaryTaskTypeToCondition_MetaData[] = {
		{ "Category", "SecondaryTaskBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xaf\xb9\xe5\xba\x94\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe7\xbb\x93\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xaf\xb9\xe5\xba\x94\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9e\x9c\xe7\xb1\xbb\xe5\x9e\x8b\xe5\xaf\xb9\xe5\xba\x94\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryTaskResult_MetaData[] = {
		{ "Category", "SecondaryTaskBaseInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x93\xe6\x9e\x9c\n" },
#endif
		{ "DisplayName", "\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x93\xe6\x9e\x9c" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe7\xbb\x88\xe7\xbb\x93\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTrigger_MetaData[] = {
		{ "Category", "SecondaryTaskBaseInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xa7\xa6\xe5\x8f\x91" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_UMGText;
	static void NewProp_IsHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHidden;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryTaskConditionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryTaskConditionArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryTaskEffector_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryTaskEffector;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_SecondaryTaskTypeToCondition_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_SecondaryTaskTypeToCondition;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SecondaryTaskResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SecondaryTaskResult;
	static void NewProp_IsTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondaryTaskBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_UMGText = { "UMGText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskBase, UMGText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UMGText_MetaData), NewProp_UMGText_MetaData) };
void Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsHidden_SetBit(void* Obj)
{
	((USecondaryTaskBase*)Obj)->IsHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsHidden = { "IsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecondaryTaskBase), &Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHidden_MetaData), NewProp_IsHidden_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskConditionArray_Inner = { "SecondaryTaskConditionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USecondaryTaskConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskConditionArray = { "SecondaryTaskConditionArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskBase, SecondaryTaskConditionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTaskConditionArray_MetaData), NewProp_SecondaryTaskConditionArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskEffector_Inner = { "SecondaryTaskEffector", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskEffectorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskEffector = { "SecondaryTaskEffector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskBase, SecondaryTaskEffector), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTaskEffector_MetaData), NewProp_SecondaryTaskEffector_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_ValueProp = { "Map_SecondaryTaskTypeToCondition", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSecondaryTaskAchievedData, METADATA_PARAMS(0, nullptr) }; // 941498878
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp = { "Map_SecondaryTaskTypeToCondition_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(0, nullptr) }; // 2271008850
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition = { "Map_SecondaryTaskTypeToCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskBase, Map_SecondaryTaskTypeToCondition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_SecondaryTaskTypeToCondition_MetaData), NewProp_Map_SecondaryTaskTypeToCondition_MetaData) }; // 2271008850 941498878
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskResult = { "SecondaryTaskResult", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondaryTaskBase, SecondaryTaskResult), Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryTaskResult_MetaData), NewProp_SecondaryTaskResult_MetaData) }; // 2271008850
void Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsTrigger_SetBit(void* Obj)
{
	((USecondaryTaskBase*)Obj)->IsTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsTrigger = { "IsTrigger", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecondaryTaskBase), &Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTrigger_MetaData), NewProp_IsTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondaryTaskBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_UMGText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskConditionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskConditionArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskEffector_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskEffector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_Map_SecondaryTaskTypeToCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_SecondaryTaskResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondaryTaskBase_Statics::NewProp_IsTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecondaryTaskBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondaryTaskBase_Statics::ClassParams = {
	&USecondaryTaskBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecondaryTaskBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskBase_Statics::PropPointers),
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondaryTaskBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondaryTaskBase()
{
	if (!Z_Registration_Info_UClass_USecondaryTaskBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondaryTaskBase.OuterSingleton, Z_Construct_UClass_USecondaryTaskBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondaryTaskBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USecondaryTaskBase>()
{
	return USecondaryTaskBase::StaticClass();
}
USecondaryTaskBase::USecondaryTaskBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondaryTaskBase);
USecondaryTaskBase::~USecondaryTaskBase() {}
// End Class USecondaryTaskBase

// Begin Class UTaskSecondaryTask
void UTaskSecondaryTask::StaticRegisterNativesUTaskSecondaryTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskSecondaryTask);
UClass* Z_Construct_UClass_UTaskSecondaryTask_NoRegister()
{
	return UTaskSecondaryTask::StaticClass();
}
struct Z_Construct_UClass_UTaskSecondaryTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "DisplayName", "\xe6\xad\xa3\xe5\xb8\xb8\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x86\xe9\x85\x8d" },
		{ "IncludePath", "TaskAsset/SecondaryTaskBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/SecondaryTaskBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskSecondaryTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskSecondaryTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USecondaryTaskBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSecondaryTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskSecondaryTask_Statics::ClassParams = {
	&UTaskSecondaryTask::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSecondaryTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskSecondaryTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskSecondaryTask()
{
	if (!Z_Registration_Info_UClass_UTaskSecondaryTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskSecondaryTask.OuterSingleton, Z_Construct_UClass_UTaskSecondaryTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskSecondaryTask.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskSecondaryTask>()
{
	return UTaskSecondaryTask::StaticClass();
}
UTaskSecondaryTask::UTaskSecondaryTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskSecondaryTask);
UTaskSecondaryTask::~UTaskSecondaryTask() {}
// End Class UTaskSecondaryTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSecondaryTaskAchievedData::StaticStruct, Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics::NewStructOps, TEXT("SecondaryTaskAchievedData"), &Z_Registration_Info_UScriptStruct_SecondaryTaskAchievedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSecondaryTaskAchievedData), 941498878U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecondaryTaskBase, USecondaryTaskBase::StaticClass, TEXT("USecondaryTaskBase"), &Z_Registration_Info_UClass_USecondaryTaskBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondaryTaskBase), 3206986590U) },
		{ Z_Construct_UClass_UTaskSecondaryTask, UTaskSecondaryTask::StaticClass, TEXT("UTaskSecondaryTask"), &Z_Registration_Info_UClass_UTaskSecondaryTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskSecondaryTask), 2617028282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_3683474738(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
