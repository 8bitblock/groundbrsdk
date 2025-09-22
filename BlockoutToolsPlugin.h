
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

/// Enum /Script/BlockoutToolsPlugin.EBlockoutMaterialType
/// Size: 0x01 (1 bytes)
enum class EBlockoutMaterialType : uint8_t
{
	BlockoutMaterialType_Grid                                                        = 0,
	BlockoutMaterialType_CustomMaterial                                              = 1
};

/// Class /Script/BlockoutToolsPlugin.BlockoutToolsParent
/// Size: 0x02B8 (696 bytes) (0x000220 - 0x0002B8) align 8 MaxSize: 0x02B8
class ABlockoutToolsParent : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x0220   (0x0008)  
	class UBillboardComponent*                         Billboard;                                                  // 0x0228   (0x0008)  
	class UMaterialInterface*                          BlockoutGridParent;                                         // 0x0230   (0x0008)  
	class UMaterialInstanceDynamic*                    BlockoutGridMID;                                            // 0x0238   (0x0008)  
	class UMaterialInterface*                          BlockoutCurrentMaterial;                                    // 0x0240   (0x0008)  
	TArray<class UStaticMeshComponent*>                BlockoutMeshComponents;                                     // 0x0248   (0x0010)  
	TEnumAsByte<EBlockoutMaterialType>                 BlockoutMaterialType;                                       // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0259   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialColor;                                      // 0x025C   (0x0010)  
	bool                                               bBlockoutMaterialUseGrid;                                   // 0x026C   (0x0001)  
	bool                                               bBlockoutWorldAligned;                                      // 0x026D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x026E   (0x0002)  MISSED
	float                                              BlockoutMaterialGridSize;                                   // 0x0270   (0x0004)  
	float                                              BlockoutMaterialCheckerLuminance;                           // 0x0274   (0x0004)  
	float                                              BlockoutMaterialRoughness;                                  // 0x0278   (0x0004)  
	bool                                               bBlockoutMaterialUseTopColor;                               // 0x027C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x027D   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialTopColor;                                   // 0x0280   (0x0010)  
	bool                                               bUseCustomMaterial;                                         // 0x0290   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	class UMaterialInterface*                          CustomMaterial;                                             // 0x0298   (0x0008)  
	class UMaterialInterface*                          BlockoutCustomMaterial;                                     // 0x02A0   (0x0008)  
	bool                                               bBlockoutEnableCollisions;                                  // 0x02A8   (0x0001)  
	bool                                               bBlockoutEnableCustomCollision;                             // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x02AA   (0x0002)  MISSED
	FName                                              BlockoutCustomCollisionProfileName;                         // 0x02AC   (0x0008)  
	bool                                               bBlockoutCastShadows;                                       // 0x02B4   (0x0001)  
	unsigned char                                      UnknownData05_7[0x3];                                       // 0x02B5   (0x0003)  MISSED


	/// Functions
	// Function /Script/BlockoutToolsPlugin.BlockoutToolsParent.RerunConstructionScript
	// void RerunConstructionScript();                                                                                          // [0x8e8980] Final|Native|Private|BlueprintCallable 
	// Function /Script/BlockoutToolsPlugin.BlockoutToolsParent.BlockoutSetMaterial
	// void BlockoutSetMaterial();                                                                                              // [0x8e8960] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/BlockoutToolsPlugin.BlockoutToolsSettings
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UBlockoutToolsSettings : public UObject
{ 
public:
	TEnumAsByte<EBlockoutMaterialType>                 BlockoutMaterialType;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialColor;                                      // 0x002C   (0x0010)  
	bool                                               bBlockoutMaterialUseGrid;                                   // 0x003C   (0x0001)  
	bool                                               bBlockoutWorldAligned;                                      // 0x003D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	float                                              BlockoutMaterialGridSize;                                   // 0x0040   (0x0004)  
	float                                              BlockoutMaterialCheckerLuminance;                           // 0x0044   (0x0004)  
	float                                              BlockoutMaterialRoughness;                                  // 0x0048   (0x0004)  
	bool                                               bBlockoutMaterialUseTopColor;                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FLinearColor                                       BlockoutMaterialTopColor;                                   // 0x0050   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ABlockoutToolsParent) == 0x02B8); // 696 bytes (0x000220 - 0x0002B8)
static_assert(sizeof(UBlockoutToolsSettings) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(offsetof(ABlockoutToolsParent, Root) == 0x0220);
static_assert(offsetof(ABlockoutToolsParent, Billboard) == 0x0228);
static_assert(offsetof(ABlockoutToolsParent, BlockoutGridParent) == 0x0230);
static_assert(offsetof(ABlockoutToolsParent, BlockoutGridMID) == 0x0238);
static_assert(offsetof(ABlockoutToolsParent, BlockoutCurrentMaterial) == 0x0240);
static_assert(offsetof(ABlockoutToolsParent, BlockoutMeshComponents) == 0x0248);
static_assert(offsetof(ABlockoutToolsParent, BlockoutMaterialType) == 0x0258);
static_assert(offsetof(ABlockoutToolsParent, BlockoutMaterialColor) == 0x025C);
static_assert(offsetof(ABlockoutToolsParent, BlockoutMaterialTopColor) == 0x0280);
static_assert(offsetof(ABlockoutToolsParent, CustomMaterial) == 0x0298);
static_assert(offsetof(ABlockoutToolsParent, BlockoutCustomMaterial) == 0x02A0);
static_assert(offsetof(ABlockoutToolsParent, BlockoutCustomCollisionProfileName) == 0x02AC);
static_assert(offsetof(UBlockoutToolsSettings, BlockoutMaterialType) == 0x0028);
static_assert(offsetof(UBlockoutToolsSettings, BlockoutMaterialColor) == 0x002C);
static_assert(offsetof(UBlockoutToolsSettings, BlockoutMaterialTopColor) == 0x0050);
