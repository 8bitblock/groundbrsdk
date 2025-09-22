
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Game/EpicMarketplace/ImpromptuLadders/Blueprint/ImpromptuLadder_Static.ImpromptuLadder_Static_C
/// Size: 0x0403 (1027 bytes) (0x000220 - 0x000403) align 8 MaxSize: 0x0403
class AImpromptuLadder_Static_C : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x0220   (0x0008)  
	FVector                                            LadderEndPoint;                                             // 0x0228   (0x000C)  
	bool                                               MakeStruts;                                                 // 0x0234   (0x0001)  
	bool                                               UniqueBottomStrut;                                          // 0x0235   (0x0001)  
	bool                                               TopAttachment;                                              // 0x0236   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0237   (0x0001)  MISSED
	FVector                                            TopAttachmentScalar;                                        // 0x0238   (0x000C)  
	float                                              StrutThicknessScalar;                                       // 0x0244   (0x0004)  
	bool                                               RandomRungRoll;                                             // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              Rung_Roll;                                                  // 0x024C   (0x0004)  
	float                                              RungLength;                                                 // 0x0250   (0x0004)  
	bool                                               OverrideMeshMaterials;                                      // 0x0254   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0255   (0x0003)  MISSED
	float                                              StrutMeshLength;                                            // 0x0258   (0x0004)  
	float                                              DistanceToCover;                                            // 0x025C   (0x0004)  
	int32_t                                            NumWholeStruts;                                             // 0x0260   (0x0004)  
	float                                              RemainderStrutFraction;                                     // 0x0264   (0x0004)  
	float                                              DistanceBetweenRungs;                                       // 0x0268   (0x0004)  
	int32_t                                            Num_Rungs;                                                  // 0x026C   (0x0004)  
	float                                              StrutMeshWidth;                                             // 0x0270   (0x0004)  
	float                                              RungMeshLength;                                             // 0x0274   (0x0004)  
	float                                              RungYOffset;                                                // 0x0278   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x027C   (0x0004)  MISSED
	class UStaticMesh*                                 StrutMeshLeft;                                              // 0x0280   (0x0008)  
	class UStaticMesh*                                 StrutMeshRight;                                             // 0x0288   (0x0008)  
	class UStaticMesh*                                 BottomStrutMeshLeft;                                        // 0x0290   (0x0008)  
	class UStaticMesh*                                 BottomStrutMeshRight;                                       // 0x0298   (0x0008)  
	class UStaticMesh*                                 TopAttachmentMeshLeft;                                      // 0x02A0   (0x0008)  
	class UStaticMesh*                                 TopAttachmentMeshRight;                                     // 0x02A8   (0x0008)  
	class UStaticMesh*                                 RungMesh;                                                   // 0x02B0   (0x0008)  
	class UInstancedStaticMeshComponent*               RungInstanceComponent;                                      // 0x02B8   (0x0008)  
	class UInstancedStaticMeshComponent*               StrutLeftInstanceComponent;                                 // 0x02C0   (0x0008)  
	float                                              StrutMeshThickness;                                         // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
	class UBoxComponent*                               CollisionBox;                                               // 0x02D0   (0x0008)  
	class UStaticMesh*                                 BoltMesh;                                                   // 0x02D8   (0x0008)  
	class UInstancedStaticMeshComponent*               BoltInstanceComponent;                                      // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        BottomStrutLeft;                                            // 0x02E8   (0x0008)  
	class UStaticMeshComponent*                        BottomStrutRight;                                           // 0x02F0   (0x0008)  
	class UInstancedStaticMeshComponent*               StrutRightInstanceComponent;                                // 0x02F8   (0x0008)  
	bool                                               MakeWallBrackets;                                           // 0x0300   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0301   (0x0007)  MISSED
	class UStaticMesh*                                 BracketMeshLeft;                                            // 0x0308   (0x0008)  
	class UStaticMesh*                                 BracketMeshRight;                                           // 0x0310   (0x0008)  
	class UInstancedStaticMeshComponent*               BracketLeftInstanceComponent;                               // 0x0318   (0x0008)  
	class UMaterialInterface*                          StrutMaterial;                                              // 0x0320   (0x0008)  
	class UMaterialInterface*                          RungMaterial;                                               // 0x0328   (0x0008)  
	class UInstancedStaticMeshComponent*               BracketRightInstanceComponent;                              // 0x0330   (0x0008)  
	float                                              DistanceBetweenBrackets;                                    // 0x0338   (0x0004)  
	int32_t                                            NumBrackets;                                                // 0x033C   (0x0004)  
	float                                              BracketLengthScalar;                                        // 0x0340   (0x0004)  
	float                                              BracketYOffset;                                             // 0x0344   (0x0004)  
	class UStaticMeshComponent*                        TopAttachmentLeft;                                          // 0x0348   (0x0008)  
	class UStaticMeshComponent*                        TopAttachmentRight;                                         // 0x0350   (0x0008)  
	bool                                               Make_Bolts;                                                 // 0x0358   (0x0001)  
	bool                                               MakeBoltsOnSides;                                           // 0x0359   (0x0001)  
	bool                                               MakeBoltsFront;                                             // 0x035A   (0x0001)  
	bool                                               MakeBoltsBack;                                              // 0x035B   (0x0001)  
	FVector                                            BoltFrontOffset;                                            // 0x035C   (0x000C)  
	FVector                                            BoltBackOffset;                                             // 0x0368   (0x000C)  
	FVector                                            BoltScalar;                                                 // 0x0374   (0x000C)  
	bool                                               UseBoxCollision;                                            // 0x0380   (0x0001)  
	bool                                               Simulate_Physics;                                           // 0x0381   (0x0001)  
	unsigned char                                      UnknownData06_6[0x6];                                       // 0x0382   (0x0006)  MISSED
	class UMaterialInterface*                          BoltMaterial;                                               // 0x0388   (0x0008)  
	class UMaterialInterface*                          BracketMaterial;                                            // 0x0390   (0x0008)  
	class UMaterialInterface*                          TopAttachmentMaterial;                                      // 0x0398   (0x0008)  
	FVector                                            StrutLeftMeshOffset;                                        // 0x03A0   (0x000C)  
	FVector                                            StrutRightMeshOffset;                                       // 0x03AC   (0x000C)  
	FVector                                            TopAttachmentLeftMeshOffset;                                // 0x03B8   (0x000C)  
	FVector                                            TopAttachmentRightMeshOffset;                               // 0x03C4   (0x000C)  
	FVector                                            RungMeshOffset;                                             // 0x03D0   (0x000C)  
	FVector                                            BracketLeftMeshOffset;                                      // 0x03DC   (0x000C)  
	FVector                                            BracketRightMeshOffset;                                     // 0x03E8   (0x000C)  
	FVector                                            BoltMeshOffset;                                             // 0x03F4   (0x000C)  
	bool                                               bLightingChannel0;                                          // 0x0400   (0x0001)  
	bool                                               bLightingChannel1;                                          // 0x0401   (0x0001)  
	bool                                               bLightingChannel2;                                          // 0x0402   (0x0001)  


	/// Functions
	// Function /Game/EpicMarketplace/ImpromptuLadders/Blueprint/ImpromptuLadder_Static.ImpromptuLadder_Static_C.DoBolts
	// void DoBolts(FTransform& RungTransform);                                                                                 // [0x235b330] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EpicMarketplace/ImpromptuLadders/Blueprint/ImpromptuLadder_Static.ImpromptuLadder_Static_C.EnablePhysics
	// void EnablePhysics();                                                                                                    // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EpicMarketplace/ImpromptuLadders/Blueprint/ImpromptuLadder_Static.ImpromptuLadder_Static_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x235b330] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(AImpromptuLadder_Static_C) == 0x0403); // 1027 bytes (0x000220 - 0x000403)
