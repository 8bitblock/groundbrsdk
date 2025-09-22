
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/StreamlineRHI.EStreamlineSettingOverride
/// Size: 0x01 (1 bytes)
enum class EStreamlineSettingOverride : uint8_t
{
	EStreamlineSettingOverride__Enabled                                              = 0,
	EStreamlineSettingOverride__Disabled                                             = 1,
	EStreamlineSettingOverride__UseProjectSettings                                   = 2
};

/// Class /Script/StreamlineRHI.StreamlineOverrideSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UStreamlineOverrideSettings : public UObject
{ 
public:
	EStreamlineSettingOverride                         EnableDLSSFGInPlayInEditorViewportsOverride;                // 0x0028   (0x0001)  
	EStreamlineSettingOverride                         LoadDebugOverlayOverride;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Class /Script/StreamlineRHI.StreamlineSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UStreamlineSettings : public UObject
{ 
public:
	bool                                               bEnableStreamlineD3D12;                                     // 0x0028   (0x0001)  
	bool                                               bEnableStreamlineD3D11;                                     // 0x0029   (0x0001)  
	bool                                               bEnableDLSSFGInPlayInEditorViewports;                       // 0x002A   (0x0001)  
	bool                                               bLoadDebugOverlay;                                          // 0x002B   (0x0001)  
	bool                                               bAllowOTAUpdate;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            NVIDIANGXApplicationId;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UStreamlineOverrideSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStreamlineSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UStreamlineOverrideSettings, EnableDLSSFGInPlayInEditorViewportsOverride) == 0x0028);
static_assert(offsetof(UStreamlineOverrideSettings, LoadDebugOverlayOverride) == 0x0029);
