
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/Water.EBuoyancyEvent
/// Size: 0x01 (1 bytes)
enum class EBuoyancyEvent : uint8_t
{
	EBuoyancyEvent__EnteredWaterBody                                                 = 0,
	EBuoyancyEvent__ExitedWaterBody                                                  = 1
};

/// Enum /Script/Water.EWaveSpectrumType
/// Size: 0x01 (1 bytes)
enum class EWaveSpectrumType : uint8_t
{
	EWaveSpectrumType__Phillips                                                      = 0,
	EWaveSpectrumType__PiersonMoskowitz                                              = 1,
	EWaveSpectrumType__JONSWAP                                                       = 2
};

/// Enum /Script/Water.EWaterBrushBlendType
/// Size: 0x01 (1 bytes)
enum class EWaterBrushBlendType : uint8_t
{
	EWaterBrushBlendType__AlphaBlend                                                 = 0,
	EWaterBrushBlendType__Min                                                        = 1,
	EWaterBrushBlendType__Max                                                        = 2,
	EWaterBrushBlendType__Additive                                                   = 3
};

/// Enum /Script/Water.EWaterBodyType
/// Size: 0x01 (1 bytes)
enum class EWaterBodyType : uint8_t
{
	EWaterBodyType__River                                                            = 0,
	EWaterBodyType__Lake                                                             = 1,
	EWaterBodyType__Ocean                                                            = 2,
	EWaterBodyType__Transition                                                       = 3,
	EWaterBodyType__Num                                                              = 4
};

/// Enum /Script/Water.EWaterBrushFalloffMode
/// Size: 0x01 (1 bytes)
enum class EWaterBrushFalloffMode : uint8_t
{
	EWaterBrushFalloffMode__Angle                                                    = 0,
	EWaterBrushFalloffMode__Width                                                    = 1
};

/// Struct /Script/Water.SphericalPontoon
/// Size: 0x0220 (544 bytes) (0x000000 - 0x000220) align 16 MaxSize: 0x0220
struct FSphericalPontoon
{ 
	FName                                              CenterSocket;                                               // 0x0000   (0x0008)  
	FVector                                            RelativeLocation;                                           // 0x0008   (0x000C)  
	float                                              Radius;                                                     // 0x0014   (0x0004)  
	FVector                                            LocalForce;                                                 // 0x0018   (0x000C)  
	FVector                                            CenterLocation;                                             // 0x0024   (0x000C)  
	FQuat                                              SocketRotation;                                             // 0x0030   (0x0010)  
	FVector                                            Offset;                                                     // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	float                                              WaterHeight;                                                // 0x0050   (0x0004)  
	float                                              WaterDepth;                                                 // 0x0054   (0x0004)  
	float                                              ImmersionDepth;                                             // 0x0058   (0x0004)  
	FVector                                            WaterPlaneLocation;                                         // 0x005C   (0x000C)  
	FVector                                            WaterPlaneNormal;                                           // 0x0068   (0x000C)  
	FVector                                            WaterSurfacePosition;                                       // 0x0074   (0x000C)  
	FVector                                            WaterVelocity;                                              // 0x0080   (0x000C)  
	int32_t                                            WaterBodyIndex;                                             // 0x008C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x178];                                     // 0x0090   (0x0178)  MISSED
	class AWaterBody*                                  CurrentWaterBody;                                           // 0x0208   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0210   (0x0010)  MISSED
};

