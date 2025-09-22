
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C
/// Size: 0x0338 (824 bytes) (0x000260 - 0x000338) align 8 MaxSize: 0x0338
class UWBP_HF_OutlineEntry_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border_Background;                                          // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_ActorClass;                                       // 0x0270   (0x0008)  
	class UTextBlock*                                  TextBlock_ActorName;                                        // 0x0278   (0x0008)  
	FSlateColor                                        FontSelectedColour;                                         // 0x0280   (0x0028)  
	FSlateColor                                        FontDefaultColour;                                          // 0x02A8   (0x0028)  
	FLinearColor                                       BackgroundSelectedColour;                                   // 0x02D0   (0x0010)  
	FLinearColor                                       BackgroundDefaultColour;                                    // 0x02E0   (0x0010)  
	bool                                               bLeftShiftDown;                                             // 0x02F0   (0x0001)  
	bool                                               bRightShiftDown;                                            // 0x02F1   (0x0001)  
	bool                                               bLeftCtrlDown;                                              // 0x02F2   (0x0001)  
	bool                                               bRightCtrlDown;                                             // 0x02F3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02F4   (0x0004)  MISSED
	SDK_UNDEFINED(16,924) /* FMulticastInlineDelegate */ __um(OnLeftShift);                                        // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,925) /* FMulticastInlineDelegate */ __um(OnRightShift);                                       // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,926) /* FMulticastInlineDelegate */ __um(OnLeftCtrl);                                         // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,927) /* FMulticastInlineDelegate */ __um(OnRightCtrl);                                        // 0x0328   (0x0010)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                                 // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.ExecuteUbergraph_WBP_HF_OutlineEntry
	// void ExecuteUbergraph_WBP_HF_OutlineEntry(int32_t EntryPoint);                                                           // [0x235b330] Final|HasDefaults    
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnRightCtrl__DelegateSignature
	// void OnRightCtrl__DelegateSignature(bool bDown);                                                                         // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnLeftCtrl__DelegateSignature
	// void OnLeftCtrl__DelegateSignature(bool bDown);                                                                          // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnRightShift__DelegateSignature
	// void OnRightShift__DelegateSignature(bool bDown);                                                                        // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_OutlineEntry.WBP_HF_OutlineEntry_C.OnLeftShift__DelegateSignature
	// void OnLeftShift__DelegateSignature(bool bDown);                                                                         // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_OutlineEntry_C) == 0x0338); // 824 bytes (0x000260 - 0x000338)
static_assert(offsetof(UWBP_HF_OutlineEntry_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, Border_Background) == 0x0268);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, TextBlock_ActorClass) == 0x0270);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, TextBlock_ActorName) == 0x0278);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, FontSelectedColour) == 0x0280);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, FontDefaultColour) == 0x02A8);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, BackgroundSelectedColour) == 0x02D0);
static_assert(offsetof(UWBP_HF_OutlineEntry_C, BackgroundDefaultColour) == 0x02E0);
