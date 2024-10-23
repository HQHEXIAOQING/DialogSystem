#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoBase.h"
#include "EdGraph/EdGraphNode.h"
#include "DialogAsset/DialogNodeType.h"
#include "DialogGraphNodeBase.generated.h"



UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphNodeBase: public UEdGraphNode
{
	GENERATED_BODY()
public:
	//***************************************************************
	//重载函数
	//设置标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override{return FText::FromString(TEXT("基础节点"));}
	//节点颜色
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::White;}
	//是否可以删除节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册节点右键菜单操作
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override{}

	//***************************************************************
	//自定义函数
	//初始化节点（传入父类应该是此节点生成对象的父类信息，节点信息对象生命周期应该会跟着父类生命周期走。）
	virtual void InitNodeInfo(UObject* Outer){_NodeBaseInfo = NewObject<UDialogNodeInfoBase>(Outer);}

	//创建默认的输入节点和输出节点
	virtual UEdGraphPin* CreateDefaultInputPin(){return nullptr;}
	virtual void CreateDefaultOutPins(){}
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name){return nullptr;}
	//数据发生更新时调用
	virtual void OnPropertiesChanged(){}


	//获取当前节点的分类
	virtual EDialogNodeType GetDialogNodeType()const{return EDialogNodeType::Unknown;}
	//设置节点信息和获取节点信息
	virtual void SetNodeInfo(UDialogNodeInfoBase* NodeInfo){_NodeBaseInfo = NodeInfo;}
	virtual UDialogNodeInfoBase* GetNodeInfoBase() const{return _NodeBaseInfo;}

protected:
	UDialogNodeInfoBase* _NodeBaseInfo = nullptr;
	
};
