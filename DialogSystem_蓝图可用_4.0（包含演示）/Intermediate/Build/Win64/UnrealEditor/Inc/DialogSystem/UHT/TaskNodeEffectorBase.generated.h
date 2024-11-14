// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/TaskNodeEffectorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTaskAsset;
#ifdef DIALOGSYSTEM_TaskNodeEffectorBase_generated_h
#error "TaskNodeEffectorBase.generated.h already included, missing '#pragma once' in TaskNodeEffectorBase.h"
#endif
#define DIALOGSYSTEM_TaskNodeEffectorBase_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTaskEffectorPlay);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_CALLBACK_WRAPPERS
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskEffectorBase(); \
	friend struct Z_Construct_UClass_UTaskEffectorBase_Statics; \
public: \
	DECLARE_CLASS(UTaskEffectorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UTaskEffectorBase)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskEffectorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskEffectorBase(UTaskEffectorBase&&); \
	UTaskEffectorBase(const UTaskEffectorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskEffectorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskEffectorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskEffectorBase) \
	NO_API virtual ~UTaskEffectorBase();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_8_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_CALLBACK_WRAPPERS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UTaskEffectorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskNodeEffectorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
