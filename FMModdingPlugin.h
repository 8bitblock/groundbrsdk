
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LuaMachine
/// dependency: ModKit
/// dependency: RBSteamworks
/// dependency: RBZooKeeper

#pragma pack(push, 0x1)

/// Enum /Script/FMModdingPlugin.EGBWorkshopModVisibility
/// Size: 0x01 (1 bytes)
enum class EGBWorkshopModVisibility : uint8_t
{
	EGBWorkshopModVisibility__Public                                                 = 0,
	EGBWorkshopModVisibility__FriendsOnly                                            = 1,
	EGBWorkshopModVisibility__Unlisted                                               = 2,
	EGBWorkshopModVisibility__Private                                                = 3
};

/// Enum /Script/FMModdingPlugin.EGBSteamBufferType
/// Size: 0x01 (1 bytes)
enum class EGBSteamBufferType : uint8_t
{
	EGBSteamBufferType__ServerRule                                                   = 0,
	EGBSteamBufferType__LobbyData                                                    = 1
};

/// Enum /Script/FMModdingPlugin.EFMSyncStatus
/// Size: 0x01 (1 bytes)
enum class EFMSyncStatus : uint8_t
{
	EFMSyncStatus__Inactive                                                          = 0,
	EFMSyncStatus__Unmounting                                                        = 1,
	EFMSyncStatus__Mounting                                                          = 2,
	EFMSyncStatus__Downloading                                                       = 3,
	EFMSyncStatus__Finished                                                          = 4,
	EFMSyncStatus__Failed                                                            = 5
};

/// Enum /Script/FMModdingPlugin.EFMModStatus
/// Size: 0x01 (1 bytes)
enum class EFMModStatus : uint8_t
{
	EFMModStatus__None                                                               = 0,
	EFMModStatus__Checking                                                           = 1,
	EFMModStatus__Downloading                                                        = 2,
	EFMModStatus__Mounting                                                           = 3,
	EFMModStatus__Failed                                                             = 4,
	EFMModStatus__Done                                                               = 5
};

/// Enum /Script/FMModdingPlugin.EGBPatchVisibility
/// Size: 0x01 (1 bytes)
enum class EGBPatchVisibility : uint8_t
{
	EGBPatchVisibility__NoModdedPatches                                              = 0,
	EGBPatchVisibility__OnlySubscribed                                               = 1,
	EGBPatchVisibility__AllPatches                                                   = 2
};

/// Enum /Script/FMModdingPlugin.EGBResourceType
/// Size: 0x01 (1 bytes)
enum class EGBResourceType : uint8_t
{
	EGBResourceType__Map                                                             = 0,
	EGBResourceType__Mission                                                         = 1,
	EGBResourceType__GameMode                                                        = 2,
	EGBResourceType__LuaScript                                                       = 3,
	EGBResourceType__Mutator                                                         = 4,
	EGBResourceType__Inventory                                                       = 5,
	EGBResourceType__WeatherPreset                                                   = 6,
	EGBResourceType__KillhouseVariant                                                = 7,
	EGBResourceType__Localization                                                    = 8,
	EGBResourceType__Patch                                                           = 9,
	EGBResourceType__CustomKit                                                       = 10,
	EGBResourceType__AILoadout                                                       = 11,
	EGBResourceType__DefaultItemBuild                                                = 12,
	EGBResourceType__ObjectiveScript                                                 = 13,
	EGBResourceType__MissionImage                                                    = 14,
	EGBResourceType__Unknown                                                         = 15,
	EGBResourceType__LastResourceType                                                = 16
};

