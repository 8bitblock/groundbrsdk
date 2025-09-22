
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

/// Enum /Script/LadyBugTrackerRuntime.EIssueProfile
/// Size: 0x01 (1 bytes)
enum class EIssueProfile : uint8_t
{
	EIssueProfile__Default                                                           = 0,
	EIssueProfile__Game                                                              = 1,
	EIssueProfile__Editor                                                            = 2,
	EIssueProfile__Crash                                                             = 3,
	EIssueProfile__Feedback                                                          = 4
};

/// Enum /Script/LadyBugTrackerRuntime.EIssueViewMode
/// Size: 0x01 (1 bytes)
enum class EIssueViewMode : uint8_t
{
	EIssueViewMode__None                                                             = 0,
	EIssueViewMode__View                                                             = 1,
	EIssueViewMode__Edit                                                             = 2,
	EIssueViewMode__Report                                                           = 3
};

/// Enum /Script/LadyBugTrackerRuntime.EReportScreenShotMode
/// Size: 0x01 (1 bytes)
enum class EReportScreenShotMode : uint8_t
{
	EReportScreenShotMode__None                                                      = 0,
	EReportScreenShotMode__EditorActiveWindow                                        = 1,
	EReportScreenShotMode__EditorLevelViewport                                       = 2,
	EReportScreenShotMode__EditorAllWindows                                          = 3,
	EReportScreenShotMode__Game                                                      = 4
};

