
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

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C
/// Size: 0x0294 (660 bytes) (0x000260 - 0x000294) align 8 MaxSize: 0x0294
class UWBP_HF_PropertyArray_StringItem_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_Property;                                   // 0x0268   (0x0008)  
	FString                                            PropertyString;                                             // 0x0270   (0x0010)  
	SDK_UNDEFINED(16,928) /* FMulticastInlineDelegate */ __um(OnPropertyChanged);                                  // 0x0280   (0x0010)  
	int32_t                                            Index;                                                      // 0x0290   (0x0004)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.Construct
	// void Construct();                                                                                                        // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	// void BndEvt__EditableTextBox_Property_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.ExecuteUbergraph_WBP_HF_PropertyArray_StringItem
	// void ExecuteUbergraph_WBP_HF_PropertyArray_StringItem(int32_t EntryPoint);                                               // [0x235b330] Final|HasDefaults    
	// Function /RBHotFoot/WBP_HF_PropertyArray_StringItem.WBP_HF_PropertyArray_StringItem_C.OnPropertyChanged__DelegateSignature
	// void OnPropertyChanged__DelegateSignature(int32_t Index, FText CommitedText);                                            // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_PropertyArray_StringItem_C) == 0x0294); // 660 bytes (0x000260 - 0x000294)
static_assert(offsetof(UWBP_HF_PropertyArray_StringItem_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_PropertyArray_StringItem_C, EditableTextBox_Property) == 0x0268);
static_assert(offsetof(UWBP_HF_PropertyArray_StringItem_C, PropertyString) == 0x0270);
