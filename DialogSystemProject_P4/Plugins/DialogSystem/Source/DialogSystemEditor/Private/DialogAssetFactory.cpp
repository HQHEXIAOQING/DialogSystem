#include "DialogAssetFactory.h"
#include "DialogAsset/DialogAsset.h"

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
	return NewObject<UDialogAsset>(InParent,InName,Flags);
}
