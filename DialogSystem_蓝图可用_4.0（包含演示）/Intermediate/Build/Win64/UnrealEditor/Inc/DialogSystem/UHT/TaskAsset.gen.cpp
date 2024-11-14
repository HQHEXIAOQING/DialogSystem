// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UHQTaskSystem_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskGraph_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskDialogConditionBase_NoRegister();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTaskDialogCondition();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin ScriptStruct FTaskDialogCondition
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskDialogCondition;
class UScriptStruct* FTaskDialogCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskDialogCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskDialogCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskDialogCondition, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("TaskDialogCondition"));
	}
	return Z_Registration_Info_UScriptStruct_TaskDialogCondition.OuterSingleton;
}
template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<FTaskDialogCondition>()
{
	return FTaskDialogCondition::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaskDialogCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogIdToTaskDialogConditionArray_MetaData[] = {
		{ "Category", "TaskDialogCondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseDialogAsset_MetaData[] = {
		{ "Category", "TaskDialogCondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\n" },
#endif
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogIdToTaskDialogConditionArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogIdToTaskDialogConditionArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseDialogAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskDialogCondition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_DialogIdToTaskDialogConditionArray_Inner = { "DialogIdToTaskDialogConditionArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskDialogConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_DialogIdToTaskDialogConditionArray = { "DialogIdToTaskDialogConditionArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskDialogCondition, DialogIdToTaskDialogConditionArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogIdToTaskDialogConditionArray_MetaData), NewProp_DialogIdToTaskDialogConditionArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_UseDialogAsset = { "UseDialogAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskDialogCondition, UseDialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseDialogAsset_MetaData), NewProp_UseDialogAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_DialogIdToTaskDialogConditionArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_DialogIdToTaskDialogConditionArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewProp_UseDialogAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	&NewStructOps,
	"TaskDialogCondition",
	Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::PropPointers),
	sizeof(FTaskDialogCondition),
	alignof(FTaskDialogCondition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaskDialogCondition()
{
	if (!Z_Registration_Info_UScriptStruct_TaskDialogCondition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskDialogCondition.InnerSingleton, Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaskDialogCondition.InnerSingleton;
}
// End ScriptStruct FTaskDialogCondition

// Begin Class UTaskAsset
void UTaskAsset::StaticRegisterNativesUTaskAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskAsset);
UClass* Z_Construct_UClass_UTaskAsset_NoRegister()
{
	return UTaskAsset::StaticClass();
}
struct Z_Construct_UClass_UTaskAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskId_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7Id\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7Id" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7Id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_IdToValue_ValueProp_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f\n" },
#endif
		{ "DisplayName", "\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_IdToValue_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f\n" },
#endif
		{ "DisplayName", "\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskAssetObjectInfoBaseClass_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\xaf\xb9\xe5\xba\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\xaf\xb9\xe5\xba\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\xaf\xb9\xe5\xba\x94\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\x84\xe4\xba\xa7\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_DialogIdToTaskDialogCondition_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe5\xaf\xb9\xe5\xba\x94\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe5\xaf\xb9\xe5\xba\x94\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe5\xaf\xb9\xe5\xba\x94\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeTaskGraph_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8\n" },
#endif
		{ "DisplayName", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\xad\x98\xe5\x82\xa8\xe7\x9a\x84\xe5\x9b\xbe\xe8\xa1\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskGlobalNodeId_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe5\x85\xa8\xe5\xb1\x80ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskSource_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa5\xe6\xba\x90\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa5\xe6\xba\x90" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa5\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskCurrentId_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskTagArray_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xe9\x9b\x86\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xe9\x9b\x86" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HQTaskSystem_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskAssetObjectInfoBase_MetaData[] = {
		{ "Category", "TaskAssetInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xa4\x84\xe7\x90\x86\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe5\x86\x85\xe5\xae\xb9\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa4\x84\xe7\x90\x86\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe5\x86\x85\xe5\xae\xb9\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_IdToValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_IdToValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_IdToValue;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TaskAssetObjectInfoBaseClass;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_DialogIdToTaskDialogCondition_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_DialogIdToTaskDialogCondition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_DialogIdToTaskDialogCondition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeTaskGraph;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TaskGlobalNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskSource;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskCurrentId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskTagArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskTagArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HQTaskSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAssetObjectInfoBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskId_MetaData), NewProp_TaskId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue_ValueProp = { "Map_IdToValue", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USystemValueType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_IdToValue_ValueProp_MetaData), NewProp_Map_IdToValue_ValueProp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue_Key_KeyProp = { "Map_IdToValue_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue = { "Map_IdToValue", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, Map_IdToValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_IdToValue_MetaData), NewProp_Map_IdToValue_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskAssetObjectInfoBaseClass = { "TaskAssetObjectInfoBaseClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskAssetObjectInfoBaseClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskAssetObjectInfoBaseClass_MetaData), NewProp_TaskAssetObjectInfoBaseClass_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition_ValueProp = { "Map_DialogIdToTaskDialogCondition", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTaskDialogCondition, METADATA_PARAMS(0, nullptr) }; // 2668942881
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition_Key_KeyProp = { "Map_DialogIdToTaskDialogCondition_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition = { "Map_DialogIdToTaskDialogCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, Map_DialogIdToTaskDialogCondition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_DialogIdToTaskDialogCondition_MetaData), NewProp_Map_DialogIdToTaskDialogCondition_MetaData) }; // 2668942881
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_RuntimeTaskGraph = { "RuntimeTaskGraph", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, RuntimeTaskGraph), Z_Construct_UClass_URuntimeTaskGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeTaskGraph_MetaData), NewProp_RuntimeTaskGraph_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskGlobalNodeId = { "TaskGlobalNodeId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskGlobalNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskGlobalNodeId_MetaData), NewProp_TaskGlobalNodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskSource = { "TaskSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskSource_MetaData), NewProp_TaskSource_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskCurrentId = { "TaskCurrentId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskCurrentId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskCurrentId_MetaData), NewProp_TaskCurrentId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskTagArray_Inner = { "TaskTagArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskTagArray = { "TaskTagArray", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskTagArray_MetaData), NewProp_TaskTagArray_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_HQTaskSystem = { "HQTaskSystem", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, HQTaskSystem), Z_Construct_UClass_UHQTaskSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HQTaskSystem_MetaData), NewProp_HQTaskSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskAssetObjectInfoBase = { "TaskAssetObjectInfoBase", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAsset, TaskAssetObjectInfoBase), Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskAssetObjectInfoBase_MetaData), NewProp_TaskAssetObjectInfoBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_IdToValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskAssetObjectInfoBaseClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_Map_DialogIdToTaskDialogCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_RuntimeTaskGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskGlobalNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskCurrentId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskTagArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskTagArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_HQTaskSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAsset_Statics::NewProp_TaskAssetObjectInfoBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskAsset_Statics::ClassParams = {
	&UTaskAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaskAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskAsset()
{
	if (!Z_Registration_Info_UClass_UTaskAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskAsset.OuterSingleton, Z_Construct_UClass_UTaskAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskAsset.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskAsset>()
{
	return UTaskAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskAsset);
UTaskAsset::~UTaskAsset() {}
// End Class UTaskAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaskDialogCondition::StaticStruct, Z_Construct_UScriptStruct_FTaskDialogCondition_Statics::NewStructOps, TEXT("TaskDialogCondition"), &Z_Registration_Info_UScriptStruct_TaskDialogCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskDialogCondition), 2668942881U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskAsset, UTaskAsset::StaticClass, TEXT("UTaskAsset"), &Z_Registration_Info_UClass_UTaskAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskAsset), 880897573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_321060531(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
