
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: EnhancedInput

#pragma pack(push, 0x1)

/// Enum /Script/GamepadPlugin.EPlayerInputType
/// Size: 0x01 (1 bytes)
enum class EPlayerInputType : uint8_t
{
	EPlayerInputType__MouseAndKeyboard                                               = 0,
	EPlayerInputType__Gamepad                                                        = 1,
	EPlayerInputType__Touch                                                          = 2,
	EPlayerInputType__Count                                                          = 3
};

/// Class /Script/GamepadPlugin.AimAssistPlayerComponent
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAimAssistPlayerComponent : public UActorComponent
{ 
public:
};

/// Struct /Script/GamepadPlugin.AimAssistTargetOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAimAssistTargetOptions
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	bool                                               bIsActive : 1;                                              // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              AimAssistModifier;                                          // 0x000C   (0x0004)  
};

/// Class /Script/GamepadPlugin.AimAssistTargetComponent
/// Size: 0x0490 (1168 bytes) (0x000470 - 0x000490) align 16 MaxSize: 0x0490
class UAimAssistTargetComponent : public UCapsuleComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0470   (0x0008)  MISSED
	FAimAssistTargetOptions                            AimTargetData;                                              // 0x0478   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0488   (0x0008)  MISSED
};

/// Class /Script/GamepadPlugin.GamepadCursorSettings
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class UGamepadCursorSettings : public UDeveloperSettings
{ 
public:
	FRuntimeFloatCurve                                 AnalogCursorAccelerationCurve;                              // 0x0038   (0x0088)  
	float                                              MaxAnalogCursorSpeed;                                       // 0x00C0   (0x0004)  
	float                                              MaxAnalogCursorSpeedWhenHovered;                            // 0x00C4   (0x0004)  
	float                                              AnalogCursorDragCoefficient;                                // 0x00C8   (0x0004)  
	float                                              AnalogCursorDragCoefficientWhenHovered;                     // 0x00CC   (0x0004)  
	float                                              MinAnalogCursorSpeed;                                       // 0x00D0   (0x0004)  
	float                                              AnalogCursorDeadZone;                                       // 0x00D4   (0x0004)  
	float                                              AnalogCursorAccelerationMultiplier;                         // 0x00D8   (0x0004)  
	float                                              AnalogCursorSize;                                           // 0x00DC   (0x0004)  
	bool                                               bUseEngineAnalogCursor;                                     // 0x00E0   (0x0001)  
	bool                                               bAnalogCursorNoAcceleration;                                // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x00E2   (0x0016)  MISSED
};

/// Class /Script/GamepadPlugin.GamepadInputSubsystem
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGamepadInputSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/GamepadPlugin.GamepadInputSubsystem.SetCurrentInputType
	// void SetCurrentInputType(EPlayerInputType NewInputType);                                                                 // [0xda0820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GamepadPlugin.AimAssistTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAimAssistTarget : public UInterface
{ 
public:
};

/// Class /Script/GamepadPlugin.InputModifierAimAssist
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputModifierAimAssist : public UInputModifier
{ 
public:
	float                                              AimSlowDown;                                                // 0x0028   (0x0004)  
	float                                              Range;                                                      // 0x002C   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/GamepadPlugin.VirtualCursorFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GamepadPlugin.VirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	// bool IsCursorOverInteractableWidget();                                                                                   // [0xda07f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GamepadPlugin.VirtualCursorFunctionLibrary.EnableVirtualCursor
	// void EnableVirtualCursor(class APlayerController* PC);                                                                   // [0xda0770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GamepadPlugin.VirtualCursorFunctionLibrary.DisableVirtualCursor
	// void DisableVirtualCursor(class APlayerController* PC);                                                                  // [0xda06f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GamepadPlugin.LyraAimAssistTarget
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FLyraAimAssistTarget
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAimAssistPlayerComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(FAimAssistTargetOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAimAssistTargetComponent) == 0x0490); // 1168 bytes (0x000470 - 0x000490)
static_assert(sizeof(UGamepadCursorSettings) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(sizeof(UGamepadInputSubsystem) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UAimAssistTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierAimAssist) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UVirtualCursorFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLyraAimAssistTarget) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(offsetof(UAimAssistTargetComponent, AimTargetData) == 0x0478);
static_assert(offsetof(UGamepadCursorSettings, AnalogCursorAccelerationCurve) == 0x0038);
