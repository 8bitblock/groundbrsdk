
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

/// Class /Script/PortalSystem.BoxRenderableComponent
/// Size: 0x0460 (1120 bytes) (0x000450 - 0x000460) align 16 MaxSize: 0x0460
class UBoxRenderableComponent : public UPrimitiveComponent
{ 
public:
	FColor                                             ShapeColor;                                                 // 0x0450   (0x0004)  
	bool                                               Visible;                                                    // 0x0454   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0455   (0x000B)  MISSED
};

/// Class /Script/PortalSystem.EmptyRenderableComponent
/// Size: 0x0450 (1104 bytes) (0x000450 - 0x000450) align 16 MaxSize: 0x0450
class UEmptyRenderableComponent : public UPrimitiveComponent
{ 
public:
};

/// Struct /Script/PortalSystem.PortalZonesGridCell
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPortalZonesGridCell
{ 
	TArray<class APortalSystemZone*>                   Zones;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/PortalSystem.PortalZonesGrid
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPortalZonesGrid
{ 
	int32_t                                            HalfWidth;                                                  // 0x0000   (0x0004)  
	int32_t                                            HalfLength;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FPortalZonesGridCell>                       Cells;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/PortalSystem.PortalSystemManager
/// Size: 0x0338 (824 bytes) (0x000220 - 0x000338) align 8 MaxSize: 0x0338
class APortalSystemManager : public AActor
{ 
public:
	bool                                               _occluderInitHasStarted;                                    // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FPortalZonesGrid                                   Grid;                                                       // 0x0228   (0x0020)  
	TArray<class APortalSystemPortal*>                 Portals;                                                    // 0x0248   (0x0010)  
	TArray<class APortalSystemPortal*>                 OutsidePortals;                                             // 0x0258   (0x0010)  
	TArray<class APortalSystemZone*>                   Zones;                                                      // 0x0268   (0x0010)  
	TMap<class ULightComponent*, class APortalSystemZone*> LightToZoneMap;                                         // 0x0278   (0x0050)  
	TArray<class UPortalSystemOccluderComponent*>      Occluders;                                                  // 0x02C8   (0x0010)  
	SDK_UNDEFINED(80,342) /* TSet<APortalSystemZone*> */ __um(LastRenderedZones);                                  // 0x02D8   (0x0050)  
	bool                                               ShowDebugLines;                                             // 0x0328   (0x0001)  
	bool                                               EnableOptimisation;                                         // 0x0329   (0x0001)  
	bool                                               EnableOptimisationInEditor;                                 // 0x032A   (0x0001)  
	bool                                               ManualRebuildOnly;                                          // 0x032B   (0x0001)  
	bool                                               UpdateForAllViewLocations;                                  // 0x032C   (0x0001)  
	bool                                               LogWarningsOnRebuild;                                       // 0x032D   (0x0001)  
	bool                                               LogVerboseWarnings;                                         // 0x032E   (0x0001)  
	bool                                               LogGlobalInfosOfInternalState;                              // 0x032F   (0x0001)  
	bool                                               LogVerboseInfosOfInternalState;                             // 0x0330   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0331   (0x0007)  MISSED


	/// Functions
	// Function /Script/PortalSystem.PortalSystemManager.RegisterOccluder
	// void RegisterOccluder(class UPortalSystemOccluderComponent* occluder);                                                   // [0x1a3b300] Final|Native|Public  
	// Function /Script/PortalSystem.PortalSystemManager.RebuildPortalSystemData
	// void RebuildPortalSystemData(bool fromBeginPlay);                                                                        // [0x1a3b270] Final|Native|Public|BlueprintCallable 
	// Function /Script/PortalSystem.PortalSystemManager.OnZonesVisibilityChanged
	// void OnZonesVisibilityChanged(TArray<APortalSystemZone*>& zonesNewlyEnabled, TArray<APortalSystemZone*>& zonesNewlyDisabled); // [0x1a3b150] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/PortalSystem.PortalSystemManager.NotifyLightMoved
	// void NotifyLightMoved(class ULightComponent* LightComponent);                                                            // [0x1a3b0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PortalSystem.PortalSystemManager.GetPortalSystemManagerInstance
	// class APortalSystemManager* GetPortalSystemManagerInstance(class UObject* WorldContextObject);                           // [0x1a3b010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PortalSystem.PortalSystemManager.ForceUpdatePortalSystem
	// void ForceUpdatePortalSystem();                                                                                          // [0x1a3aff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PortalSystem.PortalSystemManager.AddLightFromActor
	// void AddLightFromActor(class AActor* Actor);                                                                             // [0x1a3ac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/PortalSystem.PortalSystemManager.AddLight
	// void AddLight(class ULightComponent* LightComponent);                                                                    // [0x1a3abd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PortalSystem.PortalSystemOccluderComponent
/// Size: 0x0480 (1152 bytes) (0x000450 - 0x000480) align 16 MaxSize: 0x0480
class UPortalSystemOccluderComponent : public UPrimitiveComponent
{ 
public:
	FColor                                             ShapeColor;                                                 // 0x0450   (0x0004)  
	FBox                                               _box;                                                       // 0x0454   (0x001C)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0470   (0x0001)  MISSED
	bool                                               FollowThisOccluderForPortalDetection;                       // 0x0471   (0x0001)  
	bool                                               Visible;                                                    // 0x0472   (0x0001)  
	unsigned char                                      UnknownData01_7[0xD];                                       // 0x0473   (0x000D)  MISSED
};

/// Struct /Script/PortalSystem.BasicLine
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FBasicLine
{ 
	FVector                                            Start;                                                      // 0x0000   (0x000C)  
	FVector                                            End;                                                        // 0x000C   (0x000C)  
};

/// Class /Script/PortalSystem.PortalSystemPortal
/// Size: 0x0280 (640 bytes) (0x000220 - 0x000280) align 8 MaxSize: 0x0280
class APortalSystemPortal : public AActor
{ 
public:
	bool                                               IsOutsidePortal;                                            // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0221   (0x0003)  MISSED
	FBox                                               _localBox;                                                  // 0x0224   (0x001C)  
	float                                              _radiusBounds;                                              // 0x0240   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	TArray<FVector>                                    _points;                                                    // 0x0248   (0x0010)  
	TArray<FBasicLine>                                 _lines;                                                     // 0x0258   (0x0010)  
	bool                                               ManualZoneDetection;                                        // 0x0268   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0269   (0x0007)  MISSED
	TArray<class APortalSystemZone*>                   Zones;                                                      // 0x0270   (0x0010)  
};

/// Class /Script/PortalSystem.PortalSystemZone
/// Size: 0x0288 (648 bytes) (0x000220 - 0x000288) align 8 MaxSize: 0x0288
class APortalSystemZone : public AActor
{ 
public:
	FBox                                               _box;                                                       // 0x0220   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	TArray<FVector>                                    _points;                                                    // 0x0240   (0x0010)  
	TArray<FBasicLine>                                 _lines;                                                     // 0x0250   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0260   (0x0008)  MISSED
	TArray<class ULightComponent*>                     Lights;                                                     // 0x0268   (0x0010)  
	TArray<class APortalSystemPortal*>                 Portals;                                                    // 0x0278   (0x0010)  


	/// Functions
	// Function /Script/PortalSystem.PortalSystemZone.OnZoneVisibilityChange
	// void OnZoneVisibilityChange(bool newVisibility);                                                                         // [0x9c44c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/PortalSystem.PortalSystemZone.IsZoneVisible
	// bool IsZoneVisible();                                                                                                    // [0x1a3b0a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PortalSystem.PortalSystemZone.ContainPoint
	// bool ContainPoint(FVector& Point);                                                                                       // [0x1a3acf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UBoxRenderableComponent) == 0x0460); // 1120 bytes (0x000450 - 0x000460)
static_assert(sizeof(UEmptyRenderableComponent) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(FPortalZonesGridCell) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPortalZonesGrid) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(APortalSystemManager) == 0x0338); // 824 bytes (0x000220 - 0x000338)
static_assert(sizeof(UPortalSystemOccluderComponent) == 0x0480); // 1152 bytes (0x000450 - 0x000480)
static_assert(sizeof(FBasicLine) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(APortalSystemPortal) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(APortalSystemZone) == 0x0288); // 648 bytes (0x000220 - 0x000288)
static_assert(offsetof(UBoxRenderableComponent, ShapeColor) == 0x0450);
static_assert(offsetof(FPortalZonesGridCell, Zones) == 0x0000);
static_assert(offsetof(FPortalZonesGrid, Cells) == 0x0010);
static_assert(offsetof(APortalSystemManager, Grid) == 0x0228);
static_assert(offsetof(APortalSystemManager, Portals) == 0x0248);
static_assert(offsetof(APortalSystemManager, OutsidePortals) == 0x0258);
static_assert(offsetof(APortalSystemManager, Zones) == 0x0268);
static_assert(offsetof(APortalSystemManager, LightToZoneMap) == 0x0278);
static_assert(offsetof(APortalSystemManager, Occluders) == 0x02C8);
static_assert(offsetof(UPortalSystemOccluderComponent, ShapeColor) == 0x0450);
static_assert(offsetof(UPortalSystemOccluderComponent, _box) == 0x0454);
static_assert(offsetof(FBasicLine, Start) == 0x0000);
static_assert(offsetof(FBasicLine, End) == 0x000C);
static_assert(offsetof(APortalSystemPortal, _localBox) == 0x0224);
static_assert(offsetof(APortalSystemPortal, _points) == 0x0248);
static_assert(offsetof(APortalSystemPortal, _lines) == 0x0258);
static_assert(offsetof(APortalSystemPortal, Zones) == 0x0270);
static_assert(offsetof(APortalSystemZone, _box) == 0x0220);
static_assert(offsetof(APortalSystemZone, _points) == 0x0240);
static_assert(offsetof(APortalSystemZone, _lines) == 0x0250);
static_assert(offsetof(APortalSystemZone, Lights) == 0x0268);
static_assert(offsetof(APortalSystemZone, Portals) == 0x0278);
