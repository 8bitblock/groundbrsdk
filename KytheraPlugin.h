
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/KytheraPlugin.KytMotionType
/// Size: 0x01 (1 bytes)
enum class KytMotionType : uint8_t
{
	KytMotionType__None                                                              = 0,
	KytMotionType__Goto                                                              = 1,
	KytMotionType__ExactGoto                                                         = 2,
	KytMotionType__SteeringGoto                                                      = 3,
	KytMotionType__Animation                                                         = 4,
	KytMotionType__Orient                                                            = 5
};

/// Enum /Script/KytheraPlugin.RadiusSourceEnum
/// Size: 0x01 (1 bytes)
enum class RadiusSourceEnum : uint8_t
{
	RadiusSourceEnum__ShipRadius                                                     = 0,
	RadiusSourceEnum__QuerierBoundsRadius                                            = 1
};

/// Enum /Script/KytheraPlugin.EPointIsOccupied
/// Size: 0x01 (1 bytes)
enum class EPointIsOccupied : uint8_t
{
	EPointIsOccupied__EPIO_PointOccupied                                             = 0,
	EPointIsOccupied__EPIO_PointVacant                                               = 1
};

/// Enum /Script/KytheraPlugin.ETagMatchType
/// Size: 0x01 (1 bytes)
enum class ETagMatchType : uint8_t
{
	ETagMatchType__ETMT_MatchAll                                                     = 0,
	ETagMatchType__ETMT_MatchAny                                                     = 1
};

/// Enum /Script/KytheraPlugin.KytBBVariableTypeEnum
/// Size: 0x04 (4 bytes)
enum class KytBBVariableTypeEnum : uint32_t
{
	KytBBVariableTypeEnum__CONSTANT                                                  = 0,
	KytBBVariableTypeEnum__VARIABLE                                                  = 1
};

/// Enum /Script/KytheraPlugin.KytBBCompareFunctionEnum
/// Size: 0x04 (4 bytes)
enum class KytBBCompareFunctionEnum : uint32_t
{
	KytBBCompareFunctionEnum__EQUALS                                                 = 0,
	KytBBCompareFunctionEnum__NOT_EQUAL                                              = 1
};

/// Enum /Script/KytheraPlugin.KytSignalLenComparisonOperator
/// Size: 0x01 (1 bytes)
enum class KytSignalLenComparisonOperator : uint8_t
{
	KytSignalLenComparisonOperator__EQUAL                                            = 0,
	KytSignalLenComparisonOperator__NOT_EQUAL                                        = 1,
	KytSignalLenComparisonOperator__GREATER_THAN                                     = 2,
	KytSignalLenComparisonOperator__LESS_THAN                                        = 3
};

/// Enum /Script/KytheraPlugin.EKytBTConditionResult
/// Size: 0x01 (1 bytes)
enum class EKytBTConditionResult : uint8_t
{
	EKytBTConditionResult__CONDITION_FALSE                                           = 0,
	EKytBTConditionResult__CONDITION_TRUE                                            = 1,
	EKytBTConditionResult__CONDITION_ERROR                                           = 2
};

/// Enum /Script/KytheraPlugin.EKytBTUpdateResult
/// Size: 0x01 (1 bytes)
enum class EKytBTUpdateResult : uint8_t
{
	EKytBTUpdateResult__NODE_ERROR                                                   = 0,
	EKytBTUpdateResult__NODE_EXCEPTION                                               = 1,
	EKytBTUpdateResult__NODE_SUCCEEDED                                               = 2,
	EKytBTUpdateResult__NODE_FAILED                                                  = 3,
	EKytBTUpdateResult__NODE_IN_PROGRESS                                             = 4
};

/// Enum /Script/KytheraPlugin.EKytBTEnterResult
/// Size: 0x01 (1 bytes)
enum class EKytBTEnterResult : uint8_t
{
	EKytBTEnterResult__ENTER_ERROR                                                   = 0,
	EKytBTEnterResult__ENTER_OK                                                      = 1,
	EKytBTEnterResult__ENTER_FAILED                                                  = 2
};

/// Enum /Script/KytheraPlugin.DiscardPolicyEnum
/// Size: 0x04 (4 bytes)
enum class DiscardPolicyEnum : uint32_t
{
	DiscardPolicyEnum__DISCARD_OLDEST                                                = 0,
	DiscardPolicyEnum__DISCARD_NEWEST                                                = 1
};

/// Enum /Script/KytheraPlugin.EKytBBVectorType
/// Size: 0x01 (1 bytes)
enum class EKytBBVectorType : uint8_t
{
	EKytBBVectorType__POSITION                                                       = 0,
	EKytBBVectorType__VEC3                                                           = 1
};

/// Enum /Script/KytheraPlugin.EKyt2DMovementStyle
/// Size: 0x01 (1 bytes)
enum class EKyt2DMovementStyle : uint8_t
{
	EKyt2DMovementStyle__NoAvoidance                                                 = 0,
	EKyt2DMovementStyle__ORCAAvoidance                                               = 1,
	EKyt2DMovementStyle__LocalAvoidanceNavmesh                                       = 2,
	EKyt2DMovementStyle__ContextSteering                                             = 3
};

/// Enum /Script/KytheraPlugin.ECoordinateSystem
/// Size: 0x01 (1 bytes)
enum class ECoordinateSystem : uint8_t
{
	ECoordinateSystem__WORLD                                                         = 0,
	ECoordinateSystem__TILESET                                                       = 1
};

/// Enum /Script/KytheraPlugin.PawnShape
/// Size: 0x01 (1 bytes)
enum class PawnShape : uint8_t
{
	PawnShape__BOX                                                                   = 0,
	PawnShape__SPHERE                                                                = 1
};

/// Enum /Script/KytheraPlugin.EKytShapeType
/// Size: 0x01 (1 bytes)
enum class EKytShapeType : uint8_t
{
	EKytShapeType__BOX                                                               = 0,
	EKytShapeType__SPHERE                                                            = 1
};

