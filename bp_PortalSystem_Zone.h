
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PortalSystem

#pragma pack(push, 0x1)

/// Class /PortalSystem/bp_PortalSystem_Zone.bp_PortalSystem_Zone_C
/// Size: 0x02A0 (672 bytes) (0x000288 - 0x0002A0) align 8 MaxSize: 0x02A0
class Abp_PortalSystem_Zone_C : public APortalSystemZone
{ 
public:
	class UBoxRenderableComponent*                     BoxRenderable;                                              // 0x0288   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  


	/// Functions
	// Function /PortalSystem/bp_PortalSystem_Zone.bp_PortalSystem_Zone_C.OnClearData
	// void OnClearData();                                                                                                      // [0x235b330] Public|BlueprintCallable|BlueprintEvent 
	// Function /PortalSystem/bp_PortalSystem_Zone.bp_PortalSystem_Zone_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x235b330] Event|Public|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(Abp_PortalSystem_Zone_C) == 0x02A0); // 672 bytes (0x000288 - 0x0002A0)
static_assert(offsetof(Abp_PortalSystem_Zone_C, BoxRenderable) == 0x0288);
static_assert(offsetof(Abp_PortalSystem_Zone_C, StaticMesh) == 0x0290);
static_assert(offsetof(Abp_PortalSystem_Zone_C, DefaultSceneRoot) == 0x0298);
