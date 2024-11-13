#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowCentricApplication.h"

class UDialogGraphNodeBase;
class UDialogAsset;

class DialogSystemApp:public FWorkflowCentricApplication,public FEditorUndoClient,public FNotifyHook
{
public:
	//*********************************************************
	//重载函数(必须重载的函数)
	//获取App的标识
	virtual FName GetToolkitFName() const override{return "DialogSystemApp";}
	//获取App基础名称
	virtual FText GetBaseToolkitName() const override{return FText::FromString(TEXT("DialogSystemApp"));}
	//获取标签前缀
	virtual FString GetWorldCentricTabPrefix() const override{return TEXT("DialogSystemApp");}
	//获取标签颜色
	virtual FLinearColor GetWorldCentricTabColorScale() const override{return FLinearColor::Green;}
	virtual FString GetDocumentationLink() const override{return TEXT("https://github.com/HQHEXIAOQING/DialogSystem");}

	//********************************************************
	//注册选项卡
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManagerThis) override{FWorkflowCentricApplication::RegisterTabSpawners(TabManagerThis);}

	//在App托管开始和结束时调用。
	virtual void OnToolkitHostingStarted(const TSharedRef<IToolkit>& Toolkit) override{}
	virtual void OnToolkitHostingFinished(const TSharedRef<IToolkit>& Toolkit) override{}

	//当选择对象发生变化时调用
	void OnGraphNodeSelectionChanged(const FGraphPanelSelectionSet& Selections);
	//当节点信息发生变化时调用
	void OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& Event);

	//关闭时事件。
	virtual void OnClose() override;

	//***********************************************************
	//自定义函数
	//初始化App事件
	void InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost,UObject* ObjectToEdit);
	//更新图表数据到资产
	void UpdateDialogGraphToDialogAsset();
	//更新资产数据到图表
	void UpdateDialogAssetToDialogGraph();

	//获取选择的节点
	UDialogGraphNodeBase* GetSelectedNode(const FGraphPanelSelectionSet& Selection);
	
	//获取工作资产对象。
	UDialogAsset* GetWorkingAsset(){return _WorkingAsset;}
	//获取工作图表对象。
	UEdGraph* GetWorkingGraph(){return _WorkingGraph;}
	//设置节点属性视口
	void SetWorkingDetailsView(TSharedPtr<IDetailsView> WorkingDetailsView);
	//设置工作图表
	void SetWorkingGraphEditor(TSharedPtr<SGraphEditor> WorkingGraphEditor);
private:
	//当前App的工作资产对象
	UDialogAsset* _WorkingAsset = nullptr;
	UEdGraph* _WorkingGraph = nullptr;

	//获取属性窗口
	TSharedPtr<IDetailsView> _WorkingDetailsView = nullptr;
	//设置工作图表
	TSharedPtr<SGraphEditor> _WorkingGraphEditor = nullptr;
	
};
