
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

/// Class /RBHotFoot/WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C
/// Size: 0x0288 (648 bytes) (0x000260 - 0x000288) align 8 MaxSize: 0x0288
class UWBP_HF_DetailsNameClass_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UTextBlock*                                  TextBlock_Class;                                            // 0x0268   (0x0008)  
	class UTextBlock*                                  TextBlock_Name;                                             // 0x0270   (0x0008)  
	bool                                               bIdentical;                                                 // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0279   (0x0007)  MISSED
	class UClass*                                      BaseClass;                                                  // 0x0280   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.SetupProperty
	// void SetupProperty(class AHFManager* HFManager, FHFSharedProperty HFSharedProperty);                                     // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.Update
	// void Update(class AHFManager* HotFootManagerRef);                                                                        // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_DetailsNameClass.WBP_HF_DetailsNameClass_C.ExecuteUbergraph_WBP_HF_DetailsNameClass
	// void ExecuteUbergraph_WBP_HF_DetailsNameClass(int32_t EntryPoint);                                                       // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_DetailsNameClass_C) == 0x0288); // 648 bytes (0x000260 - 0x000288)
static_assert(offsetof(UWBP_HF_DetailsNameClass_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_DetailsNameClass_C, TextBlock_Class) == 0x0268);
static_assert(offsetof(UWBP_HF_DetailsNameClass_C, TextBlock_Name) == 0x0270);
static_assert(offsetof(UWBP_HF_DetailsNameClass_C, BaseClass) == 0x0280);
