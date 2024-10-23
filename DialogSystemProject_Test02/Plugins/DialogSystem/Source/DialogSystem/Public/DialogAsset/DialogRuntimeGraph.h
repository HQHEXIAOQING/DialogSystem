#pragma once
#include "CoreMinimal.h"
#include "DialogNodeType.h"
#include "UObject/Object.h"
#include "DialogRuntimeGraph.generated.h"

class UDialogNodeInfoBase;
enum class EDialogNodeType : uint8;
//引脚数据保存
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimePin:public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="引脚名称",Category="DialogRuntimePin")
	FName PinName;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="引脚ID",Category="DialogRuntimePin")
	FGuid PinId;
	//关联的Pin对象。
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="链接到的引脚",Category="DialogRuntimePin")
	UDialogRuntimePin* Connection = nullptr;
	//获取此引脚下目标对话节点
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="目标对话节点",Category="OutPinData")
	FName DialogNameId = "None";
};

//节点数据保存
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimeNode:public UObject
{
	GENERATED_BODY()
public:
	//节点ID
	//节点类型
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="节点类型",Category="DialogRuntimeNode")
	EDialogNodeType NodeType = EDialogNodeType::DialogNode;
	//输入引脚
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="输入引脚",Category="DialogRuntimeNode")
	UDialogRuntimePin* InputPin;
	//输出引脚组
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="输出引脚组",Category="DialogRuntimeNode")
	TArray<UDialogRuntimePin*> OutputPins;
	//节点位置
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="节点位置",Category="DialogRuntimeNode")
	FVector2D Position;
	//节点信息
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="节点信息",Category="DialogRuntimeNode")
	UDialogNodeInfoBase* NodeInfo = nullptr;
};

//图表数据保存
UCLASS()
class DIALOGSYSTEM_API UDialogRuntimeGraph:public UObject
{
	GENERATED_BODY()
public:
	//节点ID对应节点
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,DisplayName="节点ID对应节点",Category="DialogRuntimeNode")
	TMap<FName,UDialogRuntimeNode*> Map_DialogIndexToNode;
};
