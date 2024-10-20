#include "DialogAssetAction.h"

void DialogAssetAction::OpenAssetEditor(const TArray<UObject*>& InObjects,TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	//TODO::这里是打开资产操作的入口。后边需要重写这里的函数。
	//父类函数中会默认创建一个基本的编辑器界面，带有一个属性窗口。
	FAssetTypeActions_Base::OpenAssetEditor(InObjects, EditWithinLevelEditor);
}
