
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

/// Enum /Script/RBSteamworks.ESteamServerType
/// Size: 0x01 (1 bytes)
enum class ESteamServerType : uint8_t
{
	ESteamServerType__Internet                                                       = 0,
	ESteamServerType__LAN                                                            = 1,
	ESteamServerType__Friends                                                        = 2,
	ESteamServerType__Favorites                                                      = 3,
	ESteamServerType__History                                                        = 4,
	ESteamServerType__Spectator                                                      = 5
};

/// Enum /Script/RBSteamworks.ERBSteamPersonaState
/// Size: 0x01 (1 bytes)
enum class ERBSteamPersonaState : uint8_t
{
	ERBSteamPersonaState__Offline                                                    = 0,
	ERBSteamPersonaState__Online                                                     = 1,
	ERBSteamPersonaState__Busy                                                       = 2,
	ERBSteamPersonaState__Away                                                       = 3,
	ERBSteamPersonaState__Snooze                                                     = 4,
	ERBSteamPersonaState__Unknown                                                    = 5
};

/// Struct /Script/RBSteamworks.SteamServerDetails
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FSteamServerDetails
{ 
	FString                                            ServerName;                                                 // 0x0000   (0x0010)  
	bool                                               bPassword;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            MapName;                                                    // 0x0018   (0x0010)  
	int32_t                                            Players;                                                    // 0x0028   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x002C   (0x0004)  
	int32_t                                            Ping;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	FString                                            ConnectionString;                                           // 0x0038   (0x0010)  
	TArray<FString>                                    TagArray;                                                   // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	bool                                               bIsFavourite;                                               // 0x0060   (0x0001)  
	bool                                               bIsModded;                                                  // 0x0061   (0x0001)  
	bool                                               bHasKitRestrictions;                                        // 0x0062   (0x0001)  
	unsigned char                                      UnknownData03_7[0x5];                                       // 0x0063   (0x0005)  MISSED
};

/// Class /Script/RBSteamworks.RBQueryServer
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class URBQueryServer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	FSteamServerDetails                                ReturnedSteamServerDetails;                                 // 0x0038   (0x0068)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00A0   (0x0010)  MISSED
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnServerQueryResponseReceivedEvent);                 // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/RBSteamworks.RBQueryServer.RequestServerDetailsFromConnectionString
	// void RequestServerDetailsFromConnectionString(FString IPConnectionString);                                               // [0xd77a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBQueryServer.RequestServerDetails
	// void RequestServerDetails(FServerNetAddress& ServerNetAddress);                                                          // [0xd77980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBQueryServer.IsAwaitingQueryResponse
	// bool IsAwaitingQueryResponse();                                                                                          // [0xd77460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBSteamworks.RBQueryServer.CheckForQueryResponse
	// void CheckForQueryResponse();                                                                                            // [0xd76ba0] Final|Native|Protected 
	// Function /Script/RBSteamworks.RBQueryServer.CancelRequestServerDetails
	// void CancelRequestServerDetails();                                                                                       // [0xd76b60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RBSteamworks.RBServerList
