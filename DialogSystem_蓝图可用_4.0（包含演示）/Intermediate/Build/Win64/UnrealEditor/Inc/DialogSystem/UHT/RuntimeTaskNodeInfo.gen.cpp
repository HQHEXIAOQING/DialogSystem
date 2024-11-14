// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTaskNodeInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_USecondaryTaskBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UTaskPinUseConditionBase_NoRegister();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTaskOutPinData();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin ScriptStruct FTaskOutPinData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TaskOutPinData;
class UScriptStruct* FTaskOutPinData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TaskOutPinData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TaskOutPinData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskOutPinData, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("TaskOutPinData"));
	}
	return Z_Registration_Info_UScriptStruct_TaskOutPinData.OuterSingleton;
}
template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<FTaskOutPinData>()
{
	return FTaskOutPinData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTaskOutPinData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeTitle_MetaData[] = {
		{ "Category", "TaskOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinUseCondition_MetaData[] = {
		{ "Category", "TaskOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9d\xa1\xe4\xbb\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskNodeTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PinUseCondition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinUseCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskOutPinData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_TaskNodeTitle = { "TaskNodeTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskOutPinData, TaskNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeTitle_MetaData), NewProp_TaskNodeTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_PinUseCondition_Inner = { "PinUseCondition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTaskPinUseConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_PinUseCondition = { "PinUseCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTaskOutPinData, PinUseCondition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinUseCondition_MetaData), NewProp_PinUseCondition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskOutPinData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_TaskNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_PinUseCondition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewProp_PinUseCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskOutPinData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskOutPinData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	&NewStructOps,
	"TaskOutPinData",
	Z_Construct_UScriptStruct_FTaskOutPinData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskOutPinData_Statics::PropPointers),
	sizeof(FTaskOutPinData),
	alignof(FTaskOutPinData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskOutPinData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTaskOutPinData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTaskOutPinData()
{
	if (!Z_Registration_Info_UScriptStruct_TaskOutPinData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TaskOutPinData.InnerSingleton, Z_Construct_UScriptStruct_FTaskOutPinData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TaskOutPinData.InnerSingleton;
}
// End ScriptStruct FTaskOutPinData

// Begin Class URuntimeTaskNodeInfo
void URuntimeTaskNodeInfo::StaticRegisterNativesURuntimeTaskNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskNodeInfo);
UClass* Z_Construct_UClass_URuntimeTaskNodeInfo_NoRegister()
{
	return URuntimeTaskNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//***********************************************************************\n//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeTitle_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UMGText_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UI\xe6\x96\x87\xe6\x9c\xac\n" },
#endif
		{ "DisplayName", "UI\xe6\x96\x87\xe6\x9c\xac" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xe6\x96\x87\xe6\x9c\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskOutPinArray_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_IdToSecondaryTaskArray_MetaData[] = {
		{ "Category", "RuntimeTaskNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe9\x9b\x86\n" },
#endif
		{ "DisplayName", "\xe5\x88\x86\xe4\xbb\xbb\xe5\x8a\xa1Id\xe5\x88\xb0\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe9\x9b\x86" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xac\xa1\xe8\xa6\x81\xe4\xbb\xbb\xe5\x8a\xa1\xe8\x8a\x82\xe7\x82\xb9\xe9\x9b\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeColor_MetaData[] = {
		{ "Category", "TaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_TaskNodeTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_UMGText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskOutPinArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskOutPinArray;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_IdToSecondaryTaskArray_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_IdToSecondaryTaskArray_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_IdToSecondaryTaskArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskNodeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskNodeTitle = { "TaskNodeTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfo, TaskNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeTitle_MetaData), NewProp_TaskNodeTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_UMGText = { "UMGText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfo, UMGText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UMGText_MetaData), NewProp_UMGText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskOutPinArray_Inner = { "TaskOutPinArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTaskOutPinData, METADATA_PARAMS(0, nullptr) }; // 404267444
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskOutPinArray = { "TaskOutPinArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfo, TaskOutPinArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskOutPinArray_MetaData), NewProp_TaskOutPinArray_MetaData) }; // 404267444
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray_ValueProp = { "Map_IdToSecondaryTaskArray", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USecondaryTaskBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray_Key_KeyProp = { "Map_IdToSecondaryTaskArray_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray = { "Map_IdToSecondaryTaskArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfo, Map_IdToSecondaryTaskArray), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_IdToSecondaryTaskArray_MetaData), NewProp_Map_IdToSecondaryTaskArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskNodeColor = { "TaskNodeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNodeInfo, TaskNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeColor_MetaData), NewProp_TaskNodeColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_UMGText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskOutPinArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskOutPinArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_Map_IdToSecondaryTaskArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::NewProp_TaskNodeColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeTaskNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::ClassParams = {
	&URuntimeTaskNodeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeTaskNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskNodeInfo>()
{
	return URuntimeTaskNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskNodeInfo);
URuntimeTaskNodeInfo::~URuntimeTaskNodeInfo() {}
// End Class URuntimeTaskNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTaskOutPinData::StaticStruct, Z_Construct_UScriptStruct_FTaskOutPinData_Statics::NewStructOps, TEXT("TaskOutPinData"), &Z_Registration_Info_UScriptStruct_TaskOutPinData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTaskOutPinData), 404267444U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTaskNodeInfo, URuntimeTaskNodeInfo::StaticClass, TEXT("URuntimeTaskNodeInfo"), &Z_Registration_Info_UClass_URuntimeTaskNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskNodeInfo), 52408633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_2678885492(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
