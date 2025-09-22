
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C
/// Size: 0x0373 (883 bytes) (0x000260 - 0x000373) align 8 MaxSize: 0x0373
class UWBP_HFVectorSpinBox_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border_BadX;                                                // 0x0268   (0x0008)  
	class UBorder*                                     Border_BadY;                                                // 0x0270   (0x0008)  
	class UBorder*                                     Border_BadZ;                                                // 0x0278   (0x0008)  
	class UBorder*                                     Border_X;                                                   // 0x0280   (0x0008)  
	class UBorder*                                     Border_Y;                                                   // 0x0288   (0x0008)  
	class UBorder*                                     Border_Z;                                                   // 0x0290   (0x0008)  
	class USpinBox*                                    SpinBox_X;                                                  // 0x0298   (0x0008)  
	class USpinBox*                                    SpinBox_Y;                                                  // 0x02A0   (0x0008)  
	class USpinBox*                                    SpinBox_Z;                                                  // 0x02A8   (0x0008)  
	class UTextBlock*                                  TextBlock;                                                  // 0x02B0   (0x0008)  
	class UTextBlock*                                  TextBlock0;                                                 // 0x02B8   (0x0008)  
	FText                                              XToolTipText;                                               // 0x02C0   (0x0018)  
	FText                                              YToolTipText;                                               // 0x02D8   (0x0018)  
	FText                                              ZToolTipText;                                               // 0x02F0   (0x0018)  
	bool                                               bBadX;                                                      // 0x0308   (0x0001)  
	bool                                               bBadY;                                                      // 0x0309   (0x0001)  
	bool                                               bBadZ;                                                      // 0x030A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x030B   (0x0005)  MISSED
	FText                                              BadText;                                                    // 0x0310   (0x0018)  
	FText                                              BadToolTipText;                                             // 0x0328   (0x0018)  
	SDK_UNDEFINED(16,921) /* FMulticastInlineDelegate */ __um(OnXChanged);                                         // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,922) /* FMulticastInlineDelegate */ __um(OnYChanged);                                         // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,923) /* FMulticastInlineDelegate */ __um(OnZChanged);                                         // 0x0360   (0x0010)  
	bool                                               bBadHoverX;                                                 // 0x0370   (0x0001)  
	bool                                               bBadHoverY;                                                 // 0x0371   (0x0001)  
	bool                                               bBadHoverZ;                                                 // 0x0372   (0x0001)  


	/// Functions
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.GetVisibility_BadZ
	// ESlateVisibility GetVisibility_BadZ();                                                                                   // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.GetVisibility_BadY
	// ESlateVisibility GetVisibility_BadY();                                                                                   // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.GetVisibility_BadX
	// ESlateVisibility GetVisibility_BadX();                                                                                   // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.Get_Border_Z_ToolTipText
	// FText Get_Border_Z_ToolTipText();                                                                                        // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.Get_Border_Y_ToolTipText
	// FText Get_Border_Y_ToolTipText();                                                                                        // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.Get_Border_X_ToolTipText
	// FText Get_Border_X_ToolTipText();                                                                                        // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.UpdateFromVector
	// void UpdateFromVector(FVector Vector);                                                                                   // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.BndEvt__SpinBox_X_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_X_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.BndEvt__SpinBox_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_Y_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.BndEvt__SpinBox_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_Z_K2Node_ComponentBoundEvent_2_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.ClearBadValues
	// void ClearBadValues();                                                                                                   // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.ExecuteUbergraph_WBP_HFVectorSpinBox
	// void ExecuteUbergraph_WBP_HFVectorSpinBox(int32_t EntryPoint);                                                           // [0x235b330] Final|HasDefaults    
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.OnZChanged__DelegateSignature
	// void OnZChanged__DelegateSignature(float NewZ);                                                                          // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.OnYChanged__DelegateSignature
	// void OnYChanged__DelegateSignature(float NewY);                                                                          // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFVectorSpinBox.WBP_HFVectorSpinBox_C.OnXChanged__DelegateSignature
	// void OnXChanged__DelegateSignature(float NewX);                                                                          // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HFVectorSpinBox_C) == 0x0373); // 883 bytes (0x000260 - 0x000373)
static_assert(offsetof(UWBP_HFVectorSpinBox_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_BadX) == 0x0268);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_BadY) == 0x0270);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_BadZ) == 0x0278);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_X) == 0x0280);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_Y) == 0x0288);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, Border_Z) == 0x0290);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, SpinBox_X) == 0x0298);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, SpinBox_Y) == 0x02A0);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, SpinBox_Z) == 0x02A8);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, TextBlock) == 0x02B0);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, TextBlock0) == 0x02B8);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, XToolTipText) == 0x02C0);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, YToolTipText) == 0x02D8);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, ZToolTipText) == 0x02F0);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, BadText) == 0x0310);
static_assert(offsetof(UWBP_HFVectorSpinBox_C, BadToolTipText) == 0x0328);
