#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/WorkflowCentricApplication.h"

class UDialogGraphNodeBase;

//对话系统编辑器主体类
class DialogSystemApp:public FWorkflowCentricApplication,public FEditorUndoClient,public FNotifyHook
{
public:
	//重载函数FWorkflowCentricApplication
	//注册选项卡标签
	virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& tabManager) override;

	//初始化事件
	void InitEditor(const EToolkitMode::Type mode,const TSharedPtr<class IToolkitHost>& initToolkitHost,UObject* inObject);

	class UDialogAsset* GetWorkingAsset(){return _workingAsset;}
	class UEdGraph* GetWorkingGraph(){return _workingGraph;}

	void SetWorkingGraphUi(TSharedPtr<SGraphEditor> workingGraphUi){_workingGraphUi = workingGraphUi;}
	void SetSelectedNodeDetailView(TSharedPtr<IDetailsView> detailsView);
	void OnGraphSelectionChanged(const FGraphPanelSelectionSet& selection);
	
	//重载函数FAssetEditorToolkit(FWorkflowCentricApplication的父类)
	virtual FName GetToolkitFName() const override{return FName("DialogSystemApp");}
	virtual FText GetBaseToolkitName() const override{return FText::FromString(TEXT("DialogSystemApp"));}
	virtual FString GetWorldCentricTabPrefix() const override{return TEXT("DialogSystemApp");}
	virtual FLinearColor GetWorldCentricTabColorScale() const override{return FLinearColor::Green;}
	virtual FString GetDocumentationLink() const override{return TEXT("https://space.bilibili.com/287273511?spm_id_from=333.1007.0.0");}

	virtual void OnToolkitHostingStarted(const TSharedRef<IToolkit>& Toolkit) override{}
	virtual void OnToolkitHostingFinished(const TSharedRef<IToolkit>& Toolkit) override{}
	
	virtual void OnClose() override;

	//属性变化绑定事件
	void OnNodeDetailViewPropertyUpdate(const FPropertyChangedEvent& event);
	//资产保存时调用
	void OnWorkingAssetPreSave();
	
protected:
	//创建App更新
	
	//从图表更新资产。也就是把当前图表的数据保存到创建的运行时数据中。（保存时调用。）
	void UpdateWorkingAssetFromGraph();
	//从资产更新图表,也就是把存储起来的运行时资产数据取出来设置给当前图表（打开编辑器的时候调用）。
	void UpdateEditorGraphFromWorkingAsset();

	UDialogGraphNodeBase* GetSelectedNode(const FGraphPanelSelectionSet& selection);
	
private:
	UDialogAsset* _workingAsset=nullptr;
	UEdGraph* _workingGraph=nullptr;
	//FDelegateHandle _graphChangeListenerHandle;

	//工作图表的界面显示。
	TSharedPtr<SGraphEditor> _workingGraphUi=nullptr;
	TSharedPtr<IDetailsView> _selectedDetailsView=nullptr;
};
