#pragma once
#include "CoreMinimal.h"
#include "DialogAssetFactory.generated.h"

//对话资产的操作工具
UCLASS()
class UDialogAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UDialogAssetFactory(const FObjectInitializer& ObjectInitializer);

	//接口实现
	//创建一个类型的资产
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	virtual bool CanCreateNew() const override{return true;}
};
