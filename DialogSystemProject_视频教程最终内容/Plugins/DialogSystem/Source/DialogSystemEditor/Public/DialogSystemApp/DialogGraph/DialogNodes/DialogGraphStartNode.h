#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogAsset.h"
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
	virtual void InitNodeInfo(UObject* Outor,FName DialogNodeId)override
	{
		RuntimeNodeInfo = NewObject<URuntimeDialogStartNodeInfo>(Outor);
		RuntimeNodeInfo->DialogNodeId = DialogNodeId;
		UDialogAsset* DialogAsset = Cast<UDialogAsset>(Outor);
		URuntimeDialogNode* RuntimeDialogNode = NewObject<URuntimeDialogNode>(Outor);
		RuntimeDialogNode->RuntimeDialogNodeInfoBase = RuntimeNodeInfo;
	}
	//获取当前类型
	virtual EDialogNodeType GetDialogNodeType()const override{return EDialogNodeType::DialogStartNode;}
	//创建引脚
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name)override;
	//创建默认输出引脚
	virtual void CreateDefaultDialogOutputPin()override;

	//获取开始节点信息
	virtual URuntimeDialogStartNodeInfo* GetRuntimeStartNodeInfo(){return Cast<URuntimeDialogStartNodeInfo>(RuntimeNodeInfo);}
	
};