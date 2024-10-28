// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/DialogAsset/RuntimeDialogGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeDialogGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogGraph();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogGraph_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNode();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNode_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogPin();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogPin_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_EDialogNodeType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeDialogPin
void URuntimeDialogPin::StaticRegisterNativesURuntimeDialogPin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogPin);
UClass* Z_Construct_UClass_URuntimeDialogPin_NoRegister()
{
	return URuntimeDialogPin::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "DialogAsset/RuntimeDialogGraph.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogPinName_MetaData[] = {
		{ "Category", "RuntimeDialogPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogPinId_MetaData[] = {
		{ "Category", "RuntimeDialogPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9aId\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9aId" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9aId" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
		{ "Category", "RuntimeDialogPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe5\x85\xb3\xe8\x81\x94\xe5\xbc\x95\xe8\x84\x9a" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "DialogOutPinData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogPinName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogPinId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogPin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_DialogPinName = { "DialogPinName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogPin, DialogPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogPinName_MetaData), NewProp_DialogPinName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_DialogPinId = { "DialogPinId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogPin, DialogPinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogPinId_MetaData), NewProp_DialogPinId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogPin, Connection), Z_Construct_UClass_URuntimeDialogPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connection_MetaData), NewProp_Connection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogPin, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_DialogPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_DialogPinId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogPin_Statics::NewProp_NodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogPin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogPin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogPin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogPin_Statics::ClassParams = {
	&URuntimeDialogPin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogPin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogPin_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogPin_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogPin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogPin()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogPin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogPin.OuterSingleton, Z_Construct_UClass_URuntimeDialogPin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogPin.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogPin>()
{
	return URuntimeDialogPin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogPin);
URuntimeDialogPin::~URuntimeDialogPin() {}
// End Class URuntimeDialogPin

// Begin Class URuntimeDialogNode
void URuntimeDialogNode::StaticRegisterNativesURuntimeDialogNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogNode);
UClass* Z_Construct_UClass_URuntimeDialogNode_NoRegister()
{
	return URuntimeDialogNode::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "DialogAsset/RuntimeDialogGraph.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodeType_MetaData[] = {
		{ "Category", "RuntimeDialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputDialogPin_MetaData[] = {
		{ "Category", "RuntimeDialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputDialogPinArray_MetaData[] = {
		{ "Category", "RuntimeDialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogNodePosition_MetaData[] = {
		{ "Category", "RuntimeDialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeDialogNodeInfoBase_MetaData[] = {
		{ "Category", "RuntimeDialogNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogNodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogNodeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputDialogPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputDialogPinArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputDialogPinArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogNodePosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeDialogNodeInfoBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodeType = { "DialogNodeType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNode, DialogNodeType), Z_Construct_UEnum_DialogSystem_EDialogNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodeType_MetaData), NewProp_DialogNodeType_MetaData) }; // 1377183849
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_InputDialogPin = { "InputDialogPin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNode, InputDialogPin), Z_Construct_UClass_URuntimeDialogPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputDialogPin_MetaData), NewProp_InputDialogPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_OutputDialogPinArray_Inner = { "OutputDialogPinArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeDialogPin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_OutputDialogPinArray = { "OutputDialogPinArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNode, OutputDialogPinArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputDialogPinArray_MetaData), NewProp_OutputDialogPinArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodePosition = { "DialogNodePosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNode, DialogNodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogNodePosition_MetaData), NewProp_DialogNodePosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_RuntimeDialogNodeInfoBase = { "RuntimeDialogNodeInfoBase", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogNode, RuntimeDialogNodeInfoBase), Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeDialogNodeInfoBase_MetaData), NewProp_RuntimeDialogNodeInfoBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_InputDialogPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_OutputDialogPinArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_OutputDialogPinArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_DialogNodePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogNode_Statics::NewProp_RuntimeDialogNodeInfoBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogNode_Statics::ClassParams = {
	&URuntimeDialogNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogNode_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogNode()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogNode.OuterSingleton, Z_Construct_UClass_URuntimeDialogNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogNode.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogNode>()
{
	return URuntimeDialogNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogNode);
URuntimeDialogNode::~URuntimeDialogNode() {}
// End Class URuntimeDialogNode

// Begin Class URuntimeDialogGraph
void URuntimeDialogGraph::StaticRegisterNativesURuntimeDialogGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeDialogGraph);
UClass* Z_Construct_UClass_URuntimeDialogGraph_NoRegister()
{
	return URuntimeDialogGraph::StaticClass();
}
struct Z_Construct_UClass_URuntimeDialogGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xbe\xe8\xa1\xa8\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "DialogAsset/RuntimeDialogGraph.h" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xbe\xe8\xa1\xa8\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_NodeIdToNode_MetaData[] = {
		{ "Category", "RuntimeDialogGraph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Id\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9Id\xe5\xaf\xb9\xe5\xba\x94\xe8\x8a\x82\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/DialogAsset/RuntimeDialogGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Id\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Map_NodeIdToNode_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Map_NodeIdToNode_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Map_NodeIdToNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeDialogGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode_ValueProp = { "Map_NodeIdToNode", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URuntimeDialogNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode_Key_KeyProp = { "Map_NodeIdToNode_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode = { "Map_NodeIdToNode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeDialogGraph, Map_NodeIdToNode), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_NodeIdToNode_MetaData), NewProp_Map_NodeIdToNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeDialogGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeDialogGraph_Statics::NewProp_Map_NodeIdToNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeDialogGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeDialogGraph_Statics::ClassParams = {
	&URuntimeDialogGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeDialogGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeDialogGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeDialogGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeDialogGraph()
{
	if (!Z_Registration_Info_UClass_URuntimeDialogGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeDialogGraph.OuterSingleton, Z_Construct_UClass_URuntimeDialogGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeDialogGraph.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeDialogGraph>()
{
	return URuntimeDialogGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeDialogGraph);
URuntimeDialogGraph::~URuntimeDialogGraph() {}
// End Class URuntimeDialogGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeDialogPin, URuntimeDialogPin::StaticClass, TEXT("URuntimeDialogPin"), &Z_Registration_Info_UClass_URuntimeDialogPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogPin), 4039157528U) },
		{ Z_Construct_UClass_URuntimeDialogNode, URuntimeDialogNode::StaticClass, TEXT("URuntimeDialogNode"), &Z_Registration_Info_UClass_URuntimeDialogNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogNode), 997102745U) },
		{ Z_Construct_UClass_URuntimeDialogGraph, URuntimeDialogGraph::StaticClass, TEXT("URuntimeDialogGraph"), &Z_Registration_Info_UClass_URuntimeDialogGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeDialogGraph), 1462957006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogGraph_h_3289376291(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
