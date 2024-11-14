// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/DialogNodeEffectorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogNodeEffectorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffectorBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffectorBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UDialogNodeEffectorBase Function BlueprintDialogNodeEffectorPlay
struct DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms
{
	UDialogAsset* SettingDialogAsset;
	AActor* DialogActor;
};
static const FName NAME_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay = FName(TEXT("BlueprintDialogNodeEffectorPlay"));
void UDialogNodeEffectorBase::BlueprintDialogNodeEffectorPlay(UDialogAsset* SettingDialogAsset, AActor* DialogActor)
{
	DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms Parms;
	Parms.SettingDialogAsset=SettingDialogAsset;
	Parms.DialogActor=DialogActor;
	UFunction* Func = FindFunctionChecked(NAME_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogNodeEffectorBase" },
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogNodeEffectorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingDialogAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::NewProp_SettingDialogAsset = { "SettingDialogAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms, SettingDialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::NewProp_DialogActor = { "DialogActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms, DialogActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::NewProp_SettingDialogAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::NewProp_DialogActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogNodeEffectorBase, nullptr, "BlueprintDialogNodeEffectorPlay", nullptr, nullptr, Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::PropPointers), sizeof(DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogNodeEffectorBase_eventBlueprintDialogNodeEffectorPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogNodeEffectorBase Function BlueprintDialogNodeEffectorPlay

// Begin Class UDialogNodeEffectorBase Function DialogNodeEffectorPlay
struct Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics
{
	struct DialogNodeEffectorBase_eventDialogNodeEffectorPlay_Parms
	{
		UDialogAsset* SettingDialogAsset;
		AActor* DialogActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogNodeEffectorBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x95\x88\xe6\x9e\x9c\xe8\xa7\xa6\xe5\x8f\x91\n" },
#endif
		{ "DisplayName", "\xe6\x95\x88\xe6\x9e\x9c\xe8\xb0\x83\xe7\x94\xa8" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogNodeEffectorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x95\x88\xe6\x9e\x9c\xe8\xa7\xa6\xe5\x8f\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingDialogAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::NewProp_SettingDialogAsset = { "SettingDialogAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeEffectorBase_eventDialogNodeEffectorPlay_Parms, SettingDialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::NewProp_DialogActor = { "DialogActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeEffectorBase_eventDialogNodeEffectorPlay_Parms, DialogActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::NewProp_SettingDialogAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::NewProp_DialogActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogNodeEffectorBase, nullptr, "DialogNodeEffectorPlay", nullptr, nullptr, Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::DialogNodeEffectorBase_eventDialogNodeEffectorPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::DialogNodeEffectorBase_eventDialogNodeEffectorPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogNodeEffectorBase::execDialogNodeEffectorPlay)
{
	P_GET_OBJECT(UDialogAsset,Z_Param_SettingDialogAsset);
	P_GET_OBJECT(AActor,Z_Param_DialogActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogNodeEffectorPlay(Z_Param_SettingDialogAsset,Z_Param_DialogActor);
	P_NATIVE_END;
}
// End Class UDialogNodeEffectorBase Function DialogNodeEffectorPlay

// Begin Class UDialogNodeEffectorBase
void UDialogNodeEffectorBase::StaticRegisterNativesUDialogNodeEffectorBase()
{
	UClass* Class = UDialogNodeEffectorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogNodeEffectorPlay", &UDialogNodeEffectorBase::execDialogNodeEffectorPlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogNodeEffectorBase);
UClass* Z_Construct_UClass_UDialogNodeEffectorBase_NoRegister()
{
	return UDialogNodeEffectorBase::StaticClass();
}
struct Z_Construct_UClass_UDialogNodeEffectorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8\n" },
#endif
		{ "IncludePath", "DialogAsset/DialogNodeEffectorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogNodeEffectorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe6\x95\x88\xe6\x9e\x9c\xe5\x99\xa8\xe7\x9a\x84\xe4\xbd\xbf\xe7\x94\xa8" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogNodeEffectorBase_BlueprintDialogNodeEffectorPlay, "BlueprintDialogNodeEffectorPlay" }, // 492217696
		{ &Z_Construct_UFunction_UDialogNodeEffectorBase_DialogNodeEffectorPlay, "DialogNodeEffectorPlay" }, // 1001149273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogNodeEffectorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogNodeEffectorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffectorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogNodeEffectorBase_Statics::ClassParams = {
	&UDialogNodeEffectorBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeEffectorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogNodeEffectorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogNodeEffectorBase()
{
	if (!Z_Registration_Info_UClass_UDialogNodeEffectorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogNodeEffectorBase.OuterSingleton, Z_Construct_UClass_UDialogNodeEffectorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogNodeEffectorBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogNodeEffectorBase>()
{
	return UDialogNodeEffectorBase::StaticClass();
}
UDialogNodeEffectorBase::UDialogNodeEffectorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogNodeEffectorBase);
UDialogNodeEffectorBase::~UDialogNodeEffectorBase() {}
// End Class UDialogNodeEffectorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogNodeEffectorBase, UDialogNodeEffectorBase::StaticClass, TEXT("UDialogNodeEffectorBase"), &Z_Registration_Info_UClass_UDialogNodeEffectorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogNodeEffectorBase), 3523850223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_2284255243(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
