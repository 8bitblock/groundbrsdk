
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG
/// dependency: WBP_HF_PropertyArray_Entry

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C
/// Size: 0x02FC (764 bytes) (0x000260 - 0x0002FC) align 8 MaxSize: 0x02FC
class UWBP_HF_PropertyArray_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_AddNew;                                              // 0x0268   (0x0008)  
	class UButton*                                     Button_Empty;                                               // 0x0270   (0x0008)  
	class UExpandableArea*                             ExpandableArea;                                             // 0x0278   (0x0008)  
	class UListView*                                   ListView_ArrayItems;                                        // 0x0280   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x0288   (0x0008)  
	class UTextBlock*                                  TextBlock_Category;                                         // 0x0290   (0x0008)  
	FText                                              Category;                                                   // 0x0298   (0x0018)  
	SDK_UNDEFINED(16,535) /* FMulticastInlineDelegate */ __um(OnInsert);                                           // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,536) /* FMulticastInlineDelegate */ __um(OnDelete);                                           // 0x02C0   (0x0010)  
	bool                                               bCanEmpty;                                                  // 0x02D0   (0x0001)  
	bool                                               bCanAdd;                                                    // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02D2   (0x0006)  MISSED
	SDK_UNDEFINED(16,537) /* FMulticastInlineDelegate */ __um(OnEmpty);                                            // 0x02D8   (0x0010)  
	SDK_UNDEFINED(16,538) /* FMulticastInlineDelegate */ __um(OnAdd);                                              // 0x02E8   (0x0010)  
	int32_t                                            PrevSelectedIndex;                                          // 0x02F8   (0x0004)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.GetNumberElementsText
	// FText GetNumberElementsText();                                                                                           // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__Button_Empty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Empty_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();                        // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__Button_AddNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_AddNew_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();                       // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	// void BndEvt__ListView_ArrayItems_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnInsert_Event
	// void OnInsert_Event(class UWBP_HF_PropertyArray_Entry_C* Entry);                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnDelete_Event
	// void OnDelete_Event(class UWBP_HF_PropertyArray_Entry_C* Entry);                                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.ExecuteUbergraph_WBP_HF_PropertyArray
	// void ExecuteUbergraph_WBP_HF_PropertyArray(int32_t EntryPoint);                                                          // [0x235b330] Final                
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnAdd__DelegateSignature
	// void OnAdd__DelegateSignature();                                                                                         // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnEmpty__DelegateSignature
	// void OnEmpty__DelegateSignature();                                                                                       // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnDelete__DelegateSignature
	// void OnDelete__DelegateSignature(int32_t Index);                                                                         // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray.WBP_HF_PropertyArray_C.OnInsert__DelegateSignature
	// void OnInsert__DelegateSignature(int32_t Index);                                                                         // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_PropertyArray_C) == 0x02FC); // 764 bytes (0x000260 - 0x0002FC)
static_assert(offsetof(UWBP_HF_PropertyArray_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_PropertyArray_C, Button_AddNew) == 0x0268);
static_assert(offsetof(UWBP_HF_PropertyArray_C, Button_Empty) == 0x0270);
static_assert(offsetof(UWBP_HF_PropertyArray_C, ExpandableArea) == 0x0278);
static_assert(offsetof(UWBP_HF_PropertyArray_C, ListView_ArrayItems) == 0x0280);
static_assert(offsetof(UWBP_HF_PropertyArray_C, TextBlock) == 0x0288);
static_assert(offsetof(UWBP_HF_PropertyArray_C, TextBlock_Category) == 0x0290);
static_assert(offsetof(UWBP_HF_PropertyArray_C, Category) == 0x0298);
