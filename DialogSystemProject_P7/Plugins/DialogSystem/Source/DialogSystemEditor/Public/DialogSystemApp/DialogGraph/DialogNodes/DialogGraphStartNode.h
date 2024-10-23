﻿#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogStartNodeInfo.h"
#include "DialogSystemApp/DialogGraph/DialogGraphNodeBase.h"
#include "DialogGraphStartNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphStartNode: public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	//**************************************************
	//重载函数
	//获取图表标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override{return FText::FromString(TEXT("开始"));}
	//获取节点颜色
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::Red;}
	//是否可以删除此节点
	virtual bool CanUserDeleteNode() const override{return false;}
	//注册鼠标在节点上右键打开的菜单Action(需要再子类中重载)
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override{}
	
	//***************************************************
	//自定义函数
	//初始化此节点
	virtual void InitNodeInfo(UObject* Outor)override{RuntimeNodeInfo = NewObject<URuntimeDialogStartNodeInfo>(Outor);}
	//创建引脚
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name)override;
	//创建默认输出引脚
	virtual void CreateDefaultDialogOutputPin()override;
	
	
};