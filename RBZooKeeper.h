
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

/// Enum /Script/RBZooKeeper.EZKAdminCommandResult
/// Size: 0x01 (1 bytes)
enum class EZKAdminCommandResult : uint8_t
{
	EZKAdminCommandResult__Rejected                                                  = 0,
	EZKAdminCommandResult__Invalid                                                   = 1,
	EZKAdminCommandResult__Denied                                                    = 2,
	EZKAdminCommandResult__Ok                                                        = 3,
	EZKAdminCommandResult__ShowMenu                                                  = 4,
	EZKAdminCommandResult__SetupFailed                                               = 5,
	EZKAdminCommandResult__SetupPassed                                               = 6
};

/// Enum /Script/RBZooKeeper.EGBServerShutdownType
/// Size: 0x01 (1 bytes)
enum class EGBServerShutdownType : uint8_t
{
	EGBServerShutdownType__AfterTime                                                 = 0,
	EGBServerShutdownType__AtTime                                                    = 1
};

/// Class /Script/RBZooKeeper.ZKCore
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UZKCore : public UObject
{ 
public:
	class UGameInstance*                               GameInstance;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/RBZooKeeper.ZKAdminGroupInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FZKAdminGroupInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	TArray<FString>                                    Commands;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/RBZooKeeper.ZKAdminInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FZKAdminInfo
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            UniqueId;                                                   // 0x0010   (0x0010)  
	FString                                            ContactInfo;                                                // 0x0020   (0x0010)  
	FString                                            Group;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/RBZooKeeper.ZKAdmin
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UZKAdmin : public UZKCore
{ 
public:
	TArray<FZKAdminGroupInfo>                          AdminGroups;                                                // 0x0040   (0x0010)  
	TArray<FZKAdminInfo>                               Admins;                                                     // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0060   (0x0001)  MISSED
	bool                                               bEnableSetupCommand;                                        // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0062   (0x0006)  MISSED


	/// Functions
	// Function /Script/RBZooKeeper.ZKAdmin.IsAnyAdminOnline
	// bool IsAnyAdminOnline();                                                                                                 // [0xd9da20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKAdmin.GetAdminInfo
	// bool GetAdminInfo(FString UniqueId, FZKAdminInfo& OutAdminInfo);                                                         // [0xd9d040] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKAdmin.GetAdminGroupCommands
	// TArray<FString> GetAdminGroupCommands(FString AdminGroupName);                                                           // [0xd9cf50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKAdmin.GetAdminCommands
	// TArray<FString> GetAdminCommands(FString UniqueId);                                                                      // [0xd9ce60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKAdmin.Get
	// class UZKAdmin* Get();                                                                                                   // [0xd9cd10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBZooKeeper.ZKAdmin.AllowPlayerName
	// bool AllowPlayerName(FString PlayerName, FString UniqueId);                                                              // [0xd9ca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKAdmin.AdminCommand
	// EZKAdminCommandResult AdminCommand(FString UniqueId, FString Parameters);                                                // [0xd9c980] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RBZooKeeper.ZKAFKInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FZKAFKInfo
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Class /Script/RBZooKeeper.ZKAFKDetection
/// Size: 0x00C0 (192 bytes) (0x000040 - 0x0000C0) align 8 MaxSize: 0x00C0
class UZKAFKDetection : public UZKCore
{ 
public:
	TMap<class APlayerController*, FZKAFKInfo>         AFKInfoMap;                                                 // 0x0040   (0x0050)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0090   (0x0020)  MISSED
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(AFKDetected);                                        // 0x00B0   (0x0010)  
};

/// Struct /Script/RBZooKeeper.ZKBanInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FZKBanInfo
{ 
	FString                                            PlayerName;                                                 // 0x0000   (0x0010)  
	FString                                            UniqueId;                                                   // 0x0010   (0x0010)  
	FString                                            Reason;                                                     // 0x0020   (0x0010)  
	FDateTime                                          Expiry;                                                     // 0x0030   (0x0008)  
};

/// Class /Script/RBZooKeeper.ZKBan
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UZKBan : public UZKCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0040   (0x0004)  MISSED
	int32_t                                            DefaultBanDuration;                                         // 0x0044   (0x0004)  
	TArray<FZKBanInfo>                                 Banned;                                                     // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/RBZooKeeper.ZKBan.IsBanned
	// bool IsBanned(FString UniqueId, FString& OutBanReason);                                                                  // [0xd9da50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKBan.Get
	// class UZKBan* Get();                                                                                                     // [0xd9cd40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RBZooKeeper.ZKCommands
/// Size: 0x0060 (96 bytes) (0x000040 - 0x000060) align 8 MaxSize: 0x0060
class UZKCommands : public UZKCore
{ 
public:
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(OnProcessCommand);                                   // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(MutePlayer);                                         // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/RBZooKeeper.ZKCommands.Get
	// class UZKCommands* Get();                                                                                                // [0xd9cd70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RBZooKeeper.ZKKitRestrictions
/// Size: 0x0058 (88 bytes) (0x000040 - 0x000058) align 8 MaxSize: 0x0058
class UZKKitRestrictions : public UZKCore
{ 
public:
	TArray<FString>                                    KitRestrictions;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/RBZooKeeper.ZKMapList
/// Size: 0x00C8 (200 bytes) (0x000040 - 0x0000C8) align 8 MaxSize: 0x00C8
class UZKMapList : public UZKCore
{ 
public:
	TArray<FString>                                    MapList;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0050   (0x0078)  MISSED


	/// Functions
	// Function /Script/RBZooKeeper.ZKMapList.Get
	// class UZKMapList* Get();                                                                                                 // [0xd9cda0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RBZooKeeper.ZKServer
/// Size: 0x01A8 (424 bytes) (0x000040 - 0x0001A8) align 8 MaxSize: 0x01A8
class UZKServer : public UZKCore
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0040   (0x0010)  MISSED
	FString                                            ServerName;                                                 // 0x0050   (0x0010)  
	FString                                            ServerMOTD;                                                 // 0x0060   (0x0010)  
	FString                                            ServerWebBanner;                                            // 0x0070   (0x0010)  
	FString                                            ServerPassword;                                             // 0x0080   (0x0010)  
	FString                                            SpectatorOnlyPassword;                                      // 0x0090   (0x0010)  
	int32_t                                            MaxPlayers;                                                 // 0x00A0   (0x0004)  
	int32_t                                            MaxSpectators;                                              // 0x00A4   (0x0004)  
	TMap<FName, bool>                                  GameRules;                                                  // 0x00A8   (0x0050)  
	FString                                            PVEMatchType;                                               // 0x00F8   (0x0010)  
	char                                               PVERoundLimit;                                              // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FString                                            PVPMatchType;                                               // 0x0110   (0x0010)  
	char                                               PVPRoundLimit;                                              // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FString                                            PVPFFAMatchType;                                            // 0x0128   (0x0010)  
	char                                               PVPFFARoundLimit;                                           // 0x0138   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            ReadyCountdownTime;                                         // 0x013C   (0x0004)  
	int32_t                                            ServerShutdownType;                                         // 0x0140   (0x0004)  
	int32_t                                            ServerShutdownHour;                                         // 0x0144   (0x0004)  
	int32_t                                            ServerShutdownTimeLimit;                                    // 0x0148   (0x0004)  
	int32_t                                            ServerShutdownGracePeriod;                                  // 0x014C   (0x0004)  
	int32_t                                            BadWordCountLimit;                                          // 0x0150   (0x0004)  
	int32_t                                            BadWordTimeLimit;                                           // 0x0154   (0x0004)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x0158   (0x0030)  MISSED
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnServerSettingsUpdated);                            // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,426) /* FMulticastInlineDelegate */ __um(OnServerGameRulesUpdated);                           // 0x0198   (0x0010)  


	/// Functions
	// Function /Script/RBZooKeeper.ZKServer.SetMatchInfoSettingsAsLines
	// void SetMatchInfoSettingsAsLines(TArray<FString> Lines);                                                                 // [0xd9dcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKServer.HasWhiteList
	// bool HasWhiteList();                                                                                                     // [0xd9d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBZooKeeper.ZKServer.GetSpectatorOnlyPassword
	// FString GetSpectatorOnlyPassword();                                                                                      // [0xd9d6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetServerWebBanner
	// FString GetServerWebBanner();                                                                                            // [0xd9d5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetServerShutdownSchedule
	// FGBServerShutdownSchedule GetServerShutdownSchedule();                                                                   // [0xd9d590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetServerPassword
	// FString GetServerPassword();                                                                                             // [0xd9d4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetServerName
	// FString GetServerName();                                                                                                 // [0xd9d3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetServerMOTD
	// FString GetServerMOTD();                                                                                                 // [0xd9d290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetReadyCountdownTime
	// int32_t GetReadyCountdownTime();                                                                                         // [0xd9d270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetMaxSpectators
	// int32_t GetMaxSpectators();                                                                                              // [0xd9d250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetMaxPlayers
	// int32_t GetMaxPlayers();                                                                                                 // [0xd9d230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKServer.GetMatchInfoSettingsAsLines
	// TArray<FString> GetMatchInfoSettingsAsLines();                                                                           // [0xd9d1b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBZooKeeper.ZKServer.Get
	// class UZKServer* Get();                                                                                                  // [0xd9cdd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/RBZooKeeper.ZKCommandInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FZKCommandInfo
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	FString                                            Desc;                                                       // 0x0010   (0x0010)  
};

/// Class /Script/RBZooKeeper.ZKSettings
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class UZKSettings : public UObject
{ 
public:
	FString                                            ConfigPath;                                                 // 0x0028   (0x0010)  
	bool                                               bEnableAdminSetup;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FString>                                    RequiredGameOptions;                                        // 0x0040   (0x0010)  
	TMap<FName, bool>                                  DefaultGameRules;                                           // 0x0050   (0x0050)  
	TArray<FZKCommandInfo>                             CommandList;                                                // 0x00A0   (0x0010)  
	TArray<FZKAdminGroupInfo>                          DefaultAdminGroups;                                         // 0x00B0   (0x0010)  
	TArray<FString>                                    DefaultVotingCommands;                                      // 0x00C0   (0x0010)  
	TArray<FString>                                    DefaultPermittedGameModes;                                  // 0x00D0   (0x0010)  
	TArray<FString>                                    DefaultMapList;                                             // 0x00E0   (0x0010)  
	int32_t                                            KickBanTime;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/RBZooKeeper.ZKTeamKillRecord
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FZKTeamKillRecord
{ 
	FString                                            UniqueId;                                                   // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	int32_t                                            Forgives;                                                   // 0x0014   (0x0004)  
	FDateTime                                          LastModified;                                               // 0x0018   (0x0008)  
};

/// Struct /Script/RBZooKeeper.ZKTeamKillerInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FZKTeamKillerInfo
{ 
	FString                                            LastKnownName;                                              // 0x0000   (0x0010)  
	FDateTime                                          LastKicked;                                                 // 0x0010   (0x0008)  
	FString                                            UniqueId;                                                   // 0x0018   (0x0010)  
	TArray<FZKTeamKillRecord>                          TeamKillRecords;                                            // 0x0028   (0x0010)  
};

/// Class /Script/RBZooKeeper.ZKTeamKill
/// Size: 0x0070 (112 bytes) (0x000040 - 0x000070) align 8 MaxSize: 0x0070
class UZKTeamKill : public UZKCore
{ 
public:
	int32_t                                            MaxTeamKills;                                               // 0x0040   (0x0004)  
	int32_t                                            BanTime;                                                    // 0x0044   (0x0004)  
	int32_t                                            TeamKillExpireTime;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FZKTeamKillerInfo>                          TeamKillers;                                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0060   (0x0010)  MISSED


	/// Functions
	// Function /Script/RBZooKeeper.ZKTeamKill.ReportTeamKill
	// void ReportTeamKill(FString TeamKillerUniqueId, FString VictimUniqueId);                                                 // [0xd9dbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKTeamKill.GetTotalTeamKills
	// int32_t GetTotalTeamKills(FString TeamKillerUniqueId, bool bMinusForgives);                                              // [0xd9d900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKTeamKill.GetTeamKills
	// int32_t GetTeamKills(FString TeamKillerUniqueId, FString VictimUniqueId, bool bMinusForgives);                           // [0xd9d7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKTeamKill.Get
	// class UZKTeamKill* Get();                                                                                                // [0xd9ce00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBZooKeeper.ZKTeamKill.ForgiveTeamKill
	// void ForgiveTeamKill(FString TeamKillerUniqueId, FString VictimUniqueId);                                                // [0xd9cc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKTeamKill.AddTeamKill
	// void AddTeamKill(FString TeamKillerUniqueId, FString TeamKillerName, FString VictimUniqueId, FString VictimName);        // [0xd9c7e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/RBZooKeeper.ZKVote
/// Size: 0x01D0 (464 bytes) (0x000040 - 0x0001D0) align 8 MaxSize: 0x01D0
class UZKVote : public UZKCore
{ 
public:
	TMap<class APlayerState*, bool>                    VoterChoiceMap;                                             // 0x0040   (0x0050)  
	int32_t                                            VoteDuration;                                               // 0x0090   (0x0004)  
	int32_t                                            VoteSucceededTimeout;                                       // 0x0094   (0x0004)  
	int32_t                                            VoteFailedTimeout;                                          // 0x0098   (0x0004)  
	int32_t                                            MapVoteTimeout;                                             // 0x009C   (0x0004)  
	int32_t                                            MinPlayers;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<FString>                                    VotingCommands;                                             // 0x00A8   (0x0010)  
	int32_t                                            VoteDelayFromRoundStart;                                    // 0x00B8   (0x0004)  
	bool                                               bAllowVotesWhenAdminPresent;                                // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x43];                                      // 0x00BD   (0x0043)  MISSED
	SDK_UNDEFINED(16,427) /* FMulticastInlineDelegate */ __um(OnVoteStarted);                                      // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnVoteEnded);                                        // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnVoteCountUpdated);                                 // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnVoteCommand);                                      // 0x0130   (0x0010)  
	bool                                               bAllowVotingOffMapList;                                     // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0141   (0x0007)  MISSED
	TArray<FString>                                    PermittedGameModes;                                         // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0158   (0x0008)  MISSED
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnPlayerCastNextMapVote);                            // 0x0160   (0x0010)  
	TMap<class APlayerState*, int32_t>                 VoterNextMapIndexMap;                                       // 0x0170   (0x0050)  
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnVoteSettingsUpdated);                              // 0x01C0   (0x0010)  


	/// Functions
	// Function /Script/RBZooKeeper.ZKVote.VotePassed
	// void VotePassed();                                                                                                       // [0xd9e080] Final|Native|Protected 
	// Function /Script/RBZooKeeper.ZKVote.VoteCommand
	// void VoteCommand(class APlayerController* PlayerController, FString Parameters);                                         // [0xd9dfa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKVote.StartVote
	// void StartVote(class APlayerController* PlayerController, FString Command, FString Parameters);                          // [0xd9de60] Final|Native|Public|BlueprintCallable 
	// Function /Script/RBZooKeeper.ZKVote.ReportPlayStateChanged
	// void ReportPlayStateChanged(bool bPlaying);                                                                              // [0xd9db60] Final|Native|Public  
	// Function /Script/RBZooKeeper.ZKVote.GetAllowVotesWhenAdminPresent
	// bool GetAllowVotesWhenAdminPresent();                                                                                    // [0xd9d190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RBZooKeeper.ZKVote.Get
	// class UZKVote* Get();                                                                                                    // [0xd9ce30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBZooKeeper.ZKVote.EndVote
	// void EndVote(bool bPassed);                                                                                              // [0xd9cb80] Final|Native|Public  
};

/// Struct /Script/RBZooKeeper.ZKReplicatedContent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FZKReplicatedContent
{ 
	FName                                              Type;                                                       // 0x0000   (0x0008)  
	TArray<FString>                                    Lines;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/RBZooKeeper.GBServerShutdownSchedule
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGBServerShutdownSchedule
{ 
	EGBServerShutdownType                              ShutdownType;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ShutdownHour;                                               // 0x0004   (0x0004)  
	int32_t                                            ShutdownTimeLimit;                                          // 0x0008   (0x0004)  
	int32_t                                            ShutdownGracePeriod;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/RBZooKeeper.GBMatchInfoSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGBMatchInfoSettings
{ 
	FString                                            PVEMatchType;                                               // 0x0000   (0x0010)  
	char                                               PVERoundLimit;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            PVPMatchType;                                               // 0x0018   (0x0010)  
	char                                               PVPRoundLimit;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FString                                            PVPFFAMatchType;                                            // 0x0030   (0x0010)  
	char                                               PVPFFARoundLimit;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UZKCore) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FZKAdminGroupInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZKAdminInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UZKAdmin) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(FZKAFKInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UZKAFKDetection) == 0x00C0); // 192 bytes (0x000040 - 0x0000C0)
static_assert(sizeof(FZKBanInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UZKBan) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UZKCommands) == 0x0060); // 96 bytes (0x000040 - 0x000060)
static_assert(sizeof(UZKKitRestrictions) == 0x0058); // 88 bytes (0x000040 - 0x000058)
static_assert(sizeof(UZKMapList) == 0x00C8); // 200 bytes (0x000040 - 0x0000C8)
static_assert(sizeof(UZKServer) == 0x01A8); // 424 bytes (0x000040 - 0x0001A8)
static_assert(sizeof(FZKCommandInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UZKSettings) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(FZKTeamKillRecord) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FZKTeamKillerInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UZKTeamKill) == 0x0070); // 112 bytes (0x000040 - 0x000070)
static_assert(sizeof(UZKVote) == 0x01D0); // 464 bytes (0x000040 - 0x0001D0)
static_assert(sizeof(FZKReplicatedContent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGBServerShutdownSchedule) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGBMatchInfoSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(UZKCore, GameInstance) == 0x0028);
static_assert(offsetof(FZKAdminGroupInfo, Name) == 0x0000);
static_assert(offsetof(FZKAdminGroupInfo, Commands) == 0x0010);
static_assert(offsetof(FZKAdminInfo, Name) == 0x0000);
static_assert(offsetof(FZKAdminInfo, UniqueId) == 0x0010);
static_assert(offsetof(FZKAdminInfo, ContactInfo) == 0x0020);
static_assert(offsetof(FZKAdminInfo, Group) == 0x0030);
static_assert(offsetof(UZKAdmin, AdminGroups) == 0x0040);
static_assert(offsetof(UZKAdmin, Admins) == 0x0050);
static_assert(offsetof(UZKAFKDetection, AFKInfoMap) == 0x0040);
static_assert(offsetof(FZKBanInfo, PlayerName) == 0x0000);
static_assert(offsetof(FZKBanInfo, UniqueId) == 0x0010);
static_assert(offsetof(FZKBanInfo, Reason) == 0x0020);
static_assert(offsetof(FZKBanInfo, Expiry) == 0x0030);
static_assert(offsetof(UZKBan, Banned) == 0x0048);
static_assert(offsetof(UZKKitRestrictions, KitRestrictions) == 0x0040);
static_assert(offsetof(UZKMapList, MapList) == 0x0040);
static_assert(offsetof(UZKServer, ServerName) == 0x0050);
static_assert(offsetof(UZKServer, ServerMOTD) == 0x0060);
static_assert(offsetof(UZKServer, ServerWebBanner) == 0x0070);
static_assert(offsetof(UZKServer, ServerPassword) == 0x0080);
static_assert(offsetof(UZKServer, SpectatorOnlyPassword) == 0x0090);
static_assert(offsetof(UZKServer, GameRules) == 0x00A8);
static_assert(offsetof(UZKServer, PVEMatchType) == 0x00F8);
static_assert(offsetof(UZKServer, PVPMatchType) == 0x0110);
static_assert(offsetof(UZKServer, PVPFFAMatchType) == 0x0128);
static_assert(offsetof(FZKCommandInfo, Command) == 0x0000);
static_assert(offsetof(FZKCommandInfo, Desc) == 0x0010);
static_assert(offsetof(UZKSettings, ConfigPath) == 0x0028);
static_assert(offsetof(UZKSettings, RequiredGameOptions) == 0x0040);
static_assert(offsetof(UZKSettings, DefaultGameRules) == 0x0050);
static_assert(offsetof(UZKSettings, CommandList) == 0x00A0);
static_assert(offsetof(UZKSettings, DefaultAdminGroups) == 0x00B0);
static_assert(offsetof(UZKSettings, DefaultVotingCommands) == 0x00C0);
static_assert(offsetof(UZKSettings, DefaultPermittedGameModes) == 0x00D0);
static_assert(offsetof(UZKSettings, DefaultMapList) == 0x00E0);
static_assert(offsetof(FZKTeamKillRecord, UniqueId) == 0x0000);
static_assert(offsetof(FZKTeamKillRecord, LastModified) == 0x0018);
static_assert(offsetof(FZKTeamKillerInfo, LastKnownName) == 0x0000);
static_assert(offsetof(FZKTeamKillerInfo, LastKicked) == 0x0010);
static_assert(offsetof(FZKTeamKillerInfo, UniqueId) == 0x0018);
static_assert(offsetof(FZKTeamKillerInfo, TeamKillRecords) == 0x0028);
static_assert(offsetof(UZKTeamKill, TeamKillers) == 0x0050);
static_assert(offsetof(UZKVote, VoterChoiceMap) == 0x0040);
static_assert(offsetof(UZKVote, VotingCommands) == 0x00A8);
static_assert(offsetof(UZKVote, PermittedGameModes) == 0x0148);
static_assert(offsetof(UZKVote, VoterNextMapIndexMap) == 0x0170);
static_assert(offsetof(FZKReplicatedContent, Type) == 0x0000);
static_assert(offsetof(FZKReplicatedContent, Lines) == 0x0008);
static_assert(offsetof(FGBServerShutdownSchedule, ShutdownType) == 0x0000);
static_assert(offsetof(FGBMatchInfoSettings, PVEMatchType) == 0x0000);
static_assert(offsetof(FGBMatchInfoSettings, PVPMatchType) == 0x0018);
static_assert(offsetof(FGBMatchInfoSettings, PVPFFAMatchType) == 0x0030);
