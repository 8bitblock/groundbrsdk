
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

/// Enum /Script/ModKit.EModPathBranchPaths
/// Size: 0x01 (1 bytes)
enum class EModPathBranchPaths : uint8_t
{
	EModPathBranchPaths__Mod                                                         = 0,
	EModPathBranchPaths__Game                                                        = 1
};

/// Enum /Script/ModKit.EModIDBranchPaths
/// Size: 0x01 (1 bytes)
enum class EModIDBranchPaths : uint8_t
{
	EModIDBranchPaths__Mod                                                           = 0,
	EModIDBranchPaths__Stage                                                         = 1,
	EModIDBranchPaths__Game                                                          = 2
};

/// Enum /Script/ModKit.EModType
/// Size: 0x01 (1 bytes)
enum class EModType : uint8_t
{
	EModType__Content                                                                = 0,
	EModType__Map                                                                    = 1,
	EModType__NonAsset                                                               = 2
};

/// Class /Script/ModKit.ModKitBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModKitBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64ToText
	// FText UInt64ToText(FUInt64 Value, bool bAlwaysSign, bool bUseGrouping, int32_t MinimumIntegralDigits, int32_t MaximumIntegralDigits); // [0xb61920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64ToString
	// FString UInt64ToString(FUInt64 Value);                                                                                   // [0xb61880] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64ToFloat
	// float UInt64ToFloat(FUInt64& Value);                                                                                     // [0xb617e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64ToFileSizeStringInGb
	// FString UInt64ToFileSizeStringInGb(FUInt64& Value);                                                                      // [0xb61730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64ToFileSizeString
	// FString UInt64ToFileSizeString(FUInt64& Value);                                                                          // [0xb61680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64NotEquals
	// bool UInt64NotEquals(FUInt64 A, FUInt64 B);                                                                              // [0xb615b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.UInt64Equals
	// bool UInt64Equals(FUInt64 A, FUInt64 B);                                                                                 // [0xb614e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.SetStagedModFolderPath
	// void SetStagedModFolderPath(FString NewPath);                                                                            // [0xb61390] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ModKit.ModKitBlueprintLibrary.ModMetadataWorkshopIDToUInt64
	// FUInt64 ModMetadataWorkshopIDToUInt64(FModMetadata ModMetadata);                                                         // [0xb60f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.ModMetadataWorkshopIDToString
	// FString ModMetadataWorkshopIDToString(FModMetadata ModMetadata);                                                         // [0xb60d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.ModIDByTypeSimple
	// void ModIDByTypeSimple(FUInt64 ModID, EModPathBranchPaths& BranchPath);                                                  // [0xb60c30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModKit.ModKitBlueprintLibrary.ModIDByType
	// void ModIDByType(FUInt64 ModID, EModIDBranchPaths& BranchPath);                                                          // [0xb60b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModKit.ModKitBlueprintLibrary.MakeZeroUInt64
	// FUInt64 MakeZeroUInt64();                                                                                                // [0xb60a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.MakeModIDFromString
	// FUInt64 MakeModIDFromString(FString ModIDString);                                                                        // [0xb60ab0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.MakeModIDForStaging
	// FUInt64 MakeModIDForStaging();                                                                                           // [0xb60a70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.MakeModIDForGame
	// FUInt64 MakeModIDForGame();                                                                                              // [0xb60a30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsUInt64ValidID
	// bool IsUInt64ValidID(FUInt64 Value);                                                                                     // [0xb609b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsSteamAPIAvailable
	// bool IsSteamAPIAvailable();                                                                                              // [0xb60980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModKitEditor
	// bool IsModKitEditor();                                                                                                   // [0xb607f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModIDForStaging
	// bool IsModIDForStaging(FUInt64 ModID);                                                                                   // [0xb60770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModIDForModOrStaging
	// bool IsModIDForModOrStaging(FUInt64 ModID);                                                                              // [0xb606f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModIDForMod
	// bool IsModIDForMod(FUInt64 ModID);                                                                                       // [0xb60670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModIDForGame
	// bool IsModIDForGame(FUInt64 ModID);                                                                                      // [0xb605f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsModFullyInstalled
	// bool IsModFullyInstalled(FUInt64 ModID);                                                                                 // [0xb60570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.IsFileSizeBelowWorkshopPreviewFileLimit
	// bool IsFileSizeBelowWorkshopPreviewFileLimit(FString FilePath);                                                          // [0xb604d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetSubscribedMods
	// TArray<FUInt64> GetSubscribedMods();                                                                                     // [0xb60380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetStagedModPath
	// FString GetStagedModPath();                                                                                              // [0xb602c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetFolderSize
	// FUInt64 GetFolderSize(FString Directory);                                                                                // [0xb5fb90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetEditorModPath
	// FString GetEditorModPath();                                                                                              // [0xb5fb00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetDefaultStagedModPath
	// FString GetDefaultStagedModPath();                                                                                       // [0xb5f870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.GetAppID
	// int32_t GetAppID();                                                                                                      // [0xb5f850] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitBlueprintLibrary.AddUInt64
	// FUInt64 AddUInt64(FUInt64& First, FUInt64& Second);                                                                      // [0xb5f4a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/ModKit.UInt64
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FUInt64
{ 
	uint64_t                                           Value;                                                      // 0x0000   (0x0008)  
};

