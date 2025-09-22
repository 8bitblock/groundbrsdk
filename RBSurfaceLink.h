
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Class /Script/RBSurfaceLink.RBSurfaceLink
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class URBSurfaceLink : public UObject
{ 
public:
	FName                                              Type;                                                       // 0x0028   (0x0008)  
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0030   (0x0008)  
	FSoftObjectPath                                    LinkedClass;                                                // 0x0038   (0x0018)  
	bool                                               bCosmeticOnly;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/RBSurfaceLink.RBSurfaceLinkActorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URBSurfaceLinkActorInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RBSurfaceLink.RBSurfaceLinkActorInterface.GetSurfaceLinkType
	// FName GetSurfaceLinkType(class UPrimitiveComponent* InCollisionComponent);                                               // [0x1a55c50] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/RBSurfaceLink.RBSurfaceLinkClassInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URBSurfaceLinkClassInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/RBSurfaceLink.RBSurfaceLinkClassInterface.SetPhysicCollisionInfo
	// void SetPhysicCollisionInfo(class AActor* InSourceActor, class UPrimitiveComponent* InSourceComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector InContactPosition, FVector InContactNormal); // [0x1a55e50] Native|Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/RBSurfaceLink.RBSurfaceLinkClassInterface.SetHitResult
	// void SetHitResult(class UObject* InHitResultSource, FHitResult InHitResult);                                             // [0x1a55ce0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/RBSurfaceLink.RBSurfaceLinkManager
/// Size: 0x0168 (360 bytes) (0x000028 - 0x000168) align 8 MaxSize: 0x0168
class URBSurfaceLinkManager : public UObject
{ 
public:
	class UObjectLibrary*                              SurfaceLinkLibrary;                                         // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x138];                                     // 0x0030   (0x0138)  MISSED


	/// Functions
	// Function /Script/RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClassFromHitResult
	// class UClass* GetLinkedClassFromHitResult(FName& Type, FHitResult& HitResult);                                           // [0x1a55b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSurfaceLink.RBSurfaceLinkManager.GetLinkedClass
	// class UClass* GetLinkedClass(FName& Type, FName& PhysicalMaterialName);                                                  // [0x1a55a20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/RBSurfaceLink.RBSurfaceLinkManager.GetDefaultLinkedClass
	// class UClass* GetDefaultLinkedClass(FName& Type);                                                                        // [0x1a55980] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/RBSurfaceLink.RBSurfaceLinkSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URBSurfaceLinkSettings : public UObject
{ 
public:
	TArray<FString>                                    Paths;                                                      // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(URBSurfaceLink) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(URBSurfaceLinkActorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URBSurfaceLinkClassInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URBSurfaceLinkManager) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(sizeof(URBSurfaceLinkSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(URBSurfaceLink, Type) == 0x0028);
static_assert(offsetof(URBSurfaceLink, PhysicalMaterial) == 0x0030);
static_assert(offsetof(URBSurfaceLink, LinkedClass) == 0x0038);
static_assert(offsetof(URBSurfaceLinkManager, SurfaceLinkLibrary) == 0x0028);
static_assert(offsetof(URBSurfaceLinkSettings, Paths) == 0x0028);
