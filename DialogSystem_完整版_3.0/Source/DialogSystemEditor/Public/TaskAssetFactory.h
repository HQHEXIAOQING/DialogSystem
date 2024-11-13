#pragma once
#include "CoreMinimal.h"
#include "TaskAssetFactory.generated.h"

class UTaskAsset;

UCLASS()
class DIALOGSYSTEMEDITOR_API UTaskAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UTaskAssetFactory(const FObjectInitializer& ObjectInitializer);
	//****************************************
	//重载函数

	//创建一个资产
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
	//是否可以创建新对象
	virtual bool CanCreateNew() const override{return true;}

	bool ConfigureProperties() override;


	//对话资产类型
	TSubclassOf<UTaskAsset> GenericGraphClass = nullptr;
	
};