/// Class /Script/ModKit.ModKitCreateWorkshopItem
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UModKitCreateWorkshopItem : public UObject
{ 
public:
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(OnFinishCreateWorkshopItemEvent);                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	FUInt64                                            ID;                                                         // 0x0060   (0x0008)  
	bool                                               bHasSucceeded;                                              // 0x0068   (0x0001)  
	bool                                               bHasFinished;                                               // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_7[0x16];                                      // 0x006A   (0x0016)  MISSED


	/// Functions
	// Function /Script/ModKit.ModKitCreateWorkshopItem.CreateWorkshopItem
	// void CreateWorkshopItem();                                                                                               // [0xb5f590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModKit.ModKitRuntimeModLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModKitRuntimeModLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ModKit.ModKitRuntimeModLibrary.ShowWorkshopEULA
	// void ShowWorkshopEULA();                                                                                                 // [0xb614c0] Final|Native|Static|Public 
	// Function /Script/ModKit.ModKitRuntimeModLibrary.DeleteWorkshopItemFromWorkshop
	// void DeleteWorkshopItemFromWorkshop(FUInt64 WorkshopID);                                                                 // [0xb5f5b0] Final|Native|Static|Public 
};

/// Class /Script/ModKit.ModKitSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UModKitSettings : public UObject
{ 
public:
	FString                                            StagedModFolderPath;                                        // 0x0028   (0x0010)  
	TArray<FUInt64>                                    DisabledMods;                                               // 0x0038   (0x0010)  
	bool                                               bEnableAutodownloadedModsLocally;                           // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModKit.ModKitSettings.SetStagedModFolderPath
	// void SetStagedModFolderPath(FString NewPath);                                                                            // [0xb61420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModKit.ModKitSettings.SetModIsDisabled
	// void SetModIsDisabled(FUInt64& ModID, bool bDisabled);                                                                   // [0xb612b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModKit.ModKitSettings.SetDisabledMods
	// void SetDisabledMods(TArray<FUInt64>& InDisabledModList);                                                                // [0xb61200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModKit.ModKitSettings.GetStagedModFolderPath
	// FString GetStagedModFolderPath();                                                                                        // [0xb60200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSettings.GetModIsDisabled
	// bool GetModIsDisabled(FUInt64& ModID);                                                                                   // [0xb60020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSettings.GetEnableAutodownloadedModsLocally
	// bool GetEnableAutodownloadedModsLocally();                                                                               // [0xb5fb70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSettings.GetDisabledMods
	// TArray<FUInt64> GetDisabledMods();                                                                                       // [0xb5fa40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSettings.Get
	// class UModKitSettings* Get();                                                                                            // [0xb5f6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ModKit.ModKitSubsystem
/// Size: 0x0148 (328 bytes) (0x000030 - 0x000148) align 8 MaxSize: 0x0148
class UModKitSubsystem : public UGameInstanceSubsystem
{ 
public:
	TMap<FUInt64, FString>                             MountedModWorkshopIDs;                                      // 0x0030   (0x0050)  
	TMap<FAssetData, FUInt64>                          AssetToWorkshopID;                                          // 0x0080   (0x0050)  
	TMap<FPrimaryAssetId, FUInt64>                     PrimaryAssetIdToWorkshopID;                                 // 0x00D0   (0x0050)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0120   (0x0020)  MISSED
	class UAssetManager*                               AssetManager;                                               // 0x0140   (0x0008)  


	/// Functions
	// Function /Script/ModKit.ModKitSubsystem.UnmountMod
	// void UnmountMod(FUInt64 WorkshopID);                                                                                     // [0xb61b50] Final|Native|Public  
	// Function /Script/ModKit.ModKitSubsystem.MountMod
	// void MountMod(FUInt64 WorkshopID, bool bEditorModsOnly);                                                                 // [0xb61120] Final|Native|Public  
	// Function /Script/ModKit.ModKitSubsystem.IsModMounted
	// bool IsModMounted(FUInt64& WorkshopItemID);                                                                              // [0xb608d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSubsystem.IsModMountable
	// bool IsModMountable(FUInt64& WorkshopItemID);                                                                            // [0xb60820] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetWorkshopIDFromPluginName
	// bool GetWorkshopIDFromPluginName(FUInt64& WorkshopID, FString PluginName);                                               // [0xb603d0] Final|Native|Public|HasOutParms|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetPakFilenameForMod
	// bool GetPakFilenameForMod(FUInt64& WorkshopID, FString& Filename);                                                       // [0xb600f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetModAssetWorkshopIDFromPrimaryAssetId
	// bool GetModAssetWorkshopIDFromPrimaryAssetId(FPrimaryAssetId& PrimaryAssetId, FUInt64& WorkshopID);                      // [0xb5ff20] Final|Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetModAssetWorkshopID
	// bool GetModAssetWorkshopID(FAssetData& AssetData, FUInt64& WorkshopID);                                                  // [0xb5fda0] Final|Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetMetadataFromWorkshopID
	// bool GetMetadataFromWorkshopID(FModMetadata& MetaData, FUInt64 WorkshopID);                                              // [0xb5fc40] Final|Native|Public|HasOutParms|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetDirectoryFromWorkshopID
	// bool GetDirectoryFromWorkshopID(FString& DirectoryPath, FUInt64 WorkshopID, bool bForNonAssetFiles);                     // [0xb5f900] Final|Native|Public|HasOutParms|Const 
	// Function /Script/ModKit.ModKitSubsystem.GetAllAssetsInPackage
	// bool GetAllAssetsInPackage(FUInt64 WorkshopID, TArray<FAssetData>& Assets);                                              // [0xb5f6e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/ModKit.ModKitSubsystem.FindAndMountMods
	// void FindAndMountMods(bool bEditorModsOnly);                                                                             // [0xb5f620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModKit.ModKitUploadWorkshopItem
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UModKitUploadWorkshopItem : public UObject
{ 
public:
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnFinishUploadWorkshopItemEvent);                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	FUInt64                                            ID;                                                         // 0x0060   (0x0008)  
	bool                                               bHasSucceeded;                                              // 0x0068   (0x0001)  
	bool                                               bHasFinished;                                               // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_7[0x16];                                      // 0x006A   (0x0016)  MISSED


	/// Functions
	// Function /Script/ModKit.ModKitUploadWorkshopItem.UploadWorkshopItem
	// void UploadWorkshopItem(FRuntimeModWorkshopInfo RuntimeModWorkshopInfo);                                                 // [0xb61bd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModKit.WorkshopItemDataAsset
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UWorkshopItemDataAsset : public UDataAsset
{ 
public:
	FString                                            Title;                                                      // 0x0030   (0x0010)  
	FString                                            Description;                                                // 0x0040   (0x0010)  
	FString                                            CreatedBy;                                                  // 0x0050   (0x0010)  
	EModType                                           ModType;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FString                                            WorkshopID;                                                 // 0x0068   (0x0010)  
	FString                                            ThumbnailPath;                                              // 0x0078   (0x0010)  
	bool                                               bHasTag_Weapon;                                             // 0x0088   (0x0001)  
	bool                                               bHasTag_Gear;                                               // 0x0089   (0x0001)  
	bool                                               bHasTag_Outfit;                                             // 0x008A   (0x0001)  
	bool                                               bHasTag_Map;                                                // 0x008B   (0x0001)  
	bool                                               bHasTag_Mission;                                            // 0x008C   (0x0001)  
	bool                                               bHasTag_GameMode;                                           // 0x008D   (0x0001)  
	bool                                               bHasTag_LuaScript;                                          // 0x008E   (0x0001)  
	bool                                               bHasTag_Mutator;                                            // 0x008F   (0x0001)  
	bool                                               bHasTag_Localization;                                       // 0x0090   (0x0001)  
	bool                                               bHasTag_Patch;                                              // 0x0091   (0x0001)  
	bool                                               bHasTag_CustomKit;                                          // 0x0092   (0x0001)  
	bool                                               bHasTag_AILoadout;                                          // 0x0093   (0x0001)  
	bool                                               bHasTag_DefaultItemBuild;                                   // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FString                                            ChangeNotes;                                                // 0x0098   (0x0010)  
};

/// Struct /Script/ModKit.ModMetadata
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FModMetadata
{ 
	FString                                            Title;                                                      // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	FString                                            CreatedBy;                                                  // 0x0020   (0x0010)  
	FString                                            PluginName;                                                 // 0x0030   (0x0010)  
	uint64_t                                           RawWorkshopID;                                              // 0x0040   (0x0008)  
	EModType                                           ModType;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	uint64_t                                           SizeInBytes;                                                // 0x0050   (0x0008)  
	int32_t                                            BuildNumber;                                                // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/ModKit.RuntimeModWorkshopInfo
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRuntimeModWorkshopInfo
{ 
	FModMetadata                                       MetaData;                                                   // 0x0000   (0x0060)  
	FString                                            ThumbnailPath;                                              // 0x0060   (0x0010)  
	FString                                            ContentPath;                                                // 0x0070   (0x0010)  
	FString                                            ChangeNotes;                                                // 0x0080   (0x0010)  
	TArray<FString>                                    TagList;                                                    // 0x0090   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UModKitBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FUInt64) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UModKitCreateWorkshopItem) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UModKitRuntimeModLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UModKitSettings) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UModKitSubsystem) == 0x0148); // 328 bytes (0x000030 - 0x000148)
static_assert(sizeof(UModKitUploadWorkshopItem) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UWorkshopItemDataAsset) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FModMetadata) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRuntimeModWorkshopInfo) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(UModKitCreateWorkshopItem, ID) == 0x0060);
static_assert(offsetof(UModKitSettings, StagedModFolderPath) == 0x0028);
static_assert(offsetof(UModKitSettings, DisabledMods) == 0x0038);
static_assert(offsetof(UModKitSubsystem, MountedModWorkshopIDs) == 0x0030);
static_assert(offsetof(UModKitSubsystem, AssetToWorkshopID) == 0x0080);
static_assert(offsetof(UModKitSubsystem, PrimaryAssetIdToWorkshopID) == 0x00D0);
static_assert(offsetof(UModKitSubsystem, AssetManager) == 0x0140);
static_assert(offsetof(UModKitUploadWorkshopItem, ID) == 0x0060);
static_assert(offsetof(UWorkshopItemDataAsset, Title) == 0x0030);
static_assert(offsetof(UWorkshopItemDataAsset, Description) == 0x0040);
static_assert(offsetof(UWorkshopItemDataAsset, CreatedBy) == 0x0050);
static_assert(offsetof(UWorkshopItemDataAsset, ModType) == 0x0060);
static_assert(offsetof(UWorkshopItemDataAsset, WorkshopID) == 0x0068);
static_assert(offsetof(UWorkshopItemDataAsset, ThumbnailPath) == 0x0078);
static_assert(offsetof(UWorkshopItemDataAsset, ChangeNotes) == 0x0098);
static_assert(offsetof(FModMetadata, Title) == 0x0000);
static_assert(offsetof(FModMetadata, Description) == 0x0010);
static_assert(offsetof(FModMetadata, CreatedBy) == 0x0020);
static_assert(offsetof(FModMetadata, PluginName) == 0x0030);
static_assert(offsetof(FModMetadata, ModType) == 0x0048);
static_assert(offsetof(FRuntimeModWorkshopInfo, MetaData) == 0x0000);
static_assert(offsetof(FRuntimeModWorkshopInfo, ThumbnailPath) == 0x0060);
static_assert(offsetof(FRuntimeModWorkshopInfo, ContentPath) == 0x0070);
static_assert(offsetof(FRuntimeModWorkshopInfo, ChangeNotes) == 0x0080);
static_assert(offsetof(FRuntimeModWorkshopInfo, TagList) == 0x0090);
