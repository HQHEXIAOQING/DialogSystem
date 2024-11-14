// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/TaskAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_TaskAsset_generated_h
#error "TaskAsset.generated.h already included, missing '#pragma once' in TaskAsset.h"
#endif
#define DIALOGSYSTEM_TaskAsset_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskDialogCondition_Statics; \
	DIALOGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<struct FTaskDialogCondition>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskAsset(); \
	friend struct Z_Construct_UClass_UTaskAsset_Statics; \
public: \
	DECLARE_CLASS(UTaskAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UTaskAsset)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskAsset(UTaskAsset&&); \
	UTaskAsset(const UTaskAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaskAsset) \
	NO_API virtual ~UTaskAsset();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_32_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_35_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UTaskAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
