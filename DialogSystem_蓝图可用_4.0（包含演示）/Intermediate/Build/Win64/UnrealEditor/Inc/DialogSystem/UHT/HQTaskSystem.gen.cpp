// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/HQTaskSystem.h"
#include "DialogSystem/Public/DialogAsset/DialogAsset.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"
#include "DialogSystem/Public/TaskAsset/TaskAsset.h"
#include "DialogSystem/Public/TaskAsset/TaskAssetObjectInfo.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHQTaskSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UHQTaskSystem();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UHQTaskSystem_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskSystemDataObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskSystemDataObject_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature();
DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature();
DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskSystemDataObject Function BlueprintAddTask
struct TaskSystemDataObject_eventBlueprintAddTask_Parms
{
	UTaskAsset* TaskAsset;
	AActor* TaskSourceActor;
};
static const FName NAME_UTaskSystemDataObject_BlueprintAddTask = FName(TEXT("BlueprintAddTask"));
void UTaskSystemDataObject::BlueprintAddTask(UTaskAsset* TaskAsset, AActor* TaskSourceActor)
{
	TaskSystemDataObject_eventBlueprintAddTask_Parms Parms;
	Parms.TaskAsset=TaskAsset;
	Parms.TaskSourceActor=TaskSourceActor;
	UFunction* Func = FindFunctionChecked(NAME_UTaskSystemDataObject_BlueprintAddTask);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetImplementable" },
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskSourceActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::NewProp_TaskAsset = { "TaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskSystemDataObject_eventBlueprintAddTask_Parms, TaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::NewProp_TaskSourceActor = { "TaskSourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskSystemDataObject_eventBlueprintAddTask_Parms, TaskSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::NewProp_TaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::NewProp_TaskSourceActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskSystemDataObject, nullptr, "BlueprintAddTask", nullptr, nullptr, Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::PropPointers), sizeof(TaskSystemDataObject_eventBlueprintAddTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskSystemDataObject_eventBlueprintAddTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskSystemDataObject Function BlueprintAddTask

// Begin Class UTaskSystemDataObject Function BlueprintTaskEnd
struct TaskSystemDataObject_eventBlueprintTaskEnd_Parms
{
	UTaskAsset* TaskAsset;
	ETaskResultType TaskResultType;
};
static const FName NAME_UTaskSystemDataObject_BlueprintTaskEnd = FName(TEXT("BlueprintTaskEnd"));
void UTaskSystemDataObject::BlueprintTaskEnd(UTaskAsset* TaskAsset, ETaskResultType TaskResultType)
{
	TaskSystemDataObject_eventBlueprintTaskEnd_Parms Parms;
	Parms.TaskAsset=TaskAsset;
	Parms.TaskResultType=TaskResultType;
	UFunction* Func = FindFunctionChecked(NAME_UTaskSystemDataObject_BlueprintTaskEnd);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetImplementable" },
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xbb\x93\xe6\x9d\x9f\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskResultType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskResultType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskAsset = { "TaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskSystemDataObject_eventBlueprintTaskEnd_Parms, TaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskResultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskResultType = { "TaskResultType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskSystemDataObject_eventBlueprintTaskEnd_Parms, TaskResultType), Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(0, nullptr) }; // 2271008850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskResultType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::NewProp_TaskResultType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskSystemDataObject, nullptr, "BlueprintTaskEnd", nullptr, nullptr, Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::PropPointers), sizeof(TaskSystemDataObject_eventBlueprintTaskEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskSystemDataObject_eventBlueprintTaskEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskSystemDataObject Function BlueprintTaskEnd

// Begin Class UTaskSystemDataObject Function BlueprintTaskInitialize
static const FName NAME_UTaskSystemDataObject_BlueprintTaskInitialize = FName(TEXT("BlueprintTaskInitialize"));
void UTaskSystemDataObject::BlueprintTaskInitialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UTaskSystemDataObject_BlueprintTaskInitialize);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetImplementable" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************\n//\xe5\x85\xac\xe5\xbc\x80\xe5\x87\xbd\xe6\x95\xb0\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xac\xe5\xbc\x80\xe5\x87\xbd\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskSystemDataObject, nullptr, "BlueprintTaskInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskSystemDataObject Function BlueprintTaskInitialize

// Begin Class UTaskSystemDataObject
void UTaskSystemDataObject::StaticRegisterNativesUTaskSystemDataObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskSystemDataObject);
UClass* Z_Construct_UClass_UTaskSystemDataObject_NoRegister()
{
	return UTaskSystemDataObject::StaticClass();
}
struct Z_Construct_UClass_UTaskSystemDataObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "IncludePath", "TaskAsset/HQTaskSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "TaskSystemSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskSystemDataObject_BlueprintAddTask, "BlueprintAddTask" }, // 402526183
		{ &Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskEnd, "BlueprintTaskEnd" }, // 461310620
		{ &Z_Construct_UFunction_UTaskSystemDataObject_BlueprintTaskInitialize, "BlueprintTaskInitialize" }, // 3117595724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskSystemDataObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskSystemDataObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskSystemDataObject, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskSystemDataObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskSystemDataObject_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSystemDataObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskSystemDataObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSystemDataObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskSystemDataObject_Statics::ClassParams = {
	&UTaskSystemDataObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTaskSystemDataObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSystemDataObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSystemDataObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskSystemDataObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskSystemDataObject()
{
	if (!Z_Registration_Info_UClass_UTaskSystemDataObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskSystemDataObject.OuterSingleton, Z_Construct_UClass_UTaskSystemDataObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskSystemDataObject.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskSystemDataObject>()
{
	return UTaskSystemDataObject::StaticClass();
}
UTaskSystemDataObject::UTaskSystemDataObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskSystemDataObject);
UTaskSystemDataObject::~UTaskSystemDataObject() {}
// End Class UTaskSystemDataObject

// Begin Delegate FOnTaskAdd
struct Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics
{
	struct HQTaskSystem_eventOnTaskAdd_Parms
	{
		FName TaskId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//****************************************************\n//\xe5\xa7\x94\xe6\x89\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa7\x94\xe6\x89\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventOnTaskAdd_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::NewProp_TaskId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "OnTaskAdd__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::HQTaskSystem_eventOnTaskAdd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::HQTaskSystem_eventOnTaskAdd_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UHQTaskSystem::FOnTaskAdd_DelegateWrapper(const FMulticastScriptDelegate& OnTaskAdd, FName TaskId)
{
	struct HQTaskSystem_eventOnTaskAdd_Parms
	{
		FName TaskId;
	};
	HQTaskSystem_eventOnTaskAdd_Parms Parms;
	Parms.TaskId=TaskId;
	OnTaskAdd.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTaskAdd

// Begin Delegate FOnTaskRemove
struct Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics
{
	struct HQTaskSystem_eventOnTaskRemove_Parms
	{
		FName TaskId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventOnTaskRemove_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::NewProp_TaskId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "OnTaskRemove__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::HQTaskSystem_eventOnTaskRemove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::HQTaskSystem_eventOnTaskRemove_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UHQTaskSystem::FOnTaskRemove_DelegateWrapper(const FMulticastScriptDelegate& OnTaskRemove, FName TaskId)
{
	struct HQTaskSystem_eventOnTaskRemove_Parms
	{
		FName TaskId;
	};
	HQTaskSystem_eventOnTaskRemove_Parms Parms;
	Parms.TaskId=TaskId;
	OnTaskRemove.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTaskRemove

// Begin Delegate FOnTaskUpdate
struct Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics
{
	struct HQTaskSystem_eventOnTaskUpdate_Parms
	{
		FName TaskId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventOnTaskUpdate_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::NewProp_TaskId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "OnTaskUpdate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::HQTaskSystem_eventOnTaskUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::HQTaskSystem_eventOnTaskUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UHQTaskSystem::FOnTaskUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnTaskUpdate, FName TaskId)
{
	struct HQTaskSystem_eventOnTaskUpdate_Parms
	{
		FName TaskId;
	};
	HQTaskSystem_eventOnTaskUpdate_Parms Parms;
	Parms.TaskId=TaskId;
	OnTaskUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTaskUpdate

// Begin Class UHQTaskSystem Function AddTask
struct Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics
{
	struct HQTaskSystem_eventAddTask_Parms
	{
		UTaskAsset* TaskAsset;
		AActor* TaskSourceActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbe\x8b\n" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xbb\xbb\xe5\x8a\xa1" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x9d\xa1\xe4\xbe\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskSourceActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_TaskAsset = { "TaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventAddTask_Parms, TaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_TaskSourceActor = { "TaskSourceActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventAddTask_Parms, TaskSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventAddTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventAddTask_Parms), &Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_TaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_TaskSourceActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "AddTask", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::HQTaskSystem_eventAddTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::HQTaskSystem_eventAddTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_AddTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_AddTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execAddTask)
{
	P_GET_OBJECT(UTaskAsset,Z_Param_TaskAsset);
	P_GET_OBJECT(AActor,Z_Param_TaskSourceActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddTask(Z_Param_TaskAsset,Z_Param_TaskSourceActor);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function AddTask

// Begin Class UHQTaskSystem Function AddTaskTag
struct Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics
{
	struct HQTaskSystem_eventAddTaskTag_Parms
	{
		FName TaskId;
		FName TaskTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xb7\xbb\xe5\x8a\xa0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe6\xb7\xbb\xe5\x8a\xa0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb7\xbb\xe5\x8a\xa0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventAddTaskTag_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_TaskTag = { "TaskTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventAddTaskTag_Parms, TaskTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventAddTaskTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventAddTaskTag_Parms), &Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_TaskTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "AddTaskTag", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::HQTaskSystem_eventAddTaskTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::HQTaskSystem_eventAddTaskTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_AddTaskTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_AddTaskTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execAddTaskTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddTaskTag(Z_Param_TaskId,Z_Param_TaskTag);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function AddTaskTag

// Begin Class UHQTaskSystem Function GetTaskAssetAndInfoFromId
struct Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics
{
	struct HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms
	{
		FName TaskId;
		UTaskAsset* TaskAsset;
		UTaskAssetObjectInfoBase* TaskInfo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\x92\x8c\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\x92\x8c\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe5\x92\x8c\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskInfo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskAsset = { "TaskAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms, TaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskInfo = { "TaskInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms, TaskInfo), Z_Construct_UClass_UTaskAssetObjectInfoBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms), &Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_TaskInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "GetTaskAssetAndInfoFromId", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::HQTaskSystem_eventGetTaskAssetAndInfoFromId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execGetTaskAssetAndInfoFromId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_OBJECT_REF(UTaskAsset,Z_Param_Out_TaskAsset);
	P_GET_OBJECT_REF(UTaskAssetObjectInfoBase,Z_Param_Out_TaskInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTaskAssetAndInfoFromId(Z_Param_TaskId,P_ARG_GC_BARRIER(Z_Param_Out_TaskAsset),P_ARG_GC_BARRIER(Z_Param_Out_TaskInfo));
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function GetTaskAssetAndInfoFromId

// Begin Class UHQTaskSystem Function GetTaskCurrentExecuteNode
struct Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics
{
	struct HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms
	{
		FName TaskId;
		FName TaskCurrentIdThis;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1Id\xe4\xb8\x8b\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1Id\xe4\xb8\x8b\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1Id\xe4\xb8\x8b\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskCurrentIdThis;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_TaskCurrentIdThis = { "TaskCurrentIdThis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms, TaskCurrentIdThis), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms), &Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_TaskCurrentIdThis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "GetTaskCurrentExecuteNode", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::HQTaskSystem_eventGetTaskCurrentExecuteNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execGetTaskCurrentExecuteNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TaskCurrentIdThis);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTaskCurrentExecuteNode(Z_Param_TaskId,Z_Param_Out_TaskCurrentIdThis);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function GetTaskCurrentExecuteNode

// Begin Class UHQTaskSystem Function GetTaskCurrentUIShowInfo
struct Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics
{
	struct HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms
	{
		FName TaskId;
		URuntimeTaskNodeInfo* TaskNodeInfo;
		TArray<USecondaryTaskBase*> OpenTaskSecondary;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8b\xe5\xbd\x93\xe5\x89\x8d\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8b\xe9\x98\xb6\xe6\xae\xb5\xe7\x9a\x84UI\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe5\x92\x8c\xe5\xb7\xb2\xe7\xbb\x8f\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84UI\xe6\x96\x87\xe6\x9c\xac\xe6\x80\xbb\xe5\x92\x8c\xe3\x80\x82\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1Id\xe4\xb8\x8b\xe7\x9a\x84UI\xe6\x98\xbe\xe7\xa4\xba\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8b\xe5\xbd\x93\xe5\x89\x8d\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8b\xe9\x98\xb6\xe6\xae\xb5\xe7\x9a\x84UI\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe5\x92\x8c\xe5\xb7\xb2\xe7\xbb\x8f\xe8\xa7\xa6\xe5\x8f\x91\xe7\x9a\x84\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x9a\x84UI\xe6\x96\x87\xe6\x9c\xac\xe6\x80\xbb\xe5\x92\x8c\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskNodeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenTaskSecondary_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenTaskSecondary;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_TaskNodeInfo = { "TaskNodeInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms, TaskNodeInfo), Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_OpenTaskSecondary_Inner = { "OpenTaskSecondary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USecondaryTaskBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_OpenTaskSecondary = { "OpenTaskSecondary", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms, OpenTaskSecondary), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms), &Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_TaskNodeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_OpenTaskSecondary_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_OpenTaskSecondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "GetTaskCurrentUIShowInfo", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::HQTaskSystem_eventGetTaskCurrentUIShowInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execGetTaskCurrentUIShowInfo)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_OBJECT_REF(URuntimeTaskNodeInfo,Z_Param_Out_TaskNodeInfo);
	P_GET_TARRAY_REF(USecondaryTaskBase*,Z_Param_Out_OpenTaskSecondary);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTaskCurrentUIShowInfo(Z_Param_TaskId,P_ARG_GC_BARRIER(Z_Param_Out_TaskNodeInfo),Z_Param_Out_OpenTaskSecondary);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function GetTaskCurrentUIShowInfo

// Begin Class UHQTaskSystem Function GetTaskDialogAssetFromId
struct Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics
{
	struct HQTaskSystem_eventGetTaskDialogAssetFromId_Parms
	{
		FName TaskId;
		FName TaskDialogId;
		UDialogAsset* DialogAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\xa4\xe6\x96\xad\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\xad\xe5\xaf\xb9\xe8\xaf\x9d\xe6\x98\xaf\xe5\x90\xa6\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "DisplayName", "\xe8\x8e\xb7\xe5\x8f\x96\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\xad\xe5\xaf\xb9\xe8\xaf\x9d\xe6\x98\xaf\xe5\x90\xa6\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskDialogId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskDialogAssetFromId_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_TaskDialogId = { "TaskDialogId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskDialogAssetFromId_Parms, TaskDialogId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_DialogAsset = { "DialogAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventGetTaskDialogAssetFromId_Parms, DialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventGetTaskDialogAssetFromId_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventGetTaskDialogAssetFromId_Parms), &Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_TaskDialogId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_DialogAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "GetTaskDialogAssetFromId", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::HQTaskSystem_eventGetTaskDialogAssetFromId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::HQTaskSystem_eventGetTaskDialogAssetFromId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execGetTaskDialogAssetFromId)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskDialogId);
	P_GET_OBJECT_REF(UDialogAsset,Z_Param_Out_DialogAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTaskDialogAssetFromId(Z_Param_TaskId,Z_Param_TaskDialogId,P_ARG_GC_BARRIER(Z_Param_Out_DialogAsset));
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function GetTaskDialogAssetFromId

// Begin Class UHQTaskSystem Function RemoveTask
struct Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics
{
	struct HQTaskSystem_eventRemoveTask_Parms
	{
		FName TaskId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe7\xbb\x93\xe6\x9e\x9c\xe8\xa1\xa8\xe7\xa4\xba\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x9c\xa8\xe7\xa7\xbb\xe9\x99\xa4\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8\xe3\x80\x82\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe7\xbb\x93\xe6\x9e\x9c\xe8\xa1\xa8\xe7\xa4\xba\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x9c\xa8\xe7\xa7\xbb\xe9\x99\xa4\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\xad\x98\xe5\x9c\xa8\xe3\x80\x82\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventRemoveTask_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventRemoveTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventRemoveTask_Parms), &Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "RemoveTask", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::HQTaskSystem_eventRemoveTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::HQTaskSystem_eventRemoveTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_RemoveTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_RemoveTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execRemoveTask)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTask(Z_Param_TaskId);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function RemoveTask

// Begin Class UHQTaskSystem Function RemoveTaskTag
struct Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics
{
	struct HQTaskSystem_eventRemoveTaskTag_Parms
	{
		FName TaskId;
		FName TaskTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa7\xbb\xe9\x99\xa4Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe7\xa7\xbb\xe9\x99\xa4Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe9\x99\xa4Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe6\xa0\x87\xe7\xad\xbe\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventRemoveTaskTag_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_TaskTag = { "TaskTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventRemoveTaskTag_Parms, TaskTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventRemoveTaskTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventRemoveTaskTag_Parms), &Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_TaskTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "RemoveTaskTag", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::HQTaskSystem_eventRemoveTaskTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::HQTaskSystem_eventRemoveTaskTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execRemoveTaskTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTaskTag(Z_Param_TaskId,Z_Param_TaskTag);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function RemoveTaskTag

// Begin Class UHQTaskSystem Function TaskInitialize
struct Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics
{
	struct HQTaskSystem_eventTaskInitialize_Parms
	{
		TSubclassOf<UTaskSystemDataObject> NewTaskSystemDataObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb3\xbb\xe7\xbb\x9f\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe4\xba\x8b\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewTaskSystemDataObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::NewProp_NewTaskSystemDataObject = { "NewTaskSystemDataObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventTaskInitialize_Parms, NewTaskSystemDataObject), Z_Construct_UClass_UClass, Z_Construct_UClass_UTaskSystemDataObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::NewProp_NewTaskSystemDataObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "TaskInitialize", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::HQTaskSystem_eventTaskInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::HQTaskSystem_eventTaskInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_TaskInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_TaskInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execTaskInitialize)
{
	P_GET_OBJECT(UClass,Z_Param_NewTaskSystemDataObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TaskInitialize(Z_Param_NewTaskSystemDataObject);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function TaskInitialize

// Begin Class UHQTaskSystem Function UpdateTask
struct Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics
{
	struct HQTaskSystem_eventUpdateTask_Parms
	{
		FName TaskId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskAssetFunction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x88\xb7\xe6\x96\xb0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe5\x88\xb7\xe6\x96\xb0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x86\x85\xe5\xae\xb9" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xb7\xe6\x96\xb0Id\xe4\xb8\x8b\xe4\xbb\xbb\xe5\x8a\xa1\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe5\xa6\x82\xe6\x9e\x9c\xe6\xad\xa4\xe4\xbb\xbb\xe5\x8a\xa1\xe4\xb8\x8d\xe5\xad\x98\xe5\x9c\xa8\xe5\x88\x99\xe8\xbf\x94\xe5\x9b\x9e\xe5\x90\xa6\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_TaskId = { "TaskId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HQTaskSystem_eventUpdateTask_Parms, TaskId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HQTaskSystem_eventUpdateTask_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HQTaskSystem_eventUpdateTask_Parms), &Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_TaskId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHQTaskSystem, nullptr, "UpdateTask", nullptr, nullptr, Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::HQTaskSystem_eventUpdateTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::HQTaskSystem_eventUpdateTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHQTaskSystem_UpdateTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHQTaskSystem_UpdateTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHQTaskSystem::execUpdateTask)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_TaskId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateTask(Z_Param_TaskId);
	P_NATIVE_END;
}
// End Class UHQTaskSystem Function UpdateTask

// Begin Class UHQTaskSystem
void UHQTaskSystem::StaticRegisterNativesUHQTaskSystem()
{
	UClass* Class = UHQTaskSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTask", &UHQTaskSystem::execAddTask },
		{ "AddTaskTag", &UHQTaskSystem::execAddTaskTag },
		{ "GetTaskAssetAndInfoFromId", &UHQTaskSystem::execGetTaskAssetAndInfoFromId },
		{ "GetTaskCurrentExecuteNode", &UHQTaskSystem::execGetTaskCurrentExecuteNode },
		{ "GetTaskCurrentUIShowInfo", &UHQTaskSystem::execGetTaskCurrentUIShowInfo },
		{ "GetTaskDialogAssetFromId", &UHQTaskSystem::execGetTaskDialogAssetFromId },
		{ "RemoveTask", &UHQTaskSystem::execRemoveTask },
		{ "RemoveTaskTag", &UHQTaskSystem::execRemoveTaskTag },
		{ "TaskInitialize", &UHQTaskSystem::execTaskInitialize },
		{ "UpdateTask", &UHQTaskSystem::execUpdateTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHQTaskSystem);
UClass* Z_Construct_UClass_UHQTaskSystem_NoRegister()
{
	return UHQTaskSystem::StaticClass();
}
struct Z_Construct_UClass_UHQTaskSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb3\xbb\xe7\xbb\x9f\xe7\xae\xa1\xe7\x90\x86\n" },
#endif
		{ "IncludePath", "TaskAsset/HQTaskSystem.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe7\xb3\xbb\xe7\xbb\x9f\xe7\xae\xa1\xe7\x90\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_TaskIdToTaskAsset_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1Id\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1Id\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe4\xbb\xbb\xe5\x8a\xa1Id\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskSystemDataObject_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb\n" },
#endif
		{ "DisplayName", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xae\xbe\xe7\xbd\xae\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\xb0\xe6\x8d\xae\xe7\xb1\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskAdd_MetaData[] = {
		{ "Category", "TaskAssetFunction" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskRemove_MetaData[] = {
		{ "Category", "TaskAssetFunction" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTaskUpdate_MetaData[] = {
		{ "Category", "TaskAssetFunction" },
		{ "ModuleRelativePath", "Public/TaskAsset/HQTaskSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_TaskIdToTaskAsset_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_TaskIdToTaskAsset_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_TaskIdToTaskAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskSystemDataObject;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskAdd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskRemove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHQTaskSystem_AddTask, "AddTask" }, // 3828290367
		{ &Z_Construct_UFunction_UHQTaskSystem_AddTaskTag, "AddTaskTag" }, // 105881738
		{ &Z_Construct_UFunction_UHQTaskSystem_GetTaskAssetAndInfoFromId, "GetTaskAssetAndInfoFromId" }, // 2593473519
		{ &Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentExecuteNode, "GetTaskCurrentExecuteNode" }, // 3795711324
		{ &Z_Construct_UFunction_UHQTaskSystem_GetTaskCurrentUIShowInfo, "GetTaskCurrentUIShowInfo" }, // 688509726
		{ &Z_Construct_UFunction_UHQTaskSystem_GetTaskDialogAssetFromId, "GetTaskDialogAssetFromId" }, // 3046805860
		{ &Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature, "OnTaskAdd__DelegateSignature" }, // 1672336295
		{ &Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature, "OnTaskRemove__DelegateSignature" }, // 826724232
		{ &Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature, "OnTaskUpdate__DelegateSignature" }, // 315853743
		{ &Z_Construct_UFunction_UHQTaskSystem_RemoveTask, "RemoveTask" }, // 1237140361
		{ &Z_Construct_UFunction_UHQTaskSystem_RemoveTaskTag, "RemoveTaskTag" }, // 2361149692
		{ &Z_Construct_UFunction_UHQTaskSystem_TaskInitialize, "TaskInitialize" }, // 2221997551
		{ &Z_Construct_UFunction_UHQTaskSystem_UpdateTask, "UpdateTask" }, // 3290936471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHQTaskSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset_ValueProp = { "Map_TaskIdToTaskAsset", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset_Key_KeyProp = { "Map_TaskIdToTaskAsset_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset = { "Map_TaskIdToTaskAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHQTaskSystem, Map_TaskIdToTaskAsset), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_TaskIdToTaskAsset_MetaData), NewProp_Map_TaskIdToTaskAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_TaskSystemDataObject = { "TaskSystemDataObject", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHQTaskSystem, TaskSystemDataObject), Z_Construct_UClass_UTaskSystemDataObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskSystemDataObject_MetaData), NewProp_TaskSystemDataObject_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskAdd = { "OnTaskAdd", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHQTaskSystem, OnTaskAdd), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskAdd_MetaData), NewProp_OnTaskAdd_MetaData) }; // 1672336295
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskRemove = { "OnTaskRemove", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHQTaskSystem, OnTaskRemove), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskRemove_MetaData), NewProp_OnTaskRemove_MetaData) }; // 826724232
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskUpdate = { "OnTaskUpdate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHQTaskSystem, OnTaskUpdate), Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTaskUpdate_MetaData), NewProp_OnTaskUpdate_MetaData) }; // 315853743
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHQTaskSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_Map_TaskIdToTaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_TaskSystemDataObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHQTaskSystem_Statics::NewProp_OnTaskUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHQTaskSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHQTaskSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHQTaskSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHQTaskSystem_Statics::ClassParams = {
	&UHQTaskSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHQTaskSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHQTaskSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHQTaskSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UHQTaskSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHQTaskSystem()
{
	if (!Z_Registration_Info_UClass_UHQTaskSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHQTaskSystem.OuterSingleton, Z_Construct_UClass_UHQTaskSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHQTaskSystem.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UHQTaskSystem>()
{
	return UHQTaskSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHQTaskSystem);
UHQTaskSystem::~UHQTaskSystem() {}
// End Class UHQTaskSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskSystemDataObject, UTaskSystemDataObject::StaticClass, TEXT("UTaskSystemDataObject"), &Z_Registration_Info_UClass_UTaskSystemDataObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskSystemDataObject), 3782853604U) },
		{ Z_Construct_UClass_UHQTaskSystem, UHQTaskSystem::StaticClass, TEXT("UHQTaskSystem"), &Z_Registration_Info_UClass_UHQTaskSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHQTaskSystem), 3554714487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_1997824526(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
