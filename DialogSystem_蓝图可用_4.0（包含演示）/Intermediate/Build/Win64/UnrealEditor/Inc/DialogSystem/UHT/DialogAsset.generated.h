// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogAsset/DialogAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class URuntimeDialogEndNodeInfo;
class URuntimeDialogNode;
class URuntimeDialogNodeInfo;
class URuntimeDialogPin;
class URuntimeDialogPin; struct FDialogOutPinData;
#ifdef DIALOGSYSTEM_DialogAsset_generated_h
#error "DialogAsset.generated.h already included, missing '#pragma once' in DialogAsset.h"
#endif
#define DIALOGSYSTEM_DialogAsset_generated_h

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParticipantCondition_Statics; \
	DIALOGSYSTEM_API static class UScriptStruct* StaticStruct();


template<> DIALOGSYSTEM_API UScriptStruct* StaticStruct<struct FParticipantCondition>();

#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDialogNodeInit); \
	DECLARE_FUNCTION(execGetOutputPinFromDialogNode); \
	DECLARE_FUNCTION(execGetDialogEndNodeFromDialogId); \
	DECLARE_FUNCTION(execGetDialogNodeFromDialogId); \
	DECLARE_FUNCTION(execGetDialogNodeFromFirst); \
	DECLARE_FUNCTION(execDialogAssetInit);


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogAsset(); \
	friend struct Z_Construct_UClass_UDialogAsset_Statics; \
public: \
	DECLARE_CLASS(UDialogAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogAsset)


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogAsset(UDialogAsset&&); \
	UDialogAsset(const UDialogAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogAsset); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogAsset) \
	NO_API virtual ~UDialogAsset();


#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_36_PROLOG
#define FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_INCLASS_NO_PURE_DECLS \
	FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UDialogAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogAsset_h


#define FOREACH_ENUM_EDIALOGTYPE(op) \
	op(EDialogType::BubbleText) \
	op(EDialogType::Conversation) 

enum class EDialogType : uint8;
template<> struct TIsUEnumClass<EDialogType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
