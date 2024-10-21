#pragma once
#include "CoreMinimal.h"
#include "DialogAsset/DialogNodeInfo/DialogNodeInfoBase.h"
#include "EdGraph/EdGraphNode.h"
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
	virtual FLinearColor GetNodeTitleColor() const override{return _NodeBaseInfo->IsValidLowLevel()?_NodeBaseInfo->NodeColor:FLinearColor::White;}
	//是否可以删除节点
	virtual bool CanUserDeleteNode() const override{return true;}
	//注册节点右键菜单操作
	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override{}

	//***************************************************************
	//自定义函数
	//初始化节点（传入父类应该是此节点生成对象的父类信息，节点信息对象生命周期应该会跟着父类生命周期走。）
	virtual void InitNodeInfo(UObject* Outer){_NodeBaseInfo = NewObject<UDialogNodeInfoBase>(Outer);}

	//创建默认的输入节点和输出节点
	virtual UEdGraphPin* CreateDefaultInputPin(){return nullptr;}
	virtual void CreateDefaultOutPins(){}
	virtual UEdGraphPin* CreateDialogPin(EEdGraphPinDirection Direction,FName Name){return nullptr;}
	//数据发生更新时调用
	virtual void OnPropertiesChanged(){SysncPinsWithResponses();}
	//输出接口名称和图表节点输出引脚进行同步
	virtual void SysncPinsWithResponses()
	{
		//TODO::这里要书写节点同步的逻辑！
		UDialogNodeInfoBase* DialogNodeInfo = GetNodeInfoBase();
		//创建图表节点和节点信息引脚数量（去掉输入的一个）
		int NumGraphNodePins = Pins.Num()-1;
		int NumInfoPins = DialogNodeInfo->OutPinDataArray.Num();
		//保持一致引脚数量
		while(NumGraphNodePins>NumInfoPins)
		{
			RemovePinAt(NumGraphNodePins-1,EEdGraphPinDirection::EGPD_Output);
			NumGraphNodePins--;
		}
		while(NumInfoPins>NumGraphNodePins)
		{
			CreateDialogPin(EEdGraphPinDirection::EGPD_Output,FName(DialogNodeInfo->OutPinDataArray[NumGraphNodePins].OutPinName.ToString()));
			NumGraphNodePins++;
		}
		//设置引脚名称对应，循环设置所有引脚。
		int Index = 1;
		for(const FOutPinData& OutPinData : DialogNodeInfo->OutPinDataArray)
		{
			GetPinAt(Index)->PinName = FName(OutPinData.OutPinName.ToString());
			Index++;
		}
	}
	
	//设置节点信息和获取节点信息
	virtual void SetNodeInfo(UDialogNodeInfoBase* NodeInfo){_NodeBaseInfo = NodeInfo;}
	virtual UDialogNodeInfoBase* GetNodeInfoBase() const{return _NodeBaseInfo;}

protected:
	UDialogNodeInfoBase* _NodeBaseInfo = nullptr;
	
};
