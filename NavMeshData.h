
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: KytheraPlugin

#pragma pack(push, 0x1)

/// Struct /Kythera/NavMeshData/AutoCover/PopLeftRight.PopLeftRight
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FPopLeftRight
{ 
	bool                                               Enabled_1_8124379D4EBB24C52A39F6B8AB0047B2;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              CoverStripMinHeight_4_5E48241C43C30CD74F6DA6B11743CFCB;     // 0x0004   (0x0004)  
	float                                              PopOutMaxHeight_7_FD112E9848E2FAC589BF70B7089103C9;         // 0x0008   (0x0004)  
	float                                              StepOutDistance_8_F707E0B04DA8B5CB8A7556BB837C248A;         // 0x000C   (0x0004)  
	float                                              MaxRailOffset_11_47F721214280AC35CF93309DF995C728;          // 0x0010   (0x0004)  
};

/// Struct /Kythera/NavMeshData/AutoCover/Full.Full
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFull
{ 
	bool                                               Enabled_1_8124379D4EBB24C52A39F6B8AB0047B2;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinHeight_4_E7CABC68427B9AD5A863B5B8A6B26393;               // 0x0004   (0x0004)  
	float                                              MaxRailOffset_9_98B04B4C4A3447FC8F23FE93F55F9BE2;           // 0x0008   (0x0004)  
	float                                              AdditionalMinWidth_14_DDB57055466FB8E08097E3A36D81C1FB;     // 0x000C   (0x0004)  
};

/// Struct /Kythera/NavMeshData/AutoCover/PopUp.PopUp
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPopUp
{ 
	bool                                               Enabled_1_8124379D4EBB24C52A39F6B8AB0047B2;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinHeight_4_F65AA20B418193362214B887AE8EE143;               // 0x0004   (0x0004)  
	float                                              MaxHeight_6_E55AA288431E638661A71FB3C7E0816F;               // 0x0008   (0x0004)  
	float                                              MaxRailOffset_12_AB0D0F294B9FEDF61186879BFBC2D0A7;          // 0x000C   (0x0004)  
};

/// Class /Kythera/NavMeshData/AutoCover/AutoCoverFeatureTemplate.AutoCoverFeatureTemplate_C
/// Size: 0x0098 (152 bytes) (0x000050 - 0x000098) align 8 MaxSize: 0x0098
class UAutoCoverFeatureTemplate_C : public UKytAutoCoverFeature
{ 
public:
	FPopLeftRight                                      PopLeft;                                                    // 0x0050   (0x0014)  
	FPopLeftRight                                      PopRight;                                                   // 0x0064   (0x0014)  
	FFull                                              Full;                                                       // 0x0078   (0x0010)  
	FPopUp                                             PopUp;                                                      // 0x0088   (0x0010)  
};

/// Struct /Kythera/NavMeshData/AutoContextNav/JumpOrClimb.JumpOrClimb
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FJumpOrClimb
{ 
	bool                                               Enabled_1_5B692FFB45D8ED39134387A601A864D5;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinDepth_4_AFB7A927407AEB3BEE3E5095D8C65D37;                // 0x0004   (0x0004)  
	float                                              MaxDepth_6_9EE86AAF4AE6458AEF97159B51FC55C3;                // 0x0008   (0x0004)  
	float                                              MaxClimb_8_FC76E822456D737B0D3798AB24C15C24;                // 0x000C   (0x0004)  
	float                                              MaxDrop_10_3D62B4AE4334D467146FF782E959B8A1;                // 0x0010   (0x0004)  
	float                                              EndHeight_12_D80C92C94D46DD13C1BAA0923873343D;              // 0x0014   (0x0004)  
	float                                              EndHeightTolerance_14_660C763E4EC496EDD25741A6A8CDFEB6;     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            AnimationName_17_EFFC9404446254B1A08AC7AB7673FD46;          // 0x0020   (0x0010)  
	FString                                            LinkCostIdentifier_22_23D5BC2948491E4450CF0C8C0DF0D566;     // 0x0030   (0x0010)  
};

