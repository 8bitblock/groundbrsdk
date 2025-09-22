
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

/// Enum /Script/DistanceMatching.EDistanceMatchingType
/// Size: 0x01 (1 bytes)
enum class EDistanceMatchingType : uint8_t
{
	EDistanceMatchingType__Start                                                     = 0,
	EDistanceMatchingType__Stop                                                      = 1,
	EDistanceMatchingType__Pivot                                                     = 2,
	EDistanceMatchingType__Jump                                                      = 3,
	EDistanceMatchingType__Fall                                                      = 4,
	EDistanceMatchingType__None                                                      = 5
};

/// Class /Script/DistanceMatching.DistanceMatchingComponent
/// Size: 0x01D0 (464 bytes) (0x0000B0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UDistanceMatchingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x00B0   (0x0050)  MISSED
	class UWorld*                                      World;                                                      // 0x0100   (0x0008)  
	class ACharacter*                                  Character;                                                  // 0x0108   (0x0008)  
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0110   (0x0008)  
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x7C];                                      // 0x0120   (0x007C)  MISSED
	float                                              MaxSimulationTime;                                          // 0x019C   (0x0004)  
	float                                              ApexSimulationFrequency;                                    // 0x01A0   (0x0004)  
	float                                              LandingSimulationFrequency;                                 // 0x01A4   (0x0004)  
	float                                              MinPivotAngle;                                              // 0x01A8   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	TArray<class AActor*>                              ActorsToIgnore;                                             // 0x01B0   (0x0010)  
	float                                              StopLocationTraceHalfHeight;                                // 0x01C0   (0x0004)  
	float                                              DebugSphereRadius;                                          // 0x01C4   (0x0004)  
	float                                              DebugDrawTime;                                              // 0x01C8   (0x0004)  
	float                                              TraceDrawTime;                                              // 0x01CC   (0x0004)  


	/// Functions
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetTakeOffMarker
	// FPredictResult GetTakeOffMarker();                                                                                       // [0xaaeec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetStopMarker
	// FPredictResult GetStopMarker();                                                                                          // [0xaaee90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetStartMarker
	// FPredictResult GetStartMarker();                                                                                         // [0xaaee60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetPivotMarker
	// FPredictResult GetPivotMarker();                                                                                         // [0xaaee30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetLandingMarker
	// FPredictResult GetLandingMarker();                                                                                       // [0xaaee00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DistanceMatching.DistanceMatchingComponent.GetApexMarker
	// FPredictResult GetApexMarker();                                                                                          // [0xaaedd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DistanceMatching.AnimNode_DistanceMatching
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
struct FAnimNode_DistanceMatching : FAnimNode_AssetPlayerBase
{ 
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0038   (0x0018)  MISSED
	class UAnimSequenceBase*                           PrevSequence;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0060   (0x0008)  
	FName                                              DistanceInputCurveName;                                     // 0x0068   (0x0008)  
	float                                              Distance;                                                   // 0x0070   (0x0004)  
	FName                                              DistanceCurveName;                                          // 0x0074   (0x0008)  
	bool                                               bEnableDistanceLimit : 1;                                   // 0x007C:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              DistanceLimit;                                              // 0x0080   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/DistanceMatching.PredictResult
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPredictResult
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	float                                              Distance;                                                   // 0x000C   (0x0004)  
	float                                              Time;                                                       // 0x0010   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UDistanceMatchingComponent) == 0x01D0); // 464 bytes (0x0000B0 - 0x0001D0)
static_assert(sizeof(FAnimNode_DistanceMatching) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FPredictResult) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(offsetof(UDistanceMatchingComponent, World) == 0x0100);
static_assert(offsetof(UDistanceMatchingComponent, Character) == 0x0108);
static_assert(offsetof(UDistanceMatchingComponent, CapsuleComponent) == 0x0110);
static_assert(offsetof(UDistanceMatchingComponent, MovementComponent) == 0x0118);
static_assert(offsetof(UDistanceMatchingComponent, TraceChannel) == 0x01AC);
static_assert(offsetof(UDistanceMatchingComponent, ActorsToIgnore) == 0x01B0);
static_assert(offsetof(FAnimNode_DistanceMatching, PrevSequence) == 0x0050);
static_assert(offsetof(FAnimNode_DistanceMatching, Sequence) == 0x0060);
static_assert(offsetof(FAnimNode_DistanceMatching, DistanceInputCurveName) == 0x0068);
static_assert(offsetof(FAnimNode_DistanceMatching, DistanceCurveName) == 0x0074);
static_assert(offsetof(FPredictResult, Location) == 0x0000);
