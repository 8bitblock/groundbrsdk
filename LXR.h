
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

/// Enum /Script/LXR.ELightState
/// Size: 0x01 (1 bytes)
enum class ELightState : uint8_t
{
	ELightState__None                                                                = 0,
	ELightState__Enabled                                                             = 1,
	ELightState__Disabled                                                            = 2,
	ELightState__Custom                                                              = 3
};

/// Enum /Script/LXR.ERelevantTraceType
/// Size: 0x01 (1 bytes)
enum class ERelevantTraceType : uint8_t
{
	ERelevantTraceType__Sync                                                         = 0,
	ERelevantTraceType__Multithread                                                  = 1
};

/// Enum /Script/LXR.ERelevancyCheckType
/// Size: 0x04 (4 bytes)
enum class ERelevancyCheckType : uint32_t
{
	ERelevancyCheckType__Fixed                                                       = 0,
	ERelevancyCheckType__Smart                                                       = 1,
	ERelevancyCheckType__Octree                                                      = 2
};

/// Enum /Script/LXR.ETraceTarget
/// Size: 0x04 (4 bytes)
enum class ETraceTarget : uint32_t
{
	ETraceTarget__None                                                               = 0,
	ETraceTarget__ActorLocation                                                      = 1,
	ETraceTarget__Sockets                                                            = 2,
	ETraceTarget__VectorArray                                                        = 3,
	ETraceTarget__ActorBounds                                                        = 4,
	ETraceTarget__LightSense                                                         = 5
};

/// Enum /Script/LXR.ELightArrayType
/// Size: 0x01 (1 bytes)
enum class ELightArrayType : uint8_t
{
	ELightArrayType__All                                                             = 0,
	ELightArrayType__SmartFar                                                        = 1,
	ELightArrayType__SmartMid                                                        = 2,
	ELightArrayType__SmartNear                                                       = 3,
	ELightArrayType__Octree                                                          = 4,
	ELightArrayType__Relevant                                                        = 5
};

/// Enum /Script/LXR.EDominantColor
/// Size: 0x01 (1 bytes)
enum class EDominantColor : uint8_t
{
	EDominantColor__None                                                             = 0,
	EDominantColor__Red                                                              = 1,
	EDominantColor__Green                                                            = 2,
	EDominantColor__Blue                                                             = 3
};

/// Enum /Script/LXR.ESenseTraceTransform
/// Size: 0x04 (4 bytes)
enum class ESenseTraceTransform : uint32_t
{
	ESenseTraceTransform__None                                                       = 0,
	ESenseTraceTransform__Actor                                                      = 1,
	ESenseTraceTransform__ActorEyesViewPoint                                         = 2,
	ESenseTraceTransform__Custom                                                     = 3
};

/// Enum /Script/LXR.EMemoryDetectionCheckType
/// Size: 0x04 (4 bytes)
enum class EMemoryDetectionCheckType : uint32_t
{
	EMemoryDetectionCheckType__None                                                  = 0,
	EMemoryDetectionCheckType__RelevantAndVisibility                                 = 1,
	EMemoryDetectionCheckType__Visibility                                            = 2
};

/// Enum /Script/LXR.EMemoryCheckClass
/// Size: 0x04 (4 bytes)
enum class EMemoryCheckClass : uint32_t
{
	EMemoryCheckClass__None                                                          = 0,
	EMemoryCheckClass__Detection                                                     = 1,
	EMemoryCheckClass__Sense                                                         = 2
};

/// Enum /Script/LXR.EMethodToUse
/// Size: 0x04 (4 bytes)
enum class EMethodToUse : uint32_t
{
	EMethodToUse__None                                                               = 0,
	EMethodToUse__Class                                                              = 1,
	EMethodToUse__Interface                                                          = 2,
	EMethodToUse__UObject                                                            = 3
};

