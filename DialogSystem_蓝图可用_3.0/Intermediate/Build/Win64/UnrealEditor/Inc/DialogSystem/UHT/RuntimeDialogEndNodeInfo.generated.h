// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_RuntimeDialogEndNodeInfo_generated_h
#error "RuntimeDialogEndNodeInfo.generated.h already included, missing '#pragma once' in RuntimeDialogEndNodeInfo.h"
#endif
#define DIALOGSYSTEM_RuntimeDialogEndNodeInfo_generated_h

#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeDialogEndNodeInfo(); \
	friend struct Z_Construct_UClass_URuntimeDialogEndNodeInfo_Statics; \
public: \
	DECLARE_CLASS(URuntimeDialogEndNodeInfo, URuntimeDialogNodeInfoBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(URuntimeDialogEndNodeInfo)


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URuntimeDialogEndNodeInfo(URuntimeDialogEndNodeInfo&&); \
	URuntimeDialogEndNodeInfo(const URuntimeDialogEndNodeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeDialogEndNodeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeDialogEndNodeInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URuntimeDialogEndNodeInfo) \
	NO_API virtual ~URuntimeDialogEndNodeInfo();


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_14_PROLOG
#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_17_INCLASS_NO_PURE_DECLS \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class URuntimeDialogEndNodeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_RuntimeDialogNodeInfos_RuntimeDialogEndNodeInfo_h


#define FOREACH_ENUM_EDIALOGENDNODETYPE(op) \
	op(EDialogEndNodeType::DialogNodeEnd) \
	op(EDialogEndNodeType::DialogNodeJump) 

enum class EDialogEndNodeType : uint8;
template<> struct TIsUEnumClass<EDialogEndNodeType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogEndNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