/// Struct /Kythera/NavMeshData/AutoContextNav/Vault.Vault
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FVault
{ 
	bool                                               Enabled_1_5B692FFB45D8ED39134387A601A864D5;                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MinDepth_4_AFB7A927407AEB3BEE3E5095D8C65D37;                // 0x0004   (0x0004)  
	float                                              MaxDepth_6_9EE86AAF4AE6458AEF97159B51FC55C3;                // 0x0008   (0x0004)  
	float                                              MaxClimb_8_FC76E822456D737B0D3798AB24C15C24;                // 0x000C   (0x0004)  
	float                                              MaxDrop_10_3D62B4AE4334D467146FF782E959B8A1;                // 0x0010   (0x0004)  
	float                                              EndHeight_12_D80C92C94D46DD13C1BAA0923873343D;              // 0x0014   (0x0004)  
	float                                              EndHeightTolerance_14_660C763E4EC496EDD25741A6A8CDFEB6;     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            AnimationName_17_EFFC9404446254B1A08AC7AB7673FD46;          // 0x0020   (0x0010)  
	float                                              MinHeight_20_02DEEC0645D20B6E955F4388CCEB2C79;              // 0x0030   (0x0004)  
	float                                              MinSurfaceLength_22_947AC8A04BED530BD8813A99DA875627;       // 0x0034   (0x0004)  
	float                                              SurfaceHeightTolerance_24_A3668E6641674B416AAED28A4E43D3B9; // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FString                                            LinkCostIdentifier_28_DF8973D64B2C48D5F78F4794280F182D;     // 0x0040   (0x0010)  
};

/// Class /Kythera/NavMeshData/AutoContextNav/AutoContextNavTemplate.AutoContextNavTemplate_C
/// Size: 0x0150 (336 bytes) (0x000038 - 0x000150) align 8 MaxSize: 0x0150
class UAutoContextNavTemplate_C : public UKytAutoContextNavFeature
{ 
public:
	FJumpOrClimb                                       Jump;                                                       // 0x0038   (0x0040)  
	FJumpOrClimb                                       ClimbUp;                                                    // 0x0078   (0x0040)  
	FJumpOrClimb                                       ClimbDown;                                                  // 0x00B8   (0x0040)  
	FVault                                             Vault;                                                      // 0x00F8   (0x0050)  
	float                                              BinSize;                                                    // 0x0148   (0x0004)  
	float                                              TargetTolerance;                                            // 0x014C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FPopLeftRight) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FFull) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPopUp) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAutoCoverFeatureTemplate_C) == 0x0098); // 152 bytes (0x000050 - 0x000098)
static_assert(sizeof(FJumpOrClimb) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FVault) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAutoContextNavTemplate_C) == 0x0150); // 336 bytes (0x000038 - 0x000150)
static_assert(offsetof(UAutoCoverFeatureTemplate_C, PopLeft) == 0x0050);
static_assert(offsetof(UAutoCoverFeatureTemplate_C, PopRight) == 0x0064);
static_assert(offsetof(UAutoCoverFeatureTemplate_C, Full) == 0x0078);
static_assert(offsetof(UAutoCoverFeatureTemplate_C, PopUp) == 0x0088);
static_assert(offsetof(FJumpOrClimb, AnimationName_17_EFFC9404446254B1A08AC7AB7673FD46) == 0x0020);
static_assert(offsetof(FJumpOrClimb, LinkCostIdentifier_22_23D5BC2948491E4450CF0C8C0DF0D566) == 0x0030);
static_assert(offsetof(FVault, AnimationName_17_EFFC9404446254B1A08AC7AB7673FD46) == 0x0020);
static_assert(offsetof(FVault, LinkCostIdentifier_28_DF8973D64B2C48D5F78F4794280F182D) == 0x0040);
static_assert(offsetof(UAutoContextNavTemplate_C, Jump) == 0x0038);
static_assert(offsetof(UAutoContextNavTemplate_C, ClimbUp) == 0x0078);
static_assert(offsetof(UAutoContextNavTemplate_C, ClimbDown) == 0x00B8);
static_assert(offsetof(UAutoContextNavTemplate_C, Vault) == 0x00F8);