/// Struct /Script/LadyBugTrackerRuntime.EnumString
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FEnumString
{ 
	FString                                            Value;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.BugTrackerProfileSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FBugTrackerProfileSettings
{ 
	FEnumString                                        DefaultCategory;                                            // 0x0000   (0x0010)  
	FEnumString                                        DefaultPriority;                                            // 0x0010   (0x0010)  
	FEnumString                                        DefaultSeverity;                                            // 0x0020   (0x0010)  
	FEnumString                                        DefaultReproducibility;                                     // 0x0030   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.BugTrackerSettingsCustomField
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBugTrackerSettingsCustomField
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0010   (0x0010)  
};

/// Class /Script/LadyBugTrackerRuntime.BugTrackerSettings
/// Size: 0x0220 (544 bytes) (0x000028 - 0x000220) align 8 MaxSize: 0x0220
class UBugTrackerSettings : public UObject
{ 
public:
	FString                                            Provider;                                                   // 0x0028   (0x0010)  
	FString                                            Host;                                                       // 0x0038   (0x0010)  
	FString                                            ProjectName;                                                // 0x0048   (0x0010)  
	FSoftClassPath                                     ConstructorClass;                                           // 0x0058   (0x0018)  
	FBugTrackerProfileSettings                         DefaultProfile;                                             // 0x0070   (0x0040)  
	FBugTrackerProfileSettings                         EditorProfile;                                              // 0x00B0   (0x0040)  
	FBugTrackerProfileSettings                         GameProfile;                                                // 0x00F0   (0x0040)  
	FBugTrackerProfileSettings                         CrashProfile;                                               // 0x0130   (0x0040)  
	FBugTrackerProfileSettings                         FeedbackProfile;                                            // 0x0170   (0x0040)  
	TMap<FString, FString>                             MapRenameOldToNew;                                          // 0x01B0   (0x0050)  
	TArray<FBugTrackerSettingsCustomField>             CustomFields;                                               // 0x0200   (0x0010)  
	FString                                            AndroidStorage;                                             // 0x0210   (0x0010)  
};

/// Class /Script/LadyBugTrackerRuntime.BugTrackerUserSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UBugTrackerUserSettings : public UObject
{ 
public:
	FString                                            Username;                                                   // 0x0028   (0x0010)  
	FString                                            Password;                                                   // 0x0038   (0x0010)  
	bool                                               bRememberMe;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FString                                            EditImageTool;                                              // 0x0050   (0x0010)  
};

/// Class /Script/LadyBugTrackerRuntime.IssueCollection
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UIssueCollection : public UObject
{ 
public:
	TArray<class UIssueData*>                          Issues;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/LadyBugTrackerRuntime.IssueConstructor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UIssueConstructor : public UObject
{ 
public:


	/// Functions
	// Function /Script/LadyBugTrackerRuntime.IssueConstructor.GetLevelNameFromSreamingLevel
	// FString GetLevelNameFromSreamingLevel(class ULevelStreaming* LevelStreaming);                                            // [0x14f2d30] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LadyBugTrackerRuntime.IssueConstructor.GetLevelName
	// FString GetLevelName();                                                                                                  // [0x14f2c90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LadyBugTrackerRuntime.IssueConstructor.GetCamera
	// bool GetCamera(FVector& Location, FRotator& Rotation);                                                                   // [0x14f2950] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.IssueConstructor.ConstructIssue
	// void ConstructIssue(class UIssueData* Issue, EIssueProfile Profile);                                                     // [0x235b330] Event|Public|BlueprintEvent 
};

/// Struct /Script/LadyBugTrackerRuntime.IssueCustomField
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FIssueCustomField
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.IssueAttachment
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FIssueAttachment
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Filename;                                                   // 0x0008   (0x0010)  
	FString                                            ContentType;                                                // 0x0018   (0x0010)  
	FString                                            URL;                                                        // 0x0028   (0x0010)  
	FDateTime                                          DateSubmitted;                                              // 0x0038   (0x0008)  
	int32_t                                            Size;                                                       // 0x0040   (0x0004)  
	int32_t                                            UserId;                                                     // 0x0044   (0x0004)  
	bool                                               bUpload;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.IssueNote
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FIssueNote
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Text;                                                       // 0x0008   (0x0010)  
	FString                                            Reporter;                                                   // 0x0018   (0x0010)  
	FDateTime                                          DateSubmitted;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/LadyBugTrackerRuntime.IssueHistory
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FIssueHistory
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Class /Script/LadyBugTrackerRuntime.IssueData
/// Size: 0x01F0 (496 bytes) (0x000028 - 0x0001F0) align 8 MaxSize: 0x01F0
class UIssueData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            URL;                                                        // 0x0030   (0x0010)  
	int32_t                                            ID;                                                         // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FString                                            Project;                                                    // 0x0048   (0x0010)  
	FString                                            Reporter;                                                   // 0x0058   (0x0010)  
	FEnumString                                        Handler;                                                    // 0x0068   (0x0010)  
	FString                                            Summary;                                                    // 0x0078   (0x0010)  
	FString                                            Description;                                                // 0x0088   (0x0010)  
	FString                                            StepsToReproduce;                                           // 0x0098   (0x0010)  
	FString                                            AdditionalInformation;                                      // 0x00A8   (0x0010)  
	FEnumString                                        Category;                                                   // 0x00B8   (0x0010)  
	FEnumString                                        Severity;                                                   // 0x00C8   (0x0010)  
	FEnumString                                        Status;                                                     // 0x00D8   (0x0010)  
	FEnumString                                        Priority;                                                   // 0x00E8   (0x0010)  
	FDateTime                                          DateSubmitted;                                              // 0x00F8   (0x0008)  
	FDateTime                                          LastUpdated;                                                // 0x0100   (0x0008)  
	FEnumString                                        Resolution;                                                 // 0x0108   (0x0010)  
	FEnumString                                        TargetVersion;                                              // 0x0118   (0x0010)  
	FEnumString                                        ProductVersion;                                             // 0x0128   (0x0010)  
	FEnumString                                        FixedInVersion;                                             // 0x0138   (0x0010)  
	FEnumString                                        Reproducibility;                                            // 0x0148   (0x0010)  
	FString                                            Platform;                                                   // 0x0158   (0x0010)  
	FString                                            Os;                                                         // 0x0168   (0x0010)  
	FString                                            OsBuild;                                                    // 0x0178   (0x0010)  
	FString                                            Tags;                                                       // 0x0188   (0x0010)  
	TArray<FIssueCustomField>                          CustomFields;                                               // 0x0198   (0x0010)  
	TArray<FIssueAttachment>                           Attachments;                                                // 0x01A8   (0x0010)  
	TArray<FIssueNote>                                 Notes;                                                      // 0x01B8   (0x0010)  
	TArray<FIssueHistory>                              History;                                                    // 0x01C8   (0x0010)  
	bool                                               bGoto;                                                      // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x17];                                      // 0x01D9   (0x0017)  MISSED


	/// Functions
	// Function /Script/LadyBugTrackerRuntime.IssueData.SetCustomFieldValue
	// bool SetCustomFieldValue(FString FieldName, FString Value);                                                              // [0x14f3720] Final|Native|Public|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.IssueData.SetCameraTransform
	// void SetCameraTransform(FVector& Location, FRotator& Rotation);                                                          // [0x14f3640] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.IssueData.GetLevelName
	// FString GetLevelName();                                                                                                  // [0x14f2ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LadyBugTrackerRuntime.IssueData.GetCustomFieldValue
	// FString GetCustomFieldValue(FString FieldName);                                                                          // [0x14f2bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LadyBugTrackerRuntime.IssueData.GetCameraTransform
	// FTransform GetCameraTransform();                                                                                         // [0x14f2a50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LadyBugTrackerRuntime.FeedbackData
/// Size: 0x01F0 (496 bytes) (0x0001F0 - 0x0001F0) align 8 MaxSize: 0x01F0
class UFeedbackData : public UIssueData
{ 
public:
};

/// Class /Script/LadyBugTrackerRuntime.RuntimeUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URuntimeUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.SendFeedback
	// void SendFeedback(class UFeedbackData* Feedback, FString Username, FString PasswordOrToken, FDelegateProperty& OnSuccess, FDelegateProperty& OnFail); // [0x14f3440] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.SendAttachment
	// void SendAttachment(int32_t IssueId, FString FullPath, FString Filename, FString ContentMimeType, FString Username, FString PasswordOrToken, FDelegateProperty& OnSuccess, FDelegateProperty& OnFail); // [0x14f3140] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.ReportIssueData
	// bool ReportIssueData(class UIssueData* Issue, TArray<FString>& Attachments, bool bTakeScreenshots, bool bAttachLogs);    // [0x14f2fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.ReportIssue
	// bool ReportIssue(FString Summary, TArray<FString>& Attachments, bool bTakeScreenshots, bool bAttachLogs);                // [0x14f2df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.GetCategories
	// void GetCategories(FDelegateProperty& OnSuccess, FDelegateProperty& OnFail);                                             // [0x14f2ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.CreateIssue
	// class UIssueData* CreateIssue();                                                                                         // [0x14f2920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.CreateFeedback
	// class UFeedbackData* CreateFeedback();                                                                                   // [0x14f28f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.AddScreenshot
	// void AddScreenshot(class UFeedbackData* Feedback, FLatentActionInfo LatentInfo, bool& bSuccess, bool bInShowUI, int32_t DesiredWidth, int32_t DesiredHeight); // [0x14f26e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.AddLog
	// bool AddLog(class UFeedbackData* Feedback);                                                                              // [0x14f2650] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LadyBugTrackerRuntime.RuntimeUtilities.AddCustomField
	// void AddCustomField(class UFeedbackData* Feedback, FString Field, FString Value);                                        // [0x14f2520] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/LadyBugTrackerRuntime.CategoriesHelper
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCategoriesHelper
{ 
	TArray<FString>                                    Categories;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.IssueUserData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FIssueUserData
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.ProjectData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FProjectData
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.IssueCustomFieldDefinition
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FIssueCustomFieldDefinition
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_Fault
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_Fault
{ 
	FString                                            FaultCode;                                                  // 0x0000   (0x0010)  
	FString                                            FaultString;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ObjectRef
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMantisConnect_ObjectRef
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumAccessLevelsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumAccessLevelsResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_AuthorizeBase
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_AuthorizeBase
{ 
	FString                                            Username;                                                   // 0x0000   (0x0010)  
	FString                                            Password;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumAccessLevels
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumAccessLevels : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumPrioritiesResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumPrioritiesResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumPriorities
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumPriorities : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumReproducibilitiesResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumReproducibilitiesResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumReproducibilities
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumReproducibilities : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumResolutionsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumResolutionsResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumResolutions
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumResolutions : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumSeveritiesResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumSeveritiesResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumSeverities
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumSeverities : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumStatusResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_EnumStatusResponse
{ 
	TArray<FMantisConnect_ObjectRef>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_EnumStatus
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_EnumStatus : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectDataBase
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FMantisConnect_ProjectDataBase
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FMantisConnect_ObjectRef                           Status;                                                     // 0x0020   (0x0018)  
	bool                                               Enabled;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FMantisConnect_ObjectRef                           ViewState;                                                  // 0x0040   (0x0018)  
	FMantisConnect_ObjectRef                           AccessMin;                                                  // 0x0058   (0x0018)  
	FString                                            FilePath;                                                   // 0x0070   (0x0010)  
	FString                                            Description;                                                // 0x0080   (0x0010)  
	bool                                               InheritGlobal;                                              // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_7[0x17];                                      // 0x0091   (0x0017)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData5
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData5 : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectDataBase>             Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData4
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData4 : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectData5>                Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData3
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData3 : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectData4>                Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData2
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData2 : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectData3>                Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData1
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData1 : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectData2>                Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectData
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_ProjectData : FMantisConnect_ProjectDataBase
{ 
	TArray<FMantisConnect_ProjectData1>                Subprojects;                                                // 0x00A8   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectsGetUserAccessibleResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectsGetUserAccessibleResponse
{ 
	TArray<FMantisConnect_ProjectData>                 Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectsGetUserAccessible
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_ProjectsGetUserAccessible : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectVersionData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_ProjectVersionData
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FString                                            Description;                                                // 0x0010   (0x0010)  
	bool                                               Released;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetVersionsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectGetVersionsResponse
{ 
	TArray<FMantisConnect_ProjectVersionData>          Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetVersions
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_ProjectGetVersions : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            ProjectID;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_CustomFieldDefinitionData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FMantisConnect_CustomFieldDefinitionData
{ 
	FMantisConnect_ObjectRef                           Field;                                                      // 0x0000   (0x0018)  
	int32_t                                            Type;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            PossibleValues;                                             // 0x0020   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0030   (0x0010)  
	FString                                            ValidRegexp;                                                // 0x0040   (0x0010)  
	int32_t                                            AccessLevelR;                                               // 0x0050   (0x0004)  
	int32_t                                            AccessLevelRw;                                              // 0x0054   (0x0004)  
	int32_t                                            LengthMin;                                                  // 0x0058   (0x0004)  
	int32_t                                            LengthMax;                                                  // 0x005C   (0x0004)  
	bool                                               Advanced;                                                   // 0x0060   (0x0001)  
	bool                                               DisplayReport;                                              // 0x0061   (0x0001)  
	bool                                               DisplayUpdate;                                              // 0x0062   (0x0001)  
	bool                                               DisplayResolved;                                            // 0x0063   (0x0001)  
	bool                                               DisplayClosed;                                              // 0x0064   (0x0001)  
	bool                                               RequireReport;                                              // 0x0065   (0x0001)  
	bool                                               RequireUpdate;                                              // 0x0066   (0x0001)  
	bool                                               RequireResolved;                                            // 0x0067   (0x0001)  
	bool                                               RequireClosed;                                              // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetCustomFieldsResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectGetCustomFieldsResponse
{ 
	TArray<FMantisConnect_CustomFieldDefinitionData>   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetCustomFields
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_ProjectGetCustomFields : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            ProjectID;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_AccountData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FMantisConnect_AccountData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            RealName;                                                   // 0x0018   (0x0010)  
	FString                                            Email;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetUsersResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectGetUsersResponse
{ 
	TArray<FMantisConnect_AccountData>                 Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetUsers
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_ProjectGetUsers : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            ProjectID;                                                  // 0x0020   (0x0004)  
	int32_t                                            Access;                                                     // 0x0024   (0x0004)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetIdFromNameResponse
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FMantisConnect_ProjectGetIdFromNameResponse
{ 
	int32_t                                            Return;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetIdFromName
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align 8 MaxSize: 0x0030
struct FMantisConnect_ProjectGetIdFromName : FMantisConnect_AuthorizeBase
{ 
	FString                                            ProjectName;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetCategoriesResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectGetCategoriesResponse
{ 
	TArray<FString>                                    Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetCategories
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_ProjectGetCategories : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            ProjectID;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_AttachmentData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMantisConnect_AttachmentData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            Filename;                                                   // 0x0008   (0x0010)  
	int32_t                                            Size;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            ContentType;                                                // 0x0020   (0x0010)  
	FDateTime                                          DateSubmitted;                                              // 0x0030   (0x0008)  
	FString                                            DownloadUrl;                                                // 0x0038   (0x0010)  
	int32_t                                            UserId;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_RelationshipData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_RelationshipData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMantisConnect_ObjectRef                           Type;                                                       // 0x0008   (0x0018)  
	int32_t                                            TargetId;                                                   // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueNoteData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FMantisConnect_IssueNoteData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMantisConnect_AccountData                         Reporter;                                                   // 0x0008   (0x0038)  
	FString                                            Text;                                                       // 0x0040   (0x0010)  
	FMantisConnect_ObjectRef                           ViewState;                                                  // 0x0050   (0x0018)  
	FDateTime                                          DateSubmitted;                                              // 0x0068   (0x0008)  
	FDateTime                                          LastModified;                                               // 0x0070   (0x0008)  
	int32_t                                            TimeTracking;                                               // 0x0078   (0x0004)  
	int32_t                                            NoteType;                                                   // 0x007C   (0x0004)  
	FString                                            NoteAttr;                                                   // 0x0080   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_CustomFieldValueForIssueData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_CustomFieldValueForIssueData
{ 
	FMantisConnect_ObjectRef                           Field;                                                      // 0x0000   (0x0018)  
	FString                                            Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueData
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FMantisConnect_IssueData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMantisConnect_ObjectRef                           ViewState;                                                  // 0x0008   (0x0018)  
	FDateTime                                          LastUpdated;                                                // 0x0020   (0x0008)  
	FMantisConnect_ObjectRef                           Project;                                                    // 0x0028   (0x0018)  
	FString                                            Category;                                                   // 0x0040   (0x0010)  
	FMantisConnect_ObjectRef                           Priority;                                                   // 0x0050   (0x0018)  
	FMantisConnect_ObjectRef                           Severity;                                                   // 0x0068   (0x0018)  
	FMantisConnect_ObjectRef                           Status;                                                     // 0x0080   (0x0018)  
	FMantisConnect_AccountData                         Reporter;                                                   // 0x0098   (0x0038)  
	FString                                            Summary;                                                    // 0x00D0   (0x0010)  
	FString                                            Version;                                                    // 0x00E0   (0x0010)  
	FString                                            Build;                                                      // 0x00F0   (0x0010)  
	FString                                            Platform;                                                   // 0x0100   (0x0010)  
	FString                                            Os;                                                         // 0x0110   (0x0010)  
	FString                                            OsBuild;                                                    // 0x0120   (0x0010)  
	FMantisConnect_ObjectRef                           Reproducibility;                                            // 0x0130   (0x0018)  
	FDateTime                                          DateSubmitted;                                              // 0x0148   (0x0008)  
	int32_t                                            SponsorshipTotal;                                           // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FMantisConnect_AccountData                         Handler;                                                    // 0x0158   (0x0038)  
	FMantisConnect_ObjectRef                           Projection;                                                 // 0x0190   (0x0018)  
	FMantisConnect_ObjectRef                           Eta;                                                        // 0x01A8   (0x0018)  
	FMantisConnect_ObjectRef                           Resolution;                                                 // 0x01C0   (0x0018)  
	FString                                            FixedInVersion;                                             // 0x01D8   (0x0010)  
	FString                                            TargetVersion;                                              // 0x01E8   (0x0010)  
	FString                                            Description;                                                // 0x01F8   (0x0010)  
	FString                                            StepsToReproduce;                                           // 0x0208   (0x0010)  
	FString                                            AdditionalInformation;                                      // 0x0218   (0x0010)  
	TArray<FMantisConnect_AttachmentData>              Attachments;                                                // 0x0228   (0x0010)  
	TArray<FMantisConnect_RelationshipData>            Relationships;                                              // 0x0238   (0x0010)  
	TArray<FMantisConnect_IssueNoteData>               Notes;                                                      // 0x0248   (0x0010)  
	TArray<FMantisConnect_CustomFieldValueForIssueData> CustomFields;                                              // 0x0258   (0x0010)  
	FDateTime                                          DueDate;                                                    // 0x0268   (0x0008)  
	TArray<FMantisConnect_AccountData>                 Monitors;                                                   // 0x0270   (0x0010)  
	bool                                               Sticky;                                                     // 0x0280   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0281   (0x0007)  MISSED
	TArray<FMantisConnect_ObjectRef>                   Tags;                                                       // 0x0288   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetIssuesResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_ProjectGetIssuesResponse
{ 
	TArray<FMantisConnect_IssueData>                   Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_ProjectGetIssues
/// Size: 0x0030 (48 bytes) (0x000020 - 0x000030) align 8 MaxSize: 0x0030
struct FMantisConnect_ProjectGetIssues : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            ProjectID;                                                  // 0x0020   (0x0004)  
	int32_t                                            PageNumber;                                                 // 0x0024   (0x0004)  
	int32_t                                            PerPage;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_HistoryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMantisConnect_HistoryData
{ 
	int32_t                                            Date;                                                       // 0x0000   (0x0004)  
	int32_t                                            UserId;                                                     // 0x0004   (0x0004)  
	FString                                            Username;                                                   // 0x0008   (0x0010)  
	FString                                            Field;                                                      // 0x0018   (0x0010)  
	int32_t                                            Type;                                                       // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FString                                            OldValue;                                                   // 0x0030   (0x0010)  
	FString                                            NewValue;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueGetHistoryResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_IssueGetHistoryResponse
{ 
	TArray<FMantisConnect_HistoryData>                 Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueGetHistory
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_IssueGetHistory : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueNoteDeleteResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMantisConnect_IssueNoteDeleteResponse
{ 
	bool                                               Return;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueNoteDelete
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_IssueNoteDelete : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueNoteId;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueNoteAddResponse
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FMantisConnect_IssueNoteAddResponse
{ 
	int32_t                                            Return;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueNoteAdd
/// Size: 0x00B8 (184 bytes) (0x000020 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMantisConnect_IssueNoteAdd : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMantisConnect_IssueNoteData                       Note;                                                       // 0x0028   (0x0090)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAttachmentGetResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_IssueAttachmentGetResponse
{ 
	FString                                            Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAttachmentGet
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_IssueAttachmentGet : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueAttachmentId;                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAttachmentAddResponse
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FMantisConnect_IssueAttachmentAddResponse
{ 
	int32_t                                            Return;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAttachmentAdd
/// Size: 0x0058 (88 bytes) (0x000020 - 0x000058) align 8 MaxSize: 0x0058
struct FMantisConnect_IssueAttachmentAdd : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FString                                            Name;                                                       // 0x0028   (0x0010)  
	FString                                            FileType;                                                   // 0x0038   (0x0010)  
	FString                                            Content;                                                    // 0x0048   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueUpdateResponse
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMantisConnect_IssueUpdateResponse
{ 
	bool                                               Return;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueUpdate
/// Size: 0x02C0 (704 bytes) (0x000020 - 0x0002C0) align 8 MaxSize: 0x02C0
struct FMantisConnect_IssueUpdate : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FMantisConnect_IssueData                           Issue;                                                      // 0x0028   (0x0298)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAddResponse
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FMantisConnect_IssueAddResponse
{ 
	int32_t                                            Return;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueAdd
/// Size: 0x02B8 (696 bytes) (0x000020 - 0x0002B8) align 8 MaxSize: 0x02B8
struct FMantisConnect_IssueAdd : FMantisConnect_AuthorizeBase
{ 
	FMantisConnect_IssueData                           Issue;                                                      // 0x0020   (0x0298)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueGetResponse
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FMantisConnect_IssueGetResponse
{ 
	FMantisConnect_IssueData                           Return;                                                     // 0x0000   (0x0298)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_IssueGet
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMantisConnect_IssueGet : FMantisConnect_AuthorizeBase
{ 
	int32_t                                            IssueId;                                                    // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_UserData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMantisConnect_UserData
{ 
	FMantisConnect_AccountData                         AccountData;                                                // 0x0000   (0x0038)  
	int32_t                                            AccessLevel;                                                // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            Timezone;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_LoginResponse
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FMantisConnect_LoginResponse
{ 
	FMantisConnect_UserData                            Return;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_Login
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMantisConnect_Login : FMantisConnect_AuthorizeBase
{ 
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_VersionResponse
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMantisConnect_VersionResponse
{ 
	FString                                            Return;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/LadyBugTrackerRuntime.MantisConnect_Version
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMantisConnect_Version
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FEnumString) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBugTrackerProfileSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FBugTrackerSettingsCustomField) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UBugTrackerSettings) == 0x0220); // 544 bytes (0x000028 - 0x000220)
static_assert(sizeof(UBugTrackerUserSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UIssueCollection) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UIssueConstructor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FIssueCustomField) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FIssueAttachment) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FIssueNote) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FIssueHistory) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UIssueData) == 0x01F0); // 496 bytes (0x000028 - 0x0001F0)
static_assert(sizeof(UFeedbackData) == 0x01F0); // 496 bytes (0x0001F0 - 0x0001F0)
static_assert(sizeof(URuntimeUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FCategoriesHelper) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FIssueUserData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FProjectData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FIssueCustomFieldDefinition) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMantisConnect_Fault) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMantisConnect_ObjectRef) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMantisConnect_EnumAccessLevelsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_AuthorizeBase) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumAccessLevels) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumPrioritiesResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_EnumPriorities) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumReproducibilitiesResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_EnumReproducibilities) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumResolutionsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_EnumResolutions) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumSeveritiesResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_EnumSeverities) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_EnumStatusResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_EnumStatus) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_ProjectDataBase) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FMantisConnect_ProjectData5) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectData4) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectData3) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectData2) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectData1) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectData) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FMantisConnect_ProjectsGetUserAccessibleResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectsGetUserAccessible) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_ProjectVersionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMantisConnect_ProjectGetVersionsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectGetVersions) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_CustomFieldDefinitionData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FMantisConnect_ProjectGetCustomFieldsResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectGetCustomFields) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_AccountData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMantisConnect_ProjectGetUsersResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectGetUsers) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_ProjectGetIdFromNameResponse) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMantisConnect_ProjectGetIdFromName) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FMantisConnect_ProjectGetCategoriesResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectGetCategories) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_AttachmentData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMantisConnect_RelationshipData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMantisConnect_IssueNoteData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FMantisConnect_CustomFieldValueForIssueData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMantisConnect_IssueData) == 0x0298); // 664 bytes (0x000000 - 0x000298)
static_assert(sizeof(FMantisConnect_ProjectGetIssuesResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_ProjectGetIssues) == 0x0030); // 48 bytes (0x000020 - 0x000030)
static_assert(sizeof(FMantisConnect_HistoryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMantisConnect_IssueGetHistoryResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_IssueGetHistory) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_IssueNoteDeleteResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMantisConnect_IssueNoteDelete) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_IssueNoteAddResponse) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMantisConnect_IssueNoteAdd) == 0x00B8); // 184 bytes (0x000020 - 0x0000B8)
static_assert(sizeof(FMantisConnect_IssueAttachmentGetResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_IssueAttachmentGet) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_IssueAttachmentAddResponse) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMantisConnect_IssueAttachmentAdd) == 0x0058); // 88 bytes (0x000020 - 0x000058)
static_assert(sizeof(FMantisConnect_IssueUpdateResponse) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMantisConnect_IssueUpdate) == 0x02C0); // 704 bytes (0x000020 - 0x0002C0)
static_assert(sizeof(FMantisConnect_IssueAddResponse) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMantisConnect_IssueAdd) == 0x02B8); // 696 bytes (0x000020 - 0x0002B8)
static_assert(sizeof(FMantisConnect_IssueGetResponse) == 0x0298); // 664 bytes (0x000000 - 0x000298)
static_assert(sizeof(FMantisConnect_IssueGet) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMantisConnect_UserData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMantisConnect_LoginResponse) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FMantisConnect_Login) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMantisConnect_VersionResponse) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMantisConnect_Version) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FEnumString, Value) == 0x0000);
static_assert(offsetof(FBugTrackerProfileSettings, DefaultCategory) == 0x0000);
static_assert(offsetof(FBugTrackerProfileSettings, DefaultPriority) == 0x0010);
static_assert(offsetof(FBugTrackerProfileSettings, DefaultSeverity) == 0x0020);
static_assert(offsetof(FBugTrackerProfileSettings, DefaultReproducibility) == 0x0030);
static_assert(offsetof(FBugTrackerSettingsCustomField, Name) == 0x0000);
static_assert(offsetof(FBugTrackerSettingsCustomField, DefaultValue) == 0x0010);
static_assert(offsetof(UBugTrackerSettings, Provider) == 0x0028);
static_assert(offsetof(UBugTrackerSettings, Host) == 0x0038);
static_assert(offsetof(UBugTrackerSettings, ProjectName) == 0x0048);
static_assert(offsetof(UBugTrackerSettings, ConstructorClass) == 0x0058);
static_assert(offsetof(UBugTrackerSettings, DefaultProfile) == 0x0070);
static_assert(offsetof(UBugTrackerSettings, EditorProfile) == 0x00B0);
static_assert(offsetof(UBugTrackerSettings, GameProfile) == 0x00F0);
static_assert(offsetof(UBugTrackerSettings, CrashProfile) == 0x0130);
static_assert(offsetof(UBugTrackerSettings, FeedbackProfile) == 0x0170);
static_assert(offsetof(UBugTrackerSettings, MapRenameOldToNew) == 0x01B0);
static_assert(offsetof(UBugTrackerSettings, CustomFields) == 0x0200);
static_assert(offsetof(UBugTrackerSettings, AndroidStorage) == 0x0210);
static_assert(offsetof(UBugTrackerUserSettings, Username) == 0x0028);
static_assert(offsetof(UBugTrackerUserSettings, Password) == 0x0038);
static_assert(offsetof(UBugTrackerUserSettings, EditImageTool) == 0x0050);
static_assert(offsetof(UIssueCollection, Issues) == 0x0028);
static_assert(offsetof(FIssueCustomField, Name) == 0x0000);
static_assert(offsetof(FIssueCustomField, Value) == 0x0010);
static_assert(offsetof(FIssueAttachment, Filename) == 0x0008);
static_assert(offsetof(FIssueAttachment, ContentType) == 0x0018);
static_assert(offsetof(FIssueAttachment, URL) == 0x0028);
static_assert(offsetof(FIssueAttachment, DateSubmitted) == 0x0038);
static_assert(offsetof(FIssueNote, Text) == 0x0008);
static_assert(offsetof(FIssueNote, Reporter) == 0x0018);
static_assert(offsetof(FIssueNote, DateSubmitted) == 0x0028);
static_assert(offsetof(UIssueData, URL) == 0x0030);
static_assert(offsetof(UIssueData, Project) == 0x0048);
static_assert(offsetof(UIssueData, Reporter) == 0x0058);
static_assert(offsetof(UIssueData, Handler) == 0x0068);
static_assert(offsetof(UIssueData, Summary) == 0x0078);
static_assert(offsetof(UIssueData, Description) == 0x0088);
static_assert(offsetof(UIssueData, StepsToReproduce) == 0x0098);
static_assert(offsetof(UIssueData, AdditionalInformation) == 0x00A8);
static_assert(offsetof(UIssueData, Category) == 0x00B8);
static_assert(offsetof(UIssueData, Severity) == 0x00C8);
static_assert(offsetof(UIssueData, Status) == 0x00D8);
static_assert(offsetof(UIssueData, Priority) == 0x00E8);
static_assert(offsetof(UIssueData, DateSubmitted) == 0x00F8);
static_assert(offsetof(UIssueData, LastUpdated) == 0x0100);
static_assert(offsetof(UIssueData, Resolution) == 0x0108);
static_assert(offsetof(UIssueData, TargetVersion) == 0x0118);
static_assert(offsetof(UIssueData, ProductVersion) == 0x0128);
static_assert(offsetof(UIssueData, FixedInVersion) == 0x0138);
static_assert(offsetof(UIssueData, Reproducibility) == 0x0148);
static_assert(offsetof(UIssueData, Platform) == 0x0158);
static_assert(offsetof(UIssueData, Os) == 0x0168);
static_assert(offsetof(UIssueData, OsBuild) == 0x0178);
static_assert(offsetof(UIssueData, Tags) == 0x0188);
static_assert(offsetof(UIssueData, CustomFields) == 0x0198);
static_assert(offsetof(UIssueData, Attachments) == 0x01A8);
static_assert(offsetof(UIssueData, Notes) == 0x01B8);
static_assert(offsetof(UIssueData, History) == 0x01C8);
static_assert(offsetof(FCategoriesHelper, Categories) == 0x0000);
static_assert(offsetof(FMantisConnect_Fault, FaultCode) == 0x0000);
static_assert(offsetof(FMantisConnect_Fault, FaultString) == 0x0010);
static_assert(offsetof(FMantisConnect_ObjectRef, Name) == 0x0008);
static_assert(offsetof(FMantisConnect_EnumAccessLevelsResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_AuthorizeBase, Username) == 0x0000);
static_assert(offsetof(FMantisConnect_AuthorizeBase, Password) == 0x0010);
static_assert(offsetof(FMantisConnect_EnumPrioritiesResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_EnumReproducibilitiesResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_EnumResolutionsResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_EnumSeveritiesResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_EnumStatusResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_ProjectDataBase, Name) == 0x0010);
static_assert(offsetof(FMantisConnect_ProjectDataBase, Status) == 0x0020);
static_assert(offsetof(FMantisConnect_ProjectDataBase, ViewState) == 0x0040);
static_assert(offsetof(FMantisConnect_ProjectDataBase, AccessMin) == 0x0058);
static_assert(offsetof(FMantisConnect_ProjectDataBase, FilePath) == 0x0070);
static_assert(offsetof(FMantisConnect_ProjectDataBase, Description) == 0x0080);
static_assert(offsetof(FMantisConnect_ProjectData5, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectData4, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectData3, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectData2, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectData1, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectData, Subprojects) == 0x00A8);
static_assert(offsetof(FMantisConnect_ProjectsGetUserAccessibleResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_ProjectVersionData, Name) == 0x0000);
static_assert(offsetof(FMantisConnect_ProjectVersionData, Description) == 0x0010);
static_assert(offsetof(FMantisConnect_ProjectGetVersionsResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_CustomFieldDefinitionData, Field) == 0x0000);
static_assert(offsetof(FMantisConnect_CustomFieldDefinitionData, PossibleValues) == 0x0020);
static_assert(offsetof(FMantisConnect_CustomFieldDefinitionData, DefaultValue) == 0x0030);
static_assert(offsetof(FMantisConnect_CustomFieldDefinitionData, ValidRegexp) == 0x0040);
static_assert(offsetof(FMantisConnect_ProjectGetCustomFieldsResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_AccountData, Name) == 0x0008);
static_assert(offsetof(FMantisConnect_AccountData, RealName) == 0x0018);
static_assert(offsetof(FMantisConnect_AccountData, Email) == 0x0028);
static_assert(offsetof(FMantisConnect_ProjectGetUsersResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_ProjectGetIdFromName, ProjectName) == 0x0020);
static_assert(offsetof(FMantisConnect_ProjectGetCategoriesResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_AttachmentData, Filename) == 0x0008);
static_assert(offsetof(FMantisConnect_AttachmentData, ContentType) == 0x0020);
static_assert(offsetof(FMantisConnect_AttachmentData, DateSubmitted) == 0x0030);
static_assert(offsetof(FMantisConnect_AttachmentData, DownloadUrl) == 0x0038);
static_assert(offsetof(FMantisConnect_RelationshipData, Type) == 0x0008);
static_assert(offsetof(FMantisConnect_IssueNoteData, Reporter) == 0x0008);
static_assert(offsetof(FMantisConnect_IssueNoteData, Text) == 0x0040);
static_assert(offsetof(FMantisConnect_IssueNoteData, ViewState) == 0x0050);
static_assert(offsetof(FMantisConnect_IssueNoteData, DateSubmitted) == 0x0068);
static_assert(offsetof(FMantisConnect_IssueNoteData, LastModified) == 0x0070);
static_assert(offsetof(FMantisConnect_IssueNoteData, NoteAttr) == 0x0080);
static_assert(offsetof(FMantisConnect_CustomFieldValueForIssueData, Field) == 0x0000);
static_assert(offsetof(FMantisConnect_CustomFieldValueForIssueData, Value) == 0x0018);
static_assert(offsetof(FMantisConnect_IssueData, ViewState) == 0x0008);
static_assert(offsetof(FMantisConnect_IssueData, LastUpdated) == 0x0020);
static_assert(offsetof(FMantisConnect_IssueData, Project) == 0x0028);
static_assert(offsetof(FMantisConnect_IssueData, Category) == 0x0040);
static_assert(offsetof(FMantisConnect_IssueData, Priority) == 0x0050);
static_assert(offsetof(FMantisConnect_IssueData, Severity) == 0x0068);
static_assert(offsetof(FMantisConnect_IssueData, Status) == 0x0080);
static_assert(offsetof(FMantisConnect_IssueData, Reporter) == 0x0098);
static_assert(offsetof(FMantisConnect_IssueData, Summary) == 0x00D0);
static_assert(offsetof(FMantisConnect_IssueData, Version) == 0x00E0);
static_assert(offsetof(FMantisConnect_IssueData, Build) == 0x00F0);
static_assert(offsetof(FMantisConnect_IssueData, Platform) == 0x0100);
static_assert(offsetof(FMantisConnect_IssueData, Os) == 0x0110);
static_assert(offsetof(FMantisConnect_IssueData, OsBuild) == 0x0120);
static_assert(offsetof(FMantisConnect_IssueData, Reproducibility) == 0x0130);
static_assert(offsetof(FMantisConnect_IssueData, DateSubmitted) == 0x0148);
static_assert(offsetof(FMantisConnect_IssueData, Handler) == 0x0158);
static_assert(offsetof(FMantisConnect_IssueData, Projection) == 0x0190);
static_assert(offsetof(FMantisConnect_IssueData, Eta) == 0x01A8);
static_assert(offsetof(FMantisConnect_IssueData, Resolution) == 0x01C0);
static_assert(offsetof(FMantisConnect_IssueData, FixedInVersion) == 0x01D8);
static_assert(offsetof(FMantisConnect_IssueData, TargetVersion) == 0x01E8);
static_assert(offsetof(FMantisConnect_IssueData, Description) == 0x01F8);
static_assert(offsetof(FMantisConnect_IssueData, StepsToReproduce) == 0x0208);
static_assert(offsetof(FMantisConnect_IssueData, AdditionalInformation) == 0x0218);
static_assert(offsetof(FMantisConnect_IssueData, Attachments) == 0x0228);
static_assert(offsetof(FMantisConnect_IssueData, Relationships) == 0x0238);
static_assert(offsetof(FMantisConnect_IssueData, Notes) == 0x0248);
static_assert(offsetof(FMantisConnect_IssueData, CustomFields) == 0x0258);
static_assert(offsetof(FMantisConnect_IssueData, DueDate) == 0x0268);
static_assert(offsetof(FMantisConnect_IssueData, Monitors) == 0x0270);
static_assert(offsetof(FMantisConnect_IssueData, Tags) == 0x0288);
static_assert(offsetof(FMantisConnect_ProjectGetIssuesResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_HistoryData, Username) == 0x0008);
static_assert(offsetof(FMantisConnect_HistoryData, Field) == 0x0018);
static_assert(offsetof(FMantisConnect_HistoryData, OldValue) == 0x0030);
static_assert(offsetof(FMantisConnect_HistoryData, NewValue) == 0x0040);
static_assert(offsetof(FMantisConnect_IssueGetHistoryResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_IssueNoteAdd, Note) == 0x0028);
static_assert(offsetof(FMantisConnect_IssueAttachmentGetResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_IssueAttachmentAdd, Name) == 0x0028);
static_assert(offsetof(FMantisConnect_IssueAttachmentAdd, FileType) == 0x0038);
static_assert(offsetof(FMantisConnect_IssueAttachmentAdd, Content) == 0x0048);
static_assert(offsetof(FMantisConnect_IssueUpdate, Issue) == 0x0028);
static_assert(offsetof(FMantisConnect_IssueAdd, Issue) == 0x0020);
static_assert(offsetof(FMantisConnect_IssueGetResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_UserData, AccountData) == 0x0000);
static_assert(offsetof(FMantisConnect_UserData, Timezone) == 0x0040);
static_assert(offsetof(FMantisConnect_LoginResponse, Return) == 0x0000);
static_assert(offsetof(FMantisConnect_VersionResponse, Return) == 0x0000);
