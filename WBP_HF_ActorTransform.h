
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RBHotFoot
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WBP_HFRotatorSpinBox
/// dependency: WBP_HFVectorSpinBox

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C
/// Size: 0x02E0 (736 bytes) (0x000260 - 0x0002E0) align 8 MaxSize: 0x02E0
class UWBP_HF_ActorTransform_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWBP_HFRotatorSpinBox_C*                     HFRotatorSpinBox_Rotation;                                  // 0x0268   (0x0008)  
	class UWBP_HFVectorSpinBox_C*                      HFVectorSpinBox_Location;                                   // 0x0270   (0x0008)  
	class UWBP_HFVectorSpinBox_C*                      HFVectorSpinBox_Scale;                                      // 0x0278   (0x0008)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x0280   (0x0008)  
	class AActor*                                      ActorToCheck;                                               // 0x0288   (0x0008)  
	int32_t                                            NumActors;                                                  // 0x0290   (0x0004)  
	float                                              ErrorTolerance;                                             // 0x0294   (0x0004)  
	FVector                                            BaseLocation;                                               // 0x0298   (0x000C)  
	FVector                                            BaseRotation;                                               // 0x02A4   (0x000C)  
	FVector                                            BaseScale;                                                  // 0x02B0   (0x000C)  
	FVector                                            AvgLocation;                                                // 0x02BC   (0x000C)  
	FVector                                            AvgRotation;                                                // 0x02C8   (0x000C)  
	FVector                                            AvgScale;                                                   // 0x02D4   (0x000C)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.SetupProperty
	// void SetupProperty(class AHFManager* HFManager, FHFSharedProperty HFSharedProperty);                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.Update
	// void Update(class AHFManager* HotFootManagerRef);                                                                        // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_0_OnXChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_0_OnXChanged__DelegateSignature(float NewX);            // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_1_OnYChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_1_OnYChanged__DelegateSignature(float NewY);            // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_2_OnZChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Location_K2Node_ComponentBoundEvent_2_OnZChanged__DelegateSignature(float NewZ);            // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_3_OnRollChanged__DelegateSignature
	// void BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_3_OnRollChanged__DelegateSignature(float NewRoll);     // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_4_OnPitchChanged__DelegateSignature
	// void BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_4_OnPitchChanged__DelegateSignature(float NewPitch);   // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_5_OnYawChanged__DelegateSignature
	// void BndEvt__HFRotatorSpinBox_Rotation_K2Node_ComponentBoundEvent_5_OnYawChanged__DelegateSignature(float NewYaw);       // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_6_OnXChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_6_OnXChanged__DelegateSignature(float NewX);               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_7_OnYChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_7_OnYChanged__DelegateSignature(float NewY);               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_8_OnZChanged__DelegateSignature
	// void BndEvt__HFVectorSpinBox_Scale_K2Node_ComponentBoundEvent_8_OnZChanged__DelegateSignature(float NewZ);               // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.SetValuesFromActors
	// void SetValuesFromActors();                                                                                              // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_ActorTransform.WBP_HF_ActorTransform_C.ExecuteUbergraph_WBP_HF_ActorTransform
	// void ExecuteUbergraph_WBP_HF_ActorTransform(int32_t EntryPoint);                                                         // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_ActorTransform_C) == 0x02E0); // 736 bytes (0x000260 - 0x0002E0)
static_assert(offsetof(UWBP_HF_ActorTransform_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_ActorTransform_C, HFRotatorSpinBox_Rotation) == 0x0268);
static_assert(offsetof(UWBP_HF_ActorTransform_C, HFVectorSpinBox_Location) == 0x0270);
static_assert(offsetof(UWBP_HF_ActorTransform_C, HFVectorSpinBox_Scale) == 0x0278);
static_assert(offsetof(UWBP_HF_ActorTransform_C, HotFootManagerRef) == 0x0280);
static_assert(offsetof(UWBP_HF_ActorTransform_C, ActorToCheck) == 0x0288);
static_assert(offsetof(UWBP_HF_ActorTransform_C, BaseLocation) == 0x0298);
static_assert(offsetof(UWBP_HF_ActorTransform_C, BaseRotation) == 0x02A4);
static_assert(offsetof(UWBP_HF_ActorTransform_C, BaseScale) == 0x02B0);
static_assert(offsetof(UWBP_HF_ActorTransform_C, AvgLocation) == 0x02BC);
static_assert(offsetof(UWBP_HF_ActorTransform_C, AvgRotation) == 0x02C8);
static_assert(offsetof(UWBP_HF_ActorTransform_C, AvgScale) == 0x02D4);
