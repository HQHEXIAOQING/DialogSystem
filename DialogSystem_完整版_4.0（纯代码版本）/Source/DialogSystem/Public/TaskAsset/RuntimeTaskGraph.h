#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NodeType.h"
#include "RuntimeTaskGraph.generated.h"

class URuntimeTaskNodeInfoBase;
//引脚信息
UCLASS(BlueprintType)
class DIALOGSYSTEM_API URuntimeTaskPin: public UObject
{
	GENERATED_BODY()
public:
	//引脚名称
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="引脚名称",Category="RuntimeTaskPin")
	FName TaskPinName;
	//引脚Id
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="引脚Id",Category="RuntimeTaskPin")
	FGuid TaskPinId;
	//关联的引脚（输出引脚链接的引脚对象）
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="关联引脚",Category="RuntimeTaskPin") 
	URuntimeTaskPin* Connection = nullptr;
	
	//引脚所在的节点Id
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="引脚所在的节点Id",Category="RuntimeTaskPin")
	FName NodeId = "None";
	//构造函数中需要传入一个所在对象的Id
	URuntimeTaskPin(){}
};

//节点信息
UCLASS(BlueprintType)
class DIALOGSYSTEM_API URuntimeTaskNode: public UObject
{
	GENERATED_BODY()
public:
	//节点类型
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点类型",Category="RuntimeTaskNode")
	ETaskNodeType TaskNodeType = ETaskNodeType::UnKnown;
	//输入引脚
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="输入引脚",Category="RuntimeTaskNode")
	URuntimeTaskPin* InputTaskPin = nullptr;
	//输出引脚组
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="输出引脚组",Category="RuntimeTaskNode")
	TArray<URuntimeTaskPin*> OutputTaskPinArray;
	//节点位置
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点位置",Category="RuntimeTaskNode")
	FVector2D TaskNodePosition;
	//节点信息
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点信息",Category="RuntimeTaskNode")
	URuntimeTaskNodeInfoBase* RuntimeDialogNodeInfoBase = nullptr;

	URuntimeTaskNode(): TaskNodePosition()
	{
	}
};

//图表信息
UCLASS(BlueprintType)
class DIALOGSYSTEM_API URuntimeTaskGraph: public UObject
{
	GENERATED_BODY()
public:
	//Id对应的节点
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,DisplayName="节点Id对应节点",Category="RuntimeTaskGraph")
	TMap<FName,URuntimeTaskNode*> Map_NodeIdToNode;
	
	URuntimeTaskGraph(){}
};
