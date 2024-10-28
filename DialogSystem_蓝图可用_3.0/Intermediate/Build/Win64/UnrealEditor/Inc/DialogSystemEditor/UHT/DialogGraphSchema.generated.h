// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogSystemApp/DialogGraph/DialogGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_DialogGraphSchema_generated_h
#error "DialogGraphSchema.generated.h already included, missing '#pragma once' in DialogGraphSchema.h"
#endif
#define DIALOGSYSTEMEDITOR_DialogGraphSchema_generated_h

#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogGraphSchema(); \
	friend struct Z_Construct_UClass_UDialogGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UDialogGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UDialogGraphSchema)


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogGraphSchema(UDialogGraphSchema&&); \
	UDialogGraphSchema(const UDialogGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogGraphSchema) \
	NO_API virtual ~UDialogGraphSchema();


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_6_PROLOG
#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_9_INCLASS_NO_PURE_DECLS \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UDialogGraphSchema>();

#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNewNodeAction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> DIALOGSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FNewNodeAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
