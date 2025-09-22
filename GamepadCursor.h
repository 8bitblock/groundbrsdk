
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

/// Class /GamepadPlugin/GamepadCursor.GamepadCursor_C
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 8 MaxSize: 0x0290
class UGamepadCursor_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            FadeRing;                                                   // 0x0268   (0x0008)  
	class UWidgetAnimation*                            Rotate;                                                     // 0x0270   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0278   (0x0008)  
	class UImage*                                      Ring;                                                       // 0x0280   (0x0008)  
	bool                                               Spinning;                                                   // 0x0288   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0289   (0x0003)  MISSED
	float                                              SpinningAnimationTime;                                      // 0x028C   (0x0004)  


	/// Functions
	// Function /GamepadPlugin/GamepadCursor.GamepadCursor_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x235b330] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /GamepadPlugin/GamepadCursor.GamepadCursor_C.ExecuteUbergraph_GamepadCursor
	// void ExecuteUbergraph_GamepadCursor(int32_t EntryPoint);                                                                 // [0x235b330] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UGamepadCursor_C) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(offsetof(UGamepadCursor_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UGamepadCursor_C, FadeRing) == 0x0268);
static_assert(offsetof(UGamepadCursor_C, Rotate) == 0x0270);
static_assert(offsetof(UGamepadCursor_C, Image) == 0x0278);
static_assert(offsetof(UGamepadCursor_C, Ring) == 0x0280);
