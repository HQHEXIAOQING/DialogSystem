#include "TaskAsset/TaskAssetObjectInfo.h"
#include "SystemValue/SystemValues/SystemValueType_Bool.h"
#include "SystemValue/SystemValues/SystemValueType_Object.h"
#include "SystemValue/SystemValues/SystemValueType_Vector.h"
#include "TaskAsset/TaskAsset.h"

UWorld* UTaskAssetObjectInfoBase::GetWorld() const
{
	if(TaskAsset&&TaskAsset->TaskSource){return TaskAsset->TaskSource->GetWorld();}
	return nullptr;
}

//获取布尔值
bool UTaskAssetObjectInfoBase::GetBoolFromNameId(FName ValueId, bool& Value)
{
	Value = false;
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为布尔
		USystemValueType_Bool* Bool = Cast<USystemValueType_Bool>(Map_ValueIdToValue[ValueId]);
		if(!Bool){return false;}
		Value = Bool->bDefaultValue;
		return true;
	}
	return false;
}

//设置布尔值
bool UTaskAssetObjectInfoBase::SetBoolFromNameId(FName ValueId, bool Value)
{
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为布尔
		USystemValueType_Bool* Bool = Cast<USystemValueType_Bool>(Map_ValueIdToValue[ValueId]);
		if(!Bool){return false;}
		Bool->bDefaultValue = Value;
		return true;
	}
	return false;
}

//获取对象值
bool UTaskAssetObjectInfoBase::GetObjectFromNameId(FName ValueId, UObject*& Value)
{
	Value = nullptr;
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为布尔
		USystemValueType_Object* Object = Cast<USystemValueType_Object>(Map_ValueIdToValue[ValueId]);
		if(!Object){return false;}
		Value = Object->DefaultObject;
		return true;
	}
	return false;
}

//设置对象值
bool UTaskAssetObjectInfoBase::SetObjectFromNameId(FName ValueId, UObject* Value)
{
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为对象
		USystemValueType_Object* Object = Cast<USystemValueType_Object>(Map_ValueIdToValue[ValueId]);
		if(!Object){return false;}
		Object->DefaultObject = Value;
		return true;
	}
	return false;
}

//获取向量值
bool UTaskAssetObjectInfoBase::GetVectorFromNameId(FName ValueId, FVector& Value)
{
	Value = FVector::ZeroVector;
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为布尔
		USystemValueType_Vector* Vector = Cast<USystemValueType_Vector>(Map_ValueIdToValue[ValueId]);
		if(!Vector){return false;}
		Value = Vector->DefaultVector;
		return true;
	}
	return false;
}

//设置向量值
bool UTaskAssetObjectInfoBase::SetVectorFromNameId(FName ValueId, FVector Value)
{
	if(Map_ValueIdToValue.Find(ValueId))
	{
		//判断是否为对象
		USystemValueType_Vector* Vector = Cast<USystemValueType_Vector>(Map_ValueIdToValue[ValueId]);
		if(!Vector){return false;}
		Vector->DefaultVector = Value;
		return true;
	}
	return false;
}

//初始化信息
void UTaskAssetObjectInfoBase::InitTaskAssetObjectInfo(TMap<FName, USystemValueType*> NewValueIdToValueMap)
{
	World = UTaskAssetObjectInfoBase::GetWorld();
	//Map_ValueIdToValue = NewValueIdToValueMap;
	for(auto Value : NewValueIdToValueMap)
	{
		Map_ValueIdToValue.Add(Value.Key,DuplicateObject(Value.Value,this));
	}
	
	BlueprintInitTaskAssetObjectInfo();
}

void UTaskAssetObjectInfoBase::TaskSecondaryChanged(URuntimeTaskNodeInfo* TaskNodeInfo, FName ChangedSecondaryId,ETaskResultType TaskResultType)
{
	BlueprintTaskSecondaryChanged(TaskNodeInfo,ChangedSecondaryId,TaskResultType);
}

void UTaskAssetObjectInfoBase::TaskEnd(URuntimeTaskEndNodeInfo* TaskNodeInfo)
{
	BlueprintTaskEnd(TaskNodeInfo);
}
