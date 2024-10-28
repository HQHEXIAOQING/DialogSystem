// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogSystemEditor.h"

#include "DialogAssetAction.h"
#include "EdGraphUtilities.h"
#include "IAssetTools.h"
#include "SGraphPin.h"
#include "DialogSystemApp/DialogGraph/DialogNodes/DialogGraphNode.h"
#include "Widgets/Text/SMultiLineEditableText.h"

#define LOCTEXT_NAMESPACE "FDialogSystemEditorModule"

class SDialogPin :public SGraphPin
{
public:
	SLATE_BEGIN_ARGS(SDialogPin){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,UEdGraphPin* InGraphPinObject)
	{
		SGraphPin::Construct(SGraphPin::FArguments(),InGraphPinObject);
	}

protected:
	//重载函数
	//修改颜色
	virtual FSlateColor GetPinColor() const override{return FSlateColor(FLinearColor::Green);}
	
};

//自定义节点
class SDialogNode :public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SDialogNode){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,UEdGraphNode* InNode)
	{
		this->DialogGraphNode = Cast<UDialogGraphNode>(InNode);
		this->GraphNode = InNode;
		this->SetCursor(EMouseCursor::CardinalCross);
		this->UpdateGraphNode();
	}
protected:	
	virtual TSharedRef<SWidget> CreateNodeContentArea()override
	{
		// 创建滚动框
		TSharedRef<SScrollBox> scrollBox = SNew(SScrollBox);
		// 创建可编辑文本
		editableText = SNew(SMultiLineEditableText)
			.WrapTextAt(200.0f )
			.OnTextChanged(FOnTextChanged::CreateLambda([this](const FText& Text)
			{
			DialogGraphNode->GetNodeInfo()->DialogText = Text;
			}));
		FSlateFontInfo FontInfo =  editableText->GetFont();
		//修改字体大小的位置。
		FontInfo.Size = 12.0;
		editableText->SetFont(FontInfo);

		if(DialogGraphNode){editableText->SetText(DialogGraphNode->GetNodeInfo()->DialogText);}
	
		// 将可编辑文本添加到滚动框中
		scrollBox->AddSlot()
		   .HAlign(HAlign_Fill)
		   .VAlign(VAlign_Fill)
			[
				editableText.ToSharedRef()
			];
		// 为可编辑文本添加边界框
		TSharedRef<SBorder> borderedEditableText = SNew(SBorder)
			.ColorAndOpacity(FLinearColor(1,1,1,1))
			.BorderBackgroundColor(FLinearColor(1,1,1,1))
			.Content()
			[
				scrollBox
			];
		
		return SNew(SBorder)
			.BorderImage( FAppStyle::GetBrush("NoBorder") )	
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding( FMargin(0,3) )
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.HAlign(HAlign_Left)
				.FillWidth(0.3f)
				[
					// LEFT
					SAssignNew(LeftNodeBox, SVerticalBox)
				]
				+SHorizontalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.FillWidth(1.0f)
				[
					//中间内容
					//SNew(STextBlock).Text(FText::FromString(TEXT("测试节点添加文本")))
					SNew(SBox)
					.WidthOverride(200)
					.HeightOverride(100)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						//SNew(SScrollBox)
						borderedEditableText
					]
				]
				+SHorizontalBox::Slot()
				.AutoWidth()
				.HAlign(HAlign_Right)
				[
					// RIGHT
					SAssignNew(RightNodeBox, SVerticalBox)
				]
			];
	}
	
	UDialogGraphNode* DialogGraphNode = nullptr;
	TSharedPtr<SMultiLineEditableText> editableText = nullptr;
};


//引脚资产工具
struct FDialogPinFactroy: FGraphPanelPinFactory
{
	virtual ~FDialogPinFactroy(){}

	//重载注册内容
	virtual TSharedPtr<SGraphPin> CreatePin(UEdGraphPin* Pin)const override
	{
		if(Pin->PinType.PinSubCategory == "DialogPin")
		{
			return SNew(SDialogPin,Pin);
		}
		return nullptr;
	}
};
//节点资产工具
struct FDialogNodeFactroy: FGraphPanelNodeFactory
{
	virtual ~FDialogNodeFactroy(){}

	//重载注册内容
	virtual TSharedPtr<SGraphNode> CreateNode(UEdGraphNode* Node)const override
	{
		if(Cast<UDialogGraphNode>(Node))
		{
			return SNew(SDialogNode,Node);
		}
		return nullptr;
	}
};
//************************************************************
//模块入口
void FDialogSystemEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//注册对话系统到资产工具中。
	//获取资产工具
	IAssetTools& AssetTool = IAssetTools::Get();
	//注册一个资产分类
	EAssetTypeCategories::Type Category = AssetTool.RegisterAdvancedAssetCategory("DialogSystem",FText::FromString(TEXT("对话系统")));
	//TODO::这里扩展操作
	//创建一个对话资产操作
	TSharedRef<IAssetTypeActions> AssetTypeAction = MakeShareable(new DialogAssetAction(Category));

	//TODO::这里注册操作
	AssetTool.RegisterAssetTypeActions(AssetTypeAction);
	_PinFactory = MakeShareable(new FDialogPinFactroy());
	_NodeFactory = MakeShareable(new FDialogNodeFactroy());
	FEdGraphUtilities::RegisterVisualPinFactory(_PinFactory);
	FEdGraphUtilities::RegisterVisualNodeFactory(_NodeFactory);
}

void FDialogSystemEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEdGraphUtilities::UnregisterVisualPinFactory(_PinFactory);
	FEdGraphUtilities::UnregisterVisualNodeFactory(_NodeFactory);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialogSystemEditorModule, DialogSystemEditor)