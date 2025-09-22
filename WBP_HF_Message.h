
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /RBHotFoot/WBP_HF_Message.WBP_HF_Message_C
/// Size: 0x0280 (640 bytes) (0x000260 - 0x000280) align 8 MaxSize: 0x0280
class UWBP_HF_Message_C : public UUserWidget
{ 
public:
	class UTextBlock*                                  TextBlock;                                                  // 0x0260   (0x0008)  
	FText                                              Message;                                                    // 0x0268   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UWBP_HF_Message_C) == 0x0280); // 640 bytes (0x000260 - 0x000280)
static_assert(offsetof(UWBP_HF_Message_C, TextBlock) == 0x0260);
static_assert(offsetof(UWBP_HF_Message_C, Message) == 0x0268);