/// Size: 0x0198 (408 bytes) (0x000028 - 0x000198) align 8 MaxSize: 0x0198
class URBServerList : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<FSteamServerDetails>                        QueuedSteamServerDetails;                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x120];                                     // 0x0048   (0x0120)  MISSED
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(OnServerRespondedEvent);                             // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(OnServerRefreshCompleteEvent);                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnServerRespondedWithDetailedInfoEvent);             // 0x0188   (0x0010)  


	/// Functions
	// Function /Script/RBSteamworks.RBServerList.RequestServerList
	// void RequestServerList(ESteamServerType Type);                                                                           // [0xd77b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBServerList.RequestDetailedServerInfo
	// void RequestDetailedServerInfo(FSteamServerDetails& ServerDetails);                                                      // [0xd77840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBServerList.RemoveServerFromFavourites
	// void RemoveServerFromFavourites(FSteamServerDetails& ServerDetails);                                                     // [0xd77700] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBServerList.ParseQueuedServerList
	// void ParseQueuedServerList();                                                                                            // [0xd776e0] Final|Native|Protected 
	// Function /Script/RBSteamworks.RBServerList.IsServerFavourited
	// bool IsServerFavourited(FSteamServerDetails& ServerDetails);                                                             // [0xd77490] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBServerList.IsRefreshing
	// bool IsRefreshing();                                                                                                     // [0xb00620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBSteamworks.RBServerList.CancelRequestServerList
	// void CancelRequestServerList();                                                                                          // [0xd76b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBServerList.CancelRequestDetailedServerInfo
	// void CancelRequestDetailedServerInfo(FSteamServerDetails& ServerDetails);                                                // [0xd76a20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBServerList.AddServerToFavourites
	// void AddServerToFavourites(FSteamServerDetails& ServerDetails);                                                          // [0xd768e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/RBSteamworks.RBSteamworksFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URBSteamworksFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.MatchingSteamID
	// bool MatchingSteamID(FRBSteamID& A, FRBSteamID& B);                                                                      // [0xd775d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.InviteUserToGame
	// bool InviteUserToGame(FRBSteamID SteamID, FString ConnectString);                                                        // [0xd77320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.GetSteamFriendsList
	// TArray<FRBSteamFriendDetails> GetSteamFriendsList();                                                                     // [0xd77080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.GetFileSizeStringFromFloat
	// FString GetFileSizeStringFromFloat(float fileSize);                                                                      // [0xd76f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.GetFileSizeString
	// FString GetFileSizeString(FSteamWebAPIResponse_ModInfo& ModInfo);                                                        // [0xd76e10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.GetFileSizeFloat
	// float GetFileSizeFloat(FSteamWebAPIResponse_ModInfo& ModInfo);                                                           // [0xd76d30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.GetAppID
	// int32_t GetAppID();                                                                                                      // [0xd76d00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.CreateRBWebAPIQueryRef
	// class URBWebAPIQuery* CreateRBWebAPIQueryRef(class UObject* WorldContextObject);                                         // [0xd76c70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSteamworks.RBSteamworksFunctionLibrary.CreateRBServerListRef
	// class URBServerList* CreateRBServerListRef(class UObject* WorldContextObject);                                           // [0xd76be0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RBSteamworks.RBWebAPIQuery
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class URBWebAPIQuery : public UObject
{ 
public:
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(OnSteamWebAPIQueryResponseModInfo);                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
	SDK_UNDEFINED(16,420) /* FMulticastInlineDelegate */ __um(OnSteamWebAPIQueryResponseServerIPLookup);           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnSteamWebAPIQueryResponseUGCFileDetails);           // 0x0098   (0x0010)  


	/// Functions
	// Function /Script/RBSteamworks.RBWebAPIQuery.ServerIPLookupFromConnectionString
	// void ServerIPLookupFromConnectionString(FString IPConnectionString);                                                     // [0xd77c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBWebAPIQuery.ServerIPLookup
	// void ServerIPLookup(FServerNetAddress& IPAddress);                                                                       // [0xd77b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBWebAPIQuery.GetUGCFileDetails
	// void GetUGCFileDetails(FString ModIDString, FString WebAPIKey, int32_t AppID, FString SteamID);                          // [0xd77190] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBSteamworks.RBWebAPIQuery.GetModInfo
	// void GetModInfo(TArray<FString>& ModIDStrings);                                                                          // [0xd76fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBSteamworks.RBWebAPIQuery.ClearModInfoCache
	// void ClearModInfoCache();                                                                                                // [0xd76bc0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RBSteamworks.SteamServerDetailedInfo
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FSteamServerDetailedInfo
{ 
	FSteamServerDetails                                SteamServerDetails;                                         // 0x0000   (0x0068)  
	FName                                              RuleName;                                                   // 0x0068   (0x0008)  
	FString                                            RuleValue;                                                  // 0x0070   (0x0010)  
	bool                                               bInvalidResponse;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/RBSteamworks.SteamWebAPIResponse_ModInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FSteamWebAPIResponse_ModInfo
{ 
	uint64_t                                           RawWorkshopID;                                              // 0x0000   (0x0008)  
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Description;                                                // 0x0018   (0x0010)  
	FString                                            CreatedBy;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/RBSteamworks.ServerNetAddress
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FServerNetAddress
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RBSteamworks.SteamServerFavourite
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSteamServerFavourite
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/RBSteamworks.RBSteamID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FRBSteamID
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RBSteamworks.RBSteamFriendDetails
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRBSteamFriendDetails
{ 
	FRBSteamID                                         SteamID;                                                    // 0x0000   (0x0008)  
	FString                                            PersonaName;                                                // 0x0008   (0x0010)  
	ERBSteamPersonaState                               PersonaState;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSteamServerDetails) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(URBQueryServer) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(URBServerList) == 0x0198); // 408 bytes (0x000028 - 0x000198)
static_assert(sizeof(URBSteamworksFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URBWebAPIQuery) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(FSteamServerDetailedInfo) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FSteamWebAPIResponse_ModInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FServerNetAddress) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSteamServerFavourite) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRBSteamID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRBSteamFriendDetails) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FSteamServerDetails, ServerName) == 0x0000);
static_assert(offsetof(FSteamServerDetails, MapName) == 0x0018);
static_assert(offsetof(FSteamServerDetails, ConnectionString) == 0x0038);
static_assert(offsetof(FSteamServerDetails, TagArray) == 0x0048);
static_assert(offsetof(URBQueryServer, ReturnedSteamServerDetails) == 0x0038);
static_assert(offsetof(URBServerList, QueuedSteamServerDetails) == 0x0038);
static_assert(offsetof(FSteamServerDetailedInfo, SteamServerDetails) == 0x0000);
static_assert(offsetof(FSteamServerDetailedInfo, RuleName) == 0x0068);
static_assert(offsetof(FSteamServerDetailedInfo, RuleValue) == 0x0070);
static_assert(offsetof(FSteamWebAPIResponse_ModInfo, Title) == 0x0008);
static_assert(offsetof(FSteamWebAPIResponse_ModInfo, Description) == 0x0018);
static_assert(offsetof(FSteamWebAPIResponse_ModInfo, CreatedBy) == 0x0028);
static_assert(offsetof(FRBSteamFriendDetails, SteamID) == 0x0000);
static_assert(offsetof(FRBSteamFriendDetails, PersonaName) == 0x0008);
static_assert(offsetof(FRBSteamFriendDetails, PersonaState) == 0x0018);
