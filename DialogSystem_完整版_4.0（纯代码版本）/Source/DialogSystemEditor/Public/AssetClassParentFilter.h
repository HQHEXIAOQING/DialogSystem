#pragma once
#include "ClassViewerFilter.h"
#include "Kismet2/KismetEditorUtilities.h"

class FAssetClassParentFilter : public IClassViewerFilter
{
public:
	FAssetClassParentFilter():
	DisallowedClassFlags(CLASS_None),
	bDisallowBlueprintBase(false)
	{}
	//设置的所有类
	TSet< const UClass* > AllowedChildrenOfClasses;
	//不允许类的标志
	EClassFlags DisallowedClassFlags;
	//是否使用蓝图基类
	bool bDisallowBlueprintBase;
	
	//是否允许类使用。
	virtual bool IsClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const UClass* InClass, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		bool bAllowed= !InClass->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InClass) != EFilterReturn::Failed;

		if (bAllowed && bDisallowBlueprintBase)
		{
			if (FKismetEditorUtilities::CanCreateBlueprintOfClass(InClass))
			{
				return false;
			}
		}
		return bAllowed;
	}
	//是否允许卸载类。
	virtual bool IsUnloadedClassAllowed(const FClassViewerInitializationOptions& InInitOptions, const TSharedRef< const IUnloadedBlueprintData > InUnloadedClassData, TSharedRef< FClassViewerFilterFuncs > InFilterFuncs) override
	{
		if (bDisallowBlueprintBase)
		{
			return false;
		}

		return !InUnloadedClassData->HasAnyClassFlags(DisallowedClassFlags)
			&& InFilterFuncs->IfInChildOfClassesSet(AllowedChildrenOfClasses, InUnloadedClassData) != EFilterReturn::Failed;
	}
};