// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_RuntimeDialogNodeInfo_generated_h
#error "RuntimeDialogNodeInfo.generated.h already included, missing '#pragma once' in RuntimeDialogNodeInfo.h"
#endif
#define DIALOGSYSTEM_RuntimeDialogNodeInfo_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogOutPinData_Statics; \
	DIALOGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<struct FDialogOutPinData>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeDialogNodeInfo(); \
	friend struct Z_Construct_UClass_URuntimeDialogNodeInfo_Statics; \
public: \
	DECLARE_CLASS(URuntimeDialogNodeInfo, URuntimeDialogNodeInfoBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(URuntimeDialogNodeInfo)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeDialogNodeInfo(URuntimeDialogNodeInfo&&); \
	URuntimeDialogNodeInfo(const URuntimeDialogNodeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeDialogNodeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeDialogNodeInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeDialogNodeInfo) \
	NO_API virtual ~URuntimeDialogNodeInfo();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_21_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_24_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class URuntimeDialogNodeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogNodeInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
