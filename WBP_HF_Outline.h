
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
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C
/// Size: 0x0310 (784 bytes) (0x000260 - 0x000310) align 8 MaxSize: 0x0310
class UWBP_HF_Outline_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_Search;                                     // 0x0268   (0x0008)  
	class UListView*                                   ListView_Outline;                                           // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x0278   (0x0008)  
	bool                                               bAscendingOrder;                                            // 0x0280   (0x0001)  
	bool                                               bByClass;                                                   // 0x0281   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0282   (0x0006)  MISSED
	TArray<class AActor*>                              ActorList;                                                  // 0x0288   (0x0010)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x0298   (0x0008)  
	bool                                               bMultiSelectHack;                                           // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02A1   (0x0007)  MISSED
	TArray<class AActor*>                              RemovedItems;                                               // 0x02A8   (0x0010)  
	TArray<class UObject*>                             SelectedItems_List;                                         // 0x02B8   (0x0010)  
	TArray<class AActor*>                              SelectItems_Manager;                                        // 0x02C8   (0x0010)  
	class UObject*                                     StartIndexItem;                                             // 0x02D8   (0x0008)  
	class UObject*                                     EndIndexItem;                                               // 0x02E0   (0x0008)  
	bool                                               bLeftShift;                                                 // 0x02E8   (0x0001)  
	bool                                               bRightShift;                                                // 0x02E9   (0x0001)  
	bool                                               bLeftCtrl;                                                  // 0x02EA   (0x0001)  
	bool                                               bRightCtrl;                                                 // 0x02EB   (0x0001)  
	int32_t                                            StartIndex;                                                 // 0x02EC   (0x0004)  
	int32_t                                            EndIndex;                                                   // 0x02F0   (0x0004)  
	bool                                               bNothingSelectedInView;                                     // 0x02F4   (0x0001)  
	bool                                               bCallOutlineSelectionChange;                                // 0x02F5   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x02F6   (0x0002)  MISSED
	SDK_UNDEFINED(16,532) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x02F8   (0x0010)  
	FName                                              ActorTag;                                                   // 0x0308   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.HandleKeyDown
	// FEventReply HandleKeyDown(FKeyEvent KeyEvent);                                                                           // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.GetText
	// FText GetText();                                                                                                         // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.GetSortedAndFilteredList
	// void GetSortedAndFilteredList(TArray<AActor*>& OutFilteredActors);                                                       // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnSelectionChanged_Event
	// void OnSelectionChanged_Event();                                                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BindOnSelectionChanged
	// void BindOnSelectionChanged();                                                                                           // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.UpdateOutline
	// void UpdateOutline();                                                                                                    // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.Bind ActorStatusChangeDelegates
	// void BindActorStatusChangeDelegates();                                                                                   // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnActorSpawned_Event
	// void OnActorSpawned_Event(class AActor* Actor);                                                                          // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature
	// void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_20_OnListItemSelectionChangedDynamic__DelegateSignature
	// void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_20_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.ControlSelect
	// void ControlSelect();                                                                                                    // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.ShiftSelect
	// void ShiftSelect();                                                                                                      // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__EditableTextBox_TeamId_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature
	// void BndEvt__EditableTextBox_TeamId_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text); // [0x235b330] HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	// void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnLeftShift_Event
	// void OnLeftShift_Event(bool bDown);                                                                                      // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnRightShift_Event
	// void OnRightShift_Event(bool bDown);                                                                                     // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnLeftCtrl_Event
	// void OnLeftCtrl_Event(bool bDown);                                                                                       // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnRightCtrl_Event
	// void OnRightCtrl_Event(bool bDown);                                                                                      // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature
	// void BndEvt__ListView_Outline_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.SetHotfootManager
	// void SetHotfootManager(class AHFManager* HotFootManagerRef, FName ActorTag);                                             // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.BndEvt__WBP_HF_Outline_ListView_Outline_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
	// void BndEvt__WBP_HF_Outline_ListView_Outline_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnForwardedKeyDown
	// void OnForwardedKeyDown();                                                                                               // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.ExecuteUbergraph_WBP_HF_Outline
	// void ExecuteUbergraph_WBP_HF_Outline(int32_t EntryPoint);                                                                // [0x235b330] Final|HasDefaults    
	// Function /RBHotFoot/WBP_HF_Outline.WBP_HF_Outline_C.OnSelectionChanged__DelegateSignature
	// void OnSelectionChanged__DelegateSignature();                                                                            // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_Outline_C) == 0x0310); // 784 bytes (0x000260 - 0x000310)
static_assert(offsetof(UWBP_HF_Outline_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_Outline_C, EditableTextBox_Search) == 0x0268);
static_assert(offsetof(UWBP_HF_Outline_C, ListView_Outline) == 0x0270);
static_assert(offsetof(UWBP_HF_Outline_C, TextBlock) == 0x0278);
static_assert(offsetof(UWBP_HF_Outline_C, ActorList) == 0x0288);
static_assert(offsetof(UWBP_HF_Outline_C, HotFootManagerRef) == 0x0298);
static_assert(offsetof(UWBP_HF_Outline_C, RemovedItems) == 0x02A8);
static_assert(offsetof(UWBP_HF_Outline_C, SelectedItems_List) == 0x02B8);
static_assert(offsetof(UWBP_HF_Outline_C, SelectItems_Manager) == 0x02C8);
static_assert(offsetof(UWBP_HF_Outline_C, StartIndexItem) == 0x02D8);
static_assert(offsetof(UWBP_HF_Outline_C, EndIndexItem) == 0x02E0);
static_assert(offsetof(UWBP_HF_Outline_C, ActorTag) == 0x0308);