/// Struct /Script/Water.BuoyancyData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FBuoyancyData
{ 
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x0000   (0x0010)  
	float                                              BuoyancyCoefficient;                                        // 0x0010   (0x0004)  
	float                                              BuoyancyDamp;                                               // 0x0014   (0x0004)  
	float                                              BuoyancyDamp2;                                              // 0x0018   (0x0004)  
	float                                              BuoyancyRampMinVelocity;                                    // 0x001C   (0x0004)  
	float                                              BuoyancyRampMaxVelocity;                                    // 0x0020   (0x0004)  
	float                                              BuoyancyRampMax;                                            // 0x0024   (0x0004)  
	float                                              MaxBuoyantForce;                                            // 0x0028   (0x0004)  
	float                                              WaterShorePushFactor;                                       // 0x002C   (0x0004)  
	float                                              WaterVelocityStrength;                                      // 0x0030   (0x0004)  
	float                                              MaxWaterForce;                                              // 0x0034   (0x0004)  
	float                                              DragCoefficient;                                            // 0x0038   (0x0004)  
	float                                              DragCoefficient2;                                           // 0x003C   (0x0004)  
	float                                              AngularDragCoefficient;                                     // 0x0040   (0x0004)  
	float                                              MaxDragSpeed;                                               // 0x0044   (0x0004)  
	bool                                               bApplyDragForcesInWater;                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Water.BuoyancyComponent
/// Size: 0x01D8 (472 bytes) (0x0000B0 - 0x0001D8) align 8 MaxSize: 0x01D8
class UBuoyancyComponent : public UActorComponent
{ 
public:
	TArray<FSphericalPontoon>                          Pontoons;                                                   // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,911) /* FMulticastInlineDelegate */ __um(OnEnteredWaterDelegate);                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,912) /* FMulticastInlineDelegate */ __um(OnExitedWaterDelegate);                              // 0x00D0   (0x0010)  
	FBuoyancyData                                      BuoyancyData;                                               // 0x00E0   (0x0050)  
	TArray<class AWaterBody*>                          CurrentWaterBodies;                                         // 0x0130   (0x0010)  
	class UPrimitiveComponent*                         SimulatingComponent;                                        // 0x0140   (0x0008)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0148   (0x0090)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyComponent.OnPontoonExitedWater
	// void OnPontoonExitedWater(FSphericalPontoon& Pontoon);                                                                   // [0x1b08fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.OnPontoonEnteredWater
	// void OnPontoonEnteredWater(FSphericalPontoon& Pontoon);                                                                  // [0x1b08ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Water.BuoyancyComponent.IsInWaterBody
	// bool IsInWaterBody();                                                                                                    // [0x1b08e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.BuoyancyComponent.GetLastWaterSurfaceInfo
	// void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32_t& OutWaterBodyIdx, FVector& OutWaterVelocity); // [0x1b088e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Water.BuoyancyManager
/// Size: 0x02D8 (728 bytes) (0x000220 - 0x0002D8) align 8 MaxSize: 0x02D8
class ABuoyancyManager : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0220   (0x0050)  MISSED
	TArray<class UBuoyancyComponent*>                  BuoyancyComponents;                                         // 0x0270   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0280   (0x0058)  MISSED


	/// Functions
	// Function /Script/Water.BuoyancyManager.GetBuoyancyComponentManager
	// bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager*& Manager);                   // [0x1b086a0] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Water.ConvertWaterBodyActorsCommandlet
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UConvertWaterBodyActorsCommandlet : public UCommandlet
{ 
public:
};

/// Class /Script/Water.EnvQueryTest_InsideWaterBody
/// Size: 0x0200 (512 bytes) (0x0001F8 - 0x000200) align 8 MaxSize: 0x0200
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{ 
public:
	bool                                               bIncludeWaves;                                              // 0x01F8   (0x0001)  
	bool                                               bSimpleWaves;                                               // 0x01F9   (0x0001)  
	bool                                               bIgnoreExclusionVolumes;                                    // 0x01FA   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x01FB   (0x0005)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGerstnerWaterWaveGeneratorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/Water.GerstnerWaterWaveGeneratorBase.GenerateGerstnerWaves
	// void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);                                                             // [0x1b085f0] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSimple
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	int32_t                                            NumWaves;                                                   // 0x0028   (0x0004)  
	int32_t                                            Seed;                                                       // 0x002C   (0x0004)  
	float                                              Randomness;                                                 // 0x0030   (0x0004)  
	float                                              MinWavelength;                                              // 0x0034   (0x0004)  
	float                                              MaxWavelength;                                              // 0x0038   (0x0004)  
	float                                              WavelengthFalloff;                                          // 0x003C   (0x0004)  
	float                                              MinAmplitude;                                               // 0x0040   (0x0004)  
	float                                              MaxAmplitude;                                               // 0x0044   (0x0004)  
	float                                              AmplitudeFalloff;                                           // 0x0048   (0x0004)  
	float                                              WindAngleDeg;                                               // 0x004C   (0x0004)  
	float                                              DirectionAngularSpreadDeg;                                  // 0x0050   (0x0004)  
	float                                              SmallWaveSteepness;                                         // 0x0054   (0x0004)  
	float                                              LargeWaveSteepness;                                         // 0x0058   (0x0004)  
	float                                              SteepnessFalloff;                                           // 0x005C   (0x0004)  
};

/// Struct /Script/Water.GerstnerWaveOctave
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGerstnerWaveOctave
{ 
	int32_t                                            NumWaves;                                                   // 0x0000   (0x0004)  
	float                                              AmplitudeScale;                                             // 0x0004   (0x0004)  
	float                                              MainDirection;                                              // 0x0008   (0x0004)  
	float                                              SpreadAngle;                                                // 0x000C   (0x0004)  
	bool                                               bUniformSpread;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveGeneratorSpectrum
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{ 
public:
	EWaveSpectrumType                                  SpectrumType;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FGerstnerWaveOctave>                        Octaves;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/Water.WaterWavesBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWaterWavesBase : public UObject
{ 
public:
};

/// Class /Script/Water.WaterWaves
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWaterWaves : public UWaterWavesBase
{ 
public:
};

/// Struct /Script/Water.GerstnerWave
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FGerstnerWave
{ 
	float                                              WaveLength;                                                 // 0x0000   (0x0004)  
	float                                              Amplitude;                                                  // 0x0004   (0x0004)  
	float                                              Steepness;                                                  // 0x0008   (0x0004)  
	FVector                                            Direction;                                                  // 0x000C   (0x000C)  
	FVector2D                                          WaveVector;                                                 // 0x0018   (0x0008)  
	float                                              WaveSpeed;                                                  // 0x0020   (0x0004)  
	float                                              WKA;                                                        // 0x0024   (0x0004)  
	float                                              Q;                                                          // 0x0028   (0x0004)  
	float                                              PhaseOffset;                                                // 0x002C   (0x0004)  
};

/// Class /Script/Water.GerstnerWaterWaves
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGerstnerWaterWaves : public UWaterWaves
{ 
public:
	class UGerstnerWaterWaveGeneratorBase*             GerstnerWaveGenerator;                                      // 0x0028   (0x0008)  
	TArray<FGerstnerWave>                              GerstnerWaves;                                              // 0x0030   (0x0010)  
	float                                              MaxWaveHeight;                                              // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Water.GerstnerWaterWaveSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Water.LakeCollisionComponent
/// Size: 0x0470 (1136 bytes) (0x000450 - 0x000470) align 16 MaxSize: 0x0470
class ULakeCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0450   (0x0008)  
	FVector                                            BoxExtent;                                                  // 0x0458   (0x000C)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0464   (0x000C)  MISSED
};

/// Class /Script/Water.NiagaraDataInterfaceWater
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{ 
public:
	class AWaterBody*                                  SourceBody;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/Water.NiagaraWaterFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Water.NiagaraWaterFunctionLibrary.SetWaterBody
	// void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);            // [0x1b092c0] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/Water.OceanCollisionComponent
/// Size: 0x0480 (1152 bytes) (0x000450 - 0x000480) align 16 MaxSize: 0x0480
class UOceanCollisionComponent : public UPrimitiveComponent
{ 
public:
	class UBodySetup*                                  CachedBodySetup;                                            // 0x0450   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0458   (0x0028)  MISSED
};

/// Class /Script/Water.OceanBoxCollisionComponent
/// Size: 0x0480 (1152 bytes) (0x000480 - 0x000480) align 16 MaxSize: 0x0480
class UOceanBoxCollisionComponent : public UBoxComponent
{ 
public:
};

/// Struct /Script/Water.UnderwaterPostProcessSettings
/// Size: 0x0580 (1408 bytes) (0x000000 - 0x000580) align 16 MaxSize: 0x0580
struct FUnderwaterPostProcessSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Priority;                                                   // 0x0004   (0x0004)  
	float                                              BlendRadius;                                                // 0x0008   (0x0004)  
	float                                              BlendWeight;                                                // 0x000C   (0x0004)  
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0010   (0x0560)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x0570   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0578   (0x0008)  MISSED
};

/// Struct /Script/Water.WaterCurveSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterCurveSettings
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/Water.WaterBody
/// Size: 0x0DF0 (3568 bytes) (0x000220 - 0x000DF0) align 16 MaxSize: 0x0DE8
class AWaterBody : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0220   (0x0010)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0230   (0x0008)  
	float                                              TargetWaveMaskDepth;                                        // 0x0238   (0x0004)  
	float                                              MaxWaveHeightOffset;                                        // 0x023C   (0x0004)  
	int32_t                                            WaterBodyIndex;                                             // 0x0240   (0x0004)  
	bool                                               bFillCollisionUnderWaterBodiesForNavmesh;                   // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0245   (0x000B)  MISSED
	FUnderwaterPostProcessSettings                     UnderwaterPostProcessSettings;                              // 0x0250   (0x0580)  
	EWaterBodyType                                     WaterBodyType;                                              // 0x07D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x07D1   (0x0007)  MISSED
	FWaterCurveSettings                                CurveSettings;                                              // 0x07D8   (0x0020)  
	class UMaterialInterface*                          WaterMaterial;                                              // 0x07F8   (0x0008)  
	class UMaterialInterface*                          UnderwaterPostProcessMaterial;                              // 0x0800   (0x0008)  
	bool                                               bAffectsLandscape;                                          // 0x0808   (0x0001)  
	bool                                               bGenerateCollisions;                                        // 0x0809   (0x0001)  
	bool                                               bOverrideWaterMesh;                                         // 0x080A   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x080B   (0x0005)  MISSED
	class UStaticMesh*                                 WaterMeshOverride;                                          // 0x0810   (0x0008)  
	int32_t                                            OverlapMaterialPriority;                                    // 0x0818   (0x0004)  
	FName                                              CollisionProfileName;                                       // 0x081C   (0x0008)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0824   (0x0004)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x0828   (0x0008)  
	class UWaterSplineMetadata*                        WaterSplineMetadata;                                        // 0x0830   (0x0008)  
	class UMaterialInstanceDynamic*                    WaterMID;                                                   // 0x0838   (0x0008)  
	class UMaterialInstanceDynamic*                    UnderwaterPostProcessMID;                                   // 0x0840   (0x0008)  
	SDK_UNDEFINED(16,913) /* TArray<TLazyObjectPtr<AWaterBodyIsland*>> */ __um(Islands);                           // 0x0848   (0x0010)  
	SDK_UNDEFINED(16,914) /* TArray<TLazyObjectPtr<AWaterBodyExclusionVolume*>> */ __um(ExclusionVolumes);         // 0x0858   (0x0010)  
	TWeakObjectPtr<class ALandscapeProxy*>             Landscape;                                                  // 0x0868   (0x0008)  
	FPostProcessSettings                               CurrentPostProcessSettings;                                 // 0x0870   (0x0560)  
	bool                                               bCanAffectNavigation;                                       // 0x0DD0   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0DD1   (0x0007)  MISSED
	class UClass*                                      WaterNavAreaClass;                                          // 0x0DD8   (0x0008)  
	class UWaterWavesBase*                             WaterWaves;                                                 // 0x0DE0   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBody.SetWaterWaves
	// void SetWaterWaves(class UWaterWavesBase* InWaterWaves);                                                                 // [0x1b093e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.OnWaterBodyChanged
	// void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);                                   // [0x1b09090] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0x1b08da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetWaterMaterialInstance
	// class UMaterialInstanceDynamic* GetWaterMaterialInstance();                                                              // [0x1b08d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetWaterMaterial
	// class UMaterialInterface* GetWaterMaterial();                                                                            // [0x1b08d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetUnderwaterPostProcessMaterialInstance
	// class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();                                              // [0x1b08d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToOceanTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();                                             // [0x1b08c30] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetRiverToLakeTransitionMaterialInstance
	// class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();                                              // [0x1b08c00] Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterBody.GetMaxWaveHeight
	// float GetMaxWaveHeight();                                                                                                // [0x1b08b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetIslands
	// TArray<AWaterBodyIsland*> GetIslands();                                                                                  // [0x1b08840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterBody.GetExclusionVolumes
	// TArray<AWaterBodyExclusionVolume*> GetExclusionVolumes();                                                                // [0x1b087a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterBodyGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWaterBodyGenerator : public UObject
{ 
public:
};

/// Class /Script/Water.CustomMeshGenerator
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCustomMeshGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        MeshComp;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterBodyCustom
/// Size: 0x0DF0 (3568 bytes) (0x000DE8 - 0x000DF0) align 16 MaxSize: 0x0DF0
class AWaterBodyCustom : public AWaterBody
{ 
public:
	class UCustomMeshGenerator*                        CustomGenerator;                                            // 0x0DE8   (0x0008)  
};

/// Class /Script/Water.WaterBodyExclusionVolume
/// Size: 0x0280 (640 bytes) (0x000268 - 0x000280) align 8 MaxSize: 0x0280
class AWaterBodyExclusionVolume : public APhysicsVolume
{ 
public:
	bool                                               bIgnoreAllOverlappingWaterBodies;                           // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0269   (0x0007)  MISSED
	TArray<class AWaterBody*>                          WaterBodiesToIgnore;                                        // 0x0270   (0x0010)  
};

/// Class /Script/Water.WaterBodyIsland
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class AWaterBodyIsland : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	class UWaterSplineComponent*                       SplineComp;                                                 // 0x0228   (0x0008)  


	/// Functions
	// Function /Script/Water.WaterBodyIsland.GetWaterSpline
	// class UWaterSplineComponent* GetWaterSpline();                                                                           // [0x1b08dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.LakeGenerator
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULakeGenerator : public UWaterBodyGenerator
{ 
public:
	class UStaticMeshComponent*                        LakeMeshComp;                                               // 0x0028   (0x0008)  
	class UBoxComponent*                               LakeCollisionComp;                                          // 0x0030   (0x0008)  
	class ULakeCollisionComponent*                     LakeCollision;                                              // 0x0038   (0x0008)  
};

/// Class /Script/Water.WaterBodyLake
/// Size: 0x0DF0 (3568 bytes) (0x000DE8 - 0x000DF0) align 16 MaxSize: 0x0DF0
class AWaterBodyLake : public AWaterBody
{ 
public:
	class ULakeGenerator*                              LakeGenerator;                                              // 0x0DE8   (0x0008)  
};

/// Class /Script/Water.OceanGenerator
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UOceanGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class UOceanBoxCollisionComponent*>         CollisionBoxes;                                             // 0x0028   (0x0010)  
	TArray<class UOceanCollisionComponent*>            CollisionHullSets;                                          // 0x0038   (0x0010)  
};

/// Class /Script/Water.WaterBodyOcean
/// Size: 0x0E00 (3584 bytes) (0x000DE8 - 0x000E00) align 16 MaxSize: 0x0E00
class AWaterBodyOcean : public AWaterBody
{ 
public:
	class UOceanGenerator*                             OceanGenerator;                                             // 0x0DE8   (0x0008)  
	FVector                                            CollisionExtents;                                           // 0x0DF0   (0x000C)  
	float                                              HeightOffset;                                               // 0x0DFC   (0x0004)  
};

/// Class /Script/Water.RiverGenerator
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URiverGenerator : public UWaterBodyGenerator
{ 
public:
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                       // 0x0028   (0x0010)  
};

/// Class /Script/Water.WaterBodyRiver
/// Size: 0x0E10 (3600 bytes) (0x000DE8 - 0x000E10) align 16 MaxSize: 0x0E10
class AWaterBodyRiver : public AWaterBody
{ 
public:
	class URiverGenerator*                             RiverGenerator;                                             // 0x0DE8   (0x0008)  
	class UMaterialInterface*                          LakeTransitionMaterial;                                     // 0x0DF0   (0x0008)  
	class UMaterialInstanceDynamic*                    LakeTransitionMID;                                          // 0x0DF8   (0x0008)  
	class UMaterialInterface*                          OceanTransitionMaterial;                                    // 0x0E00   (0x0008)  
	class UMaterialInstanceDynamic*                    OceanTransitionMID;                                         // 0x0E08   (0x0008)  
};

/// Class /Script/Water.WaterBrushActorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWaterBrushActorInterface : public UInterface
{ 
public:
};

/// Class /Script/Water.WaterMeshActor
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 8 MaxSize: 0x0230
class AWaterMeshActor : public AActor
{ 
public:
	class UTexture2D*                                  WaterVelocityTexture;                                       // 0x0220   (0x0008)  
	class UWaterMeshComponent*                         WaterMesh;                                                  // 0x0228   (0x0008)  
};

/// Class /Script/Water.WaterMeshComponent
/// Size: 0x05A0 (1440 bytes) (0x000478 - 0x0005A0) align 16 MaxSize: 0x05A0
class UWaterMeshComponent : public UMeshComponent
{ 
public:
	int32_t                                            ForceCollapseDensityLevel;                                  // 0x0478   (0x0004)  
	float                                              TileSize;                                                   // 0x047C   (0x0004)  
	FIntPoint                                          ExtentInTiles;                                              // 0x0480   (0x0008)  
	class UMaterialInterface*                          FarDistanceMaterial;                                        // 0x0488   (0x0008)  
	float                                              FarDistanceMeshExtent;                                      // 0x0490   (0x0004)  
	FVector                                            RTWorldLocation;                                            // 0x0494   (0x000C)  
	FVector                                            RTWorldSizeVector;                                          // 0x04A0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x64];                                      // 0x04AC   (0x0064)  MISSED
	SDK_UNDEFINED(80,915) /* TSet<UMaterialInterface*> */ __um(UsedMaterials);                                     // 0x0510   (0x0050)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0560   (0x0030)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0590   (0x0004)  
	float                                              LODScale;                                                   // 0x0594   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0598   (0x0008)  MISSED


	/// Functions
	// Function /Script/Water.WaterMeshComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x1b08e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterRuntimeSettings
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UWaterRuntimeSettings : public UDeveloperSettings
{ 
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannelForWaterTraces;                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<class UMaterialParameterCollection*> MaterialParameterCollection;                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0048   (0x0020)  MISSED
	float                                              WaterBodyIconWorldSize;                                     // 0x0068   (0x0004)  
	float                                              WaterBodyIconWorldZOffset;                                  // 0x006C   (0x0004)  
	FName                                              DefaultWaterCollisionProfileName;                           // 0x0070   (0x0008)  
};

/// Struct /Script/Water.WaterSplineCurveDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FWaterSplineCurveDefaults
{ 
	float                                              DefaultDepth;                                               // 0x0000   (0x0004)  
	float                                              DefaultWidth;                                               // 0x0004   (0x0004)  
	float                                              DefaultVelocity;                                            // 0x0008   (0x0004)  
	float                                              DefaultAudioIntensity;                                      // 0x000C   (0x0004)  
};

/// Class /Script/Water.WaterSplineComponent
/// Size: 0x0570 (1392 bytes) (0x000548 - 0x000570) align 16 MaxSize: 0x0570
class UWaterSplineComponent : public USplineComponent
{ 
public:
	FWaterSplineCurveDefaults                          WaterSplineDefaults;                                        // 0x0548   (0x0010)  
	FWaterSplineCurveDefaults                          PreviousWaterSplineDefaults;                                // 0x0558   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0568   (0x0008)  MISSED
};

/// Class /Script/Water.WaterSplineMetadata
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UWaterSplineMetadata : public USplineMetadata
{ 
public:
	FInterpCurveFloat                                  Depth;                                                      // 0x0028   (0x0018)  
	FInterpCurveFloat                                  WaterVelocityScalar;                                        // 0x0040   (0x0018)  
	FInterpCurveFloat                                  RiverWidth;                                                 // 0x0058   (0x0018)  
	FInterpCurveFloat                                  AudioIntensity;                                             // 0x0070   (0x0018)  
	FInterpCurveVector                                 WaterVelocity;                                              // 0x0088   (0x0018)  
};

/// Class /Script/Water.WaterSubsystem
/// Size: 0x0108 (264 bytes) (0x000040 - 0x000108) align 8 MaxSize: 0x0108
class UWaterSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0040   (0x0038)  MISSED
	class ABuoyancyManager*                            BuoyancyManager;                                            // 0x0078   (0x0008)  
	SDK_UNDEFINED(16,916) /* FMulticastInlineDelegate */ __um(OnCameraUnderwaterStateChanged);                     // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,917) /* FMulticastInlineDelegate */ __um(OnWaterScalabilityChanged);                          // 0x0090   (0x0010)  
	class UStaticMesh*                                 DefaultRiverMesh;                                           // 0x00A0   (0x0008)  
	class UStaticMesh*                                 DefaultLakeMesh;                                            // 0x00A8   (0x0008)  
	class AWaterMeshActor*                             WaterMeshActor;                                             // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00B8   (0x0028)  MISSED
	class UMaterialParameterCollection*                MaterialParameterCollection;                                // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/Water.WaterSubsystem.SetOceanFloodHeight
	// void SetOceanFloodHeight(float InFloodHeight);                                                                           // [0x1b09240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.PrintToWaterLog
	// void PrintToWaterLog(FString Message, bool bWarning);                                                                    // [0x1b09160] Final|Native|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.IsWaterRenderingEnabled
	// bool IsWaterRenderingEnabled();                                                                                          // [0x1b08ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsUnderwaterPostProcessEnabled
	// bool IsUnderwaterPostProcessEnabled();                                                                                   // [0x1b08e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.IsShallowWaterSimulationEnabled
	// bool IsShallowWaterSimulationEnabled();                                                                                  // [0x1b08e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetWaterTimeSeconds
	// float GetWaterTimeSeconds();                                                                                             // [0x1b08de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetSmoothedWorldTimeSeconds
	// float GetSmoothedWorldTimeSeconds();                                                                                     // [0x1b08cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterSimulationRenderTargetSize
	// int32_t GetShallowWaterSimulationRenderTargetSize();                                                                     // [0x1b08cc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxImpulseForces
	// int32_t GetShallowWaterMaxImpulseForces();                                                                               // [0x1b08c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetShallowWaterMaxDynamicForces
	// int32_t GetShallowWaterMaxDynamicForces();                                                                               // [0x1b08c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Water.WaterSubsystem.GetOceanTotalHeight
	// float GetOceanTotalHeight();                                                                                             // [0x1b08bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanFloodHeight
	// float GetOceanFloodHeight();                                                                                             // [0x1b08b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetOceanBaseHeight
	// float GetOceanBaseHeight();                                                                                              // [0x1b08b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Water.WaterSubsystem.GetCameraUnderwaterDepth
	// float GetCameraUnderwaterDepth();                                                                                        // [0x1b08780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Water.WaterWavesAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UWaterWavesAsset : public UObject
{ 
public:
	class UWaterWaves*                                 WaterWaves;                                                 // 0x0028   (0x0008)  
};

/// Class /Script/Water.WaterWavesAssetReference
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UWaterWavesAssetReference : public UWaterWavesBase
{ 
public:
	class UWaterWavesAsset*                            WaterWavesAsset;                                            // 0x0028   (0x0008)  
};

/// Struct /Script/Water.WaterFalloffSettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FWaterFalloffSettings
{ 
	EWaterBrushFalloffMode                             FalloffMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FalloffAngle;                                               // 0x0004   (0x0004)  
	float                                              FalloffWidth;                                               // 0x0008   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x000C   (0x0004)  
	float                                              ZOffset;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectBlurring
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FWaterBrushEffectBlurring
{ 
	bool                                               bBlurShape;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Radius;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurlNoise
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FWaterBrushEffectCurlNoise
{ 
	float                                              Curl1Amount;                                                // 0x0000   (0x0004)  
	float                                              Curl2Amount;                                                // 0x0004   (0x0004)  
	float                                              Curl1Tiling;                                                // 0x0008   (0x0004)  
	float                                              Curl2Tiling;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectDisplacement
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FWaterBrushEffectDisplacement
{ 
	float                                              DisplacementHeight;                                         // 0x0000   (0x0004)  
	float                                              DisplacementTiling;                                         // 0x0004   (0x0004)  
	class UTexture2D*                                  Texture;                                                    // 0x0008   (0x0008)  
	float                                              Midpoint;                                                   // 0x0010   (0x0004)  
	FLinearColor                                       Channel;                                                    // 0x0014   (0x0010)  
	float                                              WeightmapInfluence;                                         // 0x0024   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectSmoothBlending
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FWaterBrushEffectSmoothBlending
{ 
	float                                              InnerSmoothDistance;                                        // 0x0000   (0x0004)  
	float                                              OuterSmoothDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectTerracing
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FWaterBrushEffectTerracing
{ 
	float                                              TerraceAlpha;                                               // 0x0000   (0x0004)  
	float                                              TerraceSpacing;                                             // 0x0004   (0x0004)  
	float                                              TerraceSmoothness;                                          // 0x0008   (0x0004)  
	float                                              MaskLength;                                                 // 0x000C   (0x0004)  
	float                                              MaskStartOffset;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffects
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FWaterBrushEffects
{ 
	FWaterBrushEffectBlurring                          Blurring;                                                   // 0x0000   (0x0008)  
	FWaterBrushEffectCurlNoise                         CurlNoise;                                                  // 0x0008   (0x0010)  
	FWaterBrushEffectDisplacement                      Displacement;                                               // 0x0018   (0x0028)  
	FWaterBrushEffectSmoothBlending                    SmoothBlending;                                             // 0x0040   (0x0008)  
	FWaterBrushEffectTerracing                         Terracing;                                                  // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyHeightmapSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FWaterBodyHeightmapSettings
{ 
	EWaterBrushBlendType                               BlendMode;                                                  // 0x0000   (0x0001)  
	bool                                               bInvertShape;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FWaterFalloffSettings                              FalloffSettings;                                            // 0x0004   (0x0014)  
	FWaterBrushEffects                                 Effects;                                                    // 0x0018   (0x0060)  
	int32_t                                            Priority;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/Water.WaterBodyWeightmapSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterBodyWeightmapSettings
{ 
	float                                              FalloffWidth;                                               // 0x0000   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x0004   (0x0004)  
	class UTexture2D*                                  ModulationTexture;                                          // 0x0008   (0x0008)  
	float                                              TextureTiling;                                              // 0x0010   (0x0004)  
	float                                              TextureInfluence;                                           // 0x0014   (0x0004)  
	float                                              Midpoint;                                                   // 0x0018   (0x0004)  
	float                                              FinalOpacity;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Water.WaterBrushEffectCurves
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWaterBrushEffectCurves
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSphericalPontoon) == 0x0220); // 544 bytes (0x000000 - 0x000220)
static_assert(sizeof(FBuoyancyData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UBuoyancyComponent) == 0x01D8); // 472 bytes (0x0000B0 - 0x0001D8)
static_assert(sizeof(ABuoyancyManager) == 0x02D8); // 728 bytes (0x000220 - 0x0002D8)
static_assert(sizeof(UConvertWaterBodyActorsCommandlet) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UEnvQueryTest_InsideWaterBody) == 0x0200); // 512 bytes (0x0001F8 - 0x000200)
static_assert(sizeof(UGerstnerWaterWaveGeneratorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGerstnerWaterWaveGeneratorSimple) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FGerstnerWaveOctave) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UGerstnerWaterWaveGeneratorSpectrum) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UWaterWavesBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWaterWaves) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGerstnerWave) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UGerstnerWaterWaves) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGerstnerWaterWaveSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(ULakeCollisionComponent) == 0x0470); // 1136 bytes (0x000450 - 0x000470)
static_assert(sizeof(UNiagaraDataInterfaceWater) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraWaterFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOceanCollisionComponent) == 0x0480); // 1152 bytes (0x000450 - 0x000480)
static_assert(sizeof(UOceanBoxCollisionComponent) == 0x0480); // 1152 bytes (0x000480 - 0x000480)
static_assert(sizeof(FUnderwaterPostProcessSettings) == 0x0580); // 1408 bytes (0x000000 - 0x000580)
static_assert(sizeof(FWaterCurveSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(AWaterBody) == 0x0DE8); // 3560 bytes (0x000220 - 0x000DE8)
static_assert(sizeof(UWaterBodyGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCustomMeshGenerator) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(AWaterBodyCustom) == 0x0DF0); // 3568 bytes (0x000DE8 - 0x000DF0)
static_assert(sizeof(AWaterBodyExclusionVolume) == 0x0280); // 640 bytes (0x000268 - 0x000280)
static_assert(sizeof(AWaterBodyIsland) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(ULakeGenerator) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(AWaterBodyLake) == 0x0DF0); // 3568 bytes (0x000DE8 - 0x000DF0)
static_assert(sizeof(UOceanGenerator) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(AWaterBodyOcean) == 0x0E00); // 3584 bytes (0x000DE8 - 0x000E00)
static_assert(sizeof(URiverGenerator) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(AWaterBodyRiver) == 0x0E10); // 3600 bytes (0x000DE8 - 0x000E10)
static_assert(sizeof(UWaterBrushActorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AWaterMeshActor) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UWaterMeshComponent) == 0x05A0); // 1440 bytes (0x000478 - 0x0005A0)
static_assert(sizeof(UWaterRuntimeSettings) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(FWaterSplineCurveDefaults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UWaterSplineComponent) == 0x0570); // 1392 bytes (0x000548 - 0x000570)
static_assert(sizeof(UWaterSplineMetadata) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UWaterSubsystem) == 0x0108); // 264 bytes (0x000040 - 0x000108)
static_assert(sizeof(UWaterWavesAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UWaterWavesAssetReference) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FWaterFalloffSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWaterBrushEffectBlurring) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWaterBrushEffectCurlNoise) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FWaterBrushEffectDisplacement) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FWaterBrushEffectSmoothBlending) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FWaterBrushEffectTerracing) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FWaterBrushEffects) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FWaterBodyHeightmapSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FWaterBodyWeightmapSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FWaterBrushEffectCurves) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FSphericalPontoon, CenterSocket) == 0x0000);
static_assert(offsetof(FSphericalPontoon, RelativeLocation) == 0x0008);
static_assert(offsetof(FSphericalPontoon, LocalForce) == 0x0018);
static_assert(offsetof(FSphericalPontoon, CenterLocation) == 0x0024);
static_assert(offsetof(FSphericalPontoon, SocketRotation) == 0x0030);
static_assert(offsetof(FSphericalPontoon, Offset) == 0x0040);
static_assert(offsetof(FSphericalPontoon, WaterPlaneLocation) == 0x005C);
static_assert(offsetof(FSphericalPontoon, WaterPlaneNormal) == 0x0068);
static_assert(offsetof(FSphericalPontoon, WaterSurfacePosition) == 0x0074);
static_assert(offsetof(FSphericalPontoon, WaterVelocity) == 0x0080);
static_assert(offsetof(FSphericalPontoon, CurrentWaterBody) == 0x0208);
static_assert(offsetof(FBuoyancyData, Pontoons) == 0x0000);
static_assert(offsetof(UBuoyancyComponent, Pontoons) == 0x00B0);
static_assert(offsetof(UBuoyancyComponent, BuoyancyData) == 0x00E0);
static_assert(offsetof(UBuoyancyComponent, CurrentWaterBodies) == 0x0130);
static_assert(offsetof(UBuoyancyComponent, SimulatingComponent) == 0x0140);
static_assert(offsetof(ABuoyancyManager, BuoyancyComponents) == 0x0270);
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, SpectrumType) == 0x0028);
static_assert(offsetof(UGerstnerWaterWaveGeneratorSpectrum, Octaves) == 0x0030);
static_assert(offsetof(FGerstnerWave, Direction) == 0x000C);
static_assert(offsetof(FGerstnerWave, WaveVector) == 0x0018);
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaveGenerator) == 0x0028);
static_assert(offsetof(UGerstnerWaterWaves, GerstnerWaves) == 0x0030);
static_assert(offsetof(ULakeCollisionComponent, CachedBodySetup) == 0x0450);
static_assert(offsetof(ULakeCollisionComponent, BoxExtent) == 0x0458);
static_assert(offsetof(UNiagaraDataInterfaceWater, SourceBody) == 0x0038);
static_assert(offsetof(UOceanCollisionComponent, CachedBodySetup) == 0x0450);
static_assert(offsetof(FUnderwaterPostProcessSettings, PostProcessSettings) == 0x0010);
static_assert(offsetof(FUnderwaterPostProcessSettings, UnderwaterPostProcessMaterial) == 0x0570);
static_assert(offsetof(FWaterCurveSettings, ElevationCurveAsset) == 0x0008);
static_assert(offsetof(AWaterBody, PhysicalMaterial) == 0x0230);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessSettings) == 0x0250);
static_assert(offsetof(AWaterBody, WaterBodyType) == 0x07D0);
static_assert(offsetof(AWaterBody, CurveSettings) == 0x07D8);
static_assert(offsetof(AWaterBody, WaterMaterial) == 0x07F8);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessMaterial) == 0x0800);
static_assert(offsetof(AWaterBody, WaterMeshOverride) == 0x0810);
static_assert(offsetof(AWaterBody, CollisionProfileName) == 0x081C);
static_assert(offsetof(AWaterBody, SplineComp) == 0x0828);
static_assert(offsetof(AWaterBody, WaterSplineMetadata) == 0x0830);
static_assert(offsetof(AWaterBody, WaterMID) == 0x0838);
static_assert(offsetof(AWaterBody, UnderwaterPostProcessMID) == 0x0840);
static_assert(offsetof(AWaterBody, Landscape) == 0x0868);
static_assert(offsetof(AWaterBody, CurrentPostProcessSettings) == 0x0870);
static_assert(offsetof(AWaterBody, WaterNavAreaClass) == 0x0DD8);
static_assert(offsetof(AWaterBody, WaterWaves) == 0x0DE0);
static_assert(offsetof(UCustomMeshGenerator, MeshComp) == 0x0028);
static_assert(offsetof(AWaterBodyCustom, CustomGenerator) == 0x0DE8);
static_assert(offsetof(AWaterBodyExclusionVolume, WaterBodiesToIgnore) == 0x0270);
static_assert(offsetof(AWaterBodyIsland, SplineComp) == 0x0228);
static_assert(offsetof(ULakeGenerator, LakeMeshComp) == 0x0028);
static_assert(offsetof(ULakeGenerator, LakeCollisionComp) == 0x0030);
static_assert(offsetof(ULakeGenerator, LakeCollision) == 0x0038);
static_assert(offsetof(AWaterBodyLake, LakeGenerator) == 0x0DE8);
static_assert(offsetof(UOceanGenerator, CollisionBoxes) == 0x0028);
static_assert(offsetof(UOceanGenerator, CollisionHullSets) == 0x0038);
static_assert(offsetof(AWaterBodyOcean, OceanGenerator) == 0x0DE8);
static_assert(offsetof(AWaterBodyOcean, CollisionExtents) == 0x0DF0);
static_assert(offsetof(URiverGenerator, SplineMeshComponents) == 0x0028);
static_assert(offsetof(AWaterBodyRiver, RiverGenerator) == 0x0DE8);
static_assert(offsetof(AWaterBodyRiver, LakeTransitionMaterial) == 0x0DF0);
static_assert(offsetof(AWaterBodyRiver, LakeTransitionMID) == 0x0DF8);
static_assert(offsetof(AWaterBodyRiver, OceanTransitionMaterial) == 0x0E00);
static_assert(offsetof(AWaterBodyRiver, OceanTransitionMID) == 0x0E08);
static_assert(offsetof(AWaterMeshActor, WaterVelocityTexture) == 0x0220);
static_assert(offsetof(AWaterMeshActor, WaterMesh) == 0x0228);
static_assert(offsetof(UWaterMeshComponent, ExtentInTiles) == 0x0480);
static_assert(offsetof(UWaterMeshComponent, FarDistanceMaterial) == 0x0488);
static_assert(offsetof(UWaterMeshComponent, RTWorldLocation) == 0x0494);
static_assert(offsetof(UWaterMeshComponent, RTWorldSizeVector) == 0x04A0);
static_assert(offsetof(UWaterRuntimeSettings, CollisionChannelForWaterTraces) == 0x0038);
static_assert(offsetof(UWaterRuntimeSettings, MaterialParameterCollection) == 0x0040);
static_assert(offsetof(UWaterRuntimeSettings, DefaultWaterCollisionProfileName) == 0x0070);
static_assert(offsetof(UWaterSplineComponent, WaterSplineDefaults) == 0x0548);
static_assert(offsetof(UWaterSplineComponent, PreviousWaterSplineDefaults) == 0x0558);
static_assert(offsetof(UWaterSplineMetadata, Depth) == 0x0028);
static_assert(offsetof(UWaterSplineMetadata, WaterVelocityScalar) == 0x0040);
static_assert(offsetof(UWaterSplineMetadata, RiverWidth) == 0x0058);
static_assert(offsetof(UWaterSplineMetadata, AudioIntensity) == 0x0070);
static_assert(offsetof(UWaterSplineMetadata, WaterVelocity) == 0x0088);
static_assert(offsetof(UWaterSubsystem, BuoyancyManager) == 0x0078);
static_assert(offsetof(UWaterSubsystem, DefaultRiverMesh) == 0x00A0);
static_assert(offsetof(UWaterSubsystem, DefaultLakeMesh) == 0x00A8);
static_assert(offsetof(UWaterSubsystem, WaterMeshActor) == 0x00B0);
static_assert(offsetof(UWaterSubsystem, MaterialParameterCollection) == 0x00E0);
static_assert(offsetof(UWaterWavesAsset, WaterWaves) == 0x0028);
static_assert(offsetof(UWaterWavesAssetReference, WaterWavesAsset) == 0x0028);
static_assert(offsetof(FWaterFalloffSettings, FalloffMode) == 0x0000);
static_assert(offsetof(FWaterBrushEffectDisplacement, Texture) == 0x0008);
static_assert(offsetof(FWaterBrushEffectDisplacement, Channel) == 0x0014);
static_assert(offsetof(FWaterBrushEffects, Blurring) == 0x0000);
static_assert(offsetof(FWaterBrushEffects, CurlNoise) == 0x0008);
static_assert(offsetof(FWaterBrushEffects, Displacement) == 0x0018);
static_assert(offsetof(FWaterBrushEffects, SmoothBlending) == 0x0040);
static_assert(offsetof(FWaterBrushEffects, Terracing) == 0x0048);
static_assert(offsetof(FWaterBodyHeightmapSettings, BlendMode) == 0x0000);
static_assert(offsetof(FWaterBodyHeightmapSettings, FalloffSettings) == 0x0004);
static_assert(offsetof(FWaterBodyHeightmapSettings, Effects) == 0x0018);
static_assert(offsetof(FWaterBodyWeightmapSettings, ModulationTexture) == 0x0008);
static_assert(offsetof(FWaterBrushEffectCurves, ElevationCurveAsset) == 0x0008);
