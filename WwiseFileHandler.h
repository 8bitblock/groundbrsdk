
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: WwiseObjectUtils

#pragma pack(push, 0x1)

/// Enum /Script/WwiseFileHandler.EWwiseLanguageRequirement
/// Size: 0x01 (1 bytes)
enum class EWwiseLanguageRequirement : uint8_t
{
	EWwiseLanguageRequirement__IsDefault                                             = 0,
	EWwiseLanguageRequirement__IsOptional                                            = 1,
	EWwiseLanguageRequirement__SFX                                                   = 2
};

/// Enum /Script/WwiseFileHandler.EWwiseSoundBankType
/// Size: 0x01 (1 bytes)
enum class EWwiseSoundBankType : uint8_t
{
	EWwiseSoundBankType__User                                                        = 0,
	EWwiseSoundBankType__Event                                                       = 30,
	EWwiseSoundBankType__Bus                                                         = 31
};

/// Class /Script/WwiseFileHandler.WwiseExternalSourceStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWwiseExternalSourceStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaWithIds
	// void SetExternalSourceMediaWithIds(FAkUniqueID ExternalSourceCookie, int32_t MediaId);                                   // [0xd2fb50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaByName
	// void SetExternalSourceMediaByName(FString ExternalSourceName, FString MediaName);                                        // [0xd2fa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/WwiseFileHandler.WwiseExternalSourceStatics.SetExternalSourceMediaById
	// void SetExternalSourceMediaById(FString ExternalSourceName, int32_t MediaId);                                            // [0xd2f990] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/WwiseFileHandler.WwiseExternalSourceCookedData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWwiseExternalSourceCookedData
{ 
	int32_t                                            Cookie;                                                     // 0x0000   (0x0004)  
	FName                                              DebugName;                                                  // 0x0004   (0x0008)  
};

/// Struct /Script/WwiseFileHandler.WwiseLanguageCookedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FWwiseLanguageCookedData
{ 
	int32_t                                            LanguageId;                                                 // 0x0000   (0x0004)  
	FName                                              LanguageName;                                               // 0x0004   (0x0008)  
	EWwiseLanguageRequirement                          LanguageRequirement;                                        // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/WwiseFileHandler.WwiseMediaCookedData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FWwiseMediaCookedData
{ 
	int32_t                                            MediaId;                                                    // 0x0000   (0x0004)  
	FName                                              MediaPathName;                                              // 0x0004   (0x0008)  
	int32_t                                            PrefetchSize;                                               // 0x000C   (0x0004)  
	int32_t                                            MemoryAlignment;                                            // 0x0010   (0x0004)  
	bool                                               bDeviceMemory;                                              // 0x0014   (0x0001)  
	bool                                               bStreaming;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FName                                              DebugName;                                                  // 0x0018   (0x0008)  
};

/// Struct /Script/WwiseFileHandler.WwiseSoundBankCookedData
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FWwiseSoundBankCookedData
{ 
	int32_t                                            SoundBankId;                                                // 0x0000   (0x0004)  
	FName                                              SoundBankPathName;                                          // 0x0004   (0x0008)  
	int32_t                                            MemoryAlignment;                                            // 0x000C   (0x0004)  
	bool                                               bDeviceMemory;                                              // 0x0010   (0x0001)  
	bool                                               bContainsMedia;                                             // 0x0011   (0x0001)  
	EWwiseSoundBankType                                SoundBankType;                                              // 0x0012   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0013   (0x0001)  MISSED
	FName                                              DebugName;                                                  // 0x0014   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UWwiseExternalSourceStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FWwiseExternalSourceCookedData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FWwiseLanguageCookedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWwiseMediaCookedData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWwiseSoundBankCookedData) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(offsetof(FWwiseExternalSourceCookedData, DebugName) == 0x0004);
static_assert(offsetof(FWwiseLanguageCookedData, LanguageName) == 0x0004);
static_assert(offsetof(FWwiseLanguageCookedData, LanguageRequirement) == 0x000C);
static_assert(offsetof(FWwiseMediaCookedData, MediaPathName) == 0x0004);
static_assert(offsetof(FWwiseMediaCookedData, DebugName) == 0x0018);
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankPathName) == 0x0004);
static_assert(offsetof(FWwiseSoundBankCookedData, SoundBankType) == 0x0012);
static_assert(offsetof(FWwiseSoundBankCookedData, DebugName) == 0x0014);
