// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphSchema() {}

// Begin Cross Module References
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphSchema();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphSchema_NoRegister();
DIALOGSYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNewNodeAction();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphSchema
void UDialogGraphSchema::StaticRegisterNativesUDialogGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphSchema);
UClass* Z_Construct_UClass_UDialogGraphSchema_NoRegister()
{
	return UDialogGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogGraphSchema.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphSchema_Statics::ClassParams = {
	&UDialogGraphSchema::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphSchema()
{
	if (!Z_Registration_Info_UClass_UDialogGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphSchema.OuterSingleton, Z_Construct_UClass_UDialogGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphSchema.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphSchema>()
{
	return UDialogGraphSchema::StaticClass();
}
UDialogGraphSchema::UDialogGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphSchema);
UDialogGraphSchema::~UDialogGraphSchema() {}
// End Class UDialogGraphSchema

// Begin ScriptStruct FNewNodeAction
static_assert(std::is_polymorphic<FNewNodeAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNewNodeAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NewNodeAction;
class UScriptStruct* FNewNodeAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewNodeAction, (UObject*)Z_Construct_UPackage__Script_DialogSystemEditor(), TEXT("NewNodeAction"));
	}
	return Z_Registration_Info_UScriptStruct_NewNodeAction.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UScriptStruct* StaticStruct<FNewNodeAction>()
{
	return FNewNodeAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNewNodeAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogGraphSchema.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewNodeAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewNodeAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"NewNodeAction",
	nullptr,
	0,
	sizeof(FNewNodeAction),
	alignof(FNewNodeAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewNodeAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewNodeAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewNodeAction()
{
	if (!Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton, Z_Construct_UScriptStruct_FNewNodeAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NewNodeAction.InnerSingleton;
}
// End ScriptStruct FNewNodeAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNewNodeAction::StaticStruct, Z_Construct_UScriptStruct_FNewNodeAction_Statics::NewStructOps, TEXT("NewNodeAction"), &Z_Registration_Info_UScriptStruct_NewNodeAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewNodeAction), 3362306620U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphSchema, UDialogGraphSchema::StaticClass, TEXT("UDialogGraphSchema"), &Z_Registration_Info_UClass_UDialogGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphSchema), 949701162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_2749986315(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
