#include "TaskAssetAction.h"
#include "TaskAsset/TaskAsset.h"
#include "TaskSystemApp/TaskSystemApp.h"

void TaskAssetAction::OpenAssetEditor(const TArray<UObject*>& InObjects,TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	//TODO::这里是打开资产操作的入口。后边需要重写这里的函数。
	//父类函数中会默认创建一个基本的编辑器界面，带有一个属性窗口。
	//FAssetTypeActions_Base::OpenAssetEditor(InObjects, EditWithinLevelEditor);
	
	//设置当前编辑的模式
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid()? EToolkitMode::Type::WorldCentric:EToolkitMode::Type::Standalone;
	//循环所有的打开对象
	for(UObject* Obj:InObjects)
	{
		//判断是否是我们的DialogAsst对象
		UTaskAsset* TaskAsset = Cast<UTaskAsset>(Obj);
		if(TaskAsset)
		{
			//创建一个App的编辑器
			TSharedPtr<TaskSystemApp> Editor(new TaskSystemApp());
			//调用App的初始化函数。
			Editor->InitEditor(Mode,EditWithinLevelEditor,TaskAsset);
		}
	}
}
