
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

/// Class /RBHotFoot/WBP_HF_TabButton.WBP_HF_TabButton_C
/// Size: 0x02A0 (672 bytes) (0x000260 - 0x0002A0) align 8 MaxSize: 0x02A0
class UWBP_HF_TabButton_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UButton*                                     Button_Tab;                                                 // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_Tab;                                              // 0x0270   (0x0008)  
	FText                                              TabText;                                                    // 0x0278   (0x0018)  
	SDK_UNDEFINED(16,539) /* FMulticastInlineDelegate */ __um(OnTabClicked);                                       // 0x0290   (0x0010)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_TabButton.WBP_HF_TabButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_TabButton.WBP_HF_TabButton_C.BndEvt__WBP_HF_TabButton_Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_HF_TabButton_Button_Tab_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();         // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_TabButton.WBP_HF_TabButton_C.ExecuteUbergraph_WBP_HF_TabButton
	// void ExecuteUbergraph_WBP_HF_TabButton(int32_t EntryPoint);                                                              // [0x235b330] Final                
	// Function /RBHotFoot/WBP_HF_TabButton.WBP_HF_TabButton_C.OnTabClicked__DelegateSignature
	// void OnTabClicked__DelegateSignature();                                                                                  // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_TabButton_C) == 0x02A0); // 672 bytes (0x000260 - 0x0002A0)
static_assert(offsetof(UWBP_HF_TabButton_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_TabButton_C, Button_Tab) == 0x0268);
static_assert(offsetof(UWBP_HF_TabButton_C, TextBlock_Tab) == 0x0270);
static_assert(offsetof(UWBP_HF_TabButton_C, TabText) == 0x0278);
