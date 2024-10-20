#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfo.h"
#include "DialogGraph/DialogGraphNodeBase.h"
#include "EdGraph/EdGraphNode.h"
#include "DialogGraphNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphNode : public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	//重载函数
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FLinearColor GetNodeTitleColor() const override{return _nodeInfo ? _nodeInfo->DialogNodeColor: FLinearColor::Green;}
	virtual bool CanUserDeleteNode() const override{return true;}

	//获取节点菜单操作
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override;

	//*********************************
	virtual UEdGraphPin* CreateDefaultInputPin()override;
	virtual void CreateDefaultOutputPins()override;
	virtual EDialogNodeType GetDialogNodeType()const override{return EDialogNodeType::DialogNode;}
	virtual void OnProrpertiesChanged()override{SyncPinsWithResponses();}

	//*********************************
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection direction,FName name)override;
	// 同步响应引脚
	void SyncPinsWithResponses();
	
	//*********************************
	virtual void InitNodeInfo(UObject* output)override{_nodeInfo =NewObject<UDialogNodeInfo>(output);}
	virtual void SetNodeInfo(UDialogNodeInfoBase* nodeInfo)override{_nodeInfo = Cast<UDialogNodeInfo>(nodeInfo);}
	virtual UDialogNodeInfoBase* GetNodeInfo()const override{return _nodeInfo;}

	
	virtual UDialogNodeInfo* GetDialogNodeInfo(){return _nodeInfo;}
protected:
	UDialogNodeInfo* _nodeInfo;
};
