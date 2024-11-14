// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/HQTaskSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDialogAsset;
class URuntimeTaskNodeInfo;
class USecondaryTaskBase;
class UTaskAsset;
class UTaskAssetObjectInfoBase;
class UTaskSystemDataObject;
enum class ETaskResultType : uint8;
#ifdef DIALOGSYSTEM_HQTaskSystem_generated_h
#error "HQTaskSystem.generated.h already included, missing '#pragma once' in HQTaskSystem.h"
#endif
#define DIALOGSYSTEM_HQTaskSystem_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_CALLBACK_WRAPPERS
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskSystemDataObject(); \
	friend struct Z_Construct_UClass_UTaskSystemDataObject_Statics; \
public: \
	DECLARE_CLASS(UTaskSystemDataObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UTaskSystemDataObject)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTaskSystemDataObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskSystemDataObject(UTaskSystemDataObject&&); \
	UTaskSystemDataObject(const UTaskSystemDataObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskSystemDataObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskSystemDataObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTaskSystemDataObject) \
	NO_API virtual ~UTaskSystemDataObject();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_15_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_CALLBACK_WRAPPERS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UTaskSystemDataObject>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_100_DELEGATE \
static void FOnTaskAdd_DelegateWrapper(const FMulticastScriptDelegate& OnTaskAdd, FName TaskId);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_101_DELEGATE \
static void FOnTaskRemove_DelegateWrapper(const FMulticastScriptDelegate& OnTaskRemove, FName TaskId);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_102_DELEGATE \
static void FOnTaskUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnTaskUpdate, FName TaskId);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateTask); \
	DECLARE_FUNCTION(execGetTaskDialogAssetFromId); \
	DECLARE_FUNCTION(execGetTaskAssetAndInfoFromId); \
	DECLARE_FUNCTION(execGetTaskCurrentUIShowInfo); \
	DECLARE_FUNCTION(execGetTaskCurrentExecuteNode); \
	DECLARE_FUNCTION(execRemoveTaskTag); \
	DECLARE_FUNCTION(execAddTaskTag); \
	DECLARE_FUNCTION(execRemoveTask); \
	DECLARE_FUNCTION(execAddTask); \
	DECLARE_FUNCTION(execTaskInitialize);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHQTaskSystem(); \
	friend struct Z_Construct_UClass_UHQTaskSystem_Statics; \
public: \
	DECLARE_CLASS(UHQTaskSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UHQTaskSystem)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHQTaskSystem(UHQTaskSystem&&); \
	UHQTaskSystem(const UHQTaskSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHQTaskSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHQTaskSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHQTaskSystem) \
	NO_API virtual ~UHQTaskSystem();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_36_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UHQTaskSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_HQTaskSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
