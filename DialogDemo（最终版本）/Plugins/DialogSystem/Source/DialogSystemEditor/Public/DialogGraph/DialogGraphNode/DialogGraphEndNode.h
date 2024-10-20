#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogEndNodeInfo.h"
#include "DialogGraph/DialogGraphNodeBase.h"
#include "DialogGraphEndNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphEndNode:public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:

	//重载UEdGraphNode函数
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::Blue;}
	virtual bool CanUserDeleteNode() const override{return true;}

	//获取节点菜单操作
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override;

	
	//重载父类函数
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection direction,FName name)override;
	virtual UEdGraphPin* CreateDefaultInputPin()override;
	virtual void CreateDefaultOutputPins()override{}
	
	virtual void InitNodeInfo(UObject* outer)override{_nodeInfo = NewObject<UDialogEndNodeInfo>(outer);}
	virtual void SetNodeInfo(UDialogNodeInfoBase* nodeInfo)override{_nodeInfo = Cast<UDialogEndNodeInfo>(nodeInfo);}
	virtual UDialogNodeInfoBase* GetNodeInfo()const override{return _nodeInfo;}

	virtual EDialogNodeType GetDialogNodeType()const override{return EDialogNodeType::EndNode;}

	virtual void OnProrpertiesChanged()override{Modify();}

protected:
	UPROPERTY()
	UDialogEndNodeInfo* _nodeInfo;
};
