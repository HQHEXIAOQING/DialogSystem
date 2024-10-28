#include "DialogAsset/DialogAsset.h"

#include "DialogAsset/DialogConditionBase.h"
#include "DialogAsset/DialogNodeEffectorBase.h"
#include "DialogAsset/RuntimeDialogGraph.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogEndNodeInfo.h"
#include "DialogAsset/RuntimeDialogNodeInfos/RuntimeDialogNodeInfo.h"

//初始化对话资产，判断是否可以使用此对话资产。
bool UDialogAsset::DialogAssetInit(AActor* Owning,AActor* PlayerActor)
{
	if(!Owning){return false;}
	//初始化对话包中的内容
	Map_PinIDToPinNum.Empty();
	Map_NameIDToParticipant.Empty();
	Map_NameIDToParticipant.Add("OwningActor",Owning);
	if(PlayerActor){Map_NameIDToParticipant.Add("PlayerActor",Owning);}

	//进行球体检测
	TArray<FHitResult> HitResults;
	FCollisionShape SphereShape = FCollisionShape::MakeSphere(Radius);
	//设置检测
	bool bHit =Owning->GetWorld()->SweepMultiByChannel(
		HitResults,
		Owning->GetActorLocation(),
		Owning->GetActorLocation(),
		FQuat::Identity,
		CollisionChannel,
		SphereShape);
	TMap<FName,FParticipantCondition> Map_IdToParticipant = Map_NameIDToParticipantCondition;
	for(FHitResult HitResult:HitResults)
	{
		for(auto IdToParticipantCondition:Map_IdToParticipant)
		{
			bool CanUse = true;
			for (UParticipantConditionBase* ParticipantCondition:IdToParticipantCondition.Value.ParticipantConditionArray)
			{
				if(!ParticipantCondition->ParticipantConditionIsSucceed(this,HitResult.GetActor()))
				{
					CanUse = false;
					break;
				}
			}
			//如果此Actor通过条件就添加此对象到对应Map中
			if(CanUse)
			{
				Map_NameIDToParticipant.Add(IdToParticipantCondition.Key,HitResult.GetActor());
				//在所有名称中移除这个名称，这个名称已经有了对象，所以要移除。
				Map_IdToParticipant.Remove(IdToParticipantCondition.Key);
			}
		}
	}
	for (UDialogAssetConditionBase* DialogAssetCondition:DialogAssetConditionArray)
	{
		if(!DialogAssetCondition->DialogPacketConditionIsSucceed(this)){return false;}
	}
	return true;
}

//获取首个对话节点信息
URuntimeDialogNode* UDialogAsset::GetDialogNodeFromFirst(URuntimeDialogNodeInfo* &DialogNodeInfo)
{
	URuntimeDialogNode* StartDialogNode = Cast<URuntimeDialogNode>(RuntimeDialogGraph->Map_NodeIdToNode["0"]);
	URuntimeDialogNode* DialogNode = RuntimeDialogGraph->Map_NodeIdToNode[StartDialogNode->OutputDialogPinArray[0]->Connection->NodeId];
	//判断引脚使用次数，并添加选项使用次数。
	if(Map_PinIDToPinNum.Find(StartDialogNode->OutputDialogPinArray[0]->DialogPinId))
	{
		int32 NewNum = *Map_PinIDToPinNum.Find(StartDialogNode->OutputDialogPinArray[0]->DialogPinId)+1;
		Map_PinIDToPinNum.Add(StartDialogNode->OutputDialogPinArray[0]->DialogPinId,NewNum);
	}
	else{Map_PinIDToPinNum.Add(StartDialogNode->OutputDialogPinArray[0]->DialogPinId,1);}

	//设置输出参数。
	DialogNodeInfo = Cast<URuntimeDialogNodeInfo>(DialogNode->RuntimeDialogNodeInfoBase);
	return DialogNode;
}

//获取对话节点
bool UDialogAsset::GetDialogNodeFromDialogId(FName DialogNodeId,URuntimeDialogNodeInfo* &DialogNodeInfo,URuntimeDialogNode* &DialogNode)
{
	DialogNode = Cast<URuntimeDialogNode>(RuntimeDialogGraph->Map_NodeIdToNode[DialogNodeId]);
	DialogNodeInfo = Cast<URuntimeDialogNodeInfo>(DialogNode->RuntimeDialogNodeInfoBase);
	if (!DialogNodeInfo)
	{
		UE_LOG(LogTemp,Error,TEXT("UDialogAsset::GetDialogNodeFromDialogId::没有找对应节点下的信息！"));
	}
	return DialogNode&&DialogNodeInfo;
}

//获取结束节点
bool UDialogAsset::GetDialogEndNodeFromDialogId(FName DialogNodeId,URuntimeDialogEndNodeInfo* &DialogNodeInfo,URuntimeDialogNode* &DialogNode)
{
	DialogNode = Cast<URuntimeDialogNode>(RuntimeDialogGraph->Map_NodeIdToNode[DialogNodeId]);
	DialogNodeInfo = Cast<URuntimeDialogEndNodeInfo>(DialogNode->RuntimeDialogNodeInfoBase);
	return DialogNode&&DialogNodeInfo;
}

