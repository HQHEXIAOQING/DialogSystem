#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeType.h"
#include "UObject/NameTypes.h"
#include "DialogRuntimeGraph.generated.h"


//TODO:这里是扩张运行时储存的节点数据，以便在打开编辑器时获取，以及保存编辑器资产时储存对应数据。可以在之后扩展。
class UDialogNodeInfoBase;
//运行时引脚数据
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimePin : public UObject
{
	GENERATED_BODY()
public:
	//属性设置

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimePin")
	FName PinName;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimePin")
	FGuid PinID;
	//关联的Pin对象。
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimePin")
	UDialogRuntimePin* Connection = nullptr;
};

//运行时节点数据
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimeNode : public UObject
{
	GENERATED_BODY()
public:
	//属性设置

	//节点类型
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeNode")
	EDialogNodeType NodeType = EDialogNodeType::DialogNode;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeNode")
	UDialogRuntimePin* InputPin;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeNode")
	TArray<UDialogRuntimePin*> OutputPins;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeNode")
	FVector2D Position;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeNode")
	UDialogNodeInfoBase* NodeInfo = nullptr;
	
};

//运行时图表数据。
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimeGraph : public UObject
{
	GENERATED_BODY()
public:
	//属性设置
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="DialogRuntimeGraph")
	TArray<UDialogRuntimeNode*> Nodes;
	
};





