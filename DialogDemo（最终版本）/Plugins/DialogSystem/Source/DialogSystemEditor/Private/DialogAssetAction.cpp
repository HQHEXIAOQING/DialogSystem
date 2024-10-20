#include "DialogAssetAction.h"
#include "DialogSystemApp/DialogSystemApp.h"


void DialogAssetAction::OpenAssetEditor(const TArray<UObject*>& inObjects,
                                        TSharedPtr<IToolkitHost> editWithinLevelEditor)
{
	//TODO:书写打开编辑器的地方
	//FAssetTypeActions_Base::OpenAssetEditor(inObjects, editWithinLevelEditor);

	EToolkitMode::Type mode = editWithinLevelEditor.IsValid() ?EToolkitMode::WorldCentric:EToolkitMode::Standalone;

	for (UObject* object : inObjects)
	{
		UDialogAsset* dialogAsset = dynamic_cast<UDialogAsset*>(object);
		if (dialogAsset)
		{
			TSharedRef<DialogSystemApp> editor(new DialogSystemApp());
			editor->InitEditor(mode,editWithinLevelEditor,dialogAsset);
		}
	}
	
}











