#pragma once
#include "CoreMinimal.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskStartNodeInfo.h"
#include "TaskSystemApp/TaskGraph/TaskGraphNodeBase.h"
#include "TaskGraphStartNode.generated.h"

class UTaskAsset;

UCLASS()
class DIALOGSYSTEMEDITOR_API UTaskGraphStartNode: public UTaskGraphNodeBase
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
	virtual void InitNodeInfo(UTaskAsset* Outor)override
	{
		URuntimeTaskNodeInfoBase* NodeInfo = NewObject<URuntimeTaskStartNodeInfo>(Outor);
		NodeInfo->TaskNodeId = "StartNode";
		Outor->TaskGlobalNodeId++;
		RuntimeNodeInfo = NodeInfo;
	}
	//创建引脚
	virtual UEdGraphPin* CreateTaskPin(EEdGraphPinDirection Direction,FName Name)override;
	//创建默认输出引脚
	virtual void CreateDefaultTaskOutputPin()override;
	//子类需要设置节点类型。
	virtual ETaskNodeType GetTaskNodeType()override{return ETaskNodeType::TaskStartNode;}

	virtual URuntimeTaskStartNodeInfo* GetStartNodeInfo()const{return Cast<URuntimeTaskStartNodeInfo>(RuntimeNodeInfo);}
	
	
};