
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

/// Struct /Kythera/Profiles/Structs/Visual.Visual
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FVisual
{ 
	FString                                            ObjectTagQuery_15_FE90880D48EE2FFA1612D1BE629395B3;         // 0x0000   (0x0010)  
	float                                              RaycastRate_16_D3CA79F248E2ED671283C9BFABF1591D;            // 0x0010   (0x0004)  
	float                                              MaxDistance_17_CAD5F5334A2DC94C3BBFFABE75E0B244;            // 0x0014   (0x0004)  
	float                                              PrimaryFOV_18_14E807D74F864D1CD75E8C99E92B3A0F;             // 0x0018   (0x0004)  
	float                                              SecondaryFOV_19_178AF1664672D9997C8900B098007A32;           // 0x001C   (0x0004)  
	float                                              SecondaryFOVWeight_20_1CF7CA524D077AA0FF9E228D4186D604;     // 0x0020   (0x0004)  
	float                                              BasePerceptionScale_21_A508B5184565751C8F491082F55436AF;    // 0x0024   (0x0004)  
};

/// Struct /Kythera/Profiles/Structs/Group.Group
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 4 MaxSize: 0x0006
struct FGroup
{ 
	float                                              SignalRange_36_D3CA79F248E2ED671283C9BFABF1591D;            // 0x0000   (0x0004)  
	bool                                               AllowPropagation_41_C15B1AF04999891EF05EEA84CF5DDF1C;       // 0x0004   (0x0001)  
	bool                                               RegularUpdates_42_85D0190341F6FAD41C47FD9DA3583CAF;         // 0x0005   (0x0001)  
};

/// Struct /Kythera/Profiles/Structs/Audio.Audio
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAudio
{ 
	float                                              BasePerceptionScale_33_D3CA79F248E2ED671283C9BFABF1591D;    // 0x0000   (0x0004)  
};

/// Struct /Kythera/Profiles/Structs/Alertness.Alertness
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FAlertness
{ 
	float                                              MinSuspiciousTime_2_303687154B9ABA6292E904930B8CD32D;       // 0x0000   (0x0004)  
	float                                              MaxSuspiciousDecayTime_4_A459501F4DB2EB25934085B8ECDA1DC8;  // 0x0004   (0x0004)  
};

/// Struct /Kythera/Profiles/Structs/Perception.Perception
/// Size: 0x0054 (84 bytes) (0x000000 - 0x000054) align 8 MaxSize: 0x0054
struct FPerception
{ 
	float                                              MaxObscuredTime_17_FE90880D48EE2FFA1612D1BE629395B3;        // 0x0000   (0x0004)  
	float                                              MaxMemoryTime_18_E631F76241281CAE161764B8BE575D6E;          // 0x0004   (0x0004)  
	float                                              DecayRate_10_126774DF497AF8FEBB4EE48129D123E4;              // 0x0008   (0x0004)  
	float                                              MemoryMultiplier_11_EE213E36400AC12CDBED3E8D913BFC57;       // 0x000C   (0x0004)  
	float                                              AudioScaleHowDetectable_35_3FBEA39F4B89AC7840994F9A687B39B4; // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVisual                                            Visual_19_68D4E44343FA60EB7BB5A283AEC05CD8;                 // 0x0018   (0x0028)  
	FGroup                                             Group_22_C3D9EDEB432F6455D8F57CAE3C477BB0;                  // 0x0040   (0x0006)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	FAudio                                             Audio_25_45B0440A4E73F9737E27CCA274AC4B58;                  // 0x0048   (0x0004)  
	FAlertness                                         Alertness_28_542B7D8448A5C570C54DF8BA5B1B9755;              // 0x004C   (0x0008)  
};

/// Struct /Kythera/Profiles/Structs/CostVolumes/AreaLabelToCost.AreaLabelToCost
/// Size: 0x001D (29 bytes) (0x000000 - 0x00001D) align 8 MaxSize: 0x001D
struct FAreaLabelToCost
{ 
	FString                                            AreaLabel_40_D3CA79F248E2ED671283C9BFABF1591D;              // 0x0000   (0x0010)  
	float                                              TraversalCost_43_1998AC22467C6FBF7F1C6DBD7A6CCA50;          // 0x0010   (0x0004)  
	float                                              EntryCost_46_BB1B137849755989FA6C1BA9BBEA557F;              // 0x0014   (0x0004)  
	float                                              ExitCost_48_1392304A4156071BD39215BAD41991C6;               // 0x0018   (0x0004)  
	bool                                               Excluded_42_1A7FC1B64A8D7044A822809A07CD1960;               // 0x001C   (0x0001)  
};

/// Struct /Kythera/Profiles/Structs/AreaProfile.AreaProfile
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAreaProfile
{ 
	FAreaLabelToCost                                   WalkableDefaults_10_771EE0534BEFEBB1CD6503BF99FE9330;       // 0x0000   (0x001D)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	TArray<FAreaLabelToCost>                           CostDefinitions_14_C843544842309537B6F5349C16A78948;        // 0x0020   (0x0010)  
};

/// Struct /Kythera/Profiles/Structs/AdvancedMovement.AdvancedMovement
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FAdvancedMovement
{ 
	bool                                               TurnRateLimitsSpeed_17_7B259A974DA927DECF42CB91506A75F4;    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              VelocitySmoothingDecayRate_2_B3756E694545CDCFB2D7429FD5D0F3E2; // 0x0004   (0x0004)  
	float                                              TurnRateSpeedModifierCoefA_4_0238DC9145E88C7ECF9F1BB2A3265290; // 0x0008   (0x0004)  
	float                                              TurnRateSpeedModifierCoefB_6_48FF9B2E475FA2FDAB89748A1796A0C3; // 0x000C   (0x0004)  
	float                                              TurnRateSpeedModifierCoefC_8_FD7574B64CDF78CD867AB49B75117AD2; // 0x0010   (0x0004)  
	float                                              TurnRateDeltaModifierCoefA_10_6092194D47E847355E3A03BA19AADFE8; // 0x0014   (0x0004)  
	float                                              TurnRateDeltaModifierCoefB_12_1EBF13B14A3F228B76CEEE977675AA69; // 0x0018   (0x0004)  
	float                                              MinTurnRateDeltaClamp_21_EE3991254DEC5A94A745B48BAA63223C;  // 0x001C   (0x0004)  
};

/// Class /Kythera/Profiles/ProfileTemplate.ProfileTemplate_C
/// Size: 0x0104 (260 bytes) (0x000038 - 0x000104) align 8 MaxSize: 0x0104
class UProfileTemplate_C : public UKytProfile
{ 
public:
	FPerception                                        Perception;                                                 // 0x0038   (0x0054)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x008C   (0x0004)  MISSED
	class UKytNavMeshAgentGroup*                       NavMeshGroup;                                               // 0x0090   (0x0008)  
	class UKytNavMeshAgentType*                        NavMeshAgentType;                                           // 0x0098   (0x0008)  
	FString                                            TargetSelector;                                             // 0x00A0   (0x0010)  
	FAreaProfile                                       AreaProfile;                                                // 0x00B0   (0x0030)  
	float                                              TurnRateLimit;                                              // 0x00E0   (0x0004)  
	FAdvancedMovement                                  AdvancedMovement;                                           // 0x00E4   (0x0020)  
};

#pragma pack(pop)


static_assert(sizeof(FVisual) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGroup) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FAudio) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAlertness) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPerception) == 0x0054); // 84 bytes (0x000000 - 0x000054)
static_assert(sizeof(FAreaLabelToCost) == 0x001D); // 29 bytes (0x000000 - 0x00001D)
static_assert(sizeof(FAreaProfile) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAdvancedMovement) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProfileTemplate_C) == 0x0104); // 260 bytes (0x000038 - 0x000104)
static_assert(offsetof(FVisual, ObjectTagQuery_15_FE90880D48EE2FFA1612D1BE629395B3) == 0x0000);
static_assert(offsetof(FPerception, Visual_19_68D4E44343FA60EB7BB5A283AEC05CD8) == 0x0018);
static_assert(offsetof(FPerception, Group_22_C3D9EDEB432F6455D8F57CAE3C477BB0) == 0x0040);
static_assert(offsetof(FPerception, Audio_25_45B0440A4E73F9737E27CCA274AC4B58) == 0x0048);
static_assert(offsetof(FPerception, Alertness_28_542B7D8448A5C570C54DF8BA5B1B9755) == 0x004C);
static_assert(offsetof(FAreaLabelToCost, AreaLabel_40_D3CA79F248E2ED671283C9BFABF1591D) == 0x0000);
static_assert(offsetof(FAreaProfile, WalkableDefaults_10_771EE0534BEFEBB1CD6503BF99FE9330) == 0x0000);
static_assert(offsetof(FAreaProfile, CostDefinitions_14_C843544842309537B6F5349C16A78948) == 0x0020);
static_assert(offsetof(UProfileTemplate_C, Perception) == 0x0038);
static_assert(offsetof(UProfileTemplate_C, NavMeshGroup) == 0x0090);
static_assert(offsetof(UProfileTemplate_C, NavMeshAgentType) == 0x0098);
static_assert(offsetof(UProfileTemplate_C, TargetSelector) == 0x00A0);
static_assert(offsetof(UProfileTemplate_C, AreaProfile) == 0x00B0);
static_assert(offsetof(UProfileTemplate_C, AdvancedMovement) == 0x00E4);
