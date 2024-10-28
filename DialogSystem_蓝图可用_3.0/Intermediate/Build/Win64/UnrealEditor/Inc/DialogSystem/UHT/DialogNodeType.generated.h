// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogAsset/DialogNodeType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_DialogNodeType_generated_h
#error "DialogNodeType.generated.h already included, missing '#pragma once' in DialogNodeType.h"
#endif
#define DIALOGSYSTEM_DialogNodeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystem_Public_DialogAsset_DialogNodeType_h


#define FOREACH_ENUM_EDIALOGNODETYPE(op) \
	op(EDialogNodeType::UnKnown) \
	op(EDialogNodeType::DialogStartNode) \
	op(EDialogNodeType::DialogNode) \
	op(EDialogNodeType::DialogEndNode) 

enum class EDialogNodeType : uint8;
template<> struct TIsUEnumClass<EDialogNodeType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
