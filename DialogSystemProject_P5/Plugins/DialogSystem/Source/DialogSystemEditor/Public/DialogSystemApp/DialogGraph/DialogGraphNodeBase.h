#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphNode.h"
#include "DialogGraphNodeBase.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphNodeBase: public UEdGraphNode
{
	GENERATED_BODY()
public:
	//**************************************************
	//重载函数
	//获取图表标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override{return FText::FromString(TEXT("基础节点"));}
	//获取节点颜色
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::White;}
	//是否可以删除此节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册鼠标在节点上右键打开的菜单Action(需要再子类中重载)
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override{}
	
	//***************************************************
	//自定义函数
	//初始化此节点
	virtual void InitNodeInfo(){}
	//创建引脚
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name){return nullptr;}
	//创建默认的输入引脚
	virtual UEdGraphPin* CreateDefaultDialogInputPin(){return nullptr;}
	//创建默认输出引脚
	virtual void CreateDefaultDialogOutputPin(){}

	
};
