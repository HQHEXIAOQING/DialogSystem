#pragma once
#include "CoreMinimal.h"
#include "DialogGraph/DialogGraphNodeBase.h"
#include "DialogStartGraphNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogStartGraphNode:public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	//重载Node函数
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override{return FText::FromString(TEXT("Start"));}
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::Red;}
	//virtual FLinearColor GetNodeTitleColor() const override{return _nodeInfo ? _nodeInfo->DialogNodeColor: FLinearColor::Green;}
	virtual bool CanUserDeleteNode() const override{return false;}

	//重载父类函数
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection direction, FName name) override;

	virtual EDialogNodeType GetDialogNodeType() const override{return EDialogNodeType::StartNode;}
	
};
