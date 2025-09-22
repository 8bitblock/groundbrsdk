
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WwiseFileHandler

#pragma pack(push, 0x1)

/// Enum /Script/WwiseResourceLoader.EWwiseEventDestroyOptions
/// Size: 0x01 (1 bytes)
enum class EWwiseEventDestroyOptions : uint8_t
{
	EWwiseEventDestroyOptions__StopEventOnDestroy                                    = 0,
	EWwiseEventDestroyOptions__WaitForEventEnd                                       = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseEventSwitchContainerLoading
/// Size: 0x01 (1 bytes)
enum class EWwiseEventSwitchContainerLoading : uint8_t
{
	EWwiseEventSwitchContainerLoading__AlwaysLoad                                    = 0,
	EWwiseEventSwitchContainerLoading__LoadOnReference                               = 1
};

/// Enum /Script/WwiseResourceLoader.EWwiseGroupType
/// Size: 0x01 (1 bytes)
enum class EWwiseGroupType : uint8_t
{
	EWwiseGroupType__Switch                                                          = 0,
	EWwiseGroupType__State                                                           = 1,
	EWwiseGroupType__Unknown                                                         = 255
};

/// Enum /Script/WwiseResourceLoader.EWwiseReloadLanguage
/// Size: 0x01 (1 bytes)
enum class EWwiseReloadLanguage : uint8_t
{
	Manual                                                                           = 0,
	Immediate                                                                        = 1,
	Safe                                                                             = 2
};

/// Class /Script/WwiseResourceLoader.WwiseEventInfoLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWwiseEventInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseShortId
	// FWwiseEventInfo SetWwiseShortId(FWwiseEventInfo& Ref, int32_t WwiseShortId);                                             // [0xd62160] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseName
	// FWwiseEventInfo SetWwiseName(FWwiseEventInfo& Ref, FString WwiseName);                                                   // [0xd61d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetWwiseGuid
	// FWwiseEventInfo SetWwiseGuid(FWwiseEventInfo& Ref, FGuid& WwiseGuid);                                                    // [0xd61b10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetSwitchContainerLoading
	// FWwiseEventInfo SetSwitchContainerLoading(FWwiseEventInfo& Ref, EWwiseEventSwitchContainerLoading& SwitchContainerLoading); // [0xd619f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetHardCodedSoundBankShortId
	// FWwiseEventInfo SetHardCodedSoundBankShortId(FWwiseEventInfo& Ref, int32_t HardCodedSoundBankShortId);                   // [0xd617c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.SetDestroyOptions
	// FWwiseEventInfo SetDestroyOptions(FWwiseEventInfo& Ref, EWwiseEventDestroyOptions& DestroyOptions);                      // [0xd61580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.MakeStruct
	// FWwiseEventInfo MakeStruct(FGuid& WwiseGuid, int32_t WwiseShortId, FString WwiseName, EWwiseEventSwitchContainerLoading SwitchContainerLoading, EWwiseEventDestroyOptions DestroyOptions, int32_t HardCodedSoundBankShortId); // [0xd60ef0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseShortID
	// int32_t GetWwiseShortID(FWwiseEventInfo& Ref);                                                                           // [0xd60d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseName
	// FString GetWwiseName(FWwiseEventInfo& Ref);                                                                              // [0xd60a40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetWwiseGuid
	// FGuid GetWwiseGuid(FWwiseEventInfo& Ref);                                                                                // [0xd60900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetSwitchContainerLoading
	// EWwiseEventSwitchContainerLoading GetSwitchContainerLoading(FWwiseEventInfo& Ref);                                       // [0xd60860] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetHardCodedSoundBankShortId
	// int32_t GetHardCodedSoundBankShortId(FWwiseEventInfo& Ref);                                                              // [0xd60720] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.GetDestroyOptions
	// EWwiseEventDestroyOptions GetDestroyOptions(FWwiseEventInfo& Ref);                                                       // [0xd605e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseEventInfoLibrary.BreakStruct
	// void BreakStruct(FWwiseEventInfo Ref, FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, FString& OutWwiseName, EWwiseEventSwitchContainerLoading& OutSwitchContainerLoading, EWwiseEventDestroyOptions& OutDestroyOptions, int32_t& OutHardCodedSoundBankShortId); // [0xd5fe00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWwiseGroupValueInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseShortId
	// FWwiseGroupValueInfo SetWwiseShortId(FWwiseGroupValueInfo& Ref, int32_t WwiseShortId);                                   // [0xd62280] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetWwiseName
	// FWwiseGroupValueInfo SetWwiseName(FWwiseGroupValueInfo& Ref, FString WwiseName);                                         // [0xd61ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetGroupShortId
	// FWwiseGroupValueInfo SetGroupShortId(FWwiseGroupValueInfo& Ref, int32_t GroupShortId);                                   // [0xd616a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.SetAssetGuid
	// FWwiseGroupValueInfo SetAssetGuid(FWwiseGroupValueInfo& Ref, FGuid& AssetGuid);                                          // [0xd61450] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.MakeStruct
	// FWwiseGroupValueInfo MakeStruct(FGuid& AssetGuid, int32_t GroupShortId, int32_t WwiseShortId, FString WwiseName);        // [0xd61120] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseShortID
	// int32_t GetWwiseShortID(FWwiseGroupValueInfo& Ref);                                                                      // [0xd60db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetWwiseName
	// FString GetWwiseName(FWwiseGroupValueInfo& Ref);                                                                         // [0xd60b30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetGroupShortId
	// int32_t GetGroupShortId(FWwiseGroupValueInfo& Ref);                                                                      // [0xd60680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.GetAssetGuid
	// FGuid GetAssetGuid(FWwiseGroupValueInfo& Ref);                                                                           // [0xd60540] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseGroupValueInfoLibrary.BreakStruct
	// void BreakStruct(FWwiseGroupValueInfo Ref, FGuid& OutAssetGuid, int32_t& OutGroupShortId, int32_t& OutWwiseShortId, FString& OutWwiseName); // [0xd600e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/WwiseResourceLoader.WwiseObjectInfoLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWwiseObjectInfoLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseShortId
	// FWwiseObjectInfo SetWwiseShortId(FWwiseObjectInfo& Ref, int32_t WwiseShortId);                                           // [0xd623a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseName
	// FWwiseObjectInfo SetWwiseName(FWwiseObjectInfo& Ref, FString WwiseName);                                                 // [0xd62020] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.SetWwiseGuid
	// FWwiseObjectInfo SetWwiseGuid(FWwiseObjectInfo& Ref, FGuid& WwiseGuid);                                                  // [0xd61c50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.SetHardCodedSoundBankShortId
	// FWwiseObjectInfo SetHardCodedSoundBankShortId(FWwiseObjectInfo& Ref, int32_t HardCodedSoundBankShortId);                 // [0xd618e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.MakeStruct
	// FWwiseObjectInfo MakeStruct(FGuid& WwiseGuid, int32_t WwiseShortId, FString WwiseName, int32_t HardCodedSoundBankShortId); // [0xd612b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseShortID
	// int32_t GetWwiseShortID(FWwiseObjectInfo& Ref);                                                                          // [0xd60e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseName
	// FString GetWwiseName(FWwiseObjectInfo& Ref);                                                                             // [0xd60c20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.GetWwiseGuid
	// FGuid GetWwiseGuid(FWwiseObjectInfo& Ref);                                                                               // [0xd609a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.GetHardCodedSoundBankShortId
	// int32_t GetHardCodedSoundBankShortId(FWwiseObjectInfo& Ref);                                                             // [0xd607c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/WwiseResourceLoader.WwiseObjectInfoLibrary.BreakStruct
	// void BreakStruct(FWwiseObjectInfo Ref, FGuid& OutWwiseGuid, int32_t& OutWwiseShortId, FString& OutWwiseName, int32_t& OutHardCodedSoundBankShortId); // [0xd60310] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/WwiseResourceLoader.WwiseAcousticTextureCookedData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseAcousticTextureCookedData
{ 
	int32_t                                            ShortId;                                                    // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseAudioDeviceShareSetCookedData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseAudioDeviceShareSetCookedData
{ 
	int32_t                                            ShortId;                                                    // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseAuxBusCookedData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWwiseAuxBusCookedData
{ 
	int32_t                                            AuxBusId;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	FName                                              DebugName;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseSwitchContainerLeafCookedData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FWwiseSwitchContainerLeafCookedData
{ 
	SDK_UNDEFINED(80,277) /* TSet<FWwiseGroupValueCookedData> */ __um(GroupValueSet);                              // 0x0000   (0x0050)  
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0050   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0060   (0x0010)  
	TArray<FWwiseExternalSourceCookedData>             ExternalSources;                                            // 0x0070   (0x0010)  
};

/// Struct /Script/WwiseResourceLoader.WwiseEventCookedData
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FWwiseEventCookedData
{ 
	int32_t                                            EventId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	TArray<FWwiseExternalSourceCookedData>             ExternalSources;                                            // 0x0028   (0x0010)  
	TArray<FWwiseSwitchContainerLeafCookedData>        SwitchContainerLeaves;                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,278) /* TSet<FWwiseGroupValueCookedData> */ __um(RequiredGroupValueSet);                      // 0x0048   (0x0050)  
	EWwiseEventDestroyOptions                          DestroyOptions;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	FName                                              DebugName;                                                  // 0x009C   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00A4   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseGroupValueCookedData
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FWwiseGroupValueCookedData
{ 
	EWwiseGroupType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            GroupId;                                                    // 0x0004   (0x0004)  
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	FName                                              DebugName;                                                  // 0x000C   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseObjectInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FWwiseObjectInfo
{ 
	FGuid                                              WwiseGuid;                                                  // 0x0000   (0x0010)  
	uint32_t                                           WwiseShortId;                                               // 0x0010   (0x0004)  
	FName                                              WwiseName;                                                  // 0x0014   (0x0008)  
	uint32_t                                           HardCodedSoundBankShortId;                                  // 0x001C   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseEventInfo
/// Size: 0x0024 (36 bytes) (0x000020 - 0x000024) align 4 MaxSize: 0x0024
struct FWwiseEventInfo : FWwiseObjectInfo
{ 
	EWwiseEventSwitchContainerLoading                  SwitchContainerLoading;                                     // 0x0020   (0x0001)  
	EWwiseEventDestroyOptions                          DestroyOptions;                                             // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseGameParameterCookedData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseGameParameterCookedData
{ 
	int32_t                                            ShortId;                                                    // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseGroupValueInfo
/// Size: 0x0024 (36 bytes) (0x000020 - 0x000024) align 4 MaxSize: 0x0024
struct FWwiseGroupValueInfo : FWwiseObjectInfo
{ 
	uint32_t                                           GroupShortId;                                               // 0x0020   (0x0004)  
};

/// Struct /Script/WwiseResourceLoader.WwiseInitBankCookedData
/// Size: 0x0050 (80 bytes) (0x00001C - 0x000050) align 8 MaxSize: 0x0050
struct FWwiseInitBankCookedData : FWwiseSoundBankCookedData
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0020   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0030   (0x0010)  
	TArray<FWwiseLanguageCookedData>                   Language;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLanguageId
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseLanguageId
{ 
	int32_t                                            LanguageId;                                                 // 0x0000   (0x0004)  
	FName                                              LanguageName;                                               // 0x0004   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedAuxBusCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWwiseLocalizedAuxBusCookedData
{ 
	TMap<FWwiseLanguageCookedData, FWwiseAuxBusCookedData> AuxBusLanguageMap;                                      // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x0008)  
	int32_t                                            AuxBusId;                                                   // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedEventCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWwiseLocalizedEventCookedData
{ 
	TMap<FWwiseLanguageCookedData, FWwiseEventCookedData> EventLanguageMap;                                        // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x0008)  
	int32_t                                            EventId;                                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseShareSetCookedData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FWwiseShareSetCookedData
{ 
	int32_t                                            ShareSetId;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FWwiseSoundBankCookedData>                  SoundBanks;                                                 // 0x0008   (0x0010)  
	TArray<FWwiseMediaCookedData>                      Media;                                                      // 0x0018   (0x0010)  
	FName                                              DebugName;                                                  // 0x0028   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedShareSetCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWwiseLocalizedShareSetCookedData
{ 
	TMap<FWwiseLanguageCookedData, FWwiseShareSetCookedData> ShareSetLanguageMap;                                  // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x0008)  
	int32_t                                            ShareSetId;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseLocalizedSoundBankCookedData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWwiseLocalizedSoundBankCookedData
{ 
	TMap<FWwiseLanguageCookedData, FWwiseSoundBankCookedData> SoundBankLanguageMap;                                // 0x0000   (0x0050)  
	FName                                              DebugName;                                                  // 0x0050   (0x0008)  
	int32_t                                            SoundBankId;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwisePlatformId
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FWwisePlatformId
{ 
	FGuid                                              PlatformGuid;                                               // 0x0000   (0x0010)  
	FName                                              PlatformName;                                               // 0x0010   (0x0008)  
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedGroupValueKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FWwiseSharedGroupValueKey
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedLanguageId
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FWwiseSharedLanguageId
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	EWwiseLanguageRequirement                          LanguageRequirement;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseSharedPlatformId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FWwiseSharedPlatformId
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/WwiseResourceLoader.WwiseTriggerCookedData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseTriggerCookedData
{ 
	int32_t                                            TriggerId;                                                  // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UWwiseEventInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWwiseGroupValueInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWwiseObjectInfoLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWwiseAcousticTextureCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseAudioDeviceShareSetCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseAuxBusCookedData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWwiseSwitchContainerLeafCookedData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWwiseEventCookedData) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FWwiseGroupValueCookedData) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWwiseObjectInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWwiseEventInfo) == 0x0024); // 36 bytes (0x000020 - 0x000024)
static_assert(sizeof(FWwiseGameParameterCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseGroupValueInfo) == 0x0024); // 36 bytes (0x000020 - 0x000024)
static_assert(sizeof(FWwiseInitBankCookedData) == 0x0050); // 80 bytes (0x00001C - 0x000050)
static_assert(sizeof(FWwiseLanguageId) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseLocalizedAuxBusCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseLocalizedEventCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseShareSetCookedData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FWwiseLocalizedShareSetCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwiseLocalizedSoundBankCookedData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWwisePlatformId) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWwiseSharedGroupValueKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseSharedLanguageId) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FWwiseSharedPlatformId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseTriggerCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(FWwiseAcousticTextureCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseAudioDeviceShareSetCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseAuxBusCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseAuxBusCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseAuxBusCookedData, DebugName) == 0x0028);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, SoundBanks) == 0x0050);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, Media) == 0x0060);
static_assert(offsetof(FWwiseSwitchContainerLeafCookedData, ExternalSources) == 0x0070);
static_assert(offsetof(FWwiseEventCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseEventCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseEventCookedData, ExternalSources) == 0x0028);
static_assert(offsetof(FWwiseEventCookedData, SwitchContainerLeaves) == 0x0038);
static_assert(offsetof(FWwiseEventCookedData, DestroyOptions) == 0x0098);
static_assert(offsetof(FWwiseEventCookedData, DebugName) == 0x009C);
static_assert(offsetof(FWwiseGroupValueCookedData, Type) == 0x0000);
static_assert(offsetof(FWwiseGroupValueCookedData, DebugName) == 0x000C);
static_assert(offsetof(FWwiseObjectInfo, WwiseGuid) == 0x0000);
static_assert(offsetof(FWwiseObjectInfo, WwiseName) == 0x0014);
static_assert(offsetof(FWwiseEventInfo, SwitchContainerLoading) == 0x0020);
static_assert(offsetof(FWwiseEventInfo, DestroyOptions) == 0x0021);
static_assert(offsetof(FWwiseGameParameterCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseInitBankCookedData, SoundBanks) == 0x0020);
static_assert(offsetof(FWwiseInitBankCookedData, Media) == 0x0030);
static_assert(offsetof(FWwiseInitBankCookedData, Language) == 0x0040);
static_assert(offsetof(FWwiseLanguageId, LanguageName) == 0x0004);
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, AuxBusLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedAuxBusCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseLocalizedEventCookedData, EventLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedEventCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseShareSetCookedData, SoundBanks) == 0x0008);
static_assert(offsetof(FWwiseShareSetCookedData, Media) == 0x0018);
static_assert(offsetof(FWwiseShareSetCookedData, DebugName) == 0x0028);
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, ShareSetLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedShareSetCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, SoundBankLanguageMap) == 0x0000);
static_assert(offsetof(FWwiseLocalizedSoundBankCookedData, DebugName) == 0x0050);
static_assert(offsetof(FWwisePlatformId, PlatformGuid) == 0x0000);
static_assert(offsetof(FWwisePlatformId, PlatformName) == 0x0010);
static_assert(offsetof(FWwiseSharedLanguageId, LanguageRequirement) == 0x0010);
static_assert(offsetof(FWwiseTriggerCookedData, DebugName) == 0x0004);
