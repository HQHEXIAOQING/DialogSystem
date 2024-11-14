// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskConditionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskDialogConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskDialogConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseConditionBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskDialogConditionBase Function BlueprintIsSucceed
struct TaskDialogConditionBase_eventBlueprintIsSucceed_Parms
{
	UTaskAsset* SettingTaskAsset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TaskDialogConditionBase_eventBlueprintIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UTaskDialogConditionBase_BlueprintIsSucceed = FName(TEXT("BlueprintIsSucceed"));
bool UTaskDialogConditionBase::BlueprintIsSucceed(UTaskAsset* SettingTaskAsset)
{
	TaskDialogConditionBase_eventBlueprintIsSucceed_Parms Parms;
	Parms.SettingTaskAsset=SettingTaskAsset;
	UFunction* Func = FindFunctionChecked(NAME_UTaskDialogConditionBase_BlueprintIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskDialogConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskDialogConditionBase_eventBlueprintIsSucceed_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskDialogConditionBase_eventBlueprintIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskDialogConditionBase_eventBlueprintIsSucceed_Parms), &Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_SettingTaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskDialogConditionBase, nullptr, "BlueprintIsSucceed", nullptr, nullptr, Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::PropPointers), sizeof(TaskDialogConditionBase_eventBlueprintIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskDialogConditionBase_eventBlueprintIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskDialogConditionBase Function BlueprintIsSucceed

// Begin Class UTaskDialogConditionBase
void UTaskDialogConditionBase::StaticRegisterNativesUTaskDialogConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskDialogConditionBase);
UClass* Z_Construct_UClass_UTaskDialogConditionBase_NoRegister()
{
	return UTaskDialogConditionBase::StaticClass();
}
struct Z_Construct_UClass_UTaskDialogConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\xad\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\xad\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x8c\x85\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskDialogConditionBase_BlueprintIsSucceed, "BlueprintIsSucceed" }, // 1737783228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskDialogConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskDialogConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDialogConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskDialogConditionBase_Statics::ClassParams = {
	&UTaskDialogConditionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskDialogConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskDialogConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskDialogConditionBase()
{
	if (!Z_Registration_Info_UClass_UTaskDialogConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskDialogConditionBase.OuterSingleton, Z_Construct_UClass_UTaskDialogConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskDialogConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskDialogConditionBase>()
{
	return UTaskDialogConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskDialogConditionBase);
UTaskDialogConditionBase::~UTaskDialogConditionBase() {}
// End Class UTaskDialogConditionBase

// Begin Class UTaskPinUseConditionBase Function BlueprintIsSucceed
struct TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms
{
	UTaskAsset* SettingTaskAsset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UTaskPinUseConditionBase_BlueprintIsSucceed = FName(TEXT("BlueprintIsSucceed"));
bool UTaskPinUseConditionBase::BlueprintIsSucceed(UTaskAsset* SettingTaskAsset)
{
	TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms Parms;
	Parms.SettingTaskAsset=SettingTaskAsset;
	UFunction* Func = FindFunctionChecked(NAME_UTaskPinUseConditionBase_BlueprintIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TaskPinUseConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms), &Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_SettingTaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskPinUseConditionBase, nullptr, "BlueprintIsSucceed", nullptr, nullptr, Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::PropPointers), sizeof(TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskPinUseConditionBase_eventBlueprintIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskPinUseConditionBase Function BlueprintIsSucceed

// Begin Class UTaskPinUseConditionBase
void UTaskPinUseConditionBase::StaticRegisterNativesUTaskPinUseConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskPinUseConditionBase);
UClass* Z_Construct_UClass_UTaskPinUseConditionBase_NoRegister()
{
	return UTaskPinUseConditionBase::StaticClass();
}
struct Z_Construct_UClass_UTaskPinUseConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n//\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\xad\xe5\xbc\x95\xe8\x84\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xb5\x84\xe4\xba\xa7\xe4\xb8\xad\xe5\xbc\x95\xe8\x84\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskPinUseConditionBase_BlueprintIsSucceed, "BlueprintIsSucceed" }, // 3225231609
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskPinUseConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskPinUseConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskPinUseConditionBase_Statics::ClassParams = {
	&UTaskPinUseConditionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskPinUseConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskPinUseConditionBase()
{
	if (!Z_Registration_Info_UClass_UTaskPinUseConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskPinUseConditionBase.OuterSingleton, Z_Construct_UClass_UTaskPinUseConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskPinUseConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskPinUseConditionBase>()
{
	return UTaskPinUseConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskPinUseConditionBase);
UTaskPinUseConditionBase::~UTaskPinUseConditionBase() {}
// End Class UTaskPinUseConditionBase

// Begin Class USecondaryTaskConditionBase Function BlueprintSecondaryTaskIsSucceed
struct SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms
{
	UTaskAsset* SettingTaskAsset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed = FName(TEXT("BlueprintSecondaryTaskIsSucceed"));
bool USecondaryTaskConditionBase::BlueprintSecondaryTaskIsSucceed(UTaskAsset* SettingTaskAsset)
{
	SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms Parms;
	Parms.SettingTaskAsset=SettingTaskAsset;
	UFunction* Func = FindFunctionChecked(NAME_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecondaryTaskConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms), &Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_SettingTaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecondaryTaskConditionBase, nullptr, "BlueprintSecondaryTaskIsSucceed", nullptr, nullptr, Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::PropPointers), sizeof(SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(SecondaryTaskConditionBase_eventBlueprintSecondaryTaskIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USecondaryTaskConditionBase Function BlueprintSecondaryTaskIsSucceed

// Begin Class USecondaryTaskConditionBase
void USecondaryTaskConditionBase::StaticRegisterNativesUSecondaryTaskConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondaryTaskConditionBase);
UClass* Z_Construct_UClass_USecondaryTaskConditionBase_NoRegister()
{
	return USecondaryTaskConditionBase::StaticClass();
}
struct Z_Construct_UClass_USecondaryTaskConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n//\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xa7\xa3\xe9\x94\x81\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xa7\xa3\xe9\x94\x81\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecondaryTaskConditionBase_BlueprintSecondaryTaskIsSucceed, "BlueprintSecondaryTaskIsSucceed" }, // 3601512495
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondaryTaskConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USecondaryTaskConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondaryTaskConditionBase_Statics::ClassParams = {
	&USecondaryTaskConditionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondaryTaskConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondaryTaskConditionBase()
{
	if (!Z_Registration_Info_UClass_USecondaryTaskConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondaryTaskConditionBase.OuterSingleton, Z_Construct_UClass_USecondaryTaskConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondaryTaskConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USecondaryTaskConditionBase>()
{
	return USecondaryTaskConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondaryTaskConditionBase);
USecondaryTaskConditionBase::~USecondaryTaskConditionBase() {}
// End Class USecondaryTaskConditionBase

// Begin Class USecondaryTaskAchievedConditionBase Function BlueprintSecondaryAchievedTaskIsSucceed
struct SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms
{
	UTaskAsset* SettingTaskAsset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed = FName(TEXT("BlueprintSecondaryAchievedTaskIsSucceed"));
bool USecondaryTaskAchievedConditionBase::BlueprintSecondaryAchievedTaskIsSucceed(UTaskAsset* SettingTaskAsset)
{
	SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms Parms;
	Parms.SettingTaskAsset=SettingTaskAsset;
	UFunction* Func = FindFunctionChecked(NAME_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecondaryTaskConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms), &Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_SettingTaskAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecondaryTaskAchievedConditionBase, nullptr, "BlueprintSecondaryAchievedTaskIsSucceed", nullptr, nullptr, Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::PropPointers), sizeof(SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(SecondaryTaskAchievedConditionBase_eventBlueprintSecondaryAchievedTaskIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USecondaryTaskAchievedConditionBase Function BlueprintSecondaryAchievedTaskIsSucceed

// Begin Class USecondaryTaskAchievedConditionBase
void USecondaryTaskAchievedConditionBase::StaticRegisterNativesUSecondaryTaskAchievedConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondaryTaskAchievedConditionBase);
UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase_NoRegister()
{
	return USecondaryTaskAchievedConditionBase::StaticClass();
}
struct Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n//\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\xbe\xbe\xe6\x88\x90\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecondaryTaskAchievedConditionBase_BlueprintSecondaryAchievedTaskIsSucceed, "BlueprintSecondaryAchievedTaskIsSucceed" }, // 2188461487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondaryTaskAchievedConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::ClassParams = {
	&USecondaryTaskAchievedConditionBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondaryTaskAchievedConditionBase()
{
	if (!Z_Registration_Info_UClass_USecondaryTaskAchievedConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondaryTaskAchievedConditionBase.OuterSingleton, Z_Construct_UClass_USecondaryTaskAchievedConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondaryTaskAchievedConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<USecondaryTaskAchievedConditionBase>()
{
	return USecondaryTaskAchievedConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondaryTaskAchievedConditionBase);
USecondaryTaskAchievedConditionBase::~USecondaryTaskAchievedConditionBase() {}
// End Class USecondaryTaskAchievedConditionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskDialogConditionBase, UTaskDialogConditionBase::StaticClass, TEXT("UTaskDialogConditionBase"), &Z_Registration_Info_UClass_UTaskDialogConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskDialogConditionBase), 4084692398U) },
		{ Z_Construct_UClass_UTaskPinUseConditionBase, UTaskPinUseConditionBase::StaticClass, TEXT("UTaskPinUseConditionBase"), &Z_Registration_Info_UClass_UTaskPinUseConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskPinUseConditionBase), 235079960U) },
		{ Z_Construct_UClass_USecondaryTaskConditionBase, USecondaryTaskConditionBase::StaticClass, TEXT("USecondaryTaskConditionBase"), &Z_Registration_Info_UClass_USecondaryTaskConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondaryTaskConditionBase), 1044777556U) },
		{ Z_Construct_UClass_USecondaryTaskAchievedConditionBase, USecondaryTaskAchievedConditionBase::StaticClass, TEXT("USecondaryTaskAchievedConditionBase"), &Z_Registration_Info_UClass_USecondaryTaskAchievedConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondaryTaskAchievedConditionBase), 423914480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditionBase_h_2634289007(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
