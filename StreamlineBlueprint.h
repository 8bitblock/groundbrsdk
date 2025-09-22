
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

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureRequirementsFlags
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeatureRequirementsFlags : uint8_t
{
	UStreamlineFeatureRequirementsFlags__None                                        = 0,
	UStreamlineFeatureRequirementsFlags__D3D11Supported                              = 1,
	UStreamlineFeatureRequirementsFlags__D3D12Supported                              = 2,
	UStreamlineFeatureRequirementsFlags__VulkanSupported                             = 4,
	UStreamlineFeatureRequirementsFlags__VSyncOffRequired                            = 8,
	UStreamlineFeatureRequirementsFlags__HardwareSchedulingRequired                  = 16
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeatureSupport
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeatureSupport : uint8_t
{
	UStreamlineFeatureSupport__Supported                                             = 0,
	UStreamlineFeatureSupport__NotSupported                                          = 1,
	UStreamlineFeatureSupport__NotSupportedIncompatibleHardware                      = 2,
	UStreamlineFeatureSupport__NotSupportedDriverOutOfDate                           = 3,
	UStreamlineFeatureSupport__NotSupportedOperatingSystemOutOfDate                  = 4,
	UStreamlineFeatureSupport__NotSupportedHardewareSchedulingDisabled               = 5,
	UStreamlineFeatureSupport__NotSupportedByRHI                                     = 6,
	UStreamlineFeatureSupport__NotSupportedByPlatformAtBuildTime                     = 7,
	UStreamlineFeatureSupport__NotSupportedIncompatibleAPICaptureToolActive          = 8
};

/// Enum /Script/StreamlineBlueprint.UStreamlineFeature
/// Size: 0x01 (1 bytes)
enum class UStreamlineFeature : uint8_t
{
	UStreamlineFeature__DLSSG                                                        = 0,
	UStreamlineFeature__Reflex                                                       = 1,
	UStreamlineFeature__DeepDVC                                                      = 2,
	UStreamlineFeature__Count                                                        = 3
};

/// Enum /Script/StreamlineBlueprint.UStreamlineDLSSGMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineDLSSGMode : uint8_t
{
	UStreamlineDLSSGMode__Off                                                        = 0,
	UStreamlineDLSSGMode__On                                                         = 1,
	UStreamlineDLSSGMode__Auto                                                       = 2
};

/// Enum /Script/StreamlineBlueprint.UStreamlineReflexMode
/// Size: 0x01 (1 bytes)
enum class UStreamlineReflexMode : uint8_t
{
	UStreamlineReflexMode__Disabled                                                  = 0,
	UStreamlineReflexMode__Enabled                                                   = 1,
	UStreamlineReflexMode__EnabledPlusBoost                                          = 3
};

/// Class /Script/StreamlineBlueprint.StreamlineLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStreamlineLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	// UStreamlineFeatureSupport QueryStreamlineFeatureSupport(UStreamlineFeature Feature);                                     // [0x1a9ab90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	// bool IsStreamlineFeatureSupported(UStreamlineFeature Feature);                                                           // [0x1a9aab0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	// FStreamlineFeatureRequirements GetStreamlineFeatureInformation(UStreamlineFeature Feature);                              // [0x1a9a890] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	// void BreakStreamlineFeatureRequirements(UStreamlineFeatureRequirementsFlags Requirements, bool& D3D11Supported, bool& D3D12Supported, bool& VulkanSupported, bool& VSyncOffRequired, bool& HardwareSchedulingRequired); // [0x1a9a440] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryDLSSG
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	// void SetDLSSGMode(UStreamlineDLSSGMode DLSSGMode);                                                                       // [0x1a9ac10] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	// UStreamlineFeatureSupport QueryDLSSGSupport();                                                                           // [0x1a9ab30] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	// bool IsDLSSGSupported();                                                                                                 // [0x1a9aa50] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	// bool IsDLSSGModeSupported(UStreamlineDLSSGMode DLSSGMode);                                                               // [0x1a9a9d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	// TArray<UStreamlineDLSSGMode> GetSupportedDLSSGModes();                                                                   // [0x1a9a930] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	// UStreamlineDLSSGMode GetDLSSGMode();                                                                                     // [0x1a9a740] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	// void GetDLSSGFrameTiming(float& FrameRateInHertz, int32_t& FramesPresented);                                             // [0x1a9a660] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	// UStreamlineDLSSGMode GetDefaultDLSSGMode();                                                                              // [0x1a9a770] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/StreamlineBlueprint.StreamlineLibraryReflex
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	// void SetReflexMode(UStreamlineReflexMode Mode);                                                                          // [0x1a9ac80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	// UStreamlineFeatureSupport QueryReflexSupport();                                                                          // [0x1a9ab60] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	// bool IsReflexSupported();                                                                                                // [0x1a9aa80] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	// float GetRenderLatencyInMs();                                                                                            // [0x1a9a860] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	// UStreamlineReflexMode GetReflexMode();                                                                                   // [0x1a9a830] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	// float GetGameToRenderLatencyInMs();                                                                                      // [0x1a9a800] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	// float GetGameLatencyInMs();                                                                                              // [0x1a9a7d0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	// UStreamlineReflexMode GetDefaultReflexMode();                                                                            // [0x1a9a7a0] Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/StreamlineBlueprint.StreamlineVersion
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FStreamlineVersion
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
	int32_t                                            Build;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/StreamlineBlueprint.StreamlineFeatureRequirements
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FStreamlineFeatureRequirements
{ 
	UStreamlineFeatureSupport                          Support;                                                    // 0x0000   (0x0001)  
	UStreamlineFeatureRequirementsFlags                Requirements;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FStreamlineVersion                                 RequiredOperatingSystemVersion;                             // 0x0004   (0x000C)  
	FStreamlineVersion                                 DetectedOperatingSystemVersion;                             // 0x0010   (0x000C)  
	FStreamlineVersion                                 RequiredDriverVersion;                                      // 0x001C   (0x000C)  
	FStreamlineVersion                                 DetectedDriverVersion;                                      // 0x0028   (0x000C)  
};

#pragma pack(pop)


static_assert(sizeof(UStreamlineLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryDLSSG) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStreamlineLibraryReflex) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FStreamlineVersion) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FStreamlineFeatureRequirements) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(offsetof(FStreamlineFeatureRequirements, Support) == 0x0000);
static_assert(offsetof(FStreamlineFeatureRequirements, Requirements) == 0x0001);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredOperatingSystemVersion) == 0x0004);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedOperatingSystemVersion) == 0x0010);
static_assert(offsetof(FStreamlineFeatureRequirements, RequiredDriverVersion) == 0x001C);
static_assert(offsetof(FStreamlineFeatureRequirements, DetectedDriverVersion) == 0x0028);
