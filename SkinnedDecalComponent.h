
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

/// Enum /Script/SkinnedDecalComponent.ESkinnedDecalAdditionalData
/// Size: 0x01 (1 bytes)
enum class ESkinnedDecalAdditionalData : uint8_t
{
	NoAdditionalData                                                                 = 0,
	SpawnTime                                                                        = 1,
	DecalBoneID                                                                      = 2
};

/// Class /Script/SkinnedDecalComponent.SkinnedDecalInstance
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 16 MaxSize: 0x0210
class USkinnedDecalInstance : public USceneComponent
{ 
public:
	int32_t                                            Index;                                                      // 0x01F8   (0x0004)  
	int32_t                                            SubUV;                                                      // 0x01FC   (0x0004)  
	float                                              Size;                                                       // 0x0200   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0204   (0x000C)  MISSED


	/// Functions
	// Function /Script/SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
	// void UpdateDecal();                                                                                                      // [0x1a5fc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
	// class USkinnedDecalSampler* GetSampler();                                                                                // [0x1a5f7e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SkinnedDecalComponent.SkinnedDecalSampler
/// Size: 0x0178 (376 bytes) (0x0000B0 - 0x000178) align 8 MaxSize: 0x0178
class USkinnedDecalSampler : public UActorComponent
{ 
public:
	class USkeletalMeshComponent*                      Mesh;                                                       // 0x00B0   (0x0008)  
	TArray<FVector>                                    DecalLocations;                                             // 0x00B8   (0x0010)  
	TArray<int32_t>                                    EmptyIndexes;                                               // 0x00C8   (0x0010)  
	int32_t                                            LayerIndex;                                                 // 0x00D8   (0x0004)  
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                                // 0x00DC   (0x0001)  
	TEnumAsByte<ESkinnedDecalAdditionalData>           AdditionalData;                                             // 0x00DD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00DE   (0x0002)  MISSED
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x00E0   (0x0010)  
	int32_t                                            LastDecalIndex;                                             // 0x00F0   (0x0004)  
	int32_t                                            MaxDecals;                                                  // 0x00F4   (0x0004)  
	float                                              MinDecalDistance;                                           // 0x00F8   (0x0004)  
	bool                                               TranslucentBlend;                                           // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	class UMaterialInterface*                          TranslucentBlendMaterial;                                   // 0x0100   (0x0008)  
	TMap<class USkinnedDecalInstance*, int32_t>        InstanceMap;                                                // 0x0108   (0x0050)  
	class UMaterialInstanceDynamic*                    TranslucentBlendMaterialDynamic;                            // 0x0158   (0x0008)  
	TArray<class USkeletalMeshComponent*>              RenderMeshes;                                               // 0x0160   (0x0010)  
	class UTextureRenderTarget2D*                      DataTarget;                                                 // 0x0170   (0x0008)  


	/// Functions
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
	// void UpdateInstance(class USkinnedDecalInstance* Instance);                                                              // [0x1a5fc50] Final|Native|Public  
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
	// void UpdateAllDecals();                                                                                                  // [0x1a5fc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
	// int32_t SpawnDecal(FVector Location, FQuat Rotation, FName BoneName, float Size, int32_t SubUV, int32_t Index);          // [0x1a5fa20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
	// void SetupMaterials();                                                                                                   // [0x1a5fa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.SetupComponentMaterials
	// void SetupComponentMaterials(class USkeletalMeshComponent* Component);                                                   // [0x1a5f970] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
	// void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);                                          // [0x1a5f8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
	// void RemoveDecal(int32_t Index);                                                                                         // [0x1a5f810] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
	// class UTextureRenderTarget2D* GetDataTarget();                                                                           // [0x1a5f7b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
	// void CloneDecals(class USkinnedDecalSampler* Source);                                                                    // [0x1a5f720] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
	// void ClearAllDecals();                                                                                                   // [0x1a5f700] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkinnedDecalComponent.SkinnedDecalSampler.AutoSetup
	// void AutoSetup();                                                                                                        // [0x1a5f6e0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(USkinnedDecalInstance) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(USkinnedDecalSampler) == 0x0178); // 376 bytes (0x0000B0 - 0x000178)
static_assert(offsetof(USkinnedDecalSampler, Mesh) == 0x00B0);
static_assert(offsetof(USkinnedDecalSampler, DecalLocations) == 0x00B8);
static_assert(offsetof(USkinnedDecalSampler, EmptyIndexes) == 0x00C8);
static_assert(offsetof(USkinnedDecalSampler, Association) == 0x00DC);
static_assert(offsetof(USkinnedDecalSampler, AdditionalData) == 0x00DD);
static_assert(offsetof(USkinnedDecalSampler, Materials) == 0x00E0);
static_assert(offsetof(USkinnedDecalSampler, TranslucentBlendMaterial) == 0x0100);
static_assert(offsetof(USkinnedDecalSampler, InstanceMap) == 0x0108);
static_assert(offsetof(USkinnedDecalSampler, TranslucentBlendMaterialDynamic) == 0x0158);
static_assert(offsetof(USkinnedDecalSampler, RenderMeshes) == 0x0160);
static_assert(offsetof(USkinnedDecalSampler, DataTarget) == 0x0170);