/// Enum /Script/KytheraPlugin.EKytSignalDispatchModeEnum
/// Size: 0x01 (1 bytes)
enum class EKytSignalDispatchModeEnum : uint8_t
{
	EKytSignalDispatchModeEnum__EKSDM_GLOBAL                                         = 0,
	EKytSignalDispatchModeEnum__EKSDM_ENTITY                                         = 1,
	EKytSignalDispatchModeEnum__EKSDM_GROUP                                          = 2,
	EKytSignalDispatchModeEnum__EKSDM_BROADCAST                                      = 3,
	EKytSignalDispatchModeEnum__EKSDM_ENTITIES_IN_RANGE                              = 4
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytBase
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UEnvQueryGenerator_KytBase : public UEnvQueryGenerator
{ 
public:
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytCoverRail
/// Size: 0x0130 (304 bytes) (0x000050 - 0x000130) align 8 MaxSize: 0x0130
class UEnvQueryGenerator_KytCoverRail : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          Density;                                                    // 0x0088   (0x0038)  
	TMap<FString, bool>                                CoverTypes;                                                 // 0x00C0   (0x0050)  
	class UClass*                                      Origin;                                                     // 0x0110   (0x0008)  
	bool                                               bIncludeClaimed;                                            // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0119   (0x0017)  MISSED
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytGridPoint
/// Size: 0x00C8 (200 bytes) (0x000050 - 0x0000C8) align 8 MaxSize: 0x00C8
class UEnvQueryGenerator_KytGridPoint : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x0088   (0x0038)  
	class UClass*                                      GenerateAround;                                             // 0x00C0   (0x0008)  
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytOctreeGrid
/// Size: 0x01E0 (480 bytes) (0x000050 - 0x0001E0) align 8 MaxSize: 0x01E0
class UEnvQueryGenerator_KytOctreeGrid : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          Density;                                                    // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          MinRadius;                                                  // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          MaxRadius;                                                  // 0x00C0   (0x0038)  
	FAIDataProviderBoolValue                           AvoidDynamicObstacles;                                      // 0x00F8   (0x0038)  
	FAIDataProviderBoolValue                           OpenAreasOnly;                                              // 0x0130   (0x0038)  
	FAIDataProviderFloatValue                          PointRadius;                                                // 0x0168   (0x0038)  
	RadiusSourceEnum                                   RadiusSource;                                               // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	FAIDataProviderFloatValue                          ShipRadius;                                                 // 0x01A8   (0x0038)  
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytOctreeGridNavigable
/// Size: 0x0260 (608 bytes) (0x000050 - 0x000260) align 8 MaxSize: 0x0260
class UEnvQueryGenerator_KytOctreeGridNavigable : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          Density;                                                    // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          MinRadius;                                                  // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          MaxRadius;                                                  // 0x00C0   (0x0038)  
	FAIDataProviderFloatValue                          PathDistanceRatio;                                          // 0x00F8   (0x0038)  
	FAIDataProviderFloatValue                          Angle;                                                      // 0x0130   (0x0038)  
	FVector                                            ConeDirection;                                              // 0x0168   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0174   (0x0004)  MISSED
	FAIDataProviderBoolValue                           AvoidDynamicObstacles;                                      // 0x0178   (0x0038)  
	FAIDataProviderBoolValue                           OpenAreasOnly;                                              // 0x01B0   (0x0038)  
	FAIDataProviderFloatValue                          PointRadius;                                                // 0x01E8   (0x0038)  
	RadiusSourceEnum                                   RadiusSource;                                               // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FAIDataProviderFloatValue                          ShipRadius;                                                 // 0x0228   (0x0038)  
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytOctreeRandom
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UEnvQueryGenerator_KytOctreeRandom : public UEnvQueryGenerator_KytBase
{ 
public:
	float                                              MinRadius;                                                  // 0x0050   (0x0004)  
	float                                              MaxRadius;                                                  // 0x0054   (0x0004)  
	float                                              Angle;                                                      // 0x0058   (0x0004)  
	FVector                                            ConeDirection;                                              // 0x005C   (0x000C)  
	bool                                               AvoidDynamicObstacles;                                      // 0x0068   (0x0001)  
	bool                                               OpenAreasOnly;                                              // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              PointRadius;                                                // 0x006C   (0x0004)  
	RadiusSourceEnum                                   RadiusSource;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              ShipRadius;                                                 // 0x0074   (0x0004)  
	uint32_t                                           RequestedPoints;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytOctreeRandomNavigable
/// Size: 0x0258 (600 bytes) (0x000050 - 0x000258) align 8 MaxSize: 0x0258
class UEnvQueryGenerator_KytOctreeRandomNavigable : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          MinRadius;                                                  // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          MaxRadius;                                                  // 0x0088   (0x0038)  
	FAIDataProviderFloatValue                          PathDistanceRatio;                                          // 0x00C0   (0x0038)  
	FAIDataProviderFloatValue                          Angle;                                                      // 0x00F8   (0x0038)  
	FVector                                            ConeDirection;                                              // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FAIDataProviderBoolValue                           AvoidDynamicObstacles;                                      // 0x0140   (0x0038)  
	FAIDataProviderBoolValue                           OpenAreasOnly;                                              // 0x0178   (0x0038)  
	FAIDataProviderFloatValue                          PointRadius;                                                // 0x01B0   (0x0038)  
	FAIDataProviderFloatValue                          ShipRadius;                                                 // 0x01E8   (0x0038)  
	FAIDataProviderIntValue                            RequestedPoints;                                            // 0x0220   (0x0038)  
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytRadialPoint
/// Size: 0x0170 (368 bytes) (0x000050 - 0x000170) align 8 MaxSize: 0x0170
class UEnvQueryGenerator_KytRadialPoint : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          Density;                                                    // 0x0050   (0x0038)  
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0088   (0x0038)  
	FAIDataProviderIntValue                            Spokes;                                                     // 0x00C0   (0x0038)  
	FAIDataProviderIntValue                            NumberOfRings;                                              // 0x00F8   (0x0038)  
	class UClass*                                      Origin;                                                     // 0x0130   (0x0008)  
	FAIDataProviderBoolValue                           Reachable;                                                  // 0x0138   (0x0038)  
};

/// Class /Script/KytheraPlugin.EnvQueryGenerator_KytRandomPoint
/// Size: 0x0100 (256 bytes) (0x000050 - 0x000100) align 8 MaxSize: 0x0100
class UEnvQueryGenerator_KytRandomPoint : public UEnvQueryGenerator_KytBase
{ 
public:
	FAIDataProviderFloatValue                          Radius;                                                     // 0x0050   (0x0038)  
	FAIDataProviderIntValue                            NumPoints;                                                  // 0x0088   (0x0038)  
	FAIDataProviderBoolValue                           Reachable;                                                  // 0x00C0   (0x0038)  
	class UClass*                                      Origin;                                                     // 0x00F8   (0x0008)  
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytCoverIsCloseToEdge
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest_KytCoverIsCloseToEdge : public UEnvQueryTest
{ 
public:
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytIsCoverInUse
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UEnvQueryTest_KytIsCoverInUse : public UEnvQueryTest
{ 
public:
	EPointIsOccupied                                   SearchType;                                                 // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytIsRailBlocked
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest_KytIsRailBlocked : public UEnvQueryTest
{ 
public:
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytOctreePathfind
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 8 MaxSize: 0x0280
class UEnvQueryTest_KytOctreePathfind : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      Context;                                                    // 0x0200   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)  
	float                                              MaxNavigationRadius;                                        // 0x0278   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x027C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytPathfinding
/// Size: 0x0278 (632 bytes) (0x0001F8 - 0x000278) align 8 MaxSize: 0x0278
class UEnvQueryTest_KytPathfinding : public UEnvQueryTest
{ 
public:
	TEnumAsByte<EEnvTestPathfinding>                   TestMode;                                                   // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
	class UClass*                                      Context;                                                    // 0x0200   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0208   (0x0038)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0240   (0x0038)  
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytProject
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 8 MaxSize: 0x0210
class UEnvQueryTest_KytProject : public UEnvQueryTest
{ 
public:
	class UClass*                                      Context;                                                    // 0x01F8   (0x0008)  
	FVector                                            Tolerance;                                                  // 0x0200   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x020C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytSameRail
/// Size: 0x01F8 (504 bytes) (0x0001F8 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnvQueryTest_KytSameRail : public UEnvQueryTest
{ 
public:
};

/// Class /Script/KytheraPlugin.EnvQueryTest_KytTags
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 8 MaxSize: 0x0210
class UEnvQueryTest_KytTags : public UEnvQueryTest
{ 
public:
	TArray<FName>                                      TagToSearch;                                                // 0x01F8   (0x0010)  
	ETagMatchType                                      TagMatchType;                                               // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0209   (0x0007)  MISSED
};

/// Class /Script/KytheraPlugin.KytAnimationSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytAnimationSupport : public UInterface
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytAnimationSupport.IsAnimationSupported
	// bool IsAnimationSupported(FString AnimationName, class UKytBlackboard* AnimationParameters);                             // [0x12fcac0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/KytheraPlugin.KytBaseComponent
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UKytBaseComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/KytheraPlugin.KytBehavior
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UKytBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/KytheraPlugin.KytBlackboardBase
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UKytBlackboardBase : public UPrimaryDataAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/KytheraPlugin.KytBlackboardImportable
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytBlackboardImportable : public UKytBlackboardBase
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBlackboard
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytBlackboard : public UKytBlackboardBase
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(FString Key, FVector Value);                                                             // [0x12fd5e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsStringHash
	// void SetBlackboardValueAsStringHash(FString Key, FString Value);                                                         // [0x12fd460] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(FString Key, FString Value);                                                             // [0x12fd2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsPosition
	// void SetBlackboardValueAsPosition(FString Key, FVector Value);                                                           // [0x12fd1a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(FString Key, int32_t Value);                                                                // [0x12fd070] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(FString Key, float Value);                                                                // [0x12fcf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsEntityId
	// void SetBlackboardValueAsEntityId(FString Key, class AActor* Value);                                                     // [0x12fce10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(FString Key, bool Value);                                                                  // [0x12fcce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.SetBlackboardValueAsBlackboard
	// void SetBlackboardValueAsBlackboard(FString Key, class UKytBlackboard* Value);                                           // [0x12fcbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.HasValue
	// bool HasValue(FString Key);                                                                                              // [0x12fc9c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetOrCreateBlackboardValueAsBlackboard
	// class UKytBlackboard* GetOrCreateBlackboardValueAsBlackboard(FString Key);                                               // [0x12fc8c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(FString Key);                                                                         // [0x12fc7b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(FString Key);                                                                         // [0x12fc660] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(FString Key);                                                                            // [0x12fc460] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(FString Key);                                                                            // [0x12fc360] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(FString Key);                                                                              // [0x12fc260] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsBlackboard
	// class UKytBlackboard* GetBlackboardValueAsBlackboard(FString Key);                                                       // [0x12fc160] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.GetBlackboardValueAsActor
	// class AActor* GetBlackboardValueAsActor(FString Key);                                                                    // [0x12fc060] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytBlackboard.CreateKytBlackboard
	// class UKytBlackboard* CreateKytBlackboard();                                                                             // [0x12fbdc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBlackboard.ClearBlackboardValue
	// void ClearBlackboardValue(FString Key);                                                                                  // [0x12fbcd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytBlackboardKeyType_BBPointer
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UKytBlackboardKeyType_BBPointer : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBTAddSignalDispatchAspect
/// Size: 0x0068 (104 bytes) (0x000068 - 0x000068) align 8 MaxSize: 0x0068
class UKytBTAddSignalDispatchAspect : public UBTDecorator
{ 
public:
};

/// Class /Script/KytheraPlugin.KytCompareBBValuesCondition
/// Size: 0x00C0 (192 bytes) (0x000090 - 0x0000C0) align 8 MaxSize: 0x00C0
class UKytCompareBBValuesCondition : public UBTDecorator_BlackboardBase
{ 
public:
	FString                                            LHS;                                                        // 0x0090   (0x0010)  
	KytBBVariableTypeEnum                              LHSType;                                                    // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FString                                            RHS;                                                        // 0x00A8   (0x0010)  
	KytBBVariableTypeEnum                              RHSType;                                                    // 0x00B8   (0x0004)  
	KytBBCompareFunctionEnum                           Comparison;                                                 // 0x00BC   (0x0004)  
};

/// Class /Script/KytheraPlugin.KytBTDecorator_CmpSignalQueueLen
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UKytBTDecorator_CmpSignalQueueLen : public UBTDecorator
{ 
public:
	FString                                            SignalName;                                                 // 0x0068   (0x0010)  
	KytSignalLenComparisonOperator                     ComparisonOperator;                                         // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            RHS;                                                        // 0x007C   (0x0004)  
};

/// Class /Script/KytheraPlugin.KytBTFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytBTFunctionLibrary : public UBTFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytBTFunctionLibrary.GetBlackboardValueAsKytBlackBoard
	// class UKytBlackboard* GetBlackboardValueAsKytBlackBoard(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);          // [0x12fc560] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/KytheraPlugin.KytBTHandleRequestSignalDecorator
/// Size: 0x00C8 (200 bytes) (0x000068 - 0x0000C8) align 8 MaxSize: 0x00C8
class UKytBTHandleRequestSignalDecorator : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             SignalBlackboardKey;                                        // 0x0068   (0x0028)  
	FString                                            ResponseOnSuccess;                                          // 0x0090   (0x0010)  
	FString                                            ResponseOnFail;                                             // 0x00A0   (0x0010)  
	FString                                            ResponseOnEnter;                                            // 0x00B0   (0x0010)  
	bool                                               AllowEmptyResponses;                                        // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTNode
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytBTNode : public UObject
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytBTNode.DoUpdate
	// EKytBTUpdateResult DoUpdate(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                 // [0x12fbf90] Native|Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytBTNode.DoEnter
	// EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                   // [0x12fbec0] Native|Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytBTNode.DoCleanup
	// void DoCleanup(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                              // [0x12fbdf0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/KytheraPlugin.KytBTConditional
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytBTConditional : public UObject
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytBTConditional.CheckCondition
	// EKytBTConditionResult CheckCondition(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);        // [0x12fbba0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/KytheraPlugin.KytBTDecorator
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UKytBTDecorator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytBTDecorator.DoUpdate
	// EKytBTUpdateResult DoUpdate(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                 // [0x12fbf90] Native|Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytBTDecorator.DoEnter
	// EKytBTEnterResult DoEnter(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                   // [0x12fbec0] Native|Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytBTDecorator.DoCleanup
	// void DoCleanup(class AKytController* Controller, class UKytBlackboard* BehaviorBlackboard);                              // [0x12fbdf0] Native|Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytBTDecorator.ChildNodeUpdate
	// EKytBTUpdateResult ChildNodeUpdate();                                                                                    // [0x12fbca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytBTDecorator.ChildNodeEnter
	// EKytBTEnterResult ChildNodeEnter();                                                                                      // [0x12fbc70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytBTSignalQueueDecorator
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UKytBTSignalQueueDecorator : public UBTDecorator
{ 
public:
	int32_t                                            QueueSize;                                                  // 0x0068   (0x0004)  
	DiscardPolicyEnum                                  DiscardPolicy;                                              // 0x006C   (0x0004)  
	FString                                            SignalName;                                                 // 0x0070   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueBase
/// Size: 0x00D8 (216 bytes) (0x000070 - 0x0000D8) align 8 MaxSize: 0x00D8
class UKytBTTask_UnpackKytBBValueBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             KytheraBlackboardPointerKey;                                // 0x0070   (0x0028)  
	FString                                            KytheraInternalBlackboardPath;                              // 0x0098   (0x0010)  
	bool                                               bUseDefaultValue;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FBlackboardKeySelector                             UnrealResultBlackboardKey;                                  // 0x00B0   (0x0028)  
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueBool
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytBTTask_UnpackKytBBValueBool : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	bool                                               DefaultValue;                                               // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueFloat
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytBTTask_UnpackKytBBValueFloat : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	float                                              DefaultValue;                                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueInt
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytBTTask_UnpackKytBBValueInt : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	int32_t                                            DefaultValue;                                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueFString
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UKytBTTask_UnpackKytBBValueFString : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	FString                                            DefaultValue;                                               // 0x00D8   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueFVector
/// Size: 0x00E8 (232 bytes) (0x0000D8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UKytBTTask_UnpackKytBBValueFVector : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	FVector                                            DefaultValue;                                               // 0x00D8   (0x000C)  
	EKytBBVectorType                                   KytBBVectorType;                                            // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00E5   (0x0003)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTTask_UnpackKytBBValueActor
/// Size: 0x00E0 (224 bytes) (0x0000D8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytBTTask_UnpackKytBBValueActor : public UKytBTTask_UnpackKytBBValueBase
{ 
public:
	class AActor*                                      DefaultValue;                                               // 0x00D8   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytBTWaitForSignalTask
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UKytBTWaitForSignalTask : public UBTTask_BlackboardBase
{ 
public:
	FString                                            SignalName;                                                 // 0x0098   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/KytheraPlugin.KytCommandBlueprintProxy
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UKytCommandBlueprintProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,499) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,500) /* FMulticastInlineDelegate */ __um(OnFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateWaitProxyObject
	// class UKytCommandBlueprintProxy* CreateWaitProxyObject(class UObject* WorldContextObject, class APawn* Pawn, float Time); // [0x1303930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateTurnToFaceProxyObject
	// class UKytCommandBlueprintProxy* CreateTurnToFaceProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AActor* TargetActor, FRotator Rotation, FVector position); // [0x1303790] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateTrackActorProxyObject
	// class UKytCommandBlueprintProxy* CreateTrackActorProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AActor* TargetActor, float Distance, bool FireAtTarget); // [0x1303600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreatePathToProxyObject
	// class UKytCommandBlueprintProxy* CreatePathToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AActor* TargetActor, FVector Destination); // [0x13034a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateMoveToProxyObject
	// class UKytCommandBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AActor* TargetActor, FVector Destination); // [0x1303340] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateHaltProxyObject
	// class UKytCommandBlueprintProxy* CreateHaltProxyObject(class UObject* WorldContextObject, class APawn* Pawn);            // [0x1303270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateFlySplineProxyObject
	// class UKytCommandBlueprintProxy* CreateFlySplineProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AKytNavSplineActor* Spline, bool ClampToSpline, bool AttackHostiles, bool TeleportToStart, bool JoinNearestPoint, bool DisableAvoidance); // [0x1302ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateFlyInFormationProxyObject
	// class UKytCommandBlueprintProxy* CreateFlyInFormationProxyObject(class UObject* WorldContextObject, class APawn* Pawn, class AActor* Leader); // [0x1302ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCommandBlueprintProxy.CreateCancelCommandProxyObject
	// class UKytCommandBlueprintProxy* CreateCancelCommandProxyObject(class UObject* WorldContextObject, class APawn* Pawn);   // [0x1302e20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytController
/// Size: 0x02F8 (760 bytes) (0x000298 - 0x0002F8) align 8 MaxSize: 0x02F8
class AKytController : public AController
{ 
public:
	SDK_UNDEFINED(16,501) /* FMulticastInlineDelegate */ __um(OnAlerted);                                          // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,502) /* FMulticastInlineDelegate */ __um(OnUnalerted);                                        // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,503) /* FMulticastInlineDelegate */ __um(OnNewTarget);                                        // 0x02B8   (0x0010)  
	class UKytBlackboard*                              m_entityStateBBRef;                                         // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x02D0   (0x0018)  MISSED
	class APawn*                                       m_pDeferredPawnToPossess;                                   // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytController.UpdateRelationship
	// void UpdateRelationship();                                                                                               // [0x1305a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.SetPerceptionScaleModifiers
	// void SetPerceptionScaleModifiers(float visualModifier, float audioModifier);                                             // [0x1305850] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.RunBehavior
	// bool RunBehavior(FString BehaviorName, class UKytBlackboard* KytBlackboard);                                             // [0x1305050] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.ReplaceTag
	// void ReplaceTag(FString oldTag, FString newTag);                                                                         // [0x1304d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.OverrideTarget
	// void OverrideTarget(class AActor* Override);                                                                             // [0x1304610] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.NotifyPerceptionAboutActor
	// void NotifyPerceptionAboutActor(class AActor* Actor);                                                                    // [0x1304580] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.HasTag
	// bool HasTag(FString Tag);                                                                                                // [0x13042f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.GetKytController
	// class AKytController* GetKytController(class AActor* ControlledActor);                                                   // [0x1304180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.GetGroup
	// class AKytGroup* GetGroup(FString Type);                                                                                 // [0x1304080] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.GetEntityState
	// class UKytBlackboard* GetEntityState();                                                                                  // [0x1304020] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.GetCurrentTarget
	// class AActor* GetCurrentTarget();                                                                                        // [0x1303ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.ForcePerceptionOfActor
	// void ForcePerceptionOfActor(class AActor* Actor, float Time);                                                            // [0x1303f10] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.EraseTag
	// void EraseTag(FString Tag);                                                                                              // [0x1303d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.ClearTargetOverride
	// void ClearTargetOverride();                                                                                              // [0x13029f0] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.ClearPerceptionScaleModifiers
	// void ClearPerceptionScaleModifiers();                                                                                    // [0x13029d0] Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytController.AddTag
	// void AddTag(FString Tag);                                                                                                // [0x13026b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/KytheraPlugin.HashData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FHashData
{ 
	TArray<uint64_t>                                   InclusionHashes;                                            // 0x0000   (0x0010)  
	TArray<uint64_t>                                   ExclusionHashes;                                            // 0x0010   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytNavCost
/// Size: 0x0110 (272 bytes) (0x0000B0 - 0x000110) align 8 MaxSize: 0x0110
class UKytNavCost : public UActorComponent
{ 
public:
	FString                                            AreaLabel;                                                  // 0x00B0   (0x0010)  
	class UKytNavMeshAgentGroup*                       AgentTypesData;                                             // 0x00C0   (0x0008)  
	FHashData                                          SerializationData;                                          // 0x00C8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	FBox                                               CurrentBoundingBox;                                         // 0x00F0   (0x001C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/KytheraPlugin.AreaCostLabelData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAreaCostLabelData
{ 
	FString                                            AreaLabel;                                                  // 0x0000   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytCostRanking
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UKytCostRanking : public UDataAsset
{ 
public:
	TArray<FAreaCostLabelData>                         AreaCostRanking;                                            // 0x0030   (0x0010)  
};

/// Class /Script/KytheraPlugin.CostBounds
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCostBounds : public UInterface
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBTTask_CoverEnter
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UKytBTTask_CoverEnter : public UBTTaskNode
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBTTask_CoverExit
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UKytBTTask_CoverExit : public UBTTaskNode
{ 
public:
};

/// Class /Script/KytheraPlugin.CSNBubble
/// Size: 0x0250 (592 bytes) (0x000220 - 0x000250) align 8 MaxSize: 0x0250
class ACSNBubble : public AActor
{ 
public:
	class UKytCSNBubbleType*                           BubblePresets;                                              // 0x0220   (0x0008)  
	FString                                            ActivePreset;                                               // 0x0228   (0x0010)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0240   (0x0010)  MISSED
};

/// Struct /Script/KytheraPlugin.KytCSNBubbleSingleLodPreset
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FKytCSNBubbleSingleLodPreset
{ 
	float                                              LOD0;                                                       // 0x0000   (0x0004)  
	float                                              LOD1;                                                       // 0x0004   (0x0004)  
	float                                              LOD2;                                                       // 0x0008   (0x0004)  
	float                                              LOD3;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/KytheraPlugin.KytCSNBubblePreset
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FKytCSNBubblePreset
{ 
	TMap<FString, FKytCSNBubbleSingleLodPreset>        LODs;                                                       // 0x0000   (0x0050)  
};

/// Class /Script/KytheraPlugin.KytCSNBubbleType
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UKytCSNBubbleType : public UDataAsset
{ 
public:
	TMap<FString, FKytCSNBubblePreset>                 BubblePresets;                                              // 0x0030   (0x0050)  
};

/// Class /Script/KytheraPlugin.KytCSNComponent
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UKytCSNComponent : public UActorComponent
{ 
public:
	class UKytCSNNetworkData*                          CSNNetworkData;                                             // 0x00B0   (0x0008)  
	bool                                               bForceDefaultDensities;                                     // 0x00B8   (0x0001)  
	char                                               DefaultVehicleDensityPercentage;                            // 0x00B9   (0x0001)  
	char                                               DefaultPedestrianDensityPercentage;                         // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x00BB   (0x0005)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytCSNComponent.SetVehicleSpawnDensityMultiplier
	// void SetVehicleSpawnDensityMultiplier(float Multiplier);                                                                 // [0x1305920] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytCSNComponent.SetPedestrianSpawnDensityMultiplier
	// void SetPedestrianSpawnDensityMultiplier(float Multiplier);                                                              // [0x13057d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytCSNNetworkData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UKytCSNNetworkData : public UObject
{ 
public:
	TArray<char>                                       Content;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytCSNObstacleComponent
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytCSNObstacleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x00B0   (0x0028)  MISSED
	float                                              Radius;                                                     // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytDataAsset
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UKytDataAsset : public UPrimaryDataAsset
{ 
public:
};

/// Class /Script/KytheraPlugin.KytDebugDrawActor
/// Size: 0x0220 (544 bytes) (0x000220 - 0x000220) align 8 MaxSize: 0x0220
class AKytDebugDrawActor : public AActor
{ 
public:
};

/// Class /Script/KytheraPlugin.KytDebugDrawComponent
/// Size: 0x04B0 (1200 bytes) (0x000450 - 0x0004B0) align 16 MaxSize: 0x04B0
class UKytDebugDrawComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0450   (0x0060)  MISSED
};

/// Class /Script/KytheraPlugin.KytEnvQueryItemType_Point
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UKytEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBTTask_ShipPathTo
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
class UKytBTTask_ShipPathTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              AbsoluteSpeed;                                              // 0x0098   (0x0004)  
	float                                              RelativeSpeed;                                              // 0x009C   (0x0004)  
	float                                              EndDistance;                                                // 0x00A0   (0x0004)  
	float                                              AbsoluteSpeedAtDestination;                                 // 0x00A4   (0x0004)  
	float                                              RelativeSpeedAtDestination;                                 // 0x00A8   (0x0004)  
	float                                              MaxDistanceFromSurface;                                     // 0x00AC   (0x0004)  
	float                                              MaxAvoidanceStuckTime;                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytBTTask_ShipTrack
/// Size: 0x00B8 (184 bytes) (0x000098 - 0x0000B8) align 8 MaxSize: 0x00B8
class UKytBTTask_ShipTrack : public UBTTask_BlackboardBase
{ 
public:
	float                                              MinAbsoluteSpeed;                                           // 0x0098   (0x0004)  
	float                                              MaxAbsoluteSpeed;                                           // 0x009C   (0x0004)  
	float                                              MinRelativeSpeed;                                           // 0x00A0   (0x0004)  
	float                                              MaxRelativeSpeed;                                           // 0x00A4   (0x0004)  
	float                                              Distance;                                                   // 0x00A8   (0x0004)  
	bool                                               LookAtDestination;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              MaxDistanceFromSurface;                                     // 0x00B0   (0x0004)  
	float                                              MaxAvoidanceStuckTime;                                      // 0x00B4   (0x0004)  
};

/// Class /Script/KytheraPlugin.KytBTTask_ShipStop
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UKytBTTask_ShipStop : public UBTTaskNode
{ 
public:
};

/// Class /Script/KytheraPlugin.KytFormation
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UKytFormation : public UKytBlackboardImportable
{ 
public:
	TArray<FVector>                                    Offsets;                                                    // 0x0038   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytFormation2dProfile
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UKytFormation2dProfile : public UKytBlackboardImportable
{ 
public:
	FString                                            DesiredBehavior;                                            // 0x0038   (0x0010)  
	FString                                            TargetSelector;                                             // 0x0048   (0x0010)  
	float                                              WalkSpeed;                                                  // 0x0058   (0x0004)  
	float                                              RunSpeed;                                                   // 0x005C   (0x0004)  
	float                                              TurnRate;                                                   // 0x0060   (0x0004)  
	float                                              ChokepointSlotCullDistance;                                 // 0x0064   (0x0004)  
};

/// Struct /Script/KytheraPlugin.KytFormationNode
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FKytFormationNode
{ 
	FString                                            RequiredTag;                                                // 0x0000   (0x0010)  
	FVector2D                                          OffsetVec;                                                  // 0x0010   (0x0008)  
	float                                              Rotation;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytFormation2d
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UKytFormation2d : public UKytBlackboardImportable
{ 
public:
	float                                              FillInThreshold;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FKytFormationNode>                          Offsets;                                                    // 0x0040   (0x0010)  
	class UKytFormation2dProfile*                      KytProfile;                                                 // 0x0050   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/KytheraPlugin.KytFunctionLibrary.UpdateRelationship
	// void UpdateRelationship(class AActor* Actor);                                                                            // [0x1305a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.UnlinkMovingNavigationMesh
	// void UnlinkMovingNavigationMesh(class AActor* LinkedActor);                                                              // [0x13059a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetMultipleEntityUpdateFrequenciesInTime
	// void SetMultipleEntityUpdateFrequenciesInTime(TArray<AActor*>& Actors, float secondsPerUpdate);                          // [0x13056e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetMultipleEntityUpdateFrequenciesInFrames
	// void SetMultipleEntityUpdateFrequenciesInFrames(TArray<AActor*>& Actors, int32_t framesPerUpdate);                       // [0x13055f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetMaxAllowedThreat
	// void SetMaxAllowedThreat(class AActor* Target, float MaxThreat);                                                         // [0x1305530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetKytheraDebugOption
	// void SetKytheraDebugOption(FString OptionName, bool Enabled);                                                            // [0x1305400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetEntityUpdateFrequencyInTime
	// void SetEntityUpdateFrequencyInTime(class AActor* Actor, float secondsPerUpdate);                                        // [0x1305340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetEntityUpdateFrequencyInFrames
	// void SetEntityUpdateFrequencyInFrames(class AActor* Actor, int32_t framesPerUpdate);                                     // [0x1305280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetAllEntityUpdateFrequenciesInTime
	// void SetAllEntityUpdateFrequenciesInTime(float secondsPerUpdate);                                                        // [0x1305200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.SetAllEntityUpdateFrequenciesInFrames
	// void SetAllEntityUpdateFrequenciesInFrames(int32_t framesPerUpdate);                                                     // [0x1305180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ResetMultipleEntityUpdates
	// void ResetMultipleEntityUpdates(TArray<AActor*>& Actors);                                                                // [0x1304fb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ResetEntityUpdates
	// void ResetEntityUpdates(class AActor* Actor);                                                                            // [0x1304f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ResetAllEntityUpdates
	// void ResetAllEntityUpdates();                                                                                            // [0x1304f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.RegisterProjectileShot
	// void RegisterProjectileShot(class AActor* Actor, FVector Start, FVector End, float Radius);                              // [0x1304c20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.RegisterInstantShot
	// void RegisterInstantShot(class AActor* Actor, FVector Start, FVector End, float Radius);                                 // [0x1304ab0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.RegisterDamage
	// void RegisterDamage(class AActor* Actor, float Damage, class AActor* Instigator);                                        // [0x13049a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.RegenerateNavigationMesh
	// void RegenerateNavigationMesh(FVector Origin, FVector Extent);                                                           // [0x13048d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.PauseMultipleEntityUpdates
	// void PauseMultipleEntityUpdates(TArray<AActor*>& Actors, bool bShouldPause);                                             // [0x13047e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.PauseEntityUpdates
	// void PauseEntityUpdates(class AActor* Actor, bool bShouldPause);                                                         // [0x1304720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.PauseAllEntityUpdates
	// void PauseAllEntityUpdates(bool bShouldPause);                                                                           // [0x13046a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.LinkMovingNavigationMesh
	// void LinkMovingNavigationMesh(class AActor* LinkedActor);                                                                // [0x1304500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.IsNavigationMeshCurrentlyRegeneratingAnywhere
	// bool IsNavigationMeshCurrentlyRegeneratingAnywhere();                                                                    // [0x13044d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.IsNavigationMeshCurrentlyRegenerating
	// bool IsNavigationMeshCurrentlyRegenerating(FVector Origin, FVector Extent);                                              // [0x13043f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.GetKytPosition
	// FUKytPosition GetKytPosition(class AActor* Actor, ECoordinateSystem CoordSytem);                                         // [0x1304210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.GetGlobalKytheraBlackboard
	// class UKytBlackboard* GetGlobalKytheraBlackboard();                                                                      // [0x1304050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.FollowFormationLeader
	// void FollowFormationLeader(class APawn* Leader, class APawn* Follower, bool& bSuccess);                                  // [0x1303e00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.EnableBehaviourTreeUpdates
	// void EnableBehaviourTreeUpdates(class AActor* Actor, bool bEnable);                                                      // [0x1303c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.DisableMultipleEntityUpdates
	// void DisableMultipleEntityUpdates(TArray<AActor*>& Actors);                                                              // [0x1303bb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.DisableEntityUpdates
	// void DisableEntityUpdates(class AActor* Actor);                                                                          // [0x1303b30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.DisableAllEntityUpdates
	// void DisableAllEntityUpdates();                                                                                          // [0x1303b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.DebugForceRegenerateNavigationMesh
	// void DebugForceRegenerateNavigationMesh(FVector Origin, FVector Extent);                                                 // [0x1303a40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ConvertToKytheraPos
	// FUKytPosition ConvertToKytheraPos(class AActor* Actor, FVector UnrealPos, ECoordinateSystem CoordSytem);                 // [0x1302ce0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ConvertKytPosition
	// FUKytPosition ConvertKytPosition(class AActor* Actor, FUKytPosition KytPosition, ECoordinateSystem CoordSytem);          // [0x1302b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.Conv_KytPositionToFVector
	// FVector Conv_KytPositionToFVector(FUKytPosition KytPosition);                                                            // [0x1302ab0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.Conv_FVectorToKytPosition
	// FUKytPosition Conv_FVectorToKytPosition(FVector position);                                                               // [0x1302a10] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ChangeFormationByName
	// void ChangeFormationByName(FString FormationName, class APawn* Leader, bool& bSuccess);                                  // [0x13028b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytFunctionLibrary.ChangeFormation
	// void ChangeFormation(class UKytFormation* NewFormation, class APawn* Leader, bool& bSuccess);                            // [0x13027a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytBTTask_CharacterGoto
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UKytBTTask_CharacterGoto : public UBTTask_BlackboardBase
{ 
public:
	float                                              Speed;                                                      // 0x0098   (0x0004)  
	float                                              EndDistance;                                                // 0x009C   (0x0004)  
};

/// Class /Script/KytheraPlugin.KytGroup
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class AKytGroup : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	FString                                            Type;                                                       // 0x0228   (0x0010)  
	class UKytBlackboard*                              GroupBB;                                                    // 0x0238   (0x0008)  


	/// Functions
	// Function /Script/KytheraPlugin.KytGroup.SendGroupSignal
	// void SendGroupSignal(FString SignalName);                                                                                // [0x130a600] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.Remove
	// void Remove(class AActor* Actor);                                                                                        // [0x130a570] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.GetType
	// FString GetType();                                                                                                       // [0x130a0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KytheraPlugin.KytGroup.GetNamedKytGroup
	// class AKytGroup* GetNamedKytGroup(class UObject* WorldContextObject, FString Name, FString Type);                        // [0x1309f30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.GetGroupBlackboard
	// class UKytBlackboard* GetGroupBlackboard();                                                                              // [0x1309f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.GetActorsInGroup
	// TArray<AActor*> GetActorsInGroup();                                                                                      // [0x13098f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.CreateKytGroup
	// class AKytGroup* CreateKytGroup(class UObject* WorldContextObject, FString Type);                                        // [0x13097c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytGroup.Add
	// void Add(class AActor* Actor);                                                                                           // [0x1309710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytheraComponent
/// Size: 0x00E8 (232 bytes) (0x0000B0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UKytheraComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x34];                                      // 0x00B0   (0x0034)  MISSED
	bool                                               bAutomaticRegistration;                                     // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00E5   (0x0003)  MISSED
};

/// Class /Script/KytheraPlugin.KytheraComponentListenerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UKytheraComponentListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/KytheraPlugin.KytheraManager
/// Size: 0x0350 (848 bytes) (0x000220 - 0x000350) align 8 MaxSize: 0x0350
class AKytheraManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0220   (0x0018)  MISSED
	bool                                               bEnableNavmeshStreamingWithLevel;                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UKytCostRanking*                             AreaCostRanking;                                            // 0x0240   (0x0008)  
	TMap<FString, class UKytFormation*>                GlobalFormations;                                           // 0x0248   (0x0050)  
	TMap<FString, class UKytFormation2d*>              GlobalGroundFormations;                                     // 0x0298   (0x0050)  
	class UKytNavMeshGenerator*                        NavMeshGenerator;                                           // 0x02E8   (0x0008)  
	TMap<FString, class UKytNavMesh*>                  NavMeshes;                                                  // 0x02F0   (0x0050)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0340   (0x0010)  MISSED
};

/// Class /Script/KytheraPlugin.KytheraPawnComponent
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
class UKytheraPawnComponent : public UKytheraComponent
{ 
public:
	bool                                               bPerception;                                                // 0x00E8   (0x0001)  
	PawnShape                                          eShapeType;                                                 // 0x00E9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00EA   (0x0006)  MISSED
	class UKytProfile*                                 Profile;                                                    // 0x00F0   (0x0008)  
	class UKytBlackboard*                              m_entityStateBBRef;                                         // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/KytheraPlugin.KytheraPawnComponent.SetProfile
	// void SetProfile(class UKytProfile* NewProfile);                                                                          // [0x130a780] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.SetPerception
	// void SetPerception(bool bEnable);                                                                                        // [0x130a6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.MarkDead
	// void MarkDead();                                                                                                         // [0x130a270] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.MarkAlive
	// void MarkAlive();                                                                                                        // [0x130a250] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.GetEntityState
	// class UKytBlackboard* GetEntityState();                                                                                  // [0x1309ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.GetCurrentlyPerceivedTargets
	// TArray<FPerceivedTargetInfo> GetCurrentlyPerceivedTargets();                                                             // [0x1309e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytheraPawnComponent.ClearPerceivedTargets
	// void ClearPerceivedTargets();                                                                                            // [0x13097a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytheraSceneComponent
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 16 MaxSize: 0x0200
class UKytheraSceneComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x01F8   (0x0004)  MISSED
	bool                                               bAutomaticRegistration;                                     // 0x01FC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x01FD   (0x0003)  MISSED
};

/// Class /Script/KytheraPlugin.KytheraSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UKytheraSettings : public UObject
{ 
public:
	TArray<FString>                                    BehaviorDirectories;                                        // 0x0028   (0x0010)  
	TArray<FString>                                    BTNodeDirectories;                                          // 0x0038   (0x0010)  
	TEnumAsByte<ECollisionChannel>                     VisionTraceChannel;                                         // 0x0048   (0x0001)  
	bool                                               bAllowClientSideNavmesh;                                    // 0x0049   (0x0001)  
	bool                                               NavMeshAutoGenerationFrozen;                                // 0x004A   (0x0001)  
	bool                                               bAllowClientSideEntities;                                   // 0x004B   (0x0001)  
	bool                                               bUseExperimentalInspector;                                  // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Class /Script/KytheraPlugin.KytMovableNavMeshComponent
/// Size: 0x0140 (320 bytes) (0x0000B0 - 0x000140) align 16 MaxSize: 0x0140
class UKytMovableNavMeshComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x00B0   (0x0028)  MISSED
	TArray<class AKytNavBounds*>                       KytNavBounds;                                               // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x00E8   (0x0058)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavBounds
/// Size: 0x0278 (632 bytes) (0x000258 - 0x000278) align 8 MaxSize: 0x0278
class AKytNavBounds : public AVolume
{ 
public:
	bool                                               bNavMesh : 1;                                               // 0x0258:0 (0x0001)  
	bool                                               bAutoCover : 1;                                             // 0x0258:1 (0x0001)  
	bool                                               bAutoContextNav : 1;                                        // 0x0258:2 (0x0001)  
	bool                                               bExclusive : 1;                                             // 0x0258:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UKytNavMeshAgentGroup*                       AgentTypesData;                                             // 0x0260   (0x0008)  
	class AActor*                                      LinkedActor;                                                // 0x0268   (0x0008)  
	class AKytNavOctree*                               NavOctree;                                                  // 0x0270   (0x0008)  


	/// Functions
	// Function /Script/KytheraPlugin.KytNavBounds.GetAllAgentTypes
	// void GetAllAgentTypes(FString& OutGroupName, TMap<FString, UKytNavMeshAgentType*>& OutAgentTypes);                       // [0x1309990] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytNavCostBrush
/// Size: 0x0268 (616 bytes) (0x000258 - 0x000268) align 8 MaxSize: 0x0268
class AKytNavCostBrush : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0258   (0x0008)  MISSED
	class UKytNavCost*                                 NavCost;                                                    // 0x0260   (0x0008)  


	/// Functions
	// Function /Script/KytheraPlugin.KytNavCostBrush.GetAllAgentTypes
	// void GetAllAgentTypes(FString& OutGroupName, TMap<FString, UKytNavMeshAgentType*>& OutAgentTypes);                       // [0x1309b10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytNavCostStaticMesh
/// Size: 0x0238 (568 bytes) (0x000220 - 0x000238) align 8 MaxSize: 0x0238
class AKytNavCostStaticMesh : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	class UKytNavCost*                                 NavCost;                                                    // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0230   (0x0008)  


	/// Functions
	// Function /Script/KytheraPlugin.KytNavCostStaticMesh.GetAllAgentTypes
	// void GetAllAgentTypes(FString& OutGroupName, TMap<FString, UKytNavMeshAgentType*>& OutAgentTypes);                       // [0x1309ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytNavMesh
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UKytNavMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FString                                            NavMeshName;                                                // 0x0030   (0x0010)  
	class UKytNavMeshAgentType*                        AgentType;                                                  // 0x0040   (0x0008)  
	bool                                               bIsVisible : 1;                                             // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	class AActor*                                      LinkedActor;                                                // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0058   (0x0040)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavMeshAgentGroup
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UKytNavMeshAgentGroup : public UDataAsset
{ 
public:
	TArray<class UKytNavMeshAgentType*>                AgentTypes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytAgentFeature
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytAgentFeature : public UKytBlackboardBase
{ 
public:
};

/// Class /Script/KytheraPlugin.KytAutoContextNavFeature
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytAutoContextNavFeature : public UKytAgentFeature
{ 
public:
};

/// Class /Script/KytheraPlugin.KytAutoCoverFeature
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UKytAutoCoverFeature : public UKytAgentFeature
{ 
public:
	float                                              BinSize;                                                    // 0x0038   (0x0004)  
	float                                              MaxCoverHeight;                                             // 0x003C   (0x0004)  
	float                                              MaxCoverDepth;                                              // 0x0040   (0x0004)  
	float                                              MaxAllowedGap;                                              // 0x0044   (0x0004)  
	float                                              DistanceFromGround;                                         // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavMeshAgentType
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UKytNavMeshAgentType : public UDataAsset
{ 
public:
	FString                                            Description;                                                // 0x0030   (0x0010)  
	float                                              AgentHeight;                                                // 0x0040   (0x0004)  
	float                                              AgentRadius;                                                // 0x0044   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0048   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x004C   (0x0004)  
	float                                              CellSize;                                                   // 0x0050   (0x0004)  
	float                                              CellHeight;                                                 // 0x0054   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     NavMeshCollisionChannel;                                    // 0x0058   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     AutoCoverCollisionChannel;                                  // 0x0059   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x005A   (0x0006)  MISSED
	TArray<class UKytAgentFeature*>                    AgentFeatures;                                              // 0x0060   (0x0010)  
};

/// Struct /Script/KytheraPlugin.KytNavMeshData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FKytNavMeshData
{ 
	class UKytNavMesh*                                 NavigationMesh;                                             // 0x0000   (0x0008)  
	TArray<class AKytNavBounds*>                       NavigationBounds;                                           // 0x0008   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytNavMeshGenerator
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UKytNavMeshGenerator : public UObject
{ 
public:
	bool                                               bEnableNavmeshStreamingWithLevel;                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FKytNavMeshData>                            GeneratedNavigationMeshes;                                  // 0x0030   (0x0010)  
	class AKytheraManager*                             KytheraManager;                                             // 0x0040   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytNavObjectActor
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class AKytNavObjectActor : public AActor
{ 
public:
	class UKytNavObjectComponent*                      KytNavObjectComponent;                                      // 0x0220   (0x0008)  
	class UKytheraComponent*                           KytComponent;                                               // 0x0228   (0x0008)  
};

/// Struct /Script/KytheraPlugin.KytNavMeshLink
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FKytNavMeshLink
{ 
	FTransform                                         Start;                                                      // 0x0000   (0x0030)  
	FVector                                            End;                                                        // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            Animation;                                                  // 0x0040   (0x0010)  
	FString                                            linkCostIdentifier;                                         // 0x0050   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytNavObjectComponent
/// Size: 0x0220 (544 bytes) (0x000200 - 0x000220) align 16 MaxSize: 0x0220
class UKytNavObjectComponent : public UKytheraSceneComponent
{ 
public:
	TArray<FKytNavMeshLink>                            meshLinks;                                                  // 0x0200   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0210   (0x0010)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytNavObjectComponent.MarkMeshLinksBoxDirty
	// void MarkMeshLinksBoxDirty();                                                                                            // [0x130a290] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytNavObstacleActor
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class AKytNavObstacleActor : public AActor
{ 
public:
	class UKytNavObstacleComponent*                    KytNavObstacleComponent;                                    // 0x0220   (0x0008)  
	class UKytheraComponent*                           KytComponent;                                               // 0x0228   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytNavObstacleComponent
/// Size: 0x0490 (1168 bytes) (0x000450 - 0x000490) align 16 MaxSize: 0x0490
class UKytNavObstacleComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0450   (0x0028)  MISSED
	EKytShapeType                                      Shape;                                                      // 0x0478   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0479   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x047C   (0x0004)  
	FVector                                            Size;                                                       // 0x0480   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x048C   (0x0004)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavOctree
/// Size: 0x0280 (640 bytes) (0x000220 - 0x000280) align 8 MaxSize: 0x0280
class AKytNavOctree : public AActor
{ 
public:
	float                                              CellSize;                                                   // 0x0220   (0x0004)  
	int32_t                                            MinShipRadius;                                              // 0x0224   (0x0004)  
	int32_t                                            MaxShipRadius;                                              // 0x0228   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     OctreeCollisionChannel;                                     // 0x022C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x022D   (0x0003)  MISSED
	bool                                               bHardBoundaries : 1;                                        // 0x0230:0 (0x0001)  
	bool                                               bRegenerate : 1;                                            // 0x0230:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0231   (0x0007)  MISSED
	SDK_UNDEFINED(16,504) /* TArray<TWeakObjectPtr<AActor*>> */ __um(NavSeeds);                                    // 0x0238   (0x0010)  
	class UKytNavOctreeRenderingComponent*             KytNavOctreeRenderingComponent;                             // 0x0248   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0250   (0x0008)  MISSED
	FVector                                            m_origin;                                                   // 0x0258   (0x000C)  
	unsigned char                                      UnknownData03_7[0x1C];                                      // 0x0264   (0x001C)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytNavOctree.RegenerateVolume
	// void RegenerateVolume(FVector Center, FVector halfExtent);                                                               // [0x130a490] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytNavOctree.QueryNavigablePointInSphere
	// bool QueryNavigablePointInSphere(FVector& Result, FVector& Center, float Radius, float NavigationRadius, bool OpenAreasOnly); // [0x130a2b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytNavOctree.IgnoreMeshForNavigation
	// void IgnoreMeshForNavigation(class UPrimitiveComponent* Mesh, bool Ignore);                                              // [0x130a180] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytNavOctreeRenderingComponent
/// Size: 0x0500 (1280 bytes) (0x000450 - 0x000500) align 16 MaxSize: 0x0500
class UKytNavOctreeRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0450   (0x00B0)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavRouteComponent
/// Size: 0x04A0 (1184 bytes) (0x000450 - 0x0004A0) align 16 MaxSize: 0x04A0
class UKytNavRouteComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0450   (0x0028)  MISSED
	TArray<FVector>                                    Points;                                                     // 0x0478   (0x0010)  
	bool                                               bRouteHasBeenEdited;                                        // 0x0488   (0x0001)  
	bool                                               bLoop;                                                      // 0x0489   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x048A   (0x0002)  MISSED
	int32_t                                            NumPoints;                                                  // 0x048C   (0x0004)  
	int32_t                                            CurrentPointIndex;                                          // 0x0490   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0494   (0x000C)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavSeedComponent
/// Size: 0x0460 (1120 bytes) (0x000450 - 0x000460) align 16 MaxSize: 0x0460
class UKytNavSeedComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0450   (0x0010)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavSplineActor
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class AKytNavSplineActor : public AActor
{ 
public:
	class UKytNavSplineComponent*                      KytNavSplineComponent;                                      // 0x0220   (0x0008)  
	class UKytheraComponent*                           KytheraComponent;                                           // 0x0228   (0x0008)  
	SDK_UNDEFINED(16,505) /* FMulticastInlineDelegate */ __um(OnSplinePointPassed);                                // 0x0230   (0x0010)  


	/// Functions
	// Function /Script/KytheraPlugin.KytNavSplineActor.SplinePointPassed
	// void SplinePointPassed(class APawn* Ship, int32_t PointIndex, FString PointName);                                        // [0x235b330] Event|Public|BlueprintEvent 
};

/// Struct /Script/KytheraPlugin.API_KytheraNavSplinePoint
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FAPI_KytheraNavSplinePoint
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              Orientation;                                                // 0x0010   (0x0010)  
	float                                              preTension;                                                 // 0x0020   (0x0004)  
	float                                              postTension;                                                // 0x0024   (0x0004)  
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              Index;                                                      // 0x002C   (0x0004)  
	FQuat                                              vehicleOrientation;                                         // 0x0030   (0x0010)  
	bool                                               useUpVector;                                                // 0x0040   (0x0001)  
	bool                                               useFwdVector;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	class AActor*                                      Target;                                                     // 0x0048   (0x0008)  
	FString                                            Name;                                                       // 0x0050   (0x0010)  
};

/// Struct /Script/KytheraPlugin.KytNavSplinePoint
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FKytNavSplinePoint
{ 
	FAPI_KytheraNavSplinePoint                         pt;                                                         // 0x0000   (0x0060)  
	bool                                               bAutoTangent;                                               // 0x0060   (0x0001)  
	bool                                               bLinkTangentTensions;                                       // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0062   (0x000E)  MISSED
};

/// Class /Script/KytheraPlugin.KytNavSplineComponent
/// Size: 0x04D0 (1232 bytes) (0x000450 - 0x0004D0) align 16 MaxSize: 0x04D0
class UKytNavSplineComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0450   (0x0028)  MISSED
	TArray<FKytNavSplinePoint>                         Points;                                                     // 0x0478   (0x0010)  
	bool                                               bSplineHasBeenEdited;                                       // 0x0488   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0489   (0x0003)  MISSED
	float                                              Length;                                                     // 0x048C   (0x0004)  
	int32_t                                            NumPoints;                                                  // 0x0490   (0x0004)  
	float                                              VisualizationTime;                                          // 0x0494   (0x0004)  
	int32_t                                            CurrentPointIndex;                                          // 0x0498   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x049C   (0x0004)  MISSED
	FString                                            CurrentPointName;                                           // 0x04A0   (0x0010)  
	float                                              CurrentPointSpeed;                                          // 0x04B0   (0x0004)  
	bool                                               CurrentPointAutoTangent;                                    // 0x04B4   (0x0001)  
	bool                                               CurrentPointLinkTangentTensions;                            // 0x04B5   (0x0001)  
	bool                                               CurrentPointUseUp;                                          // 0x04B6   (0x0001)  
	bool                                               CurrentPointUseFwd;                                         // 0x04B7   (0x0001)  
	class AActor*                                      CurrentPointTarget;                                         // 0x04B8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x04C0   (0x0010)  MISSED
};

/// Class /Script/KytheraPlugin.Kyt3DPathFollowingComponent
/// Size: 0x00E8 (232 bytes) (0x0000B0 - 0x0000E8) align 8 MaxSize: 0x00E8
class UKyt3DPathFollowingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x00B0   (0x0028)  MISSED
	SDK_UNDEFINED(16,506) /* FMulticastInlineDelegate */ __um(OnKytMove);                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.SetParams
	// void SetParams(FKyt3DSteeringParams& SteeringParams);                                                                    // [0x130dac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.RemoveActorFromExclusion
	// void RemoveActorFromExclusion(class AActor* Actor);                                                                      // [0x130d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.RelativeSpeedFromAbsolute
	// float RelativeSpeedFromAbsolute(float AbsoluteSpeed);                                                                    // [0x130d880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.NextPointOfContact
	// FVector NextPointOfContact();                                                                                            // [0x130d840] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.GetNextCollisionTime
	// float GetNextCollisionTime();                                                                                            // [0x130d130] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.EnableAvoidance
	// void EnableAvoidance();                                                                                                  // [0x130d110] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.DisableAvoidance
	// void DisableAvoidance();                                                                                                 // [0x130d0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.CopyParams
	// FKyt3DSteeringParams CopyParams();                                                                                       // [0x130ce20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/KytheraPlugin.Kyt3DPathFollowingComponent.AddActorToExclusion
	// void AddActorToExclusion(class AActor* Actor);                                                                           // [0x130cce0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytPathFollowingComponent
/// Size: 0x0108 (264 bytes) (0x0000B0 - 0x000108) align 8 MaxSize: 0x0108
class UKytPathFollowingComponent : public UActorComponent
{ 
public:
	EKyt2DMovementStyle                                MovementStyle;                                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	bool                                               bClampToNavMesh : 1;                                        // 0x00B4:0 (0x0001)  
	bool                                               bApplyRotationDirectlyToPawn : 1;                           // 0x00B4:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	SDK_UNDEFINED(16,507) /* FMulticastInlineDelegate */ __um(ReceiveMoveCompleted);                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,508) /* FMulticastInlineDelegate */ __um(AnimationEvent);                                     // 0x00C8   (0x0010)  
	bool                                               bUpdateControlRotation;                                     // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	SDK_UNDEFINED(16,509) /* FMulticastInlineDelegate */ __um(OnKytPathFollow);                                    // 0x00E0   (0x0010)  
	class UPawnMovementComponent*                      m_movementComp;                                             // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.UpdateComponent
	// void UpdateComponent(float DeltaTime);                                                                                   // [0x130e780] Final|Native|Private|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.StopMovement
	// void StopMovement();                                                                                                     // [0x130e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.SendCMCSignal
	// void SendCMCSignal(FString SignalName);                                                                                  // [0x130d9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.MulticastAnimRequest
	// void MulticastAnimRequest(FKytAnimRequest AnimRequest);                                                                  // [0x130d6f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.MoveToLocation
	// void MoveToLocation(FVector& Dest, float EndDistance, bool bStopOnOverlap, float Speed);                                 // [0x130d570] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.MoveToActor
	// void MoveToActor(class AActor* Goal, float EndDistance, bool bStopOnOverlap, float Speed);                               // [0x130d300] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytPathFollowingComponent.AnimationEnded
	// void AnimationEnded(bool Succeeded);                                                                                     // [0x130cd70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytPatrolRoute
/// Size: 0x0228 (552 bytes) (0x000220 - 0x000228) align 8 MaxSize: 0x0228
class AKytPatrolRoute : public AActor
{ 
public:
	class UKytNavRouteComponent*                       KytNavRouteComponent;                                       // 0x0220   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytProfile
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytProfile : public UKytBlackboardImportable
{ 
public:
};

/// Class /Script/KytheraPlugin.KytProfileTemplate
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytProfileTemplate : public UKytProfile
{ 
public:
};

/// Class /Script/KytheraPlugin.KytBlackboardTemplate
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UKytBlackboardTemplate : public UKytBlackboard
{ 
public:
};

/// Class /Script/KytheraPlugin.KytShipController
/// Size: 0x0318 (792 bytes) (0x0002F8 - 0x000318) align 8 MaxSize: 0x0318
class AKytShipController : public AKytController
{ 
public:
	SDK_UNDEFINED(16,510) /* FMulticastInlineDelegate */ __um(ReceiveMoveCompleted);                               // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0308   (0x0010)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytShipController.TurnToFace
	// void TurnToFace(class AActor* Target);                                                                                   // [0x130e6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.TrackActor
	// void TrackActor(class AActor* Target, float Distance, bool FireAtTarget);                                                // [0x130e5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.SplinePointPassed
	// void SplinePointPassed(class AKytNavSplineActor* SplineActor, int32_t PointIndex, FString PointName);                    // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/KytheraPlugin.KytShipController.MoveToLocation
	// void MoveToLocation(FVector& Dest, float EndDistance, float Speed);                                                      // [0x130d460] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.MoveToActor
	// void MoveToActor(class AActor* Goal, float EndDistance, float Speed);                                                    // [0x130d1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.LeadFormation
	// void LeadFormation(class UKytFormation* FormationType);                                                                  // [0x130d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.DisbandFormation
	// void DisbandFormation();                                                                                                 // [0x130d0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytShipController.CancelCommand
	// void CancelCommand();                                                                                                    // [0x130ce00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytSignal
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UKytSignal : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED


	/// Functions
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsVector
	// void SetSignalValueAsVector(FString Key, FVector Value);                                                                 // [0x130e470] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsStringHash
	// void SetSignalValueAsStringHash(FString Key, FString Value);                                                             // [0x130e2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsString
	// void SetSignalValueAsString(FString Key, FString Value);                                                                 // [0x130e170] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsPosition
	// void SetSignalValueAsPosition(FString Key, FVector Value);                                                               // [0x130e030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsInt
	// void SetSignalValueAsInt(FString Key, int32_t Value);                                                                    // [0x130df00] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsFloat
	// void SetSignalValueAsFloat(FString Key, float Value);                                                                    // [0x130ddd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsEntityId
	// void SetSignalValueAsEntityId(FString Key, class AActor* Entity);                                                        // [0x130dca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.SetSignalValueAsBool
	// void SetSignalValueAsBool(FString Key, bool Value);                                                                      // [0x130db70] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.Send
	// void Send();                                                                                                             // [0x130d9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.CreateKytSignal
	// class UKytSignal* CreateKytSignal(FString Name, EKytSignalDispatchModeEnum DispatchMode);                                // [0x130cfa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/KytheraPlugin.KytSignal.CreateKytEntitySignal
	// class UKytSignal* CreateKytEntitySignal(FString Name, class APawn* Entity);                                              // [0x130ce70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/KytheraPlugin.KytSpatialQuerierComponent
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UKytSpatialQuerierComponent : public UActorComponent
{ 
public:
	class UKytBlackboard*                              SqsResult;                                                  // 0x00B0   (0x0008)  
};

/// Class /Script/KytheraPlugin.KytSpatialQuery
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UKytSpatialQuery : public UObject
{ 
public:
	FString                                            Filename;                                                   // 0x0028   (0x0010)  
	TArray<FString>                                    Names;                                                      // 0x0038   (0x0010)  
	FString                                            Content;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/KytheraPlugin.KytBTTask_RunSqsQuery
/// Size: 0x00F8 (248 bytes) (0x000070 - 0x0000F8) align 8 MaxSize: 0x00F8
class UKytBTTask_RunSqsQuery : public UBTTaskNode
{ 
public:
	FString                                            QueryName;                                                  // 0x0070   (0x0010)  
	FBlackboardKeySelector                             OutputPosBbKey;                                             // 0x0080   (0x0028)  
	FBlackboardKeySelector                             ReferenceBbKey;                                             // 0x00A8   (0x0028)  
	FBlackboardKeySelector                             OutputActorBbKey;                                           // 0x00D0   (0x0028)  
};

/// Class /Script/KytheraPlugin.KytSpatialQueryManagerComponent
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UKytSpatialQueryManagerComponent : public UActorComponent
{ 
public:
	TArray<class UKytSpatialQuery*>                    SpatialQueries;                                             // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00C0   (0x0020)  MISSED
};

/// Struct /Script/KytheraPlugin.KytMove
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FKytMove
{ 
	bool                                               bUseAcceleration;                                           // 0x0000   (0x0001)  
	bool                                               bIsForwardDirection;                                        // 0x0001   (0x0001)  
	bool                                               bIsUpDirection;                                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            Velocity;                                                   // 0x0004   (0x000C)  
	FVector                                            Acceleration;                                               // 0x0010   (0x000C)  
	FVector                                            ForwardDir;                                                 // 0x001C   (0x000C)  
	FVector                                            UpDir;                                                      // 0x0028   (0x000C)  
	float                                              DeltaTime;                                                  // 0x0034   (0x0004)  
};

/// Struct /Script/KytheraPlugin.UKytPosition
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUKytPosition
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/KytheraPlugin.KytAnimRequest
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FKytAnimRequest
{ 
	FUKytPosition                                      StartPos;                                                   // 0x0000   (0x0020)  
	FUKytPosition                                      EndPos;                                                     // 0x0020   (0x0020)  
	FString                                            AnimationName;                                              // 0x0040   (0x0010)  
	class UKytBlackboard*                              AnimParams;                                                 // 0x0050   (0x0008)  
};

/// Struct /Script/KytheraPlugin.KytMotionGoal
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FKytMotionGoal
{ 
	KytMotionType                                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FUKytPosition                                      Pos;                                                        // 0x0008   (0x0020)  
	FVector                                            dir;                                                        // 0x0028   (0x000C)  
	float                                              dirTolerance;                                               // 0x0034   (0x0004)  
	float                                              Speed;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            speedCategory;                                              // 0x0040   (0x0010)  
	FString                                            stance;                                                     // 0x0050   (0x0010)  
	float                                              pathDistance;                                               // 0x0060   (0x0004)  
	float                                              exactFinalSpeed;                                            // 0x0064   (0x0004)  
	bool                                               isNavLink;                                                  // 0x0068   (0x0001)  
	bool                                               isMakingProgress;                                           // 0x0069   (0x0001)  
	bool                                               smoothVelocity;                                             // 0x006A   (0x0001)  
	bool                                               isModifiedByAvoidance;                                      // 0x006B   (0x0001)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/KytheraPlugin.KytPathFollow
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FKytPathFollow
{ 
	FKytMotionGoal                                     CurrentGoal;                                                // 0x0000   (0x0070)  
	FKytMotionGoal                                     NextGoal;                                                   // 0x0070   (0x0070)  
};

/// Struct /Script/KytheraPlugin.PerceivedTargetInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPerceivedTargetInfo
{ 
	class AActor*                                      Actor;                                                      // 0x0000   (0x0008)  
	bool                                               IsHostile;                                                  // 0x0008   (0x0001)  
	bool                                               IsInLineOfSight;                                            // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/KytheraPlugin.Kyt3DSteeringParams
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FKyt3DSteeringParams
{ 
	float                                              MaxSpeed;                                                   // 0x0000   (0x0004)  
	float                                              NormalSpeed;                                                // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MaxAccel;                                                   // 0x000C   (0x0004)  
	float                                              MaxDecel;                                                   // 0x0010   (0x0004)  
	float                                              MaxManeuver;                                                // 0x0014   (0x0004)  
	float                                              MaxUnboostedManeuver;                                       // 0x0018   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UEnvQueryGenerator_KytBase) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UEnvQueryGenerator_KytCoverRail) == 0x0130); // 304 bytes (0x000050 - 0x000130)
static_assert(sizeof(UEnvQueryGenerator_KytGridPoint) == 0x00C8); // 200 bytes (0x000050 - 0x0000C8)
static_assert(sizeof(UEnvQueryGenerator_KytOctreeGrid) == 0x01E0); // 480 bytes (0x000050 - 0x0001E0)
static_assert(sizeof(UEnvQueryGenerator_KytOctreeGridNavigable) == 0x0260); // 608 bytes (0x000050 - 0x000260)
static_assert(sizeof(UEnvQueryGenerator_KytOctreeRandom) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UEnvQueryGenerator_KytOctreeRandomNavigable) == 0x0258); // 600 bytes (0x000050 - 0x000258)
static_assert(sizeof(UEnvQueryGenerator_KytRadialPoint) == 0x0170); // 368 bytes (0x000050 - 0x000170)
static_assert(sizeof(UEnvQueryGenerator_KytRandomPoint) == 0x0100); // 256 bytes (0x000050 - 0x000100)
static_assert(sizeof(UEnvQueryTest_KytCoverIsCloseToEdge) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_KytIsCoverInUse) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UEnvQueryTest_KytIsRailBlocked) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_KytOctreePathfind) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UEnvQueryTest_KytPathfinding) == 0x0278); // 632 bytes (0x0001F8 - 0x000278)
static_assert(sizeof(UEnvQueryTest_KytProject) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UEnvQueryTest_KytSameRail) == 0x01F8); // 504 bytes (0x0001F8 - 0x0001F8)
static_assert(sizeof(UEnvQueryTest_KytTags) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(UKytAnimationSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBaseComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UKytBehavior) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UKytBlackboardBase) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UKytBlackboardImportable) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytBlackboard) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytBlackboardKeyType_BBPointer) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UKytBTAddSignalDispatchAspect) == 0x0068); // 104 bytes (0x000068 - 0x000068)
static_assert(sizeof(UKytCompareBBValuesCondition) == 0x00C0); // 192 bytes (0x000090 - 0x0000C0)
static_assert(sizeof(UKytBTDecorator_CmpSignalQueueLen) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UKytBTFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBTHandleRequestSignalDecorator) == 0x00C8); // 200 bytes (0x000068 - 0x0000C8)
static_assert(sizeof(UKytBTNode) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBTConditional) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBTDecorator) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UKytBTSignalQueueDecorator) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueBase) == 0x00D8); // 216 bytes (0x000070 - 0x0000D8)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueBool) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueFloat) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueInt) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueFString) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueFVector) == 0x00E8); // 232 bytes (0x0000D8 - 0x0000E8)
static_assert(sizeof(UKytBTTask_UnpackKytBBValueActor) == 0x00E0); // 224 bytes (0x0000D8 - 0x0000E0)
static_assert(sizeof(UKytBTWaitForSignalTask) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UKytCommandBlueprintProxy) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(AKytController) == 0x02F8); // 760 bytes (0x000298 - 0x0002F8)
static_assert(sizeof(FHashData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UKytNavCost) == 0x0110); // 272 bytes (0x0000B0 - 0x000110)
static_assert(sizeof(FAreaCostLabelData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UKytCostRanking) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCostBounds) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBTTask_CoverEnter) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UKytBTTask_CoverExit) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(ACSNBubble) == 0x0250); // 592 bytes (0x000220 - 0x000250)
static_assert(sizeof(FKytCSNBubbleSingleLodPreset) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FKytCSNBubblePreset) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UKytCSNBubbleType) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UKytCSNComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UKytCSNNetworkData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UKytCSNObstacleComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UKytDataAsset) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(AKytDebugDrawActor) == 0x0220); // 544 bytes (0x000220 - 0x000220)
static_assert(sizeof(UKytDebugDrawComponent) == 0x04B0); // 1200 bytes (0x000450 - 0x0004B0)
static_assert(sizeof(UKytEnvQueryItemType_Point) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UKytBTTask_ShipPathTo) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(UKytBTTask_ShipTrack) == 0x00B8); // 184 bytes (0x000098 - 0x0000B8)
static_assert(sizeof(UKytBTTask_ShipStop) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UKytFormation) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UKytFormation2dProfile) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(FKytFormationNode) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UKytFormation2d) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UKytFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UKytBTTask_CharacterGoto) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(AKytGroup) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(UKytheraComponent) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UKytheraComponentListenerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AKytheraManager) == 0x0350); // 848 bytes (0x000220 - 0x000350)
static_assert(sizeof(UKytheraPawnComponent) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(UKytheraSceneComponent) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UKytheraSettings) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UKytMovableNavMeshComponent) == 0x0140); // 320 bytes (0x0000B0 - 0x000140)
static_assert(sizeof(AKytNavBounds) == 0x0278); // 632 bytes (0x000258 - 0x000278)
static_assert(sizeof(AKytNavCostBrush) == 0x0268); // 616 bytes (0x000258 - 0x000268)
static_assert(sizeof(AKytNavCostStaticMesh) == 0x0238); // 568 bytes (0x000220 - 0x000238)
static_assert(sizeof(UKytNavMesh) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UKytNavMeshAgentGroup) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UKytAgentFeature) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytAutoContextNavFeature) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytAutoCoverFeature) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UKytNavMeshAgentType) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FKytNavMeshData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UKytNavMeshGenerator) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(AKytNavObjectActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(FKytNavMeshLink) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UKytNavObjectComponent) == 0x0220); // 544 bytes (0x000200 - 0x000220)
static_assert(sizeof(AKytNavObstacleActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UKytNavObstacleComponent) == 0x0490); // 1168 bytes (0x000450 - 0x000490)
static_assert(sizeof(AKytNavOctree) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(UKytNavOctreeRenderingComponent) == 0x0500); // 1280 bytes (0x000450 - 0x000500)
static_assert(sizeof(UKytNavRouteComponent) == 0x04A0); // 1184 bytes (0x000450 - 0x0004A0)
static_assert(sizeof(UKytNavSeedComponent) == 0x0460); // 1120 bytes (0x000450 - 0x000460)
static_assert(sizeof(AKytNavSplineActor) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(FAPI_KytheraNavSplinePoint) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FKytNavSplinePoint) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UKytNavSplineComponent) == 0x04D0); // 1232 bytes (0x000450 - 0x0004D0)
static_assert(sizeof(UKyt3DPathFollowingComponent) == 0x00E8); // 232 bytes (0x0000B0 - 0x0000E8)
static_assert(sizeof(UKytPathFollowingComponent) == 0x0108); // 264 bytes (0x0000B0 - 0x000108)
static_assert(sizeof(AKytPatrolRoute) == 0x0228); // 552 bytes (0x000220 - 0x000228)
static_assert(sizeof(UKytProfile) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytProfileTemplate) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UKytBlackboardTemplate) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(AKytShipController) == 0x0318); // 792 bytes (0x0002F8 - 0x000318)
static_assert(sizeof(UKytSignal) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UKytSpatialQuerierComponent) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UKytSpatialQuery) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UKytBTTask_RunSqsQuery) == 0x00F8); // 248 bytes (0x000070 - 0x0000F8)
static_assert(sizeof(UKytSpatialQueryManagerComponent) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(FKytMove) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FUKytPosition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FKytAnimRequest) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FKytMotionGoal) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FKytPathFollow) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FPerceivedTargetInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FKyt3DSteeringParams) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(offsetof(UEnvQueryGenerator_KytCoverRail, Radius) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytCoverRail, Density) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytCoverRail, CoverTypes) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytCoverRail, Origin) == 0x0110);
static_assert(offsetof(UEnvQueryGenerator_KytGridPoint, GridSize) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytGridPoint, SpaceBetween) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytGridPoint, GenerateAround) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, Density) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, MinRadius) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, MaxRadius) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, AvoidDynamicObstacles) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, OpenAreasOnly) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, PointRadius) == 0x0168);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, RadiusSource) == 0x01A0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGrid, ShipRadius) == 0x01A8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, Density) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, MinRadius) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, MaxRadius) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, PathDistanceRatio) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, Angle) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, ConeDirection) == 0x0168);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, AvoidDynamicObstacles) == 0x0178);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, OpenAreasOnly) == 0x01B0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, PointRadius) == 0x01E8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, RadiusSource) == 0x0220);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeGridNavigable, ShipRadius) == 0x0228);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandom, ConeDirection) == 0x005C);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandom, RadiusSource) == 0x0070);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, MinRadius) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, MaxRadius) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, PathDistanceRatio) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, Angle) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, ConeDirection) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, AvoidDynamicObstacles) == 0x0140);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, OpenAreasOnly) == 0x0178);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, PointRadius) == 0x01B0);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, ShipRadius) == 0x01E8);
static_assert(offsetof(UEnvQueryGenerator_KytOctreeRandomNavigable, RequestedPoints) == 0x0220);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, Density) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, Radius) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, Spokes) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, NumberOfRings) == 0x00F8);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, Origin) == 0x0130);
static_assert(offsetof(UEnvQueryGenerator_KytRadialPoint, Reachable) == 0x0138);
static_assert(offsetof(UEnvQueryGenerator_KytRandomPoint, Radius) == 0x0050);
static_assert(offsetof(UEnvQueryGenerator_KytRandomPoint, NumPoints) == 0x0088);
static_assert(offsetof(UEnvQueryGenerator_KytRandomPoint, Reachable) == 0x00C0);
static_assert(offsetof(UEnvQueryGenerator_KytRandomPoint, Origin) == 0x00F8);
static_assert(offsetof(UEnvQueryTest_KytIsCoverInUse, SearchType) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_KytOctreePathfind, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_KytOctreePathfind, Context) == 0x0200);
static_assert(offsetof(UEnvQueryTest_KytOctreePathfind, PathFromContext) == 0x0208);
static_assert(offsetof(UEnvQueryTest_KytOctreePathfind, SkipUnreachable) == 0x0240);
static_assert(offsetof(UEnvQueryTest_KytPathfinding, TestMode) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_KytPathfinding, Context) == 0x0200);
static_assert(offsetof(UEnvQueryTest_KytPathfinding, PathFromContext) == 0x0208);
static_assert(offsetof(UEnvQueryTest_KytPathfinding, SkipUnreachable) == 0x0240);
static_assert(offsetof(UEnvQueryTest_KytProject, Context) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_KytProject, Tolerance) == 0x0200);
static_assert(offsetof(UEnvQueryTest_KytTags, TagToSearch) == 0x01F8);
static_assert(offsetof(UEnvQueryTest_KytTags, TagMatchType) == 0x0208);
static_assert(offsetof(UKytCompareBBValuesCondition, LHS) == 0x0090);
static_assert(offsetof(UKytCompareBBValuesCondition, LHSType) == 0x00A0);
static_assert(offsetof(UKytCompareBBValuesCondition, RHS) == 0x00A8);
static_assert(offsetof(UKytCompareBBValuesCondition, RHSType) == 0x00B8);
static_assert(offsetof(UKytCompareBBValuesCondition, Comparison) == 0x00BC);
static_assert(offsetof(UKytBTDecorator_CmpSignalQueueLen, SignalName) == 0x0068);
static_assert(offsetof(UKytBTDecorator_CmpSignalQueueLen, ComparisonOperator) == 0x0078);
static_assert(offsetof(UKytBTHandleRequestSignalDecorator, SignalBlackboardKey) == 0x0068);
static_assert(offsetof(UKytBTHandleRequestSignalDecorator, ResponseOnSuccess) == 0x0090);
static_assert(offsetof(UKytBTHandleRequestSignalDecorator, ResponseOnFail) == 0x00A0);
static_assert(offsetof(UKytBTHandleRequestSignalDecorator, ResponseOnEnter) == 0x00B0);
static_assert(offsetof(UKytBTSignalQueueDecorator, DiscardPolicy) == 0x006C);
static_assert(offsetof(UKytBTSignalQueueDecorator, SignalName) == 0x0070);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueBase, KytheraBlackboardPointerKey) == 0x0070);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueBase, KytheraInternalBlackboardPath) == 0x0098);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueBase, UnrealResultBlackboardKey) == 0x00B0);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueFString, DefaultValue) == 0x00D8);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueFVector, DefaultValue) == 0x00D8);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueFVector, KytBBVectorType) == 0x00E4);
static_assert(offsetof(UKytBTTask_UnpackKytBBValueActor, DefaultValue) == 0x00D8);
static_assert(offsetof(UKytBTWaitForSignalTask, SignalName) == 0x0098);
static_assert(offsetof(AKytController, m_entityStateBBRef) == 0x02C8);
static_assert(offsetof(AKytController, m_pDeferredPawnToPossess) == 0x02E8);
static_assert(offsetof(FHashData, InclusionHashes) == 0x0000);
static_assert(offsetof(FHashData, ExclusionHashes) == 0x0010);
static_assert(offsetof(UKytNavCost, AreaLabel) == 0x00B0);
static_assert(offsetof(UKytNavCost, AgentTypesData) == 0x00C0);
static_assert(offsetof(UKytNavCost, SerializationData) == 0x00C8);
static_assert(offsetof(UKytNavCost, CurrentBoundingBox) == 0x00F0);
static_assert(offsetof(FAreaCostLabelData, AreaLabel) == 0x0000);
static_assert(offsetof(UKytCostRanking, AreaCostRanking) == 0x0030);
static_assert(offsetof(ACSNBubble, BubblePresets) == 0x0220);
static_assert(offsetof(ACSNBubble, ActivePreset) == 0x0228);
static_assert(offsetof(ACSNBubble, Mesh) == 0x0238);
static_assert(offsetof(FKytCSNBubblePreset, LODs) == 0x0000);
static_assert(offsetof(UKytCSNBubbleType, BubblePresets) == 0x0030);
static_assert(offsetof(UKytCSNComponent, CSNNetworkData) == 0x00B0);
static_assert(offsetof(UKytCSNNetworkData, Content) == 0x0028);
static_assert(offsetof(UKytFormation, Offsets) == 0x0038);
static_assert(offsetof(UKytFormation2dProfile, DesiredBehavior) == 0x0038);
static_assert(offsetof(UKytFormation2dProfile, TargetSelector) == 0x0048);
static_assert(offsetof(FKytFormationNode, RequiredTag) == 0x0000);
static_assert(offsetof(FKytFormationNode, OffsetVec) == 0x0010);
static_assert(offsetof(UKytFormation2d, Offsets) == 0x0040);
static_assert(offsetof(UKytFormation2d, KytProfile) == 0x0050);
static_assert(offsetof(AKytGroup, Type) == 0x0228);
static_assert(offsetof(AKytGroup, GroupBB) == 0x0238);
static_assert(offsetof(AKytheraManager, AreaCostRanking) == 0x0240);
static_assert(offsetof(AKytheraManager, GlobalFormations) == 0x0248);
static_assert(offsetof(AKytheraManager, GlobalGroundFormations) == 0x0298);
static_assert(offsetof(AKytheraManager, NavMeshGenerator) == 0x02E8);
static_assert(offsetof(AKytheraManager, NavMeshes) == 0x02F0);
static_assert(offsetof(UKytheraPawnComponent, eShapeType) == 0x00E9);
static_assert(offsetof(UKytheraPawnComponent, Profile) == 0x00F0);
static_assert(offsetof(UKytheraPawnComponent, m_entityStateBBRef) == 0x00F8);
static_assert(offsetof(UKytheraSettings, BehaviorDirectories) == 0x0028);
static_assert(offsetof(UKytheraSettings, BTNodeDirectories) == 0x0038);
static_assert(offsetof(UKytheraSettings, VisionTraceChannel) == 0x0048);
static_assert(offsetof(UKytMovableNavMeshComponent, KytNavBounds) == 0x00D8);
static_assert(offsetof(AKytNavBounds, AgentTypesData) == 0x0260);
static_assert(offsetof(AKytNavBounds, LinkedActor) == 0x0268);
static_assert(offsetof(AKytNavBounds, NavOctree) == 0x0270);
static_assert(offsetof(AKytNavCostBrush, NavCost) == 0x0260);
static_assert(offsetof(AKytNavCostStaticMesh, NavCost) == 0x0228);
static_assert(offsetof(AKytNavCostStaticMesh, Mesh) == 0x0230);
static_assert(offsetof(UKytNavMesh, NavMeshName) == 0x0030);
static_assert(offsetof(UKytNavMesh, AgentType) == 0x0040);
static_assert(offsetof(UKytNavMesh, LinkedActor) == 0x0050);
static_assert(offsetof(UKytNavMeshAgentGroup, AgentTypes) == 0x0030);
static_assert(offsetof(UKytNavMeshAgentType, Description) == 0x0030);
static_assert(offsetof(UKytNavMeshAgentType, NavMeshCollisionChannel) == 0x0058);
static_assert(offsetof(UKytNavMeshAgentType, AutoCoverCollisionChannel) == 0x0059);
static_assert(offsetof(UKytNavMeshAgentType, AgentFeatures) == 0x0060);
static_assert(offsetof(FKytNavMeshData, NavigationMesh) == 0x0000);
static_assert(offsetof(FKytNavMeshData, NavigationBounds) == 0x0008);
static_assert(offsetof(UKytNavMeshGenerator, GeneratedNavigationMeshes) == 0x0030);
static_assert(offsetof(UKytNavMeshGenerator, KytheraManager) == 0x0040);
static_assert(offsetof(AKytNavObjectActor, KytNavObjectComponent) == 0x0220);
static_assert(offsetof(AKytNavObjectActor, KytComponent) == 0x0228);
static_assert(offsetof(FKytNavMeshLink, Start) == 0x0000);
static_assert(offsetof(FKytNavMeshLink, End) == 0x0030);
static_assert(offsetof(FKytNavMeshLink, Animation) == 0x0040);
static_assert(offsetof(FKytNavMeshLink, linkCostIdentifier) == 0x0050);
static_assert(offsetof(UKytNavObjectComponent, meshLinks) == 0x0200);
static_assert(offsetof(AKytNavObstacleActor, KytNavObstacleComponent) == 0x0220);
static_assert(offsetof(AKytNavObstacleActor, KytComponent) == 0x0228);
static_assert(offsetof(UKytNavObstacleComponent, Shape) == 0x0478);
static_assert(offsetof(UKytNavObstacleComponent, Size) == 0x0480);
static_assert(offsetof(AKytNavOctree, OctreeCollisionChannel) == 0x022C);
static_assert(offsetof(AKytNavOctree, KytNavOctreeRenderingComponent) == 0x0248);
static_assert(offsetof(AKytNavOctree, m_origin) == 0x0258);
static_assert(offsetof(UKytNavRouteComponent, Points) == 0x0478);
static_assert(offsetof(AKytNavSplineActor, KytNavSplineComponent) == 0x0220);
static_assert(offsetof(AKytNavSplineActor, KytheraComponent) == 0x0228);
static_assert(offsetof(FAPI_KytheraNavSplinePoint, position) == 0x0000);
static_assert(offsetof(FAPI_KytheraNavSplinePoint, Orientation) == 0x0010);
static_assert(offsetof(FAPI_KytheraNavSplinePoint, vehicleOrientation) == 0x0030);
static_assert(offsetof(FAPI_KytheraNavSplinePoint, Target) == 0x0048);
static_assert(offsetof(FAPI_KytheraNavSplinePoint, Name) == 0x0050);
static_assert(offsetof(FKytNavSplinePoint, pt) == 0x0000);
static_assert(offsetof(UKytNavSplineComponent, Points) == 0x0478);
static_assert(offsetof(UKytNavSplineComponent, CurrentPointName) == 0x04A0);
static_assert(offsetof(UKytNavSplineComponent, CurrentPointTarget) == 0x04B8);
static_assert(offsetof(UKytPathFollowingComponent, MovementStyle) == 0x00B0);
static_assert(offsetof(UKytPathFollowingComponent, m_movementComp) == 0x00F0);
static_assert(offsetof(AKytPatrolRoute, KytNavRouteComponent) == 0x0220);
static_assert(offsetof(UKytSpatialQuerierComponent, SqsResult) == 0x00B0);
static_assert(offsetof(UKytSpatialQuery, Filename) == 0x0028);
static_assert(offsetof(UKytSpatialQuery, Names) == 0x0038);
static_assert(offsetof(UKytSpatialQuery, Content) == 0x0048);
static_assert(offsetof(UKytBTTask_RunSqsQuery, QueryName) == 0x0070);
static_assert(offsetof(UKytBTTask_RunSqsQuery, OutputPosBbKey) == 0x0080);
static_assert(offsetof(UKytBTTask_RunSqsQuery, ReferenceBbKey) == 0x00A8);
static_assert(offsetof(UKytBTTask_RunSqsQuery, OutputActorBbKey) == 0x00D0);
static_assert(offsetof(UKytSpatialQueryManagerComponent, SpatialQueries) == 0x00B0);
static_assert(offsetof(FKytMove, Velocity) == 0x0004);
static_assert(offsetof(FKytMove, Acceleration) == 0x0010);
static_assert(offsetof(FKytMove, ForwardDir) == 0x001C);
static_assert(offsetof(FKytMove, UpDir) == 0x0028);
static_assert(offsetof(FKytAnimRequest, StartPos) == 0x0000);
static_assert(offsetof(FKytAnimRequest, EndPos) == 0x0020);
static_assert(offsetof(FKytAnimRequest, AnimationName) == 0x0040);
static_assert(offsetof(FKytAnimRequest, AnimParams) == 0x0050);
static_assert(offsetof(FKytMotionGoal, Type) == 0x0000);
static_assert(offsetof(FKytMotionGoal, Pos) == 0x0008);
static_assert(offsetof(FKytMotionGoal, dir) == 0x0028);
static_assert(offsetof(FKytMotionGoal, speedCategory) == 0x0040);
static_assert(offsetof(FKytMotionGoal, stance) == 0x0050);
static_assert(offsetof(FKytPathFollow, CurrentGoal) == 0x0000);
static_assert(offsetof(FKytPathFollow, NextGoal) == 0x0070);
static_assert(offsetof(FPerceivedTargetInfo, Actor) == 0x0000);
