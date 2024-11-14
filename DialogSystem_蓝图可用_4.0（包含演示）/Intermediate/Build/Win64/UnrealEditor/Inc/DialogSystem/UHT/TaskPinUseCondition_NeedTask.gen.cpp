// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/TaskConditions/TaskPinUseCondition_NeedTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskPinUseCondition_NeedTask() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseCondition_NeedTask();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseCondition_NeedTask_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseConditionBase();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskResultType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class UTaskPinUseCondition_NeedTask
void UTaskPinUseCondition_NeedTask::StaticRegisterNativesUTaskPinUseCondition_NeedTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskPinUseCondition_NeedTask);
UClass* Z_Construct_UClass_UTaskPinUseCondition_NeedTask_NoRegister()
{
	return UTaskPinUseCondition_NeedTask::StaticClass();
}
struct Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe5\xad\x90\xe4\xbb\xbb\xe5\x8a\xa1" },
		{ "IncludePath", "TaskAsset/TaskConditions/TaskPinUseCondition_NeedTask.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditions/TaskPinUseCondition_NeedTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_TaskIdToState_MetaData[] = {
		{ "Category", "TaskAsset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82\n" },
#endif
		{ "DisplayName", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/TaskAsset/TaskConditions/TaskPinUseCondition_NeedTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9c\x80\xe8\xa6\x81\xe5\xae\x8c\xe6\x88\x90\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xe4\xbb\xbb\xe5\x8a\xa1\xe5\xaf\xb9\xe5\xba\x94\xe4\xbb\xbb\xe5\x8a\xa1\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Map_TaskIdToState_ValueProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Map_TaskIdToState_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_TaskIdToState_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_TaskIdToState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskPinUseCondition_NeedTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_ValueProp = { "Map_TaskIdToState", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_DialogSystem_ETaskResultType, METADATA_PARAMS(0, nullptr) }; // 2271008850
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_Key_KeyProp = { "Map_TaskIdToState_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState = { "Map_TaskIdToState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTaskPinUseCondition_NeedTask, Map_TaskIdToState), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_TaskIdToState_MetaData), NewProp_Map_TaskIdToState_MetaData) }; // 2271008850
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_ValueProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::NewProp_Map_TaskIdToState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTaskPinUseConditionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::ClassParams = {
	&UTaskPinUseCondition_NeedTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskPinUseCondition_NeedTask()
{
	if (!Z_Registration_Info_UClass_UTaskPinUseCondition_NeedTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskPinUseCondition_NeedTask.OuterSingleton, Z_Construct_UClass_UTaskPinUseCondition_NeedTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskPinUseCondition_NeedTask.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<UTaskPinUseCondition_NeedTask>()
{
	return UTaskPinUseCondition_NeedTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskPinUseCondition_NeedTask);
UTaskPinUseCondition_NeedTask::~UTaskPinUseCondition_NeedTask() {}
// End Class UTaskPinUseCondition_NeedTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_TaskPinUseCondition_NeedTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskPinUseCondition_NeedTask, UTaskPinUseCondition_NeedTask::StaticClass, TEXT("UTaskPinUseCondition_NeedTask"), &Z_Registration_Info_UClass_UTaskPinUseCondition_NeedTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskPinUseCondition_NeedTask), 2017452730U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_TaskPinUseCondition_NeedTask_h_3797197059(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_TaskPinUseCondition_NeedTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskConditions_TaskPinUseCondition_NeedTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
