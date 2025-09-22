
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

/// Class /PortalSystem/bp_PortalSystem_Portal.bp_PortalSystem_Portal_C
/// Size: 0x0298 (664 bytes) (0x000280 - 0x000298) align 8 MaxSize: 0x0298
class Abp_PortalSystem_Portal_C : public APortalSystemPortal
{ 
public:
	class UBoxRenderableComponent*                     BoxRenderable;                                              // 0x0280   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x0288   (0x0008)  
	class UEmptyRenderableComponent*                   EmptyRenderable;                                            // 0x0290   (0x0008)  


	/// Functions
	// Function /PortalSystem/bp_PortalSystem_Portal.bp_PortalSystem_Portal_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x235b330] Event|Public|BlueprintCallable|BlueprintEvent 
};

#pragma pack(pop)


static_assert(sizeof(Abp_PortalSystem_Portal_C) == 0x0298); // 664 bytes (0x000280 - 0x000298)
static_assert(offsetof(Abp_PortalSystem_Portal_C, BoxRenderable) == 0x0280);
static_assert(offsetof(Abp_PortalSystem_Portal_C, StaticMesh) == 0x0288);
static_assert(offsetof(Abp_PortalSystem_Portal_C, EmptyRenderable) == 0x0290);
