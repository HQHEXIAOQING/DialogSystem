// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeDialogNodeInfo() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeConditionBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_UDialogNodeEffectorBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfo();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfo_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase();
DIALOGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogOutPinData();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin ScriptStruct FDialogOutPinData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogOutPinData;
class UScriptStruct* FDialogOutPinData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogOutPinData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogOutPinData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogOutPinData, (UObject*)Z_Construct_UPackage__Script_DialogSystem(), TEXT("DialogOutPinData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogOutPinData.OuterSingleton;
}
template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<FDialogOutPinData>()
{
	return FDialogOutPinData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogOutPinData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeTitle_MetaData[] = {
		{ "Category", "DialogOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeCondition_MetaData[] = {
		{ "Category", "DialogOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x89\xa7\xe8\xa1\x8c\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\xef\xbc\x88\xe5\x85\xa8\xe9\x83\xa8\xe7\xac\xa6\xe5\x90\x88\xe6\x89\x8d\xe8\x83\xbd\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe6\x89\xa7\xe8\xa1\x8c\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe6\x9d\xa1\xe4\xbb\xb6\xe7\xbb\x84\xef\xbc\x88\xe5\x85\xa8\xe9\x83\xa8\xe7\xac\xa6\xe5\x90\x88\xe6\x89\x8d\xe8\x83\xbd\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogNodeTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodeCondition_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogNodeCondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogOutPinData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeTitle = { "DialogNodeTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogOutPinData, DialogNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeTitle_MetaData), NewProp_DialogNodeTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeCondition_Inner = { "DialogNodeCondition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogNodeConditionBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeCondition = { "DialogNodeCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogOutPinData, DialogNodeCondition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeCondition_MetaData), NewProp_DialogNodeCondition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogOutPinData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeCondition_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewProp_DialogNodeCondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogOutPinData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogOutPinData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
	nullptr,
	&NewStructOps,
	"DialogOutPinData",
	Z_Construct_UScriptStruct_FDialogOutPinData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogOutPinData_Statics::PropPointers),
	sizeof(FDialogOutPinData),
	alignof(FDialogOutPinData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogOutPinData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogOutPinData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogOutPinData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogOutPinData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogOutPinData.InnerSingleton, Z_Construct_UScriptStruct_FDialogOutPinData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogOutPinData.InnerSingleton;
}
// End ScriptStruct FDialogOutPinData

// Begin Class URuntimeDialogNodeInfo
void URuntimeDialogNodeInfo::StaticRegisterNativesURuntimeDialogNodeInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogNodeInfo);
UClass* Z_Construct_UClass_URuntimeDialogNodeInfo_NoRegister()
{
	return URuntimeDialogNodeInfo::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//***********************************************************************\n//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogActorId_MetaData[] = {
		{ "Category", "RuntimeDialogNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\xaf\xb9\xe8\xb1\xa1ID" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe6\xad\xa4\xe8\x8a\x82\xe7\x82\xb9\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeTitle_MetaData[] = {
		{ "Category", "RuntimeDialogNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe6\xa0\x87\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogText_MetaData[] = {
		{ "Category", "RuntimeDialogNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeEffectorArray_MetaData[] = {
		{ "Category", "RuntimeDialogNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe8\x81\x94\xe6\x95\x88\xe6\x9e\x9c\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x85\xb3\xe8\x81\x94\xe6\x95\x88\xe6\x9e\x9c\xe7\xbb\x84" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe6\x95\x88\xe6\x9e\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogOutPinArray_MetaData[] = {
		{ "Category", "RuntimeDialogNodeInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe9\x80\x89\xe9\xa1\xb9\xe6\x95\xb0\xe6\x8d\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeColor_MetaData[] = {
		{ "Category", "DialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2\n" },
#endif
		{ "DisplayName", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xaf\x9d\xe8\x8a\x82\xe7\x82\xb9\xe9\xa2\x9c\xe8\x89\xb2" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogActorId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogNodeTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogNodeEffectorArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogNodeEffectorArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogOutPinArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogOutPinArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogNodeColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogNodeInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogActorId = { "DialogActorId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogActorId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogActorId_MetaData), NewProp_DialogActorId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeTitle = { "DialogNodeTitle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogNodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeTitle_MetaData), NewProp_DialogNodeTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogText = { "DialogText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogText_MetaData), NewProp_DialogText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeEffectorArray_Inner = { "DialogNodeEffectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDialogNodeEffectorBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeEffectorArray = { "DialogNodeEffectorArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogNodeEffectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeEffectorArray_MetaData), NewProp_DialogNodeEffectorArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogOutPinArray_Inner = { "DialogOutPinArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogOutPinData, METADATA_PARAMS(0, nullptr) }; // 2549834857
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogOutPinArray = { "DialogOutPinArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogOutPinArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogOutPinArray_MetaData), NewProp_DialogOutPinArray_MetaData) }; // 2549834857
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeColor = { "DialogNodeColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNodeInfo, DialogNodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeColor_MetaData), NewProp_DialogNodeColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogActorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeEffectorArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeEffectorArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogOutPinArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogOutPinArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::NewProp_DialogNodeColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URuntimeDialogNodeInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::ClassParams = {
	&URuntimeDialogNodeInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogNodeInfo()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogNodeInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogNodeInfo.OuterSingleton, Z_Construct_UClass_URuntimeDialogNodeInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogNodeInfo.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogNodeInfo>()
{
	return URuntimeDialogNodeInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogNodeInfo);
URuntimeDialogNodeInfo::~URuntimeDialogNodeInfo() {}
// End Class URuntimeDialogNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogOutPinData::StaticStruct, Z_Construct_UScriptStruct_FDialogOutPinData_Statics::NewStructOps, TEXT("DialogOutPinData"), &Z_Registration_Info_UScriptStruct_DialogOutPinData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogOutPinData), 2549834857U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDialogNodeInfo, URuntimeDialogNodeInfo::StaticClass, TEXT("URuntimeDialogNodeInfo"), &Z_Registration_Info_UClass_URuntimeDialogNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogNodeInfo), 4220836252U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_1692130023(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
