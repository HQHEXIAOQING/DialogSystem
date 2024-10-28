#include "DialogAssetFactory.h"

#include "ClassViewerFilter.h"
#include "ClassViewerModule.h"
#include "DialogAsset/DialogAsset.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"


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


//构造函数
UDialogAssetFactory::UDialogAssetFactory(const FObjectInitializer& ObjectInitializer):
Super(ObjectInitializer)
{
	SupportedClass = UDialogAsset::StaticClass();
}

//创建一个资产
UObject* UDialogAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	//返回创建一个我们自定义的对话资产
	if (InClass->IsChildOf(UDialogAsset::StaticClass()))
	{
		return NewObject<UDialogAsset>(InParent, GenericGraphClass, InName, Flags);
	}
	else
	{
		return NewObject<UDialogAsset>(InParent, UDialogAsset::StaticClass(), InName, Flags);
	}
}

bool UDialogAssetFactory::ConfigureProperties()
{
	//取消当前的选择
	GenericGraphClass = nullptr;

	//加载一个类型选择器
	FClassViewerModule& ClassViewerModule = FModuleManager::LoadModuleChecked<FClassViewerModule>("ClassViewer");

	//添加选项
	FClassViewerInitializationOptions Options;
	Options.Mode = EClassViewerMode::Type::ClassPicker;

	TSharedRef<FAssetClassParentFilter> Filter = MakeShareable(new FAssetClassParentFilter);
	Options.ClassFilters.Add(Filter);
	
	Filter->DisallowedClassFlags = CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists | CLASS_HideDropDown;
	Filter->AllowedChildrenOfClasses.Add(UDialogAsset::StaticClass());

	const FText TitleText = FText::FromString(TEXT("资产类型选择"));
	UClass* ChosenClass = nullptr;
	const bool bPressedOk = SClassPickerDialog::PickClass(TitleText, Options, ChosenClass, UDialogAsset::StaticClass());
	if ( bPressedOk )
	{
		GenericGraphClass = ChosenClass;
	}
	return bPressedOk;
}
