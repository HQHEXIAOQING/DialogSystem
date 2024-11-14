// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskNodeEffectorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskNodeEffectorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffectorBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskEffectorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskEffectorBase Function BlueprintTaskEffectorPlay
struct TaskEffectorBase_eventBlueprintTaskEffectorPlay_Parms
{
	UTaskAsset* SettingTaskAsset;
};
static const FName NAME_UTaskEffectorBase_BlueprintTaskEffectorPlay = FName(TEXT("BlueprintTaskEffectorPlay"));
void UTaskEffectorBase::BlueprintTaskEffectorPlay(UTaskAsset* SettingTaskAsset)
{
	TaskEffectorBase_eventBlueprintTaskEffectorPlay_Parms Parms;
	Parms.SettingTaskAsset=SettingTaskAsset;
	UFunction* Func = FindFunctionChecked(NAME_UTaskEffectorBase_BlueprintTaskEffectorPlay);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogNodeEffectorBase" },
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskNodeEffectorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskEffectorBase_eventBlueprintTaskEffectorPlay_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::NewProp_SettingTaskAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskEffectorBase, nullptr, "BlueprintTaskEffectorPlay", nullptr, nullptr, Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::PropPointers), sizeof(TaskEffectorBase_eventBlueprintTaskEffectorPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(TaskEffectorBase_eventBlueprintTaskEffectorPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UTaskEffectorBase Function BlueprintTaskEffectorPlay

// Begin Class UTaskEffectorBase Function TaskEffectorPlay
struct Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics
{
	struct TaskEffectorBase_eventTaskEffectorPlay_Parms
	{
		UTaskAsset* SettingTaskAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogNodeEffectorBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\x88\xe6\x9e\x9c\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskNodeEffectorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\x88\xe6\x9e\x9c\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingTaskAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::NewProp_SettingTaskAsset = { "SettingTaskAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaskEffectorBase_eventTaskEffectorPlay_Parms, SettingTaskAsset), Z_Construct_UClass_UTaskAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::NewProp_SettingTaskAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTaskEffectorBase, nullptr, "TaskEffectorPlay", nullptr, nullptr, Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::TaskEffectorBase_eventTaskEffectorPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::TaskEffectorBase_eventTaskEffectorPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTaskEffectorBase::execTaskEffectorPlay)
{
	P_GET_OBJECT(UTaskAsset,Z_Param_SettingTaskAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TaskEffectorPlay(Z_Param_SettingTaskAsset);
	P_NATIVE_END;
}
// End Class UTaskEffectorBase Function TaskEffectorPlay

// Begin Class UTaskEffectorBase
void UTaskEffectorBase::StaticRegisterNativesUTaskEffectorBase()
{
	UClass* Class = UTaskEffectorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TaskEffectorPlay", &UTaskEffectorBase::execTaskEffectorPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskEffectorBase);
UClass* Z_Construct_UClass_UTaskEffectorBase_NoRegister()
{
	return UTaskEffectorBase::StaticClass();
}
struct Z_Construct_UClass_UTaskEffectorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "IncludePath", "TaskAsset/TaskNodeEffectorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskNodeEffectorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\xbb\xe5\x8a\xa1\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTaskEffectorBase_BlueprintTaskEffectorPlay, "BlueprintTaskEffectorPlay" }, // 938256286
		{ &Z_Construct_UFunction_UTaskEffectorBase_TaskEffectorPlay, "TaskEffectorPlay" }, // 3147724748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskEffectorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskEffectorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffectorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskEffectorBase_Statics::ClassParams = {
	&UTaskEffectorBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskEffectorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskEffectorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskEffectorBase()
{
	if (!Z_Registration_Info_UClass_UTaskEffectorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskEffectorBase.OuterSingleton, Z_Construct_UClass_UTaskEffectorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskEffectorBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskEffectorBase>()
{
	return UTaskEffectorBase::StaticClass();
}
UTaskEffectorBase::UTaskEffectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskEffectorBase);
UTaskEffectorBase::~UTaskEffectorBase() {}
// End Class UTaskEffectorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskEffectorBase, UTaskEffectorBase::StaticClass, TEXT("UTaskEffectorBase"), &Z_Registration_Info_UClass_UTaskEffectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskEffectorBase), 3811480345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_1159164524(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
