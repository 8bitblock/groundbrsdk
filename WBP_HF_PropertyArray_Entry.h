
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
/// dependency: WBP_HF_PropertyArray_Entry_DropDown

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C
/// Size: 0x02B8 (696 bytes) (0x000260 - 0x0002B8) align 8 MaxSize: 0x02B8
class UWBP_HF_PropertyArray_Entry_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border_Background;                                          // 0x0268   (0x0008)  
	class UCheckBox*                                   CheckBox;                                                   // 0x0270   (0x0008)  
	class UHorizontalBox*                              Container;                                                  // 0x0278   (0x0008)  
	class UImage*                                      Image_UIDropShadow;                                         // 0x0280   (0x0008)  
	class UMenuAnchor*                                 MenuAnchor_Options;                                         // 0x0288   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,533) /* FMulticastInlineDelegate */ __um(OnInsert);                                           // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,534) /* FMulticastInlineDelegate */ __um(OnDelete);                                           // 0x02A8   (0x0010)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.GetText
	// FText GetText();                                                                                                         // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.GetOptionsContent
	// class UWidget* GetOptionsContent();                                                                                      // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.GetBrushColor
	// FLinearColor GetBrushColor();                                                                                            // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.BindMenuContent
	// void BindMenuContent(class UWBP_HF_PropertyArray_Entry_DropDown_C* MenuContent);                                         // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.OnInsertClicked_Event
	// void OnInsertClicked_Event();                                                                                            // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.OnDeleteClicked_Event
	// void OnDeleteClicked_Event();                                                                                            // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.BndEvt__CheckBox_90_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__CheckBox_90_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.ExecuteUbergraph_WBP_HF_PropertyArray_Entry
	// void ExecuteUbergraph_WBP_HF_PropertyArray_Entry(int32_t EntryPoint);                                                    // [0x235b330] Final                
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.OnDelete__DelegateSignature
	// void OnDelete__DelegateSignature(class UWBP_HF_PropertyArray_Entry_C* Entry);                                            // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PropertyArray_Entry.WBP_HF_PropertyArray_Entry_C.OnInsert__DelegateSignature
	// void OnInsert__DelegateSignature(class UWBP_HF_PropertyArray_Entry_C* Entry);                                            // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_PropertyArray_Entry_C) == 0x02B8); // 696 bytes (0x000260 - 0x0002B8)
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, Border_Background) == 0x0268);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, CheckBox) == 0x0270);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, Container) == 0x0278);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, Image_UIDropShadow) == 0x0280);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, MenuAnchor_Options) == 0x0288);
static_assert(offsetof(UWBP_HF_PropertyArray_Entry_C, TextBlock) == 0x0290);
