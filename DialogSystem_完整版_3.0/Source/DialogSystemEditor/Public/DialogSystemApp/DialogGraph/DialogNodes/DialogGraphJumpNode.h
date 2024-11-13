#pragma once
#include "CoreMinimal.h"
#include "DialogGraphNode.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"
#include "DialogGraphJumpNode.generated.h"

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogGraphJumpNode: public UDialogGraphNode
{
	GENERATED_BODY()
public:
	//**************************************************
	//重载函数
	//获取图表标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override{return (GetNodeInfo())?GetNodeInfo()->DialogNodeTitle:FText::FromString(TEXT("对话节点"));}
	//获取节点颜色
	virtual FLinearColor GetNodeTitleColor() const override{return FLinearColor::Yellow;}
	//是否可以删除此节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册鼠标在节点上右键打开的菜单Action(需要再子类中重载)
	virtual void GetNodeContextMenuActions(UToolMenu* Menu,UGraphNodeContextMenuContext* Context) const override;
	
	//***************************************************
	//自定义函数
	//初始化此节点
	virtual void InitNodeInfo(UDialogAsset* Outor)override
	{
		URuntimeDialogNodeInfoBase* NodeInfo = NewObject<URuntimeDialogNodeInfo>(Outor);
		NodeInfo->DialogNodeId = FName(FString::Printf(TEXT("%d"),Outor->DialogGlobalNodeId));
		Outor->DialogGlobalNodeId++;
		RuntimeNodeInfo = NodeInfo;
	}
	//创建引脚
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name)override;
	//创建默认的输入引脚
	virtual UEdGraphPin* CreateDefaultDialogInputPin()override{return nullptr;}
	//创建默认输出引脚
	virtual void CreateDefaultDialogOutputPin()override;
	//子类需要设置节点类型。
	virtual EDialogNodeType GetDialogNodeType(){return EDialogNodeType::DialogJumpNode;}
	//数据发生更新时调用
	virtual void OnPropertiesChanged() override;
	virtual void SysncPinsWithResponses();

	virtual URuntimeDialogNodeInfo* GetNodeInfo()const{return Cast<URuntimeDialogNodeInfo>(RuntimeNodeInfo);}
};
