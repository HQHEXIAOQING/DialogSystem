// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/SecondaryTaskBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_SecondaryTaskBase_generated_h
#error "SecondaryTaskBase.generated.h already included, missing '#pragma once' in SecondaryTaskBase.h"
#endif
#define DIALOGSYSTEM_SecondaryTaskBase_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSecondaryTaskAchievedData_Statics; \
	DIALOGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<struct FSecondaryTaskAchievedData>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecondaryTaskBase(); \
	friend struct Z_Construct_UClass_USecondaryTaskBase_Statics; \
public: \
	DECLARE_CLASS(USecondaryTaskBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(USecondaryTaskBase)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USecondaryTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USecondaryTaskBase(USecondaryTaskBase&&); \
	USecondaryTaskBase(const USecondaryTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecondaryTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecondaryTaskBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USecondaryTaskBase) \
	NO_API virtual ~USecondaryTaskBase();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_25_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_28_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class USecondaryTaskBase>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskSecondaryTask(); \
	friend struct Z_Construct_UClass_UTaskSecondaryTask_Statics; \
public: \
	DECLARE_CLASS(UTaskSecondaryTask, USecondaryTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UTaskSecondaryTask)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskSecondaryTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskSecondaryTask(UTaskSecondaryTask&&); \
	UTaskSecondaryTask(const UTaskSecondaryTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskSecondaryTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskSecondaryTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskSecondaryTask) \
	NO_API virtual ~UTaskSecondaryTask();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_61_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_64_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UTaskSecondaryTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_SecondaryTaskBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
