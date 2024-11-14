#pragma once
#include "CoreMinimal.h"
#include "NodeType.h"
#include "TaskGraphNodeBase.generated.h"


class URuntimeTaskNodeInfoBase;

UCLASS()
class DIALOGSYSTEMEDITOR_API UTaskGraphNodeBase: public UEdGraphNode
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
	//初始化此节点,子类必须重载
	virtual void InitNodeInfo(UTaskAsset* Outor){}
	//创建引脚
	virtual UEdGraphPin* CreateTaskPin(EEdGraphPinDirection Direction,FName Name){return nullptr;}
	//创建默认的输入引脚
	virtual UEdGraphPin* CreateDefaultTaskInputPin(){return nullptr;}
	//创建默认输出引脚
	virtual void CreateDefaultTaskOutputPin(){}
	//子类需要设置节点类型。
	virtual ETaskNodeType GetTaskNodeType(){return ETaskNodeType::UnKnown;}
	//数据发生更新时调用
	virtual void OnPropertiesChanged(){}
	
	//获取节点信息
	virtual URuntimeTaskNodeInfoBase* GetRuntimeNodeInfoBase(){return RuntimeNodeInfo;}
	//设置节点信息
	virtual void SetRuntimeNodeInfoBase(URuntimeTaskNodeInfoBase* RuntimeNodeInfoBase){RuntimeNodeInfo = RuntimeNodeInfoBase;} 
protected:
	UPROPERTY()
	URuntimeTaskNodeInfoBase* RuntimeNodeInfo = nullptr;
};
