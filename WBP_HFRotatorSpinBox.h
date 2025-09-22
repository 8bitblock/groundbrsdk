
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

/// Class /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C
/// Size: 0x0363 (867 bytes) (0x000260 - 0x000363) align 8 MaxSize: 0x0363
class UWBP_HFRotatorSpinBox_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UBorder*                                     Border_BadPitch;                                            // 0x0268   (0x0008)  
	class UBorder*                                     Border_BadRoll;                                             // 0x0270   (0x0008)  
	class UBorder*                                     Border_BadYaw;                                              // 0x0278   (0x0008)  
	class UBorder*                                     Border_Pitch;                                               // 0x0280   (0x0008)  
	class UBorder*                                     Border_Roll;                                                // 0x0288   (0x0008)  
	class UBorder*                                     Border_Yaw;                                                 // 0x0290   (0x0008)  
	class USpinBox*                                    SpinBox_Pitch;                                              // 0x0298   (0x0008)  
	class USpinBox*                                    SpinBox_Roll;                                               // 0x02A0   (0x0008)  
	class USpinBox*                                    SpinBox_Yaw;                                                // 0x02A8   (0x0008)  
	FText                                              RollToolTipText;                                            // 0x02B0   (0x0018)  
	FText                                              PitchToolTipText;                                           // 0x02C8   (0x0018)  
	FText                                              YawToolTipText;                                             // 0x02E0   (0x0018)  
	bool                                               bBadRoll;                                                   // 0x02F8   (0x0001)  
	bool                                               bBadPitch;                                                  // 0x02F9   (0x0001)  
	bool                                               bBadYaw;                                                    // 0x02FA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x02FB   (0x0005)  MISSED
	FText                                              BadText;                                                    // 0x0300   (0x0018)  
	FText                                              BadToolTipText;                                             // 0x0318   (0x0018)  
	SDK_UNDEFINED(16,918) /* FMulticastInlineDelegate */ __um(OnRollChanged);                                      // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,919) /* FMulticastInlineDelegate */ __um(OnPitchChanged);                                     // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,920) /* FMulticastInlineDelegate */ __um(OnYawChanged);                                       // 0x0350   (0x0010)  
	bool                                               bBadHoverRoll;                                              // 0x0360   (0x0001)  
	bool                                               bBadHoverPitch;                                             // 0x0361   (0x0001)  
	bool                                               bBadHoverYaw;                                               // 0x0362   (0x0001)  


	/// Functions
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.GetVisibility_BadYaw
	// ESlateVisibility GetVisibility_BadYaw();                                                                                 // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.GetVisibility_BadPitch
	// ESlateVisibility GetVisibility_BadPitch();                                                                               // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.GetVisibility_BadRoll
	// ESlateVisibility GetVisibility_BadRoll();                                                                                // [0x235b330] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.Get_Border_Yaw_ToolTipText
	// FText Get_Border_Yaw_ToolTipText();                                                                                      // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.Get_Border_Pitch_ToolTipText
	// FText Get_Border_Pitch_ToolTipText();                                                                                    // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.Get_Border_Roll_ToolTipText
	// FText Get_Border_Roll_ToolTipText();                                                                                     // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.UpdateFromRotator
	// void UpdateFromRotator(FRotator Rotation);                                                                               // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.BndEvt__SpinBox_Roll_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_Roll_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.BndEvt__SpinBox_Pitch_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_Pitch_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.BndEvt__SpinBox_Yaw_K2Node_ComponentBoundEvent_2_OnSpinBoxValueCommittedEvent__DelegateSignature
	// void BndEvt__SpinBox_Yaw_K2Node_ComponentBoundEvent_2_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.ExecuteUbergraph_WBP_HFRotatorSpinBox
	// void ExecuteUbergraph_WBP_HFRotatorSpinBox(int32_t EntryPoint);                                                          // [0x235b330] Final|HasDefaults    
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.OnYawChanged__DelegateSignature
	// void OnYawChanged__DelegateSignature(float NewYaw);                                                                      // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.OnPitchChanged__DelegateSignature
	// void OnPitchChanged__DelegateSignature(float NewPitch);                                                                  // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HFRotatorSpinBox.WBP_HFRotatorSpinBox_C.OnRollChanged__DelegateSignature
	// void OnRollChanged__DelegateSignature(float NewRoll);                                                                    // [0x235b330] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HFRotatorSpinBox_C) == 0x0363); // 867 bytes (0x000260 - 0x000363)
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_BadPitch) == 0x0268);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_BadRoll) == 0x0270);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_BadYaw) == 0x0278);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_Pitch) == 0x0280);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_Roll) == 0x0288);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, Border_Yaw) == 0x0290);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, SpinBox_Pitch) == 0x0298);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, SpinBox_Roll) == 0x02A0);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, SpinBox_Yaw) == 0x02A8);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, RollToolTipText) == 0x02B0);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, PitchToolTipText) == 0x02C8);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, YawToolTipText) == 0x02E0);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, BadText) == 0x0300);
static_assert(offsetof(UWBP_HFRotatorSpinBox_C, BadToolTipText) == 0x0318);
