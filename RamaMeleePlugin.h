
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

/// Class /Script/RamaMeleePlugin.RamaMeleeCore
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URamaMeleeCore : public UObject
{ 
public:
};

/// Struct /Script/RamaMeleePlugin.RamaMeleeDamageInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRamaMeleeDamageInfo
{ 
	int32_t                                            BodyIndex;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<int32_t>                                    ShapeIndicies;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/RamaMeleePlugin.RamaMeleeDamageMap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRamaMeleeDamageMap
{ 
	TArray<FRamaMeleeDamageInfo>                       Bodies;                                                     // 0x0000   (0x0010)  
};

/// Class /Script/RamaMeleePlugin.RamaMeleeWeapon
/// Size: 0x0F40 (3904 bytes) (0x000EC8 - 0x000F40) align 16 MaxSize: 0x0F40
class URamaMeleeWeapon : public USkeletalMeshComponent
{ 
public:
	SDK_UNDEFINED(16,884) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(MeleeTraceObjectTypes);                 // 0x0EC8   (0x0010)  
	SDK_UNDEFINED(16,885) /* FMulticastInlineDelegate */ __um(RamaMeleeWeapon_OnHit);                              // 0x0ED8   (0x0010)  
	bool                                               DrawShapes;                                                 // 0x0EE8   (0x0001)  
	bool                                               DrawSweeps;                                                 // 0x0EE9   (0x0001)  
	bool                                               DrawLines;                                                  // 0x0EEA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0EEB   (0x0001)  MISSED
	float                                              DrawShapes_Thickness;                                       // 0x0EEC   (0x0004)  
	float                                              DrawShapes_Duration;                                        // 0x0EF0   (0x0004)  
	bool                                               PerformDeepTrace;                                           // 0x0EF4   (0x0001)  
	bool                                               DeepTrace_SingleBodyMode;                                   // 0x0EF5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0EF6   (0x0002)  MISSED
	FRamaMeleeDamageMap                                DamageMap;                                                  // 0x0EF8   (0x0010)  
	bool                                               bUseMultiTrace;                                             // 0x0F08   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0F09   (0x0007)  MISSED
	SDK_UNDEFINED(16,886) /* TArray<TEnumAsByte<EPhysicalSurface>> */ __um(SurfaceTypesToIgnore);                  // 0x0F10   (0x0010)  
	bool                                               DoingSwingTraces;                                           // 0x0F20   (0x0001)  
	unsigned char                                      UnknownData03_7[0x1F];                                      // 0x0F21   (0x001F)  MISSED


	/// Functions
	// Function /Script/RamaMeleePlugin.RamaMeleeWeapon.UpdateSwingPoseBodies
	// void UpdateSwingPoseBodies();                                                                                            // [0x1a5b360] Final|Native|Public|BlueprintCallable 
	// Function /Script/RamaMeleePlugin.RamaMeleeWeapon.StopSwingDamage
	// void StopSwingDamage();                                                                                                  // [0x1a5b340] Final|Native|Public|BlueprintCallable 
	// Function /Script/RamaMeleePlugin.RamaMeleeWeapon.StartSwingDamage
	// void StartSwingDamage();                                                                                                 // [0x1a5b320] Final|Native|Public|BlueprintCallable 
	// Function /Script/RamaMeleePlugin.RamaMeleeWeapon.MeleeSweep
	// bool MeleeSweep(FHitResult& Hit, TArray<FTransform>& BodyPreviousPose);                                                  // [0x1a5b1d0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(URamaMeleeCore) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRamaMeleeDamageInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRamaMeleeDamageMap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(URamaMeleeWeapon) == 0x0F40); // 3904 bytes (0x000EC8 - 0x000F40)
static_assert(offsetof(FRamaMeleeDamageInfo, ShapeIndicies) == 0x0008);
static_assert(offsetof(FRamaMeleeDamageMap, Bodies) == 0x0000);
static_assert(offsetof(URamaMeleeWeapon, DamageMap) == 0x0EF8);
