// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_DialogGraphNode_generated_h
#error "DialogGraphNode.generated.h already included, missing '#pragma once' in DialogGraphNode.h"
#endif
#define DIALOGSYSTEMEDITOR_DialogGraphNode_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogGraphNode(); \
	friend struct Z_Construct_UClass_UDialogGraphNode_Statics; \
public: \
	DECLARE_CLASS(UDialogGraphNode, UDialogGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UDialogGraphNode)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogGraphNode(UDialogGraphNode&&); \
	UDialogGraphNode(const UDialogGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogGraphNode) \
	NO_API virtual ~UDialogGraphNode();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_7_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_10_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UDialogGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogNodes_DialogGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
