// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/DialogConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogConditionBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAsset_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAssetConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogAssetConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantConditionBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UParticipantConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UDialogAssetConditionBase Function BlueprintIsSucceed
struct DialogAssetConditionBase_eventBlueprintIsSucceed_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DialogAssetConditionBase_eventBlueprintIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UDialogAssetConditionBase_BlueprintIsSucceed = FName(TEXT("BlueprintIsSucceed"));
bool UDialogAssetConditionBase::BlueprintIsSucceed()
{
	DialogAssetConditionBase_eventBlueprintIsSucceed_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UDialogAssetConditionBase_BlueprintIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogAssetCondition" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogAssetConditionBase_eventBlueprintIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogAssetConditionBase_eventBlueprintIsSucceed_Parms), &Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogAssetConditionBase, nullptr, "BlueprintIsSucceed", nullptr, nullptr, Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::PropPointers), sizeof(DialogAssetConditionBase_eventBlueprintIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogAssetConditionBase_eventBlueprintIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogAssetConditionBase Function BlueprintIsSucceed

// Begin Class UDialogAssetConditionBase
void UDialogAssetConditionBase::StaticRegisterNativesUDialogAssetConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogAssetConditionBase);
UClass* Z_Construct_UClass_UDialogAssetConditionBase_NoRegister()
{
	return UDialogAssetConditionBase::StaticClass();
}
struct Z_Construct_UClass_UDialogAssetConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "DialogAsset/DialogConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\xb5\x84\xe4\xba\xa7\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogAssetConditionBase_BlueprintIsSucceed, "BlueprintIsSucceed" }, // 2922051355
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogAssetConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogAssetConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAssetConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogAssetConditionBase_Statics::ClassParams = {
	&UDialogAssetConditionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogAssetConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogAssetConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogAssetConditionBase()
{
	if (!Z_Registration_Info_UClass_UDialogAssetConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogAssetConditionBase.OuterSingleton, Z_Construct_UClass_UDialogAssetConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogAssetConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogAssetConditionBase>()
{
	return UDialogAssetConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogAssetConditionBase);
UDialogAssetConditionBase::~UDialogAssetConditionBase() {}
// End Class UDialogAssetConditionBase

// Begin Class UParticipantConditionBase Function BlueprintParticipantConditionIsSucceed
struct ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms
{
	UDialogAsset* SettingDialogAsset;
	AActor* NewActor;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed = FName(TEXT("BlueprintParticipantConditionIsSucceed"));
bool UParticipantConditionBase::BlueprintParticipantConditionIsSucceed(UDialogAsset* SettingDialogAsset, AActor* NewActor)
{
	ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms Parms;
	Parms.SettingDialogAsset=SettingDialogAsset;
	Parms.NewActor=NewActor;
	UFunction* Func = FindFunctionChecked(NAME_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogPacketConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingDialogAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_SettingDialogAsset = { "SettingDialogAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms, SettingDialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms), &Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_SettingDialogAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_NewActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParticipantConditionBase, nullptr, "BlueprintParticipantConditionIsSucceed", nullptr, nullptr, Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::PropPointers), sizeof(ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(ParticipantConditionBase_eventBlueprintParticipantConditionIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UParticipantConditionBase Function BlueprintParticipantConditionIsSucceed

// Begin Class UParticipantConditionBase
void UParticipantConditionBase::StaticRegisterNativesUParticipantConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticipantConditionBase);
UClass* Z_Construct_UClass_UParticipantConditionBase_NoRegister()
{
	return UParticipantConditionBase::StaticClass();
}
struct Z_Construct_UClass_UParticipantConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//*************************************************************\n// \xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb\n" },
#endif
		{ "IncludePath", "DialogAsset/DialogConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\x82\xe4\xb8\x8e\xe8\x80\x85\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x9f\xba\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UParticipantConditionBase_BlueprintParticipantConditionIsSucceed, "BlueprintParticipantConditionIsSucceed" }, // 3924764048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticipantConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UParticipantConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UParticipantConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticipantConditionBase_Statics::ClassParams = {
	&UParticipantConditionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UParticipantConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UParticipantConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UParticipantConditionBase()
{
	if (!Z_Registration_Info_UClass_UParticipantConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticipantConditionBase.OuterSingleton, Z_Construct_UClass_UParticipantConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UParticipantConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UParticipantConditionBase>()
{
	return UParticipantConditionBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UParticipantConditionBase);
UParticipantConditionBase::~UParticipantConditionBase() {}
// End Class UParticipantConditionBase

// Begin Class UDialogNodeConditionBase Function BlueprintDialogNodeConditionIsSucceed
struct DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms
{
	UDialogAsset* SettingDialogAsset;
	URuntimeDialogNode* LastDialogNode;
	URuntimeDialogNode* NextDialogNode;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed = FName(TEXT("BlueprintDialogNodeConditionIsSucceed"));
bool UDialogNodeConditionBase::BlueprintDialogNodeConditionIsSucceed(UDialogAsset* SettingDialogAsset, URuntimeDialogNode* LastDialogNode, URuntimeDialogNode* NextDialogNode)
{
	DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms Parms;
	Parms.SettingDialogAsset=SettingDialogAsset;
	Parms.LastDialogNode=LastDialogNode;
	Parms.NextDialogNode=NextDialogNode;
	UFunction* Func = FindFunctionChecked(NAME_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogPacketConditionBase" },
		{ "DisplayName", "\xe6\x9d\xa1\xe4\xbb\xb6\xe5\x88\xa4\xe6\x96\xad\xe6\x89\xa9\xe5\xb1\x95" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SettingDialogAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastDialogNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextDialogNode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_SettingDialogAsset = { "SettingDialogAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms, SettingDialogAsset), Z_Construct_UClass_UDialogAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_LastDialogNode = { "LastDialogNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms, LastDialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_NextDialogNode = { "NextDialogNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms, NextDialogNode), Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms), &Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_SettingDialogAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_LastDialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_NextDialogNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogNodeConditionBase, nullptr, "BlueprintDialogNodeConditionIsSucceed", nullptr, nullptr, Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::PropPointers), sizeof(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogNodeConditionBase_eventBlueprintDialogNodeConditionIsSucceed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogNodeConditionBase Function BlueprintDialogNodeConditionIsSucceed

// Begin Class UDialogNodeConditionBase
void UDialogNodeConditionBase::StaticRegisterNativesUDialogNodeConditionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogNodeConditionBase);
UClass* Z_Construct_UClass_UDialogNodeConditionBase_NoRegister()
{
	return UDialogNodeConditionBase::StaticClass();
}
struct Z_Construct_UClass_UDialogNodeConditionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//***********************************************************\n//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "IncludePath", "DialogAsset/DialogConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/DialogConditionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogNodeConditionBase_BlueprintDialogNodeConditionIsSucceed, "BlueprintDialogNodeConditionIsSucceed" }, // 2511856818
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogNodeConditionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogNodeConditionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeConditionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogNodeConditionBase_Statics::ClassParams = {
	&UDialogNodeConditionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogNodeConditionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogNodeConditionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogNodeConditionBase()
{
	if (!Z_Registration_Info_UClass_UDialogNodeConditionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogNodeConditionBase.OuterSingleton, Z_Construct_UClass_UDialogNodeConditionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogNodeConditionBase.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UDialogNodeConditionBase>()
{
	return UDialogNodeConditionBase::StaticClass();
}
UDialogNodeConditionBase::UDialogNodeConditionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogNodeConditionBase);
UDialogNodeConditionBase::~UDialogNodeConditionBase() {}
// End Class UDialogNodeConditionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogConditionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogAssetConditionBase, UDialogAssetConditionBase::StaticClass, TEXT("UDialogAssetConditionBase"), &Z_Registration_Info_UClass_UDialogAssetConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogAssetConditionBase), 1799166573U) },
		{ Z_Construct_UClass_UParticipantConditionBase, UParticipantConditionBase::StaticClass, TEXT("UParticipantConditionBase"), &Z_Registration_Info_UClass_UParticipantConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticipantConditionBase), 3796797375U) },
		{ Z_Construct_UClass_UDialogNodeConditionBase, UDialogNodeConditionBase::StaticClass, TEXT("UDialogNodeConditionBase"), &Z_Registration_Info_UClass_UDialogNodeConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogNodeConditionBase), 2198550774U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogConditionBase_h_541412366(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogConditionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogConditionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
