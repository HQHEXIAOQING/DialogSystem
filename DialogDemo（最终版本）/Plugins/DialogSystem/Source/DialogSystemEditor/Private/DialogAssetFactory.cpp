#include "DialogAssetFactory.h"
#include "DialogAsset/DialogAsset.h"

UDialogAssetFactory::UDialogAssetFactory(const FObjectInitializer& ObjectInitializer):
Super(ObjectInitializer)
{
	//设置操作类型的绑定
	SupportedClass = UDialogAsset::StaticClass();
}

UObject* UDialogAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                               UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	//生成一个类型
	return NewObject<UDialogAsset>(InParent,InName,Flags);
}
