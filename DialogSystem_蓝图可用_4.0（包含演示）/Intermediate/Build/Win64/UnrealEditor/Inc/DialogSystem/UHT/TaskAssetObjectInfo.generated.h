// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/TaskAssetObjectInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class USystemValueType;
class UObject;
class URuntimeTaskEndNodeInfo;
class URuntimeTaskNodeInfo;
enum class ETaskResultType : uint8;
#ifdef DIALOGSYSTEM_TaskAssetObjectInfo_generated_h
#error "TaskAssetObjectInfo.generated.h already included, missing '#pragma once' in TaskAssetObjectInfo.h"
#endif
#define DIALOGSYSTEM_TaskAssetObjectInfo_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTaskEnd); \
	DECLARE_FUNCTION(execTaskSecondaryChanged); \
	DECLARE_FUNCTION(execInitTaskAssetObjectInfo); \
	DECLARE_FUNCTION(execSetVectorFromNameId); \
	DECLARE_FUNCTION(execGetVectorFromNameId); \
	DECLARE_FUNCTION(execSetObjectFromNameId); \
	DECLARE_FUNCTION(execGetObjectFromNameId); \
	DECLARE_FUNCTION(execSetBoolFromNameId); \
	DECLARE_FUNCTION(execGetBoolFromNameId);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_CALLBACK_WRAPPERS
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTaskAssetObjectInfoBase(); \
	friend struct Z_Construct_UClass_UTaskAssetObjectInfoBase_Statics; \
public: \
	DECLARE_CLASS(UTaskAssetObjectInfoBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UTaskAssetObjectInfoBase)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTaskAssetObjectInfoBase(UTaskAssetObjectInfoBase&&); \
	UTaskAssetObjectInfoBase(const UTaskAssetObjectInfoBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTaskAssetObjectInfoBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTaskAssetObjectInfoBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTaskAssetObjectInfoBase) \
	NO_API virtual ~UTaskAssetObjectInfoBase();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_11_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_CALLBACK_WRAPPERS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UTaskAssetObjectInfoBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_TaskAssetObjectInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
