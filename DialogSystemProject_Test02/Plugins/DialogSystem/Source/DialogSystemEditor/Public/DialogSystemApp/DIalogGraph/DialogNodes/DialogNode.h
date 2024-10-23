#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoChild/DialogNodeInfo.h"
#include "DialogSystemApp/DIalogGraph/DialogGraphNodeBase.h"
#include "DialogNode.generated.h"

class UDialogNodeInfo;

UCLASS()
class DIALOGSYSTEMEDITOR_API UDialogNode: public UDialogGraphNodeBase
{
	GENERATED_BODY()
public:
	//***************************************************************
	//重载函数
	//设置标题
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	//节点颜色
	virtual FLinearColor GetNodeTitleColor() const override{return GetNodeInfo()?GetNodeInfo()->NodeColor:FLinearColor::Green;}
	//是否可以删除节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册节点右键菜单操作
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override;

	//***************************************************************
	//自定义函数
	//初始化节点（传入父类应该是此节点生成对象的父类信息，节点信息对象生命周期应该会跟着父类生命周期走。）
	virtual void InitNodeInfo(UObject* Outer)override{_NodeBaseInfo = NewObject<UDialogNodeInfo>(Outer);}

	//创建默认的输入节点和输出节点
	virtual UEdGraphPin* CreateDefaultInputPin()override;
	virtual void CreateDefaultOutPins()override;
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name)override;
	//数据发生更新时调用
	virtual void OnPropertiesChanged()override;
	//输出接口名称和图表节点输出引脚进行同步
	virtual void SysncPinsWithResponses();
	
	//获取当前节点的分类
	virtual EDialogNodeType GetDialogNodeType()const override{return EDialogNodeType::DialogNode;}
	//设置节点信息和获取节点信息
	virtual void SetNodeInfo(UDialogNodeInfoBase* NodeInfo)override{_NodeBaseInfo = NodeInfo;}
	virtual UDialogNodeInfoBase* GetNodeInfoBase() const override{return _NodeBaseInfo;}

	virtual UDialogNodeInfo* GetNodeInfo() const{return Cast<UDialogNodeInfo>(_NodeBaseInfo);}

};
