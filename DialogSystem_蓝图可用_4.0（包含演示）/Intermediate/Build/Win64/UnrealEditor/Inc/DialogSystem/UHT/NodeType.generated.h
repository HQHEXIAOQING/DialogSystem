// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NodeType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGSYSTEM_NodeType_generated_h
#error "NodeType.generated.h already included, missing '#pragma once' in NodeType.h"
#endif
#define DIALOGSYSTEM_NodeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TaskDialogSystem_Plugins_DialogSystem_Source_DialogSystem_Public_NodeType_h


#define FOREACH_ENUM_EDIALOGNODETYPE(op) \
	op(EDialogNodeType::UnKnown) \
	op(EDialogNodeType::DialogStartNode) \
	op(EDialogNodeType::DialogNode) \
	op(EDialogNodeType::DialogJumpNode) \
	op(EDialogNodeType::DialogEndNode) 

enum class EDialogNodeType : uint8;
template<> struct TIsUEnumClass<EDialogNodeType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<EDialogNodeType>();

#define FOREACH_ENUM_ETASKNODETYPE(op) \
	op(ETaskNodeType::UnKnown) \
	op(ETaskNodeType::TaskStartNode) \
	op(ETaskNodeType::TaskNode) \
	op(ETaskNodeType::TaskEndNode) 

enum class ETaskNodeType : uint8;
template<> struct TIsUEnumClass<ETaskNodeType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<ETaskNodeType>();

#define FOREACH_ENUM_ETASKRESULTTYPE(op) \
	op(ETaskResultType::None) \
	op(ETaskResultType::TaskSuccessful) \
	op(ETaskResultType::TaskFinish) 

enum class ETaskResultType : uint8;
template<> struct TIsUEnumClass<ETaskResultType> { enum { Value = true }; };
template<> DIALOGSYSTEM_API UEnum* StaticEnum<ETaskResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