/// Class /Script/FMModdingPlugin.FMModdingAdmin
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFMModdingAdmin : public UObject
{ 
public:


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingAdmin.Get
	// class UFMModdingAdmin* Get();                                                                                            // [0xaf4030] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingAdmin.FillRequest
	// bool FillRequest(FString UniqueId, FName& RequestType, FZKReplicatedContent& FilledRequest);                             // [0xaf3d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingAdmin.AdminSet
	// bool AdminSet(FString UniqueId, FZKReplicatedContent& Content);                                                          // [0xaf2c30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMModdingPlugin.FMModdingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFMModdingFunctionLibrary : public UObject
{ 
public:


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.UInt64ListContainsMod
	// bool UInt64ListContainsMod(FUInt64 ModID, TArray<FUInt64>& ModList);                                                     // [0xaf77f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.SetModPriority
	// void SetModPriority(FUInt64 ModID, int32_t NewModPriority);                                                              // [0xaf7730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.SetModIsEnabled
	// void SetModIsEnabled(FUInt64 ModID, bool bIsEnabled, bool bServer);                                                      // [0xaf7610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.SetModIsActiveInModList
	// void SetModIsActiveInModList(FUInt64 ModID, TArray<FGBModBasicInfo>& ModList, bool bSetActive);                          // [0xaf74e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.RunLuaFileInEnvironment
	// FLuaValue RunLuaFileInEnvironment(class UObject* WorldContextObject, FString Filename, class UClass* LuaStateClass);     // [0xaf7380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.RemoveModIDFromStringTableName
	// FName RemoveModIDFromStringTableName(FName InStringTableName);                                                           // [0xaf72f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.RemoveModFromModList
	// void RemoveModFromModList(FUInt64 ModID, TArray<FGBModBasicInfo>& ModList);                                              // [0xaf7210] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.ReadLobbyDataStringsIntoUInt64
	// bool ReadLobbyDataStringsIntoUInt64(TArray<FUInt64>& OutDecodedIDs, FString StringPrefix, FUInt64& LobbyID);             // [0xaf70b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.ReadLobbyDataStrings
	// bool ReadLobbyDataStrings(TArray<FString>& OutDecodedStrings, FString StringPrefix, FUInt64& LobbyID);                   // [0xaf6f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.ModListContainsMod
	// bool ModListContainsMod(FUInt64 ModID, TArray<FGBModBasicInfo>& ModList, bool bMustBeActive);                            // [0xaf6de0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.MakeSteamStringsFromUInt64
	// void MakeSteamStringsFromUInt64(TArray<FUInt64>& IDsToEncode, TArray<FString>& OutLabels, TArray<FString>& OutStrings, FString StringPrefix, EGBSteamBufferType SteamBufferType); // [0xaf6b80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.MakeSteamStrings
	// void MakeSteamStrings(TArray<FString>& StringsToEncode, TArray<FString>& OutLabels, TArray<FString>& OutStrings, FString StringPrefix, EGBSteamBufferType SteamBufferType); // [0xaf6900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetWorkshopTagForResourceType
	// FName GetWorkshopTagForResourceType(EGBResourceType GBResourceType);                                                     // [0xaf6870] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetWorkshopIDForPluginName
	// FUInt64 GetWorkshopIDForPluginName(FString PluginName, class UObject* WorldContextObject);                               // [0xaf6780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetStringTableNameFromModID
	// FName GetStringTableNameFromModID(FName InStringTableId, FUInt64 ModID);                                                 // [0xaf66b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetStringNameSpaceFromModID
	// FString GetStringNameSpaceFromModID(FString InStringNameSpace, FUInt64 ModID);                                           // [0xaf65b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetPartialFilePathForGBResourceType
	// FString GetPartialFilePathForGBResourceType(EGBResourceType InGBResourceType);                                           // [0xaf6510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetNonAssetResourcesForMod
	// TArray<FGBResourceList> GetNonAssetResourcesForMod(class UObject* WorldContextObject, FUInt64 ModID, bool bTrimmed);     // [0xaf62a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModsPath
	// FString GetModsPath(class UObject* WorldContextObject, FUInt64 ModID, bool bMakePathRelativeToContentDir);               // [0xaf6170] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModPriority
	// int32_t GetModPriority(FUInt64 ModID);                                                                                   // [0xaf60f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModPath
	// FString GetModPath(class UObject* WorldContextObject, FUInt64 ModID, bool bMakePathRelativeToContentDir);                // [0xaf5fc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModNameFromModID
	// FString GetModNameFromModID(FUInt64 ModID);                                                                              // [0xaf5f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModKitSubsystem
	// class UModKitSubsystem* GetModKitSubsystem(class UObject* WorldContextObject);                                           // [0xaf5e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIsEnabled
	// bool GetModIsEnabled(FUInt64 ModID, bool bServer);                                                                       // [0xaf5dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIsActiveInModList
	// bool GetModIsActiveInModList(FUInt64 ModID, TArray<FGBModBasicInfo>& ModList);                                           // [0xaf5cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModInfoFromModList
	// FGBModBasicInfo GetModInfoFromModList(FUInt64 ModID, TArray<FGBModBasicInfo>& ModList, bool bMustBeActive);              // [0xaf5b90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIDFromStringTableName
	// FUInt64 GetModIDFromStringTableName(FName& InStringTableName);                                                           // [0xaf5af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIDFromFileName
	// FUInt64 GetModIDFromFileName(class UObject* WorldContextObject, FString InFilename, bool bIsCondensed);                  // [0xaf59d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIDForPrimaryAssetId
	// FUInt64 GetModIDForPrimaryAssetId(FPrimaryAssetId& PrimaryAssetId, class UObject* WorldContextObject);                   // [0xaf58f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetModIDForAssetData
	// FUInt64 GetModIDForAssetData(FAssetData& AssetData, class UObject* WorldContextObject);                                  // [0xaf5770] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetIsUsingServerMods
	// bool GetIsUsingServerMods(class UObject* WorldContextObject);                                                            // [0xaf56e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFullFilePathFromPartial
	// FString GetFullFilePathFromPartial(FString InPartialFilePath, bool bRelativePath, FUInt64 ModID, class UObject* WorldContextObject); // [0xaf5530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFolderListIncludingMods
	// bool GetFolderListIncludingMods(class UObject* WorldContextObject, EGBResourceType GBResourceType, TArray<FString>& FolderList, FString PartialFilePathOverride, bool RecurseIntoFolders); // [0xaf5310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFolderListIncludingModIDList
	// bool GetFolderListIncludingModIDList(class UObject* WorldContextObject, EGBResourceType GBResourceType, TArray<FString>& FolderList, TArray<FUInt64>& ModIDList, FString PartialFilePathOverride, bool RecurseIntoFolders); // [0xaf5080] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFolderList
	// bool GetFolderList(FString FilePath, TArray<FString>& FolderList, bool RecurseIntoFolders);                              // [0xaf4f00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFileListIncludingMods
	// bool GetFileListIncludingMods(class UObject* WorldContextObject, EGBResourceType GBResourceType, bool bTrimmed, TArray<FString>& FileList, FString PartialFilePathOverride); // [0xaf4cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFileListIncludingModIDList
	// bool GetFileListIncludingModIDList(class UObject* WorldContextObject, EGBResourceType GBResourceType, bool bTrimmed, TArray<FString>& FileList, TArray<FUInt64>& ModIDList, FString PartialFilePathOverride); // [0xaf4a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFileList
	// bool GetFileList(FString FilePath, FString Extension, bool bTrimPathAndExt, TArray<FString>& FileList);                  // [0xaf4870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetFileExtensionForGBResourceType
	// FString GetFileExtensionForGBResourceType(EGBResourceType InGBResourceType);                                             // [0xaf47d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetDirectoryFromWorkshopID
	// bool GetDirectoryFromWorkshopID(FString& DirectoryPath, FUInt64 WorkshopID, class UObject* WorldContextObject);          // [0xaf46a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetCurrentPlayerSteamID
	// FUInt64 GetCurrentPlayerSteamID();                                                                                       // [0xaf4660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetBaseGameOrModFileNameFromPartial
	// FString GetBaseGameOrModFileNameFromPartial(FString InPartialFilePath, FString LeafName, FString FileExtension, bool bRelativePath, FUInt64 ModID, class UObject* WorldContextObject); // [0xaf4420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetAssetsByPathIncludingMods
	// bool GetAssetsByPathIncludingMods(class UObject* WorldContextObject, EGBResourceType GBResourceType, TArray<FAssetData>& OutAssetData, bool bRecursive, FString PartialFilePathOverride, bool bIncludeOnlyOnDiskAssets, bool bExcludeMods); // [0xaf4100] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GetAllWorkshopTags
	// TArray<FName> GetAllWorkshopTags();                                                                                      // [0xaf4060] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.GenerateCallSignsFromPlayerName
	// TArray<FString> GenerateCallSignsFromPlayerName(FString PlayerName);                                                     // [0xaf3ee0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.ExpandModReferencesInFileName
	// FString ExpandModReferencesInFileName(class UObject* WorldContextObject, FString InFilename, FString DotExt, bool bAddProjectDir, bool bMakeRelativeToProjectContentDir); // [0xaf3b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.DoesHostAllowAsset
	// bool DoesHostAllowAsset(class UObject* WorldContextObject, FPrimaryAssetId& AssetId);                                    // [0xaf3a90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.DeleteStagedModFolder
	// void DeleteStagedModFolder();                                                                                            // [0xaf3a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateUserModsQueryRef
	// class UFMModdingUserModsQuery* CreateUserModsQueryRef(class UObject* WorldContextObject);                                // [0xaf39e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateTitleQueryRef
	// class UFMModdingTitleQuery* CreateTitleQueryRef(class UObject* WorldContextObject);                                      // [0xaf3950] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateServerPlayersQueryRef
	// class UFMModdingServerPlayersQuery* CreateServerPlayersQueryRef(class UObject* WorldContextObject);                      // [0xaf38c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateNonAssetFoldersForMod
	// void CreateNonAssetFoldersForMod(class UObject* WorldContextObject, FUInt64 ModID);                                      // [0xaf3800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateModMetadata
	// FModMetadata CreateModMetadata(FUInt64& WorkshopID, FString Title, FString Description, FString CreatedBy, EModType ModType); // [0xaf3580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateModKitUploadWorkshopItemRef
	// class UModKitUploadWorkshopItem* CreateModKitUploadWorkshopItemRef(class UObject* WorldContextObject);                   // [0xaf34f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateModKitCreateWorkshopItemRef
	// class UModKitCreateWorkshopItem* CreateModKitCreateWorkshopItemRef(class UObject* WorldContextObject);                   // [0xaf3460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CreateModDetailsQueryRef
	// class UFMModdingModDetailsQuery* CreateModDetailsQueryRef(class UObject* WorldContextObject);                            // [0xaf33d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.CondenseModReferencesInFileName
	// FString CondenseModReferencesInFileName(class UObject* WorldContextObject, FString InFilename, bool bRemoveDotExt, bool bRemoveGame); // [0xaf3220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.BlueprintLuaCallWithArgs
	// FLuaValue BlueprintLuaCallWithArgs(class UObject* WorldContextObject, FLuaValue ScriptTable, FString FunctionName, FString Filename, TArray<FLuaValue> InArgs); // [0xaf2f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingFunctionLibrary.BlueprintLuaCall
	// FLuaValue BlueprintLuaCall(class UObject* WorldContextObject, FLuaValue ScriptTable, FString FunctionName, FString Filename); // [0xaf2d70] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/FMModdingPlugin.LuaScriptInfo
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FLuaScriptInfo
{ 
	FLuaValue                                          ScriptTable;                                                // 0x0000   (0x0048)  
	FString                                            Filename;                                                   // 0x0048   (0x0010)  
	FUInt64                                            ModID;                                                      // 0x0058   (0x0008)  
	int32_t                                            ModPriority;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FString                                            PackagePaths;                                               // 0x0068   (0x0010)  
	bool                                               bServerAuthoritative;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/FMModdingPlugin.UGCFileInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FUGCFileInfo
{ 
	FUInt64                                            FileID;                                                     // 0x0000   (0x0008)  
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Description;                                                // 0x0018   (0x0010)  
	FUInt64                                            OwnerSteamID;                                               // 0x0028   (0x0008)  
	bool                                               bBanned;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FUInt64                                            fileSize;                                                   // 0x0038   (0x0008)  
	TArray<FString>                                    Tags;                                                       // 0x0040   (0x0010)  
	float                                              ApprovalScore;                                              // 0x0050   (0x0004)  
	EGBWorkshopModVisibility                           WorkshopModVisibility;                                      // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/FMModdingPlugin.FMModdingManager
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class UFMModdingManager : public UObject
{ 
public:
	class ULuaState*                                   ModdingLuaState;                                            // 0x0028   (0x0008)  
	FUInt64                                            CurrentExecutingModID;                                      // 0x0030   (0x0008)  
	TArray<FLuaScriptInfo>                             ActiveLuaMutators;                                          // 0x0038   (0x0010)  
	TArray<FUInt64>                                    CachedSubscribedModIDList;                                  // 0x0048   (0x0010)  
	TArray<FUInt64>                                    CachedInstalledModIDList;                                   // 0x0058   (0x0010)  
	TArray<FUInt64>                                    CachedActiveModIDList;                                      // 0x0068   (0x0010)  
	TArray<FUInt64>                                    ServerModListForClient;                                     // 0x0078   (0x0010)  
	TMap<uint64_t, FUGCFileInfo>                       CachedModDetails;                                           // 0x0088   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
	class UFMModdingModListRetriever*                  ModListRetriever;                                           // 0x00E8   (0x0008)  
	SDK_UNDEFINED(16,433) /* FDelegateProperty */      __um(ModListRetrieverDelegate);                             // 0x00F0   (0x0010)  
	TArray<class UFMModdingModDetailsQuery*>           ModDetailRetrievers;                                        // 0x0100   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0110   (0x0050)  MISSED
	FString                                            BasePackagePath;                                            // 0x0160   (0x0010)  
	FString                                            BasePackagePathNoMod;                                       // 0x0170   (0x0010)  


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingManager.UpdateCachedFileList
	// void UpdateCachedFileList(EGBResourceType GBResourceType, class UObject* WorldContextObject);                            // [0xafd6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.UnsubscribeFromMod
	// void UnsubscribeFromMod(FUInt64& ModID);                                                                                 // [0xafd640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.UnloadLuaMutatorsForMod
	// void UnloadLuaMutatorsForMod(FUInt64 ModID);                                                                             // [0xafd5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.UnloadAllLuaMutators
	// void UnloadAllLuaMutators();                                                                                             // [0xafd5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SubscribeToMod
	// void SubscribeToMod(FUInt64& ModID);                                                                                     // [0xafd500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetupPackagePath
	// void SetupPackagePath();                                                                                                 // [0xafd4e0] Final|Native|Private 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetServerModListForClient
	// void SetServerModListForClient(TArray<FUInt64>& InServerModListForClient);                                               // [0xafd430] Final|Native|Public|HasOutParms 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetServerAuthoritative
	// void SetServerAuthoritative(FLuaScriptInfo& ScriptInfo, bool bNewServerAuthoritative);                                   // [0xafd2e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetMutatorOptionValueByFilename
	// bool SetMutatorOptionValueByFilename(FString Filename, FName OptionName, int32_t NewValue, bool bSetConfig);             // [0xafd0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetMutatorOptionValue
	// bool SetMutatorOptionValue(FLuaScriptInfo& ScriptInfo, FName OptionName, int32_t NewValue, bool bSetConfig);             // [0xafcef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetMutatorOptionsFromMissionSettings
	// void SetMutatorOptionsFromMissionSettings(FString Params);                                                               // [0xafd240] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetModDisabled
	// void SetModDisabled(FUInt64& ModID, bool bDisabled);                                                                     // [0xafce10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetCurrentExecutingModID
	// void SetCurrentExecutingModID(FUInt64 ModID);                                                                            // [0xafcd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.SetActiveLuaMutators
	// void SetActiveLuaMutators(TArray<FLuaScriptInfo> UpdatedActiveLuaMutators);                                              // [0xafcb90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.RunLuaFileInEnvironment
	// FLuaValue RunLuaFileInEnvironment(class UObject* WorldContextObject, class UClass* LuaStateClass, FLuaScriptInfo& LuaScriptInfo); // [0xafc9d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.PrepLuaMutatorsForMod
	// void PrepLuaMutatorsForMod(FUInt64 ModID, class UObject* WorldContextObject);                                            // [0xafc900] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.PrepAllLuaMutators
	// void PrepAllLuaMutators(class UObject* WorldContextObject);                                                              // [0xafc870] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.IsModSubscribed
	// bool IsModSubscribed(FUInt64& ModID);                                                                                    // [0xafc7a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.IsModInstalled
	// bool IsModInstalled(FUInt64& ModID);                                                                                     // [0xafc6d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.IsModDisabled
	// bool IsModDisabled(FUInt64& ModID, bool bServer);                                                                        // [0xafc5e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.IsModActive
	// bool IsModActive(FUInt64& ModID, bool bServer);                                                                          // [0xafc4a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetSubscribedModList
	// TArray<FUInt64> GetSubscribedModList();                                                                                  // [0xafc3e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetMutatorOptionsByFilename
	// TArray<FLuaScriptOption> GetMutatorOptionsByFilename(FString Filename, bool bUseConfig);                                 // [0xafc2d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetMutatorOptions
	// TArray<FLuaScriptOption> GetMutatorOptions(FLuaScriptInfo& ScriptInfo, bool bUseConfig);                                 // [0xafc150] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetMutatorOptionByFilename
	// FLuaScriptOption GetMutatorOptionByFilename(FString Filename, FName OptionName, bool bUseConfig);                        // [0xafbff0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetMutatorOption
	// FLuaScriptOption GetMutatorOption(FLuaScriptInfo& ScriptInfo, FName OptionName, bool bUseConfig);                        // [0xafbe30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetModListForServer
	// void GetModListForServer(FSteamServerDetails& SteamServerDetails, FDelegateProperty Delegate);                           // [0xafbc90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetModDetails
	// void GetModDetails(FUInt64 ModID, FDelegateProperty Delegate);                                                           // [0xafbba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetLuaScriptInfoForMutatorFileName
	// FLuaScriptInfo GetLuaScriptInfoForMutatorFileName(FString Filename);                                                     // [0xafba80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetInstalledModList
	// TArray<FUInt64> GetInstalledModList();                                                                                   // [0xafb9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetCurrentExecutingModID
	// FUInt64 GetCurrentExecutingModID();                                                                                      // [0xafb9a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetConfigFilename
	// FString GetConfigFilename(FString ConfigFile);                                                                           // [0xafb8e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetCachedFileListIncludingMods
	// bool GetCachedFileListIncludingMods(EGBResourceType GBResourceType, bool bTrimmed, TArray<FString>& FileList, class UObject* WorldContextObject); // [0xafb710] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetCachedFileListIncludingModIDList
	// bool GetCachedFileListIncludingModIDList(EGBResourceType GBResourceType, bool bTrimmed, TArray<FString>& FileList, TArray<FUInt64>& ModIDList, class UObject* WorldContextObject); // [0xafb500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetActiveModList
	// TArray<FUInt64> GetActiveModList();                                                                                      // [0xafb440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingManager.GetActiveLuaMutators
	// TArray<FLuaScriptInfo> GetActiveLuaMutators();                                                                           // [0xafb2a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.Get
	// class UFMModdingManager* Get();                                                                                          // [0xafb270] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.GenerateInstalledModList
	// void GenerateInstalledModList(class UObject* WorldContextObject);                                                        // [0xafb1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.FindLuaMutator
	// bool FindLuaMutator(FLuaScriptInfo& OutLuaScriptInfo, FUInt64 ModID, FString MutatorName);                               // [0xafb020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.CreateInstanceOfScript
	// FLuaValue CreateInstanceOfScript(class UObject* WorldContextObject, class UClass* LuaStateClass, FString ScriptFilename); // [0xafaec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_SetInt
	// void Config_SetInt(FString Filename, FString Section, FString Key, int32_t& Value);                                      // [0xafad40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_SetArray
	// void Config_SetArray(FString Filename, FString Section, FString Key, TArray<FString>& Values, bool bRawFilename);        // [0xafab30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_Save
	// void Config_Save(FString Filename, bool bRawFilename);                                                                   // [0xafaa60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_RemoveFromArray
	// void Config_RemoveFromArray(FString Filename, FString Section, FString Key, FString Value);                              // [0xafa8d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_GetInt
	// int32_t Config_GetInt(FString Filename, FString Section, FString Key, bool& bValid);                                     // [0xafa740] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_GetArray
	// TArray<FString> Config_GetArray(FString Filename, FString Section, FString Key, bool& bValid, bool bRawFilename);        // [0xafa4c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_DeleteArray
	// void Config_DeleteArray(FString Filename, FString Section, FString Key);                                                 // [0xafa380] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.Config_AddToArray
	// void Config_AddToArray(FString Filename, FString Section, FString Key, FString Value);                                   // [0xafa1f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionsReversed
	// void AttemptToCallMutatorFunctionsReversed(FString FunctionName, TArray<FLuaValue>& InArgs);                             // [0xafa0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionsCanIntercept
	// bool AttemptToCallMutatorFunctionsCanIntercept(FString FunctionName, TArray<FLuaValue>& InArgs);                         // [0xaf9f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionsAbortOnAnyTable
	// FLuaValue AttemptToCallMutatorFunctionsAbortOnAnyTable(FString FunctionName, TArray<FLuaValue>& InArgs);                 // [0xaf9e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionsAbortOnAnyString
	// FLuaValue AttemptToCallMutatorFunctionsAbortOnAnyString(FString FunctionName, TArray<FLuaValue>& InArgs);                // [0xaf9cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionsAbortOnAnyInteger
	// FLuaValue AttemptToCallMutatorFunctionsAbortOnAnyInteger(FString FunctionName, TArray<FLuaValue>& InArgs);               // [0xaf9ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctions
	// void AttemptToCallMutatorFunctions(FString FunctionName, TArray<FLuaValue>& InArgs);                                     // [0xaf9a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallMutatorFunctionInMod
	// FLuaValue AttemptToCallMutatorFunctionInMod(FString FunctionName, TArray<FLuaValue>& InArgs, FUInt64& ModID);            // [0xaf98c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallLuaFunction
	// FLuaValue AttemptToCallLuaFunction(FLuaScriptInfo& LuaScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs);      // [0xaf9690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutatorsReversed
	// void AttemptToCallGameModeFunctionAndMutatorsReversed(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf94a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutatorsCanIntercept
	// bool AttemptToCallGameModeFunctionAndMutatorsCanIntercept(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf92a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyString
	// FLuaValue AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyString(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf9070] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyInteger
	// FLuaValue AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyInteger(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf8e40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyBool
	// FLuaValue AttemptToCallGameModeFunctionAndMutatorsAbortOnAnyBool(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf8c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunctionAndMutators
	// void AttemptToCallGameModeFunctionAndMutators(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf8a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingManager.AttemptToCallGameModeFunction
	// FLuaValue AttemptToCallGameModeFunction(FLuaScriptInfo& GameModeScriptInfo, FString FunctionName, TArray<FLuaValue>& InArgs); // [0xaf87f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FMModdingPlugin.FMModdingModDetailsQuery
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UFMModdingModDetailsQuery : public UObject
{ 
public:
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnFinishRetrieveModDetailsEvent);                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
	FUInt64                                            ID;                                                         // 0x0088   (0x0008)  
	bool                                               bHasSucceeded;                                              // 0x0090   (0x0001)  
	bool                                               bHasFinished;                                               // 0x0091   (0x0001)  
	bool                                               bHasFinished_UGCDetails;                                    // 0x0092   (0x0001)  
	bool                                               bHasFinished_Metadata;                                      // 0x0093   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FUGCFileInfo                                       UGCFileInfo;                                                // 0x0098   (0x0058)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingModDetailsQuery.RequestModDetails
	// void RequestModDetails(FUInt64 InID);                                                                                    // [0xb00730] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingModDetailsQuery.CancelQuery
	// void CancelQuery();                                                                                                      // [0xafffd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMModdingPlugin.FMModdingModListRetriever
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UFMModdingModListRetriever : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	uint32_t                                           ServerIP;                                                   // 0x0030   (0x0004)  
	uint16_t                                           ServerQueryPort;                                            // 0x0034   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	TArray<FUInt64>                                    ModList;                                                    // 0x0038   (0x0010)  
	bool                                               bHasFinished;                                               // 0x0048   (0x0001)  
	bool                                               bWasSuccessful;                                             // 0x0049   (0x0001)  
	unsigned char                                      UnknownData02_7[0x16];                                      // 0x004A   (0x0016)  MISSED
};

/// Struct /Script/FMModdingPlugin.FMModInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FFMModInfo
{ 
	FUInt64                                            ID;                                                         // 0x0000   (0x0008)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	EFMModStatus                                       Status;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Pct;                                                        // 0x001C   (0x0004)  
	float                                              CurrentDownload;                                            // 0x0020   (0x0004)  
	float                                              TotalDownload;                                              // 0x0024   (0x0004)  
};

/// Class /Script/FMModdingPlugin.FMModdingModSync
/// Size: 0x02C8 (712 bytes) (0x000220 - 0x0002C8) align 8 MaxSize: 0x02C8
class AFMModdingModSync : public AActor
{ 
public:
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(OnFinishModSyncEventMC);                             // 0x0220   (0x0010)  
	FTimerHandle                                       TimerHandle_UnmountInactiveMods;                            // 0x0230   (0x0008)  
	FTimerHandle                                       TimerHandle_MountActiveMods;                                // 0x0238   (0x0008)  
	TArray<FUInt64>                                    ModsToUnmount;                                              // 0x0240   (0x0010)  
	int32_t                                            TotalModsToUnmount;                                         // 0x0250   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0254   (0x0004)  MISSED
	TArray<FUInt64>                                    ModsToMount;                                                // 0x0258   (0x0010)  
	int32_t                                            TotalModsToMount;                                           // 0x0268   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x026C   (0x0004)  MISSED
	TArray<FFMModInfo>                                 ModList;                                                    // 0x0270   (0x0010)  
	int32_t                                            ModSyncIndex;                                               // 0x0280   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	TArray<class UFMModdingModDetailsQuery*>           Retrievers;                                                 // 0x0288   (0x0010)  
	bool                                               bHasFinished;                                               // 0x0298   (0x0001)  
	bool                                               bWasSuccessful;                                             // 0x0299   (0x0001)  
	bool                                               bModsNeedSync;                                              // 0x029A   (0x0001)  
	bool                                               bModDetailsAreLoaded;                                       // 0x029B   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x029C   (0x0004)  MISSED
	TArray<FUInt64>                                    RawModList;                                                 // 0x02A0   (0x0010)  
	EFMSyncStatus                                      GlobalSyncStatus;                                           // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData04_7[0x17];                                      // 0x02B1   (0x0017)  MISSED


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingModSync.StartSync
	// void StartSync();                                                                                                        // [0xb00c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingModSync.ShowUI
	// void ShowUI();                                                                                                           // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.SetGlobalSyncStatus
	// void SetGlobalSyncStatus(EFMSyncStatus NewSyncStatus);                                                                   // [0xb00bd0] Final|Native|Protected 
	// Function /Script/FMModdingPlugin.FMModdingModSync.OnModSyncMountUnmountEvent
	// void OnModSyncMountUnmountEvent(int32_t NumModsRemaining, int32_t TotalModsToMountOrUnmount, bool bMounting);            // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.OnModSyncFinishedEvent
	// void OnModSyncFinishedEvent(bool bWasSyncSuccessful);                                                                    // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.OnModSyncEvent
	// void OnModSyncEvent(FUInt64& ModID, bool bWasSyncSuccessful);                                                            // [0x235b330] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.OnModGlobalSyncStatusUpdatedEvent
	// void OnModGlobalSyncStatusUpdatedEvent(EFMSyncStatus NewSyncStatus);                                                     // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.IsModSyncRequired
	// bool IsModSyncRequired();                                                                                                // [0xb005f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingModSync.IsAnySyncRequired
	// bool IsAnySyncRequired();                                                                                                // [0xb005c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingModSync.Initialize
	// void Initialize(TArray<FUInt64> InModList, bool bInUseUI);                                                               // [0xb00490] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingModSync.HideUI
	// void HideUI();                                                                                                           // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/FMModdingPlugin.FMModdingModSync.GetGlobalSyncStatus
	// EFMSyncStatus GetGlobalSyncStatus();                                                                                     // [0xb00170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingModSync.CancelSync
	// void CancelSync();                                                                                                       // [0xb00010] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingModSync.BypassSync
	// void BypassSync();                                                                                                       // [0xafffb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingModSync.AreModDetailsLoaded
	// bool AreModDetailsLoaded();                                                                                              // [0xafff90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingModSync.AdvanceSyncStatus
	// void AdvanceSyncStatus();                                                                                                // [0xafff70] Final|Native|Protected 
};

/// Class /Script/FMModdingPlugin.FMModdingServerPlayersQuery
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UFMModdingServerPlayersQuery : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<FString>                                    QueuedPlayerNames;                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingServerPlayersQuery.ReturnPlayersList
	// void ReturnPlayersList(bool bSuccess);                                                                                   // [0xb00b00] Final|Native|Protected 
	// Function /Script/FMModdingPlugin.FMModdingServerPlayersQuery.RequestPlayersList
	// void RequestPlayersList(FSteamServerDetails& SteamServerDetails, FDelegateProperty Delegate);                            // [0xb008e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingServerPlayersQuery.IsRefreshing
	// bool IsRefreshing();                                                                                                     // [0xb00620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingServerPlayersQuery.CancelRequestPlayersList
	// void CancelRequestPlayersList();                                                                                         // [0xaffff0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FMModdingPlugin.GBModBasicInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGBModBasicInfo
{ 
	FUInt64                                            ModID;                                                      // 0x0000   (0x0008)  
	bool                                               bIsActive;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/FMModdingPlugin.FMModdingSettings
/// Size: 0x0148 (328 bytes) (0x000028 - 0x000148) align 8 MaxSize: 0x0148
class UFMModdingSettings : public UObject
{ 
public:
	FSoftClassPath                                     ModdingLuaStateClass;                                       // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	FString                                            ConfigPath;                                                 // 0x0050   (0x0010)  
	FString                                            ModPath;                                                    // 0x0060   (0x0010)  
	int32_t                                            GroundBranchSteamAppID;                                     // 0x0070   (0x0004)  
	int32_t                                            GroundBranchSDKAppID;                                       // 0x0074   (0x0004)  
	EGBPatchVisibility                                 PatchVisibility;                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	SDK_UNDEFINED(80,436) /* TSet<FName> */            __um(CensoredPatches);                                      // 0x0080   (0x0050)  
	TMap<FUInt64, int32_t>                             ModPriorities;                                              // 0x00D0   (0x0050)  
	bool                                               bUseLocalModListForServer;                                  // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	TArray<FGBModBasicInfo>                            ServerMods;                                                 // 0x0128   (0x0010)  
	FString                                            ModPathDevBuild;                                            // 0x0138   (0x0010)  


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingSettings.SaveConfigServer
	// void SaveConfigServer();                                                                                                 // [0xb00bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.SaveConfigClient
	// void SaveConfigClient();                                                                                                 // [0xb00b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.RemoveCensoredPatch
	// void RemoveCensoredPatch(FString PatchFilename);                                                                         // [0xb00690] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.LoadConfigServer
	// void LoadConfigServer();                                                                                                 // [0xb00670] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.LoadConfigClient
	// void LoadConfigClient();                                                                                                 // [0xb00650] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetUseLocalModListForServer
	// bool GetUseLocalModListForServer();                                                                                      // [0xb00470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetServerMods
	// TArray<FGBModBasicInfo> GetServerMods();                                                                                 // [0xb003b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetPatchVisibility
	// EGBPatchVisibility GetPatchVisibility();                                                                                 // [0xb00390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetModIsDisabled
	// bool GetModIsDisabled(FUInt64& ModID);                                                                                   // [0xb002c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetIsPatchCensored
	// bool GetIsPatchCensored(FString PatchFilename);                                                                          // [0xb00190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetDisabledMods
	// TArray<FUInt64> GetDisabledMods();                                                                                       // [0xb000b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.GetAreAnyPatchesCensored
	// bool GetAreAnyPatchesCensored();                                                                                         // [0xb00080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMModdingPlugin.FMModdingSettings.Get
	// class UFMModdingSettings* Get();                                                                                         // [0xb00050] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMModdingPlugin.FMModdingSettings.ClearAllCensoredPatches
	// void ClearAllCensoredPatches();                                                                                          // [0xb00030] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMModdingPlugin.FMModdingSettings.AddCensoredPatch
	// void AddCensoredPatch(FString PatchFilename);                                                                            // [0xaffed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMModdingPlugin.FMModdingTitleQuery
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UFMModdingTitleQuery : public UObject
{ 
public:
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(OnFinishRetrieveModsEvent);                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	FString                                            SearchText;                                                 // 0x0060   (0x0010)  
	FName                                              WorkshopTag;                                                // 0x0070   (0x0008)  
	bool                                               bFilterUsingTag;                                            // 0x0078   (0x0001)  
	bool                                               bHasSucceeded;                                              // 0x0079   (0x0001)  
	bool                                               bHasFinished;                                               // 0x007A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x007B   (0x0005)  MISSED
	TArray<FUInt64>                                    ModList;                                                    // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingTitleQuery.RequestModList
	// void RequestModList(FString InSearchText, FName InWorkshopTag, bool bOnlyCurrentGameVersion);                            // [0xb007b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMModdingPlugin.FMModdingUserModsQuery
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UFMModdingUserModsQuery : public UObject
{ 
public:
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(OnFinishRetrieveUserModsEvent);                      // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	FUInt64                                            SteamUserID;                                                // 0x0060   (0x0008)  
	bool                                               bHasSucceeded;                                              // 0x0068   (0x0001)  
	bool                                               bHasFinished;                                               // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
	TArray<FUInt64>                                    ModList;                                                    // 0x0070   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0080   (0x0018)  MISSED


	/// Functions
	// Function /Script/FMModdingPlugin.FMModdingUserModsQuery.RequestUserModList
	// void RequestUserModList(FUInt64 InSteamUserID);                                                                          // [0xb00a80] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/FMModdingPlugin.GBModdingResourceCacheInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGBModdingResourceCacheInfo
{ 
	FString                                            Filename;                                                   // 0x0000   (0x0010)  
	FUInt64                                            ModID;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/FMModdingPlugin.LuaScriptOption
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FLuaScriptOption
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            Min;                                                        // 0x0008   (0x0004)  
	int32_t                                            Max;                                                        // 0x000C   (0x0004)  
	int32_t                                            Value;                                                      // 0x0010   (0x0004)  
	bool                                               bAdvancedSetting;                                           // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	int32_t                                            SortOrder;                                                  // 0x0018   (0x0004)  
};

/// Struct /Script/FMModdingPlugin.GBResourceList
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGBResourceList
{ 
	EGBResourceType                                    ResourceType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FString>                                    ResourceFilePaths;                                          // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UFMModdingAdmin) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFMModdingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLuaScriptInfo) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FUGCFileInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UFMModdingManager) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(UFMModdingModDetailsQuery) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UFMModdingModListRetriever) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FFMModInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(AFMModdingModSync) == 0x02C8); // 712 bytes (0x000220 - 0x0002C8)
static_assert(sizeof(UFMModdingServerPlayersQuery) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGBModBasicInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UFMModdingSettings) == 0x0148); // 328 bytes (0x000028 - 0x000148)
static_assert(sizeof(UFMModdingTitleQuery) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UFMModdingUserModsQuery) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FGBModdingResourceCacheInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLuaScriptOption) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FGBResourceList) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FLuaScriptInfo, ScriptTable) == 0x0000);
static_assert(offsetof(FLuaScriptInfo, Filename) == 0x0048);
static_assert(offsetof(FLuaScriptInfo, ModID) == 0x0058);
static_assert(offsetof(FLuaScriptInfo, PackagePaths) == 0x0068);
static_assert(offsetof(FUGCFileInfo, FileID) == 0x0000);
static_assert(offsetof(FUGCFileInfo, Title) == 0x0008);
static_assert(offsetof(FUGCFileInfo, Description) == 0x0018);
static_assert(offsetof(FUGCFileInfo, OwnerSteamID) == 0x0028);
static_assert(offsetof(FUGCFileInfo, fileSize) == 0x0038);
static_assert(offsetof(FUGCFileInfo, Tags) == 0x0040);
static_assert(offsetof(FUGCFileInfo, WorkshopModVisibility) == 0x0054);
static_assert(offsetof(UFMModdingManager, ModdingLuaState) == 0x0028);
static_assert(offsetof(UFMModdingManager, CurrentExecutingModID) == 0x0030);
static_assert(offsetof(UFMModdingManager, ActiveLuaMutators) == 0x0038);
static_assert(offsetof(UFMModdingManager, CachedSubscribedModIDList) == 0x0048);
static_assert(offsetof(UFMModdingManager, CachedInstalledModIDList) == 0x0058);
static_assert(offsetof(UFMModdingManager, CachedActiveModIDList) == 0x0068);
static_assert(offsetof(UFMModdingManager, ServerModListForClient) == 0x0078);
static_assert(offsetof(UFMModdingManager, CachedModDetails) == 0x0088);
static_assert(offsetof(UFMModdingManager, ModListRetriever) == 0x00E8);
static_assert(offsetof(UFMModdingManager, ModDetailRetrievers) == 0x0100);
static_assert(offsetof(UFMModdingManager, BasePackagePath) == 0x0160);
static_assert(offsetof(UFMModdingManager, BasePackagePathNoMod) == 0x0170);
static_assert(offsetof(UFMModdingModDetailsQuery, ID) == 0x0088);
static_assert(offsetof(UFMModdingModDetailsQuery, UGCFileInfo) == 0x0098);
static_assert(offsetof(UFMModdingModListRetriever, ModList) == 0x0038);
static_assert(offsetof(FFMModInfo, ID) == 0x0000);
static_assert(offsetof(FFMModInfo, Name) == 0x0008);
static_assert(offsetof(FFMModInfo, Status) == 0x0018);
static_assert(offsetof(AFMModdingModSync, TimerHandle_UnmountInactiveMods) == 0x0230);
static_assert(offsetof(AFMModdingModSync, TimerHandle_MountActiveMods) == 0x0238);
static_assert(offsetof(AFMModdingModSync, ModsToUnmount) == 0x0240);
static_assert(offsetof(AFMModdingModSync, ModsToMount) == 0x0258);
static_assert(offsetof(AFMModdingModSync, ModList) == 0x0270);
static_assert(offsetof(AFMModdingModSync, Retrievers) == 0x0288);
static_assert(offsetof(AFMModdingModSync, RawModList) == 0x02A0);
static_assert(offsetof(AFMModdingModSync, GlobalSyncStatus) == 0x02B0);
static_assert(offsetof(UFMModdingServerPlayersQuery, QueuedPlayerNames) == 0x0038);
static_assert(offsetof(FGBModBasicInfo, ModID) == 0x0000);
static_assert(offsetof(UFMModdingSettings, ModdingLuaStateClass) == 0x0028);
static_assert(offsetof(UFMModdingSettings, ConfigPath) == 0x0050);
static_assert(offsetof(UFMModdingSettings, ModPath) == 0x0060);
static_assert(offsetof(UFMModdingSettings, PatchVisibility) == 0x0078);
static_assert(offsetof(UFMModdingSettings, ModPriorities) == 0x00D0);
static_assert(offsetof(UFMModdingSettings, ServerMods) == 0x0128);
static_assert(offsetof(UFMModdingSettings, ModPathDevBuild) == 0x0138);
static_assert(offsetof(UFMModdingTitleQuery, SearchText) == 0x0060);
static_assert(offsetof(UFMModdingTitleQuery, WorkshopTag) == 0x0070);
static_assert(offsetof(UFMModdingTitleQuery, ModList) == 0x0080);
static_assert(offsetof(UFMModdingUserModsQuery, SteamUserID) == 0x0060);
static_assert(offsetof(UFMModdingUserModsQuery, ModList) == 0x0070);
static_assert(offsetof(FGBModdingResourceCacheInfo, Filename) == 0x0000);
static_assert(offsetof(FGBModdingResourceCacheInfo, ModID) == 0x0010);
static_assert(offsetof(FLuaScriptOption, Name) == 0x0000);
static_assert(offsetof(FGBResourceList, ResourceType) == 0x0000);
static_assert(offsetof(FGBResourceList, ResourceFilePaths) == 0x0008);
