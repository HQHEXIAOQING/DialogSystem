// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEMEDITOR_DialogGraphNodeBase_generated_h
#error "DialogGraphNodeBase.generated.h already included, missing '#pragma once' in DialogGraphNodeBase.h"
#endif
#define DIALOGSYSTEMEDITOR_DialogGraphNodeBase_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogGraphNodeBase(); \
	friend struct Z_Construct_UClass_UDialogGraphNodeBase_Statics; \
public: \
	DECLARE_CLASS(UDialogGraphNodeBase, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UDialogGraphNodeBase)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogGraphNodeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogGraphNodeBase(UDialogGraphNodeBase&&); \
	UDialogGraphNodeBase(const UDialogGraphNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogGraphNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogGraphNodeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogGraphNodeBase) \
	NO_API virtual ~UDialogGraphNodeBase();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_10_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<class UDialogGraphNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
