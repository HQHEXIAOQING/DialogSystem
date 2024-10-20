#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeType.h"
#include "EdGraph/EdGraphNode.h"
#include "DialogGraphNodeBase.generated.h"

enum class EDialogNodeType : uint8;
class UDialogNodeInfoBase;

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphNodeBase : public UEdGraphNode
{
	GENERATED_BODY()
public:
	//创建对话节点，子类必须重载！！！
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection direction,FName name){return nullptr;}
	virtual UEdGraphPin* CreateDefaultInputPin(){return nullptr;}
	virtual void CreateDefaultOutputPins(){}

	virtual void InitNodeInfo(UObject* outer){}
	virtual void SetNodeInfo(UDialogNodeInfoBase* nodeInfo){}
	virtual UDialogNodeInfoBase* GetNodeInfo()const{return nullptr;}

	virtual EDialogNodeType GetDialogNodeType()const{return EDialogNodeType::Unknown;}

	virtual void OnProrpertiesChanged(){}

	/*
protected:
	UPROPERTY()
	UDialogNodeInfoBase* _nodeInfo = nullptr;
	*/
};
