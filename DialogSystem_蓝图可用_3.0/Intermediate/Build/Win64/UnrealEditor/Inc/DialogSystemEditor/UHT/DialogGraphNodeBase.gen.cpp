// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogSystemEditor/Public/DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogGraphNodeBase() {}

// Begin Cross Module References
DIALOGSYSTEM_API UClass* Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNodeBase();
DIALOGSYSTEMEDITOR_API UClass* Z_Construct_UClass_UDialogGraphNodeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DialogSystemEditor();
// End Cross Module References

// Begin Class UDialogGraphNodeBase
void UDialogGraphNodeBase::StaticRegisterNativesUDialogGraphNodeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogGraphNodeBase);
UClass* Z_Construct_UClass_UDialogGraphNodeBase_NoRegister()
{
	return UDialogGraphNodeBase::StaticClass();
}
struct Z_Construct_UClass_UDialogGraphNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n//\xe5\xb0\x8f\xe9\x83\xa8\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\nclass SDialogGraphNode : public SGraphNode\n{\n\x09public:\n\x09virtual TSharedRef<SWidget> CreateTitleRightWidget() override\n\x09{\n\x09\x09return SNullWidget::NullWidget;\n\x09}\n};\n*/" },
#endif
		{ "IncludePath", "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h" },
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogGraphNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "//\xe5\xb0\x8f\xe9\x83\xa8\xe4\xbb\xb6\xe7\xb1\xbb\xe5\x9e\x8b\nclass SDialogGraphNode : public SGraphNode\n{\n       public:\n       virtual TSharedRef<SWidget> CreateTitleRightWidget() override\n       {\n               return SNullWidget::NullWidget;\n       }\n};" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeNodeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogSystemApp/DialogGraph/DialogGraphNodeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeNodeInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogGraphNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogGraphNodeBase_Statics::NewProp_RuntimeNodeInfo = { "RuntimeNodeInfo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogGraphNodeBase, RuntimeNodeInfo), Z_Construct_UClass_URuntimeDialogNodeInfoBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeNodeInfo_MetaData), NewProp_RuntimeNodeInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogGraphNodeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogGraphNodeBase_Statics::NewProp_RuntimeNodeInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNodeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogGraphNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogGraphNodeBase_Statics::ClassParams = {
	&UDialogGraphNodeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogGraphNodeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNodeBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogGraphNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogGraphNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogGraphNodeBase()
{
	if (!Z_Registration_Info_UClass_UDialogGraphNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogGraphNodeBase.OuterSingleton, Z_Construct_UClass_UDialogGraphNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogGraphNodeBase.OuterSingleton;
}
template<> DIALOGSYSTEMEDITOR_API UClass* StaticClass<UDialogGraphNodeBase>()
{
	return UDialogGraphNodeBase::StaticClass();
}
UDialogGraphNodeBase::UDialogGraphNodeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogGraphNodeBase);
UDialogGraphNodeBase::~UDialogGraphNodeBase() {}
// End Class UDialogGraphNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogGraphNodeBase, UDialogGraphNodeBase::StaticClass, TEXT("UDialogGraphNodeBase"), &Z_Registration_Info_UClass_UDialogGraphNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogGraphNodeBase), 2476178822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_4288340573(TEXT("/Script/DialogSystemEditor"),
	Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DialogSystemProject_Plugins_DialogSystem_Source_DialogSystemEditor_Public_DialogSystemApp_DialogGraph_DialogGraphNodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
