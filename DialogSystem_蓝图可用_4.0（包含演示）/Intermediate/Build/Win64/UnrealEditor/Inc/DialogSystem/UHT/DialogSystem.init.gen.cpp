// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogSystem_init() {}
	DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature();
	DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature();
	DIALOGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DialogSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DialogSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_DialogSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskAdd__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskRemove__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UHQTaskSystem_OnTaskUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DialogSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x6EAA6E99,
				0xFF7CD48F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DialogSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DialogSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DialogSystem(Z_Construct_UPackage__Script_DialogSystem, TEXT("/Script/DialogSystem"), Z_Registration_Info_UPackage__Script_DialogSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6EAA6E99, 0xFF7CD48F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
