// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/TaskSystemApp/TaskGraph/TaskGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskGraphSchema() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphSchema();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UTaskGraphSchema_NoRegister();
DIALOGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNewTaskNodeAction();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UTaskGraphSchema
void UTaskGraphSchema::StaticRegisterNativesUTaskGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTaskGraphSchema);
UClass* Z_Construct_UClass_UTaskGraphSchema_NoRegister()
{
	return UTaskGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UTaskGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TaskSystemApp/TaskGraph/TaskGraphSchema.h" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTaskGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTaskGraphSchema_Statics::ClassParams = {
	&UTaskGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTaskGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UTaskGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTaskGraphSchema()
{
	if (!Z_Registration_Info_UClass_UTaskGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTaskGraphSchema.OuterSingleton, Z_Construct_UClass_UTaskGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTaskGraphSchema.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UTaskGraphSchema>()
{
	return UTaskGraphSchema::StaticClass();
}
UTaskGraphSchema::UTaskGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskGraphSchema);
UTaskGraphSchema::~UTaskGraphSchema() {}
// End Class UTaskGraphSchema

// Begin ScriptStruct FNewTaskNodeAction
static_assert(std::is_polymorphic<FNewTaskNodeAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNewTaskNodeAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewTaskNodeAction;
class UScriptStruct* FNewTaskNodeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewTaskNodeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewTaskNodeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewTaskNodeAction, (UObject*)Z_Construct_UPackage__Script_DialogSystemEditor(), TEXT("NewTaskNodeAction"));
	}
	return Z_Registration_Info_UScriptStruct_NewTaskNodeAction.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FNewTaskNodeAction>()
{
	return FNewTaskNodeAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TaskSystemApp/TaskGraph/TaskGraphSchema.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewTaskNodeAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"NewTaskNodeAction",
	nullptr,
	0,
	sizeof(FNewTaskNodeAction),
	alignof(FNewTaskNodeAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewTaskNodeAction()
{
	if (!Z_Registration_Info_UScriptStruct_NewTaskNodeAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewTaskNodeAction.InnerSingleton, Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewTaskNodeAction.InnerSingleton;
}
// End ScriptStruct FNewTaskNodeAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNewTaskNodeAction::StaticStruct, Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics::NewStructOps, TEXT("NewTaskNodeAction"), &Z_Registration_Info_UScriptStruct_NewTaskNodeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewTaskNodeAction), 2836028817U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTaskGraphSchema, UTaskGraphSchema::StaticClass, TEXT("UTaskGraphSchema"), &Z_Registration_Info_UClass_UTaskGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTaskGraphSchema), 1256073861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_1815099411(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
