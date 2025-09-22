
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
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C
/// Size: 0x0308 (776 bytes) (0x000260 - 0x000308) align 8 MaxSize: 0x0308
class UWBP_HF_Property_Integer_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UEditableTextBox*                            EditableTextBox_String;                                     // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_Name;                                             // 0x0270   (0x0008)  
	FHFSharedProperty                                  SharedProperty;                                             // 0x0278   (0x0060)  
	class AHFManager*                                  HotFootManagerRef;                                          // 0x02D8   (0x0008)  
	FText                                              MultipleValues;                                             // 0x02E0   (0x0018)  
	FString                                            PrevGoodValue;                                              // 0x02F8   (0x0010)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C.Update
	// void Update(class AHFManager* HotFootManagerRef);                                                                        // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C.BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
	// void BndEvt__EditableTextBox_String_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x235b330] HasOutParms|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C. RevertToGoodValue
	// void RevertToGoodValue();                                                                                                // [0x235b330] BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C.SetupProperty
	// void SetupProperty(class AHFManager* HFManager, FHFSharedProperty HFSharedProperty);                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_Property_Integer.WBP_HF_Property_Integer_C.ExecuteUbergraph_WBP_HF_Property_Integer
	// void ExecuteUbergraph_WBP_HF_Property_Integer(int32_t EntryPoint);                                                       // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_Property_Integer_C) == 0x0308); // 776 bytes (0x000260 - 0x000308)
static_assert(offsetof(UWBP_HF_Property_Integer_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_Property_Integer_C, EditableTextBox_String) == 0x0268);
static_assert(offsetof(UWBP_HF_Property_Integer_C, TextBlock_Name) == 0x0270);
static_assert(offsetof(UWBP_HF_Property_Integer_C, SharedProperty) == 0x0278);
static_assert(offsetof(UWBP_HF_Property_Integer_C, HotFootManagerRef) == 0x02D8);
static_assert(offsetof(UWBP_HF_Property_Integer_C, MultipleValues) == 0x02E0);
static_assert(offsetof(UWBP_HF_Property_Integer_C, PrevGoodValue) == 0x02F8);
