
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C
/// Size: 0x0278 (632 bytes) (0x000260 - 0x000278) align 8 MaxSize: 0x0278
class UWBP_HF_PlaceableDragIcon_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UImage*                                      Image_Icon;                                                 // 0x0268   (0x0008)  
	class UTexture2D*                                  Icon;                                                       // 0x0270   (0x0008)  


	/// Functions
	// Function /RBHotFoot/WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C.Construct
	// void Construct();                                                                                                        // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /RBHotFoot/WBP_HF_PlaceableDragIcon.WBP_HF_PlaceableDragIcon_C.ExecuteUbergraph_WBP_HF_PlaceableDragIcon
	// void ExecuteUbergraph_WBP_HF_PlaceableDragIcon(int32_t EntryPoint);                                                      // [0x235b330] Final                
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_PlaceableDragIcon_C) == 0x0278); // 632 bytes (0x000260 - 0x000278)
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, Image_Icon) == 0x0268);
static_assert(offsetof(UWBP_HF_PlaceableDragIcon_C, Icon) == 0x0270);
