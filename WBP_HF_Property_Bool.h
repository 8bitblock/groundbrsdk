
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RBHotFoot
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_Property_Bool.WBP_HF_Property_Bool_C
/// Size: 0x02E0 (736 bytes) (0x000260 - 0x0002E0) align 8 MaxSize: 0x02E0
class UWBP_HF_Property_Bool_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UCheckBox*                                   CheckBox;                                                   // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_Name;                                             // 0x0270   (0x0008)  
	FHFSharedProperty                                  SharedProperty;                                             // 0x0278   (0x0060)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x02D8   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_Property_Bool.WBP_HF_Property_Bool_C.Update
	// void Update(class AHFManager* HotFootManagerRef);                                                                        // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Bool.WBP_HF_Property_Bool_C.BndEvt__CheckBox_79_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	// void BndEvt__CheckBox_79_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // [0x235b330] BlueprintEvent       
	// Function /RBHotFoot/WBP_HF_Property_Bool.WBP_HF_Property_Bool_C.SetupProperty
	// void SetupProperty(class AHFManager* HFManager, FHFSharedProperty HFSharedProperty);                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Bool.WBP_HF_Property_Bool_C.ExecuteUbergraph_WBP_HF_Property_Bool
	// void ExecuteUbergraph_WBP_HF_Property_Bool(int32_t EntryPoint);                                                          // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_Property_Bool_C) == 0x02E0); // 736 bytes (0x000260 - 0x0002E0)
static_assert(offsetof(UWBP_HF_Property_Bool_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_Property_Bool_C, CheckBox) == 0x0268);
static_assert(offsetof(UWBP_HF_Property_Bool_C, TextBlock_Name) == 0x0270);
static_assert(offsetof(UWBP_HF_Property_Bool_C, SharedProperty) == 0x0278);
static_assert(offsetof(UWBP_HF_Property_Bool_C, HotFootManagerRef) == 0x02D8);
