#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoChild/DialogEndNodeInfo.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphNodeBase.h"
#include "DialogEndNode.generated.h"


UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogEndNode: public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	//***************************************************************
	//重载函数
	//设置标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//节点颜色
	virtual FLinearColor GetNodeTitleColor() const override;
	//是否可以删除节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册节点右键菜单操作
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override;

	//***************************************************************
	//自定义函数
	//初始化节点（传入父类应该是此节点生成对象的父类信息，节点信息对象生命周期应该会跟着父类生命周期走。）
	virtual void InitNodeInfo(UObject* Outer)override{_NodeBaseInfo = NewObject<UDialogEndNodeInfo>(Outer);}

	//创建默认的输入节点和输出节点
	virtual UEdGraphPin* CreateDefaultInputPin()override;
	virtual void CreateDefaultOutPins()override{}
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name)override;
	//数据发生更新时调用
	virtual void OnPropertiesChanged()override{}

	//获取当前节点的分类
	virtual EDialogNodeType GetDialogNodeType()const override{return EDialogNodeType::EndNode;}
	//设置节点信息和获取节点信息
	virtual void SetNodeInfo(UDialogNodeInfoBase* NodeInfo)override{_NodeBaseInfo = NodeInfo;}
	virtual UDialogNodeInfoBase* GetNodeInfoBase() const override{return _NodeBaseInfo;}

	virtual UDialogEndNodeInfo* GetEndNodeInfo() const{return Cast<UDialogEndNodeInfo>(_NodeBaseInfo);}

};
