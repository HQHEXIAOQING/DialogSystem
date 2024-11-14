// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskAssetObjectInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskAssetObjectInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UHQTaskSystem_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskEndNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USystemValueType_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskAssetObjectInfoBase Function BlueprintInitTaskAssetObjectInfo
static const FName NAME_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo = FName(TEXT("BlueprintInitTaskAssetObjectInfo"));
void UTaskAssetObjectInfoBase::BlueprintInitTaskAssetObjectInfo()
{
	UFunction* Func = FindFunctionChecked(NAME_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x89\xa9\xe5\xb1\x95\n" },
#endif
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x89\xa9\xe5\xb1\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "BlueprintInitTaskAssetObjectInfo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskAssetObjectInfoBase Function BlueprintInitTaskAssetObjectInfo

// Begin Class UTaskAssetObjectInfoBase Function BlueprintTaskEnd
struct TaskAssetObjectInfoBase_eventBlueprintTaskEnd_Parms
{
	URuntimeTaskEndNodeInfo* TaskNodeInfo;
};
static const FName NAME_UTaskAssetObjectInfoBase_BlueprintTaskEnd = FName(TEXT("BlueprintTaskEnd"));
void UTaskAssetObjectInfoBase::BlueprintTaskEnd(URuntimeTaskEndNodeInfo* TaskNodeInfo)
{
	TaskAssetObjectInfoBase_eventBlueprintTaskEnd_Parms Parms;
	Parms.TaskNodeInfo=TaskNodeInfo;
	UFunction* Func = FindFunctionChecked(NAME_UTaskAssetObjectInfoBase_BlueprintTaskEnd);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9d\x9f\xe9\x80\x9a\xe7\x9f\xa5\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9d\x9f\xe9\x80\x9a\xe7\x9f\xa5" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9d\x9f\xe9\x80\x9a\xe7\x9f\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskNodeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::NewProp_TaskNodeInfo = { "TaskNodeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventBlueprintTaskEnd_Parms, TaskNodeInfo), Z_Construct_UClass_URuntimeTaskEndNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::NewProp_TaskNodeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "BlueprintTaskEnd", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::PropPointers), sizeof(TaskAssetObjectInfoBase_eventBlueprintTaskEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskAssetObjectInfoBase_eventBlueprintTaskEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskAssetObjectInfoBase Function BlueprintTaskEnd

// Begin Class UTaskAssetObjectInfoBase Function BlueprintTaskSecondaryChanged
struct TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms
{
	URuntimeTaskNodeInfo* TaskNodeInfo;
	FName ChangedSecondaryId;
	ETaskResultType TaskResultType;
};
static const FName NAME_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged = FName(TEXT("BlueprintTaskSecondaryChanged"));
void UTaskAssetObjectInfoBase::BlueprintTaskSecondaryChanged(URuntimeTaskNodeInfo* TaskNodeInfo, FName ChangedSecondaryId, ETaskResultType TaskResultType)
{
	TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms Parms;
	Parms.TaskNodeInfo=TaskNodeInfo;
	Parms.ChangedSecondaryId=ChangedSecondaryId;
	Parms.TaskResultType=TaskResultType;
	UFunction* Func = FindFunctionChecked(NAME_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98\xe9\x80\x9a\xe7\x9f\xa5" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskNodeInfo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChangedSecondaryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResultType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskResultType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskNodeInfo = { "TaskNodeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms, TaskNodeInfo), Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_ChangedSecondaryId = { "ChangedSecondaryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms, ChangedSecondaryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskResultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskResultType = { "TaskResultType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms, TaskResultType), Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(0, nullptr) }; // 2271008850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_ChangedSecondaryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskResultType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::NewProp_TaskResultType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "BlueprintTaskSecondaryChanged", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::PropPointers), sizeof(TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskAssetObjectInfoBase_eventBlueprintTaskSecondaryChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskAssetObjectInfoBase Function BlueprintTaskSecondaryChanged

// Begin Class UTaskAssetObjectInfoBase Function GetBoolFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms
	{
		FName ValueId;
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_Value_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "GetBoolFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::TaskAssetObjectInfoBase_eventGetBoolFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execGetBoolFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_UBOOL_REF(Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolFromNameId(Z_Param_ValueId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function GetBoolFromNameId

// Begin Class UTaskAssetObjectInfoBase Function GetObjectFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms
	{
		FName ValueId;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84Object\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "GetObjectFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::TaskAssetObjectInfoBase_eventGetObjectFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execGetObjectFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetObjectFromNameId(Z_Param_ValueId,P_ARG_GC_BARRIER(Z_Param_Out_Value));
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function GetObjectFromNameId

// Begin Class UTaskAssetObjectInfoBase Function GetVectorFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms
	{
		FName ValueId;
		FVector Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\x90\x91\xe9\x87\x8f\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "GetVectorFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::TaskAssetObjectInfoBase_eventGetVectorFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execGetVectorFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVectorFromNameId(Z_Param_ValueId,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function GetVectorFromNameId

// Begin Class UTaskAssetObjectInfoBase Function InitTaskAssetObjectInfo
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics
{
	struct TaskAssetObjectInfoBase_eventInitTaskAssetObjectInfo_Parms
	{
		TMap<FName,USystemValueType*> NewValueIdToValueMap;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValueIdToValueMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewValueIdToValueMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NewValueIdToValueMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap_ValueProp = { "NewValueIdToValueMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USystemValueType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap_Key_KeyProp = { "NewValueIdToValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap = { "NewValueIdToValueMap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventInitTaskAssetObjectInfo_Parms, NewValueIdToValueMap), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::NewProp_NewValueIdToValueMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "InitTaskAssetObjectInfo", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::TaskAssetObjectInfoBase_eventInitTaskAssetObjectInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::TaskAssetObjectInfoBase_eventInitTaskAssetObjectInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execInitTaskAssetObjectInfo)
{
	P_GET_TMAP(FName,USystemValueType*,Z_Param_NewValueIdToValueMap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitTaskAssetObjectInfo(Z_Param_NewValueIdToValueMap);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function InitTaskAssetObjectInfo

// Begin Class UTaskAssetObjectInfoBase Function SetBoolFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms
	{
		FName ValueId;
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc\n" },
#endif
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\xb8\x83\xe5\xb0\x94\xe5\x80\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_Value_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "SetBoolFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::TaskAssetObjectInfoBase_eventSetBoolFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execSetBoolFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoolFromNameId(Z_Param_ValueId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function SetBoolFromNameId

// Begin Class UTaskAssetObjectInfoBase Function SetObjectFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms
	{
		FName ValueId;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84Object\n" },
#endif
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "SetObjectFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::TaskAssetObjectInfoBase_eventSetObjectFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execSetObjectFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetObjectFromNameId(Z_Param_ValueId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function SetObjectFromNameId

// Begin Class UTaskAssetObjectInfoBase Function SetVectorFromNameId
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics
{
	struct TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms
	{
		FName ValueId;
		FVector Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CustomValueCategory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f\n" },
#endif
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe5\x90\x91\xe9\x87\x8f\xe5\x80\xbc" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe5\xaf\xb9\xe5\xba\x94\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\x8b\xe7\x9a\x84\xe5\x90\x91\xe9\x87\x8f" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ValueId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ValueId = { "ValueId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms, ValueId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms), &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ValueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "SetVectorFromNameId", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::TaskAssetObjectInfoBase_eventSetVectorFromNameId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execSetVectorFromNameId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ValueId);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVectorFromNameId(Z_Param_ValueId,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function SetVectorFromNameId

// Begin Class UTaskAssetObjectInfoBase Function TaskEnd
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics
{
	struct TaskAssetObjectInfoBase_eventTaskEnd_Parms
	{
		URuntimeTaskEndNodeInfo* TaskNodeInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskNodeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::NewProp_TaskNodeInfo = { "TaskNodeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventTaskEnd_Parms, TaskNodeInfo), Z_Construct_UClass_URuntimeTaskEndNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::NewProp_TaskNodeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "TaskEnd", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::TaskAssetObjectInfoBase_eventTaskEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::TaskAssetObjectInfoBase_eventTaskEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execTaskEnd)
{
	P_GET_OBJECT(URuntimeTaskEndNodeInfo,Z_Param_TaskNodeInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TaskEnd(Z_Param_TaskNodeInfo);
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function TaskEnd

// Begin Class UTaskAssetObjectInfoBase Function TaskSecondaryChanged
struct Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics
{
	struct TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms
	{
		URuntimeTaskNodeInfo* TaskNodeInfo;
		FName ChangedSecondaryId;
		ETaskResultType TaskResultType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe9\x98\xb6\xe6\xae\xb5\xe6\x94\xb9\xe5\x8f\x98" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskNodeInfo;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChangedSecondaryId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResultType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskResultType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskNodeInfo = { "TaskNodeInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms, TaskNodeInfo), Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_ChangedSecondaryId = { "ChangedSecondaryId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms, ChangedSecondaryId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskResultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskResultType = { "TaskResultType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms, TaskResultType), Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(0, nullptr) }; // 2271008850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_ChangedSecondaryId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskResultType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::NewProp_TaskResultType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskAssetObjectInfoBase, nullptr, "TaskSecondaryChanged", nullptr, nullptr, Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::TaskAssetObjectInfoBase_eventTaskSecondaryChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskAssetObjectInfoBase::execTaskSecondaryChanged)
{
	P_GET_OBJECT(URuntimeTaskNodeInfo,Z_Param_TaskNodeInfo);
	P_GET_PROPERTY(FNameProperty,Z_Param_ChangedSecondaryId);
	P_GET_ENUM(ETaskResultType,Z_Param_TaskResultType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TaskSecondaryChanged(Z_Param_TaskNodeInfo,Z_Param_ChangedSecondaryId,ETaskResultType(Z_Param_TaskResultType));
	P_NATIVE_END;
}
// End Class UTaskAssetObjectInfoBase Function TaskSecondaryChanged

// Begin Class UTaskAssetObjectInfoBase
void UTaskAssetObjectInfoBase::StaticRegisterNativesUTaskAssetObjectInfoBase()
{
	UClass* Class = UTaskAssetObjectInfoBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBoolFromNameId", &UTaskAssetObjectInfoBase::execGetBoolFromNameId },
		{ "GetObjectFromNameId", &UTaskAssetObjectInfoBase::execGetObjectFromNameId },
		{ "GetVectorFromNameId", &UTaskAssetObjectInfoBase::execGetVectorFromNameId },
		{ "InitTaskAssetObjectInfo", &UTaskAssetObjectInfoBase::execInitTaskAssetObjectInfo },
		{ "SetBoolFromNameId", &UTaskAssetObjectInfoBase::execSetBoolFromNameId },
		{ "SetObjectFromNameId", &UTaskAssetObjectInfoBase::execSetObjectFromNameId },
		{ "SetVectorFromNameId", &UTaskAssetObjectInfoBase::execSetVectorFromNameId },
		{ "TaskEnd", &UTaskAssetObjectInfoBase::execTaskEnd },
		{ "TaskSecondaryChanged", &UTaskAssetObjectInfoBase::execTaskSecondaryChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskAssetObjectInfoBase);
UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister()
{
	return UTaskAssetObjectInfoBase::StaticClass();
}
struct Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskAssetObjectInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskSystem_MetaData[] = {
		{ "Category", "TaskAssetObjectInfoBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xad\x90\xe7\xb3\xbb\xe7\xbb\x9f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskAsset_MetaData[] = {
		{ "Category", "TaskAssetObjectInfoBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_ValueIdToValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x98\xe9\x87\x8fId\xe5\xaf\xb9\xe5\xba\x94\xe5\x8f\x98\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskAsset/TaskAssetObjectInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskSystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_ValueIdToValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_ValueIdToValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_ValueIdToValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintInitTaskAssetObjectInfo, "BlueprintInitTaskAssetObjectInfo" }, // 2473294538
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskEnd, "BlueprintTaskEnd" }, // 1638346326
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_BlueprintTaskSecondaryChanged, "BlueprintTaskSecondaryChanged" }, // 2528371326
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetBoolFromNameId, "GetBoolFromNameId" }, // 3107979624
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetObjectFromNameId, "GetObjectFromNameId" }, // 3144201137
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_GetVectorFromNameId, "GetVectorFromNameId" }, // 3221394865
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_InitTaskAssetObjectInfo, "InitTaskAssetObjectInfo" }, // 2809704095
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetBoolFromNameId, "SetBoolFromNameId" }, // 745812079
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetObjectFromNameId, "SetObjectFromNameId" }, // 2852927841
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_SetVectorFromNameId, "SetVectorFromNameId" }, // 2503550432
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskEnd, "TaskEnd" }, // 3252402258
		{ &Z_Construct_UFunction_UTaskAssetObjectInfoBase_TaskSecondaryChanged, "TaskSecondaryChanged" }, // 579057895
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskAssetObjectInfoBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_TaskSystem = { "TaskSystem", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAssetObjectInfoBase, TaskSystem), Z_Construct_UClass_UHQTaskSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskSystem_MetaData), NewProp_TaskSystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_TaskAsset = { "TaskAsset", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAssetObjectInfoBase, TaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskAsset_MetaData), NewProp_TaskAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue_ValueProp = { "Map_ValueIdToValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USystemValueType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue_Key_KeyProp = { "Map_ValueIdToValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue = { "Map_ValueIdToValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAssetObjectInfoBase, Map_ValueIdToValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_ValueIdToValue_MetaData), NewProp_Map_ValueIdToValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskAssetObjectInfoBase, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_TaskSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_TaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_Map_ValueIdToValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::ClassParams = {
	&UTaskAssetObjectInfoBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase()
{
	if (!Z_Registration_Info_UClass_UTaskAssetObjectInfoBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskAssetObjectInfoBase.OuterSingleton, Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskAssetObjectInfoBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskAssetObjectInfoBase>()
{
	return UTaskAssetObjectInfoBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskAssetObjectInfoBase);
UTaskAssetObjectInfoBase::~UTaskAssetObjectInfoBase() {}
// End Class UTaskAssetObjectInfoBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskAssetObjectInfoBase, UTaskAssetObjectInfoBase::StaticClass, TEXT("UTaskAssetObjectInfoBase"), &Z_Registration_Info_UClass_UTaskAssetObjectInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskAssetObjectInfoBase), 2399046310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_3105047215(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
