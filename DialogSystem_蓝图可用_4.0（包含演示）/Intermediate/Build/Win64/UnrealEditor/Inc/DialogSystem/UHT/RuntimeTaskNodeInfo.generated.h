// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskNodeInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_RuntimeTaskNodeInfo_generated_h
#error "RuntimeTaskNodeInfo.generated.h already included, missing '#pragma once' in RuntimeTaskNodeInfo.h"
#endif
#define DIALOGSYSTEM_RuntimeTaskNodeInfo_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskOutPinData_Statics; \
	DIALOGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<struct FTaskOutPinData>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeTaskNodeInfo(); \
	friend struct Z_Construct_UClass_URuntimeTaskNodeInfo_Statics; \
public: \
	DECLARE_CLASS(URuntimeTaskNodeInfo, URuntimeTaskNodeInfoBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(URuntimeTaskNodeInfo)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeTaskNodeInfo(URuntimeTaskNodeInfo&&); \
	URuntimeTaskNodeInfo(const URuntimeTaskNodeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeTaskNodeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeTaskNodeInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeTaskNodeInfo) \
	NO_API virtual ~URuntimeTaskNodeInfo();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_24_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_27_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class URuntimeTaskNodeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_TaskAsset_RuntimeTaskNodeInfos_RuntimeTaskNodeInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