/// Class /Script/LXR.LXRSense
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULXRSense : public UInterface
{ 
public:


	/// Functions
	// Function /Script/LXR.LXRSense.GetLightSenseTraceLocationAndDirection
	// void GetLightSenseTraceLocationAndDirection(FVector& Location, FRotator& Rotator);                                       // [0x14c7770] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LXR.LXRSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULXRSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/LXR.LXRSource.IsLightComponentEnabled
	// bool IsLightComponentEnabled(class ULightComponent* LightComponent);                                                     // [0x14c7d50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LXR.LXRSource.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x14c7cf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LXR.LXRSource.GetMyLightComponents
	// TArray<ULightComponent*> GetMyLightComponents();                                                                         // [0x14c7a60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LXR.LXRSource.GetLightComponentState
	// ELightState GetLightComponentState(class ULightComponent* LightComponent);                                               // [0x14c7630] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/LXR.LXRSource.GetLightActorState
	// ELightState GetLightActorState();                                                                                        // [0x14c7600] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/LXR.LXRDetectionComponent
/// Size: 0x0540 (1344 bytes) (0x0000B0 - 0x000540) align 16 MaxSize: 0x0540
class ULXRDetectionComponent : public UActorComponent
{ 
public:
	bool                                               bDrawDebug;                                                 // 0x00B0   (0x0001)  
	bool                                               bPrintDebug;                                                // 0x00B1   (0x0001)  
	bool                                               bDebugRelevantAndPassed;                                    // 0x00B2   (0x0001)  
	bool                                               bDebugOctreeLights;                                         // 0x00B3   (0x0001)  
	bool                                               bDebugSensing;                                              // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              DebugDrawTime;                                              // 0x00B8   (0x0004)  
	bool                                               bDebugVectorArray;                                          // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	TArray<FName>                                      TargetSockets;                                              // 0x00C0   (0x0010)  
	TArray<FVector>                                    TargetVectors;                                              // 0x00D0   (0x0010)  
	bool                                               bAddToSourceWhenDetected;                                   // 0x00E0   (0x0001)  
	bool                                               bGetIlluminatedTargets;                                     // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	ERelevancyCheckType                                RelevancyCheckType;                                         // 0x00E4   (0x0004)  
	float                                              RelevancySmartDistanceMin;                                  // 0x00E8   (0x0004)  
	float                                              RelevancySmartDistanceMax;                                  // 0x00EC   (0x0004)  
	float                                              RelevancySmartCheckRateDivider;                             // 0x00F0   (0x0004)  
	float                                              RelevancyCheckRate;                                         // 0x00F4   (0x0004)  
	int32_t                                            RelevancyOctreeCheckBoundsSize;                             // 0x00F8   (0x0004)  
	int32_t                                            RelevancyLightBatchCount;                                   // 0x00FC   (0x0004)  
	bool                                               bUseLocationChange;                                         // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	int32_t                                            RelevancyLocationThreshold;                                 // 0x0104   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0108   (0x0004)  MISSED
	ETraceTarget                                       RelevancyTargetType;                                        // 0x010C   (0x0004)  
	float                                              TargetsRequired;                                            // 0x0110   (0x0004)  
	ERelevantTraceType                                 RelevantTraceType;                                          // 0x0114   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	ETraceTarget                                       RelevantTargetType;                                         // 0x0118   (0x0004)  
	float                                              RelevantLightCheckRate;                                     // 0x011C   (0x0004)  
	int32_t                                            RelevantLightBatchCount;                                    // 0x0120   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x0124   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              TracesRequired;                                             // 0x0128   (0x0004)  
	float                                              MaxConsecutiveFails;                                        // 0x012C   (0x0004)  
	FLinearColor                                       CombinedLXRColor;                                           // 0x0130   (0x0010)  
	float                                              CombinedLXRIntensity;                                       // 0x0140   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<class AActor*>                              IgnoreVisibilityActors;                                     // 0x0148   (0x0010)  
	TMap<int32_t, FLinearColor>                        IlluminatedTargets;                                         // 0x0158   (0x0050)  
	class ULXRLightSenseComponent*                     SenseComponent;                                             // 0x01A8   (0x0008)  
	class ULXRMemoryComponent*                         MemoryComponent;                                            // 0x01B0   (0x0008)  
	class ULXRSubsystem*                               LXRSubsystem;                                               // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x320];                                     // 0x01C0   (0x0320)  MISSED
	SDK_UNDEFINED(80,511) /* TMap<TWeakObjectPtr<AActor*>, int32_t> */ __um(RelevantLightsFailCounts);             // 0x04E0   (0x0050)  
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                      // 0x0530   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x0538   (0x0008)  


	/// Functions
	// Function /Script/LXR.LXRDetectionComponent.GetRelevantTraceTypeTargets
	// TArray<FVector> GetRelevantTraceTypeTargets();                                                                           // [0x14c7ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LXR.LXRDetectionComponent.DelayedInit
	// void DelayedInit();                                                                                                      // [0x14c7300] Final|Native|Public  
};

/// Class /Script/LXR.LXRFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULXRFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LXR.LXRFunctionLibrary.ToggleColorChannels
	// FLinearColor ToggleColorChannels(FLinearColor& InColor, FLinearColor& ToggleChannels);                                   // [0x14c8060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.RoundToNearestHalf
	// FLinearColor RoundToNearestHalf(FLinearColor& InColor);                                                                  // [0x14c7fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.RemapColorRangeTo01
	// FLinearColor RemapColorRangeTo01(FLinearColor& InColor);                                                                 // [0x14c7f20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetSecondDominantColor
	// FDominantColor GetSecondDominantColor(FLinearColor& InColor);                                                            // [0x14c7b80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetMinOfColorChannels
	// float GetMinOfColorChannels(FLinearColor& InColor);                                                                      // [0x14c79d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetMaxOfColorChannels
	// float GetMaxOfColorChannels(FLinearColor& InColor);                                                                      // [0x14c7940] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetLinearColorArrayAverage
	// FLinearColor GetLinearColorArrayAverage(TArray<FLinearColor>& InColors);                                                 // [0x14c7890] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetInverseChannels
	// FLinearColor GetInverseChannels(FLinearColor& InColor);                                                                  // [0x14c7560] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.GetDominantColor
	// FDominantColor GetDominantColor(FLinearColor& InColor);                                                                  // [0x14c74c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.Equal_FDominantColor
	// bool Equal_FDominantColor(FDominantColor& FirstColor, FDominantColor& SecondColor);                                      // [0x14c73d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.DominantToLinearColor
	// FLinearColor DominantToLinearColor(FDominantColor& InDominantColor);                                                     // [0x14c7320] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.ColorRemappedRoundedHalfEqualColor
	// bool ColorRemappedRoundedHalfEqualColor(FLinearColor& InColorOne, FLinearColor& InColorTwo);                             // [0x14c7210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.ColorEqual_DominantColor
	// bool ColorEqual_DominantColor(FLinearColor& Color, FDominantColor& DominantColor);                                       // [0x14c7110] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.ColorApproximatelyEqualColor
	// bool ColorApproximatelyEqualColor(FLinearColor& InColorOne, FLinearColor& InColorTwo);                                   // [0x14c7020] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/LXR.LXRFunctionLibrary.ClampTo01Range
	// FLinearColor ClampTo01Range(FLinearColor& InColor);                                                                      // [0x14c6f80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/LXR.LXRLightSenseComponent
/// Size: 0x02E0 (736 bytes) (0x0000B0 - 0x0002E0) align 16 MaxSize: 0x02E0
class ULXRLightSenseComponent : public UActorComponent
{ 
public:
	bool                                               bDrawDebug;                                                 // 0x00B0   (0x0001)  
	bool                                               bIsEnabled;                                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	ESenseTraceTransform                               SenseTraceTransform;                                        // 0x00B4   (0x0004)  
	ERelevantTraceType                                 RelevantTraceType;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	float                                              CheckRate;                                                  // 0x00BC   (0x0004)  
	int32_t                                            ConeTraces;                                                 // 0x00C0   (0x0004)  
	int32_t                                            ConeAngle;                                                  // 0x00C4   (0x0004)  
	int32_t                                            DistancePerSegment;                                         // 0x00C8   (0x0004)  
	int32_t                                            SenseDistance;                                              // 0x00CC   (0x0004)  
	int32_t                                            MinDistancePerTarget;                                       // 0x00D0   (0x0004)  
	int32_t                                            MaxConeTraceTargetsPerSegment;                              // 0x00D4   (0x0004)  
	int32_t                                            TraceTargetBatchCount;                                      // 0x00D8   (0x0004)  
	int32_t                                            TargetsRequired;                                            // 0x00DC   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FLinearColor                                       CombinedLXRColor;                                           // 0x00E4   (0x0010)  
	float                                              CombinedLXRIntensity;                                       // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x1C8];                                     // 0x00F8   (0x01C8)  MISSED
	class ULXRDetectionComponent*                      OwnerDetectionComponent;                                    // 0x02C0   (0x0008)  
	SDK_UNDEFINED(16,512) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SensedLightsToRemove);                        // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/LXR.LXRLightSenseComponent.GetSensedActors
	// TArray<AActor*> GetSensedActors();                                                                                       // [0x14c7c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LXR.LXRMemoryComponent
/// Size: 0x0188 (392 bytes) (0x0000B0 - 0x000188) align 8 MaxSize: 0x0188
class ULXRMemoryComponent : public UActorComponent
{ 
public:
	bool                                               bDrawDebug;                                                 // 0x00B0   (0x0001)  
	bool                                               bPrintDebug;                                                // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	SDK_UNDEFINED(16,513) /* FMulticastInlineDelegate */ __um(OnLightStateChanged);                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,514) /* FMulticastInlineDelegate */ __um(OnLightComponentStateChanged);                       // 0x00C8   (0x0010)  
	EMemoryCheckClass                                  MemoryCheckClass;                                           // 0x00D8   (0x0004)  
	EMemoryDetectionCheckType                          MemoryDetectionCheckType;                                   // 0x00DC   (0x0004)  
	unsigned char                                      UnknownData01_7[0xA8];                                      // 0x00E0   (0x00A8)  MISSED
};

/// Class /Script/LXR.LXRMethodObject
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULXRMethodObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class AActor*                                      Owner;                                                      // 0x0030   (0x0008)  
	class ULXRSourceComponent*                         SourceComponent;                                            // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/LXR.LXRMethodObject.GetSourceComponent
	// class ULXRSourceComponent* GetSourceComponent();                                                                         // [0x14c7cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LXR.LXRMethodObject.GetOwner
	// class AActor* GetOwner();                                                                                                // [0x14c7ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LXR.LXROctreeVolume
/// Size: 0x0258 (600 bytes) (0x000258 - 0x000258) align 8 MaxSize: 0x0258
class ALXROctreeVolume : public AVolume
{ 
public:
};

/// Struct /Script/LXR.LightSourceData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLightSourceData
{ 
	FComponentReference                                LightComponent;                                             // 0x0000   (0x0028)  
	float                                              LightData;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/LXR.LXRSourceComponent
/// Size: 0x0180 (384 bytes) (0x0000B0 - 0x000180) align 8 MaxSize: 0x0180
class ULXRSourceComponent : public UActorComponent
{ 
public:
	bool                                               bDrawDebug;                                                 // 0x00B0   (0x0001)  
	bool                                               bSolo;                                                      // 0x00B1   (0x0001)  
	bool                                               bDisable;                                                   // 0x00B2   (0x0001)  
	bool                                               bAlwaysRelevant;                                            // 0x00B3   (0x0001)  
	bool                                               bAddDetected;                                               // 0x00B4   (0x0001)  
	bool                                               bEnableLightSense;                                          // 0x00B5   (0x0001)  
	bool                                               bIsMemorizable;                                             // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B7   (0x0001)  MISSED
	float                                              AttenuationMultiplierToBeRelevant;                          // 0x00B8   (0x0004)  
	float                                              LXRMultiplier;                                              // 0x00BC   (0x0004)  
	float                                              LXRColorMultiplier;                                         // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FLightSourceData>                           LightLXRMultipliers;                                        // 0x00C8   (0x0010)  
	TArray<FLightSourceData>                           LightLXRColorMultipliers;                                   // 0x00D8   (0x0010)  
	TArray<FComponentReference>                        ExcludedLights;                                             // 0x00E8   (0x0010)  
	EMethodToUse                                       IsEnabledMethodToUse;                                       // 0x00F8   (0x0004)  
	EMethodToUse                                       GetSourceActorStateMethodToUse;                             // 0x00FC   (0x0004)  
	EMethodToUse                                       GetLightComponentStateMethodToUse;                          // 0x0100   (0x0004)  
	EMethodToUse                                       IsLightComponentEnabledMethodToUse;                         // 0x0104   (0x0004)  
	EMethodToUse                                       GetMyLightComponentsMethodToUse;                            // 0x0108   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x010C   (0x0004)  MISSED
	FSoftClassPath                                     LXRMethodObject;                                            // 0x0110   (0x0018)  
	TArray<class AActor*>                              DetectedActors;                                             // 0x0128   (0x0010)  
	TArray<class AActor*>                              IgnoreVisibilityActors;                                     // 0x0138   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0148   (0x0010)  MISSED
	TArray<class ULightComponent*>                     MyLightComponents;                                          // 0x0158   (0x0010)  
	TArray<class AActor*>                              MyOverlappingActors;                                        // 0x0168   (0x0010)  
	class ULXRMethodObject*                            MethodObject;                                               // 0x0178   (0x0008)  


	/// Functions
	// Function /Script/LXR.LXRSourceComponent.IsLightComponentEnabled
	// bool IsLightComponentEnabled(class ULightComponent* LightComponent);                                                     // [0x14c7df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LXR.LXRSourceComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x14c7d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LXR.LXRSourceComponent.GetLightState
	// ELightState GetLightState();                                                                                             // [0x14c7860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LXR.LXRSourceComponent.GetLightComponentState
	// ELightState GetLightComponentState(class ULightComponent* InComponent);                                                  // [0x14c76d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LXR.LXRSubsystem
/// Size: 0x0190 (400 bytes) (0x000030 - 0x000190) align 8 MaxSize: 0x0190
class ULXRSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0030   (0x0038)  MISSED
	SDK_UNDEFINED(16,515) /* TArray<TWeakObjectPtr<AActor*>> */ __um(LightSources);                                // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,516) /* TArray<TWeakObjectPtr<AActor*>> */ __um(LXRActorsNotInOctreeYetBuffer);               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_7[0x108];                                     // 0x0088   (0x0108)  MISSED


	/// Functions
	// Function /Script/LXR.LXRSubsystem.UnregisterLight
	// void UnregisterLight(class AActor* LightSource);                                                                         // [0x14c8150] Final|Native|Public|BlueprintCallable 
	// Function /Script/LXR.LXRSubsystem.RegisterLight
	// void RegisterLight(class AActor* LightSource);                                                                           // [0x14c7e90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LXR.DominantColor
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FDominantColor
{ 
	EDominantColor                                     Color;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ColorValue;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/LXR.LightSourcePassedData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLightSourcePassedData
{ 
	TWeakObjectPtr<class AActor*>                      LightSourceActor;                                           // 0x0000   (0x0008)  
	TArray<int32_t>                                    PassedComponents;                                           // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULXRSense) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULXRSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULXRDetectionComponent) == 0x0540); // 1344 bytes (0x0000B0 - 0x000540)
static_assert(sizeof(ULXRFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULXRLightSenseComponent) == 0x02E0); // 736 bytes (0x0000B0 - 0x0002E0)
static_assert(sizeof(ULXRMemoryComponent) == 0x0188); // 392 bytes (0x0000B0 - 0x000188)
static_assert(sizeof(ULXRMethodObject) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ALXROctreeVolume) == 0x0258); // 600 bytes (0x000258 - 0x000258)
static_assert(sizeof(FLightSourceData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(ULXRSourceComponent) == 0x0180); // 384 bytes (0x0000B0 - 0x000180)
static_assert(sizeof(ULXRSubsystem) == 0x0190); // 400 bytes (0x000030 - 0x000190)
static_assert(sizeof(FDominantColor) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLightSourcePassedData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(ULXRDetectionComponent, TargetSockets) == 0x00C0);
static_assert(offsetof(ULXRDetectionComponent, TargetVectors) == 0x00D0);
static_assert(offsetof(ULXRDetectionComponent, RelevancyCheckType) == 0x00E4);
static_assert(offsetof(ULXRDetectionComponent, RelevancyTargetType) == 0x010C);
static_assert(offsetof(ULXRDetectionComponent, RelevantTraceType) == 0x0114);
static_assert(offsetof(ULXRDetectionComponent, RelevantTargetType) == 0x0118);
static_assert(offsetof(ULXRDetectionComponent, TraceChannel) == 0x0124);
static_assert(offsetof(ULXRDetectionComponent, CombinedLXRColor) == 0x0130);
static_assert(offsetof(ULXRDetectionComponent, IgnoreVisibilityActors) == 0x0148);
static_assert(offsetof(ULXRDetectionComponent, IlluminatedTargets) == 0x0158);
static_assert(offsetof(ULXRDetectionComponent, SenseComponent) == 0x01A8);
static_assert(offsetof(ULXRDetectionComponent, MemoryComponent) == 0x01B0);
static_assert(offsetof(ULXRDetectionComponent, LXRSubsystem) == 0x01B8);
static_assert(offsetof(ULXRDetectionComponent, SkeletalMeshComponent) == 0x0530);
static_assert(offsetof(ULXRDetectionComponent, SkyLight) == 0x0538);
static_assert(offsetof(ULXRLightSenseComponent, SenseTraceTransform) == 0x00B4);
static_assert(offsetof(ULXRLightSenseComponent, RelevantTraceType) == 0x00B8);
static_assert(offsetof(ULXRLightSenseComponent, TraceChannel) == 0x00E0);
static_assert(offsetof(ULXRLightSenseComponent, CombinedLXRColor) == 0x00E4);
static_assert(offsetof(ULXRLightSenseComponent, OwnerDetectionComponent) == 0x02C0);
static_assert(offsetof(ULXRMemoryComponent, MemoryCheckClass) == 0x00D8);
static_assert(offsetof(ULXRMemoryComponent, MemoryDetectionCheckType) == 0x00DC);
static_assert(offsetof(ULXRMethodObject, Owner) == 0x0030);
static_assert(offsetof(ULXRMethodObject, SourceComponent) == 0x0038);
static_assert(offsetof(FLightSourceData, LightComponent) == 0x0000);
static_assert(offsetof(ULXRSourceComponent, LightLXRMultipliers) == 0x00C8);
static_assert(offsetof(ULXRSourceComponent, LightLXRColorMultipliers) == 0x00D8);
static_assert(offsetof(ULXRSourceComponent, ExcludedLights) == 0x00E8);
static_assert(offsetof(ULXRSourceComponent, IsEnabledMethodToUse) == 0x00F8);
static_assert(offsetof(ULXRSourceComponent, GetSourceActorStateMethodToUse) == 0x00FC);
static_assert(offsetof(ULXRSourceComponent, GetLightComponentStateMethodToUse) == 0x0100);
static_assert(offsetof(ULXRSourceComponent, IsLightComponentEnabledMethodToUse) == 0x0104);
static_assert(offsetof(ULXRSourceComponent, GetMyLightComponentsMethodToUse) == 0x0108);
static_assert(offsetof(ULXRSourceComponent, LXRMethodObject) == 0x0110);
static_assert(offsetof(ULXRSourceComponent, DetectedActors) == 0x0128);
static_assert(offsetof(ULXRSourceComponent, IgnoreVisibilityActors) == 0x0138);
static_assert(offsetof(ULXRSourceComponent, MyLightComponents) == 0x0158);
static_assert(offsetof(ULXRSourceComponent, MyOverlappingActors) == 0x0168);
static_assert(offsetof(ULXRSourceComponent, MethodObject) == 0x0178);
static_assert(offsetof(FDominantColor, Color) == 0x0000);
static_assert(offsetof(FLightSourcePassedData, LightSourceActor) == 0x0000);
static_assert(offsetof(FLightSourcePassedData, PassedComponents) == 0x0008);
