// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystem/Public/TaskAsset/RuntimeTaskGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeTaskGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskGraph();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskGraph_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNode();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNode_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskPin();
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeTaskPin_NoRegister();
DIALOGSYSTEM_API UEnum* Z_Construct_UEnum_DialogSystem_ETaskNodeType();
UPackage* Z_Construct_UPackage__Script_DialogSystem();
// End Cross Module References

// Begin Class URuntimeTaskPin
void URuntimeTaskPin::StaticRegisterNativesURuntimeTaskPin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskPin);
UClass* Z_Construct_UClass_URuntimeTaskPin_NoRegister()
{
	return URuntimeTaskPin::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskPin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "TaskAsset/RuntimeTaskGraph.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskPinName_MetaData[] = {
		{ "Category", "RuntimeTaskPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskPinId_MetaData[] = {
		{ "Category", "RuntimeTaskPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9aId\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9aId" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9aId" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[] = {
		{ "Category", "RuntimeTaskPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe5\x85\xb3\xe8\x81\x94\xe5\xbc\x95\xe8\x84\x9a" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe8\x81\x94\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x88\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe9\x93\xbe\xe6\x8e\xa5\xe7\x9a\x84\xe5\xbc\x95\xe8\x84\x9a\xe5\xaf\xb9\xe8\xb1\xa1\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "RuntimeTaskPin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id\n" },
#endif
		{ "DisplayName", "\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x95\xe8\x84\x9a\xe6\x89\x80\xe5\x9c\xa8\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9Id" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TaskPinName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskPinId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Connection;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskPin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_TaskPinName = { "TaskPinName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskPin, TaskPinName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskPinName_MetaData), NewProp_TaskPinName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_TaskPinId = { "TaskPinId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskPin, TaskPinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskPinId_MetaData), NewProp_TaskPinId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskPin, Connection), Z_Construct_UClass_URuntimeTaskPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connection_MetaData), NewProp_Connection_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskPin, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskPin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_TaskPinName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_TaskPinId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_Connection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskPin_Statics::NewProp_NodeId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskPin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskPin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskPin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskPin_Statics::ClassParams = {
	&URuntimeTaskPin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskPin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskPin_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskPin_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskPin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskPin()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskPin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskPin.OuterSingleton, Z_Construct_UClass_URuntimeTaskPin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskPin.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskPin>()
{
	return URuntimeTaskPin::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskPin);
URuntimeTaskPin::~URuntimeTaskPin() {}
// End Class URuntimeTaskPin

// Begin Class URuntimeTaskNode
void URuntimeTaskNode::StaticRegisterNativesURuntimeTaskNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskNode);
UClass* Z_Construct_UClass_URuntimeTaskNode_NoRegister()
{
	return URuntimeTaskNode::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "TaskAsset/RuntimeTaskGraph.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodeType_MetaData[] = {
		{ "Category", "RuntimeTaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTaskPin_MetaData[] = {
		{ "Category", "RuntimeTaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\xbc\x95\xe8\x84\x9a" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTaskPinArray_MetaData[] = {
		{ "Category", "RuntimeTaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84\n" },
#endif
		{ "DisplayName", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x87\xba\xe5\xbc\x95\xe8\x84\x9a\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskNodePosition_MetaData[] = {
		{ "Category", "RuntimeTaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeDialogNodeInfoBase_MetaData[] = {
		{ "Category", "RuntimeTaskNode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x8a\x82\xe7\x82\xb9\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TaskNodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TaskNodeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputTaskPin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTaskPinArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputTaskPinArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TaskNodePosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeDialogNodeInfoBase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeTaskNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodeType = { "TaskNodeType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNode, TaskNodeType), Z_Construct_UEnum_DialogSystem_ETaskNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodeType_MetaData), NewProp_TaskNodeType_MetaData) }; // 1014033701
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_InputTaskPin = { "InputTaskPin", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNode, InputTaskPin), Z_Construct_UClass_URuntimeTaskPin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTaskPin_MetaData), NewProp_InputTaskPin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_OutputTaskPinArray_Inner = { "OutputTaskPinArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeTaskPin_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_OutputTaskPinArray = { "OutputTaskPinArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNode, OutputTaskPinArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTaskPinArray_MetaData), NewProp_OutputTaskPinArray_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodePosition = { "TaskNodePosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNode, TaskNodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskNodePosition_MetaData), NewProp_TaskNodePosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_RuntimeDialogNodeInfoBase = { "RuntimeDialogNodeInfoBase", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskNode, RuntimeDialogNodeInfoBase), Z_Construct_UClass_URuntimeTaskNodeInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeDialogNodeInfoBase_MetaData), NewProp_RuntimeDialogNodeInfoBase_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_InputTaskPin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_OutputTaskPinArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_OutputTaskPinArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_TaskNodePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskNode_Statics::NewProp_RuntimeDialogNodeInfoBase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskNode_Statics::ClassParams = {
	&URuntimeTaskNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskNode_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskNode()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskNode.OuterSingleton, Z_Construct_UClass_URuntimeTaskNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskNode.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskNode>()
{
	return URuntimeTaskNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskNode);
URuntimeTaskNode::~URuntimeTaskNode() {}
// End Class URuntimeTaskNode

// Begin Class URuntimeTaskGraph
void URuntimeTaskGraph::StaticRegisterNativesURuntimeTaskGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeTaskGraph);
UClass* Z_Construct_UClass_URuntimeTaskGraph_NoRegister()
{
	return URuntimeTaskGraph::StaticClass();
}
struct Z_Construct_UClass_URuntimeTaskGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x9b\xbe\xe8\xa1\xa8\xe4\xbf\xa1\xe6\x81\xaf\n" },
#endif
		{ "IncludePath", "TaskAsset/RuntimeTaskGraph.h" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9b\xbe\xe8\xa1\xa8\xe4\xbf\xa1\xe6\x81\xaf" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_NodeIdToNode_MetaData[] = {
		{ "Category", "RuntimeTaskGraph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Id\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe8\x8a\x82\xe7\x82\xb9\n" },
#endif
		{ "DisplayName", "\xe8\x8a\x82\xe7\x82\xb9Id\xe5\xaf\xb9\xe5\xba\x94\xe8\x8a\x82\xe7\x82\xb9" },
		{ "ModuleRelativePath", "Public/TaskAsset/RuntimeTaskGraph.h" },
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
		TCppClassTypeTraits<URuntimeTaskGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode_ValueProp = { "Map_NodeIdToNode", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_URuntimeTaskNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode_Key_KeyProp = { "Map_NodeIdToNode_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode = { "Map_NodeIdToNode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URuntimeTaskGraph, Map_NodeIdToNode), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_NodeIdToNode_MetaData), NewProp_Map_NodeIdToNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeTaskGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeTaskGraph_Statics::NewProp_Map_NodeIdToNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URuntimeTaskGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeTaskGraph_Statics::ClassParams = {
	&URuntimeTaskGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URuntimeTaskGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeTaskGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_URuntimeTaskGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URuntimeTaskGraph()
{
	if (!Z_Registration_Info_UClass_URuntimeTaskGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeTaskGraph.OuterSingleton, Z_Construct_UClass_URuntimeTaskGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URuntimeTaskGraph.OuterSingleton;
}
template<> DIALOGSYSTEM_API UClass* StaticClass<URuntimeTaskGraph>()
{
	return URuntimeTaskGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeTaskGraph);
URuntimeTaskGraph::~URuntimeTaskGraph() {}
// End Class URuntimeTaskGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeTaskPin, URuntimeTaskPin::StaticClass, TEXT("URuntimeTaskPin"), &Z_Registration_Info_UClass_URuntimeTaskPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskPin), 1481589152U) },
		{ Z_Construct_UClass_URuntimeTaskNode, URuntimeTaskNode::StaticClass, TEXT("URuntimeTaskNode"), &Z_Registration_Info_UClass_URuntimeTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskNode), 541099080U) },
		{ Z_Construct_UClass_URuntimeTaskGraph, URuntimeTaskGraph::StaticClass, TEXT("URuntimeTaskGraph"), &Z_Registration_Info_UClass_URuntimeTaskGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeTaskGraph), 268497740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskGraph_h_1766514422(TEXT("/Script/DialogSystem"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
