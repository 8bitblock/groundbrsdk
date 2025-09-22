
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/WwiseSimpleExternalSource.WwiseExternalSourceSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UWwiseExternalSourceSettings : public UObject
{ 
public:
	FSoftObjectPath                                    MediaInfoTable;                                             // 0x0028   (0x0018)  
	FSoftObjectPath                                    ExternalSourceDefaultMedia;                                 // 0x0040   (0x0018)  
	FDirectoryPath                                     ExternalSourceStagingDirectory;                             // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceCookieDefaultMedia
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FWwiseExternalSourceCookieDefaultMedia : FTableRowBase
{ 
	int32_t                                            ExternalSourceCookie;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            ExternalSourceName;                                         // 0x0010   (0x0010)  
	int32_t                                            MediaInfoId;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            MediaName;                                                  // 0x0028   (0x0010)  
};

/// Struct /Script/WwiseSimpleExternalSource.WwiseExternalSourceMediaInfo
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FWwiseExternalSourceMediaInfo : FTableRowBase
{ 
	int32_t                                            ExternalSourceMediaInfoId;                                  // 0x0008   (0x0004)  
	FName                                              MediaName;                                                  // 0x000C   (0x0008)  
	int32_t                                            CodecID;                                                    // 0x0014   (0x0004)  
	bool                                               bIsStreamed;                                                // 0x0018   (0x0001)  
	bool                                               bUseDeviceMemory;                                           // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	int32_t                                            MemoryAlignment;                                            // 0x001C   (0x0004)  
	int32_t                                            PrefetchSize;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UWwiseExternalSourceSettings) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FWwiseExternalSourceCookieDefaultMedia) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FWwiseExternalSourceMediaInfo) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(offsetof(UWwiseExternalSourceSettings, MediaInfoTable) == 0x0028);
static_assert(offsetof(UWwiseExternalSourceSettings, ExternalSourceDefaultMedia) == 0x0040);
static_assert(offsetof(UWwiseExternalSourceSettings, ExternalSourceStagingDirectory) == 0x0058);
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, ExternalSourceName) == 0x0010);
static_assert(offsetof(FWwiseExternalSourceCookieDefaultMedia, MediaName) == 0x0028);
static_assert(offsetof(FWwiseExternalSourceMediaInfo, MediaName) == 0x000C);
