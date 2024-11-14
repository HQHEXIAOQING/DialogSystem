#pragma once
#include "CoreMinimal.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskAsset/RuntimeTaskNodeInfos/RuntimeTaskEndNodeInfo.h"
#include "TaskSystemApp/TaskGraph/TaskGraphNodeBase.h"
#include "TaskGraphEndNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UTaskGraphEndNode: public UTaskGraphNodeBase
{
	GENERATED_BODY()
public:
	//**************************************************
	//重载函数
	//获取图表标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//获取节点颜色
	virtual FLinearColor GetNodeTitleColor() const override;
	//是否可以删除此节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册鼠标在节点上右键打开的菜单Action(需要再子类中重载)
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override;
	
	//***************************************************
	//自定义函数
	//初始化此节点
	virtual void InitNodeInfo(UTaskAsset* Outor)override
	{
		URuntimeTaskNodeInfoBase* NodeInfo = NewObject<URuntimeTaskEndNodeInfo>(Outor);
		NodeInfo->TaskNodeId = FName(FString::Printf(TEXT("%d"),Outor->TaskGlobalNodeId));
		Outor->TaskGlobalNodeId++;
		RuntimeNodeInfo = NodeInfo;
	}
	//创建引脚
	virtual UEdGraphPin* CreateTaskPin(EEdGraphPinDirection Direction,FName Name)override;
	//创建默认的输入引脚
	virtual UEdGraphPin* CreateDefaultTaskInputPin()override;
	//子类需要设置节点类型。
	virtual ETaskNodeType GetTaskNodeType(){return ETaskNodeType::TaskEndNode;}

	virtual URuntimeTaskEndNodeInfo* GetEndNodeInfo()const{return Cast<URuntimeTaskEndNodeInfo>(RuntimeNodeInfo);}
};
