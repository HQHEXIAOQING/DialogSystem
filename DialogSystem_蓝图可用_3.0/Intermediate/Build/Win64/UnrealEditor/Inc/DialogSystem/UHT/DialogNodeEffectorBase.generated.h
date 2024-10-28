// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogAsset/DialogNodeEffectorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDialogAsset;
#ifdef DIALOGSYSTEM_DialogNodeEffectorBase_generated_h
#error "DialogNodeEffectorBase.generated.h already included, missing '#pragma once' in DialogNodeEffectorBase.h"
#endif
#define DIALOGSYSTEM_DialogNodeEffectorBase_generated_h

#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDialogNodeEffectorPlay);


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_CALLBACK_WRAPPERS
#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogNodeEffectorBase(); \
	friend struct Z_Construct_UClass_UDialogNodeEffectorBase_Statics; \
public: \
	DECLARE_CLASS(UDialogNodeEffectorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DialogSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogNodeEffectorBase)


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogNodeEffectorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogNodeEffectorBase(UDialogNodeEffectorBase&&); \
	UDialogNodeEffectorBase(const UDialogNodeEffectorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogNodeEffectorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogNodeEffectorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogNodeEffectorBase) \
	NO_API virtual ~UDialogNodeEffectorBase();


#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_8_PROLOG
#define FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_CALLBACK_WRAPPERS \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGSYSTEM_API UClass* StaticClass<class UDialogNodeEffectorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeEffectorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