static_assert(offsetof(AImpromptuLadder_Static_C, Root) == 0x0220);
static_assert(offsetof(AImpromptuLadder_Static_C, LadderEndPoint) == 0x0228);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentScalar) == 0x0238);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutMeshLeft) == 0x0280);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutMeshRight) == 0x0288);
static_assert(offsetof(AImpromptuLadder_Static_C, BottomStrutMeshLeft) == 0x0290);
static_assert(offsetof(AImpromptuLadder_Static_C, BottomStrutMeshRight) == 0x0298);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentMeshLeft) == 0x02A0);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentMeshRight) == 0x02A8);
static_assert(offsetof(AImpromptuLadder_Static_C, RungMesh) == 0x02B0);
static_assert(offsetof(AImpromptuLadder_Static_C, RungInstanceComponent) == 0x02B8);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutLeftInstanceComponent) == 0x02C0);
static_assert(offsetof(AImpromptuLadder_Static_C, CollisionBox) == 0x02D0);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltMesh) == 0x02D8);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltInstanceComponent) == 0x02E0);
static_assert(offsetof(AImpromptuLadder_Static_C, BottomStrutLeft) == 0x02E8);
static_assert(offsetof(AImpromptuLadder_Static_C, BottomStrutRight) == 0x02F0);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutRightInstanceComponent) == 0x02F8);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketMeshLeft) == 0x0308);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketMeshRight) == 0x0310);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketLeftInstanceComponent) == 0x0318);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutMaterial) == 0x0320);
static_assert(offsetof(AImpromptuLadder_Static_C, RungMaterial) == 0x0328);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketRightInstanceComponent) == 0x0330);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentLeft) == 0x0348);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentRight) == 0x0350);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltFrontOffset) == 0x035C);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltBackOffset) == 0x0368);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltScalar) == 0x0374);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltMaterial) == 0x0388);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketMaterial) == 0x0390);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentMaterial) == 0x0398);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutLeftMeshOffset) == 0x03A0);
static_assert(offsetof(AImpromptuLadder_Static_C, StrutRightMeshOffset) == 0x03AC);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentLeftMeshOffset) == 0x03B8);
static_assert(offsetof(AImpromptuLadder_Static_C, TopAttachmentRightMeshOffset) == 0x03C4);
static_assert(offsetof(AImpromptuLadder_Static_C, RungMeshOffset) == 0x03D0);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketLeftMeshOffset) == 0x03DC);
static_assert(offsetof(AImpromptuLadder_Static_C, BracketRightMeshOffset) == 0x03E8);
static_assert(offsetof(AImpromptuLadder_Static_C, BoltMeshOffset) == 0x03F4);
