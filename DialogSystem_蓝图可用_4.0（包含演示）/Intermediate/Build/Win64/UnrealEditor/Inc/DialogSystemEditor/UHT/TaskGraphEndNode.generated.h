// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskSystemApp/TaskGraph/TaskNodes/TaskGraphEndNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_TaskGraphEndNode_generated_h
#error "TaskGraphEndNode.generated.h already included, missing '#pragma once' in TaskGraphEndNode.h"
#endif
#define DIALOGSYSTEMEDITOR_TaskGraphEndNode_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskGraphEndNode(); \
	friend struct Z_Construct_UClass_UTaskGraphEndNode_Statics; \
public: \
	DECLARE_CLASS(UTaskGraphEndNode, UTaskGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UTaskGraphEndNode)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskGraphEndNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskGraphEndNode(UTaskGraphEndNode&&); \
	UTaskGraphEndNode(const UTaskGraphEndNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskGraphEndNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskGraphEndNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskGraphEndNode) \
	NO_API virtual ~UTaskGraphEndNode();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_8_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_11_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UTaskGraphEndNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_TaskSystemApp_TaskGraph_TaskNodes_TaskGraphEndNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
