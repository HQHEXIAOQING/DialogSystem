// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSystemApp/TaskGraph/TaskGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_TaskGraphSchema_generated_h
#error "TaskGraphSchema.generated.h already included, missing '#pragma once' in TaskGraphSchema.h"
#endif
#define DIALOGSYSTEMEDITOR_TaskGraphSchema_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskGraphSchema(); \
	friend struct Z_Construct_UClass_UTaskGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UTaskGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UTaskGraphSchema)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskGraphSchema(UTaskGraphSchema&&); \
	UTaskGraphSchema(const UTaskGraphSchema&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskGraphSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskGraphSchema) \
	NO_API virtual ~UTaskGraphSchema();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_6_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_9_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UTaskGraphSchema>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNewTaskNodeAction_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


template<> DIALOGSYSTEMEDITOR_API UScriptStruct* StaticStruct<struct FNewTaskNodeAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
