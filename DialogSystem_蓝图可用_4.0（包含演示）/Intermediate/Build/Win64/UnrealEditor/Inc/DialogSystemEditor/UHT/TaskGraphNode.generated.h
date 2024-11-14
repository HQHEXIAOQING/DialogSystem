// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_TaskGraphNode_generated_h
#error "TaskGraphNode.generated.h already included, missing '#pragma once' in TaskGraphNode.h"
#endif
#define DIALOGSYSTEMEDITOR_TaskGraphNode_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskGraphNode(); \
	friend struct Z_Construct_UClass_UTaskGraphNode_Statics; \
public: \
	DECLARE_CLASS(UTaskGraphNode, UTaskGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UTaskGraphNode)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskGraphNode(UTaskGraphNode&&); \
	UTaskGraphNode(const UTaskGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskGraphNode) \
	NO_API virtual ~UTaskGraphNode();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_8_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_11_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UTaskGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