bool UDialogAsset::GetOutputPinFromDialogNode(URuntimeDialogNode* DialogNode,TMap<URuntimeDialogPin*, FDialogOutPinData>& Map_OutPinToOutPinData, bool& IsPlayerOption)
{
	if(!DialogNode){return false;}
	URuntimeDialogNodeInfo* DialogNodeInfo = Cast<URuntimeDialogNodeInfo>(DialogNode->RuntimeDialogNodeInfoBase);
	if(!DialogNodeInfo){return false;}
	
	TArray<FDialogOutPinData> OutPinDateArray = DialogNodeInfo->DialogOutPinArray;
	TArray<URuntimeDialogPin*> OutPinArray = DialogNode->OutputDialogPinArray;
	int32 OutPinNum = 0;
	for(FDialogOutPinData OutPinDate:OutPinDateArray)
	{
		//判断寻找下一个节点是否存在。
		URuntimeDialogNode* NextDialogNode = *RuntimeDialogGraph->Map_NodeIdToNode.Find(OutPinArray[OutPinNum]->Connection->NodeId);
		if(!NextDialogNode){return false;}

		//循环判断所有条件
		bool CanUse = true;
		for (UDialogNodeConditionBase* DialogNodeCondition:OutPinDate.DialogNodeCondition)
		{
			//如果有一个条件不符合就跳出和这个循环
			if(!DialogNodeCondition->DialogNodeConditionIsSucceed(this,DialogNode,NextDialogNode))
			{
				CanUse = false;
				break;
			}
			
		}
		//有效就添加这个引脚对应数据
		if(CanUse)
		{
			//如果下一句是结束节点，那么就直接添加
			if(NextDialogNode->DialogNodeType == EDialogNodeType::DialogEndNode)
			{Map_OutPinToOutPinData.Add(OutPinArray[OutPinNum],OutPinDateArray[OutPinNum]);}
			//如果是对话节点，判断是否是玩家
			if(NextDialogNode->DialogNodeType == EDialogNodeType::DialogNode)
			{
				URuntimeDialogNodeInfo* NextDialogNodeInfo = Cast<URuntimeDialogNodeInfo>(NextDialogNode->RuntimeDialogNodeInfoBase);
				if(NextDialogNodeInfo->DialogActorId == "PlayerActor")
				{
					//如果是玩家就添加一条
					Map_OutPinToOutPinData.Add(OutPinArray[OutPinNum],OutPinDateArray[OutPinNum]);
					IsPlayerOption =true;
				}else
				{
					//如果不是玩家就设置一条，然后跳出此函数。
					Map_OutPinToOutPinData.Empty();
					Map_OutPinToOutPinData.Add(OutPinArray[OutPinNum],OutPinDateArray[OutPinNum]);
					IsPlayerOption =false;
					return true;
				}
			}
		}
	}
	//全部找完，没有跳出，那么就跳出。
	return true;
}

//对话节点开始执行(输入当前引脚。)
bool UDialogAsset::DialogNodeInit(URuntimeDialogPin* DialogPin)
{
	if(!DialogPin){return false;}
	URuntimeDialogNode* NextNode = *RuntimeDialogGraph->Map_NodeIdToNode.Find(DialogPin->Connection->NodeId);
	if(!NextNode){return false;}
	URuntimeDialogNodeInfo* NextNodeInfo = Cast<URuntimeDialogNodeInfo>(NextNode->RuntimeDialogNodeInfoBase);
	if(!NextNodeInfo){return false;}
	TArray<UDialogNodeEffectorBase*> Effectors = NextNodeInfo->DialogNodeEffectorArray;
	
	//判断引脚使用次数，并添加选项使用次数。
	if(Map_PinIDToPinNum.Find(DialogPin->DialogPinId))
	{
		int32 NewNum = *Map_PinIDToPinNum.Find(DialogPin->DialogPinId)+1;
		Map_PinIDToPinNum.Add(DialogPin->DialogPinId,NewNum);
	}
	else{Map_PinIDToPinNum.Add(DialogPin->DialogPinId,1);}
	
	//循环触发所有的效果
	for (UDialogNodeEffectorBase* DialogNodeEffector:Effectors)
	{
		DialogNodeEffector->DialogNodeEffectorPlay(this,Map_NameIDToParticipant[NextNodeInfo->DialogActorId]);
	}
	return true;
}

void UDialogAsset::PreSave(FObjectPreSaveContext SaveContext)
{
	//如果指向的位置有函数，我应该调用一下这个函数，这里指向的是APP中保存数据的函数。
	if(_OnPreSaveListener)
	{
		_OnPreSaveListener();
	}
	Super::PreSave(SaveContext);
}
