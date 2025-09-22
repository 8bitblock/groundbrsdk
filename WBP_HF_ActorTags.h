
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RBHotFoot
/// dependency: UMG
/// dependency: WBP_HF_PropertyArray

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C
/// Size: 0x02A4 (676 bytes) (0x000260 - 0x0002A4) align 8 MaxSize: 0x02A4
class UWBP_HF_ActorTags_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWBP_HF_PropertyArray_C*                     WBP_HF_PropertyArray;                                       // 0x0268   (0x0008)  
	TArray<FName>                                      ProtectedTags;                                              // 0x0270   (0x0010)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x0280   (0x0008)  
	TArray<FName>                                      BaseTags;                                                   // 0x0288   (0x0010)  
	bool                                               bIdentical;                                                 // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0299   (0x0003)  MISSED
	FName                                              newTag;                                                     // 0x029C   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.SetupProperty
	// void SetupProperty(class AHFManager* HFManager, FHFSharedProperty HFSharedProperty);                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_0_OnInsert__DelegateSignature
	// void BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_0_OnInsert__DelegateSignature(int32_t Index);               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_1_OnDelete__DelegateSignature
	// void BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_1_OnDelete__DelegateSignature(int32_t Index);               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_2_OnEmpty__DelegateSignature
	// void BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_2_OnEmpty__DelegateSignature();                             // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_3_OnAdd__DelegateSignature
	// void BndEvt__WBP_HF_PropertyArray_K2Node_ComponentBoundEvent_3_OnAdd__DelegateSignature();                               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.Update
	// void Update(class AHFManager* HotFootManagerRef);                                                                        // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.SetValuesFromActors
	// void SetValuesFromActors();                                                                                              // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.AddActorTag
	// void AddActorTag(FName ActorTag, int32_t Index);                                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.OnPropertyChanged_Event
	// void OnPropertyChanged_Event(int32_t Index, FText CommitedText);                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTags.WBP_HF_ActorTags_C.ExecuteUbergraph_WBP_HF_ActorTags
	// void ExecuteUbergraph_WBP_HF_ActorTags(int32_t EntryPoint);                                                              // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_ActorTags_C) == 0x02A4); // 676 bytes (0x000260 - 0x0002A4)
static_assert(offsetof(UWBP_HF_ActorTags_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_ActorTags_C, WBP_HF_PropertyArray) == 0x0268);
static_assert(offsetof(UWBP_HF_ActorTags_C, ProtectedTags) == 0x0270);
static_assert(offsetof(UWBP_HF_ActorTags_C, HotFootManagerRef) == 0x0280);
static_assert(offsetof(UWBP_HF_ActorTags_C, BaseTags) == 0x0288);
static_assert(offsetof(UWBP_HF_ActorTags_C, newTag) == 0x029C);
