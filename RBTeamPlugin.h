
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

/// Class /Script/RBTeamPlugin.RBTeamComponent
/// Size: 0x00D0 (208 bytes) (0x0000B0 - 0x0000D0) align 8 MaxSize: 0x00D0
class URBTeamComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B0   (0x0008)  MISSED
	char                                               TeamId;                                                     // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,887) /* FMulticastInlineDelegate */ __um(OnTeamIdChanged);                                    // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/RBTeamPlugin.RBTeamComponent.OnRep_TeamId
	// void OnRep_TeamId(char OldTeamId);                                                                                       // [0x1b0c520] Final|Native|Protected 
};

/// Class /Script/RBTeamPlugin.RBTeamFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URBTeamFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/RBTeamPlugin.RBTeamFunctionLibrary.SetTeamId
	// void SetTeamId(class AActor* Actor, char NewTeamId);                                                                     // [0x1b0c670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RBTeamPlugin.RBTeamFunctionLibrary.OnSameTeam
	// bool OnSameTeam(class AActor* ActorA, class AActor* ActorB);                                                             // [0x1b0c5a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBTeamPlugin.RBTeamFunctionLibrary.GetTeamId
	// char GetTeamId(class AActor* Actor);                                                                                     // [0x1b0c490] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RBTeamPlugin.RBTeamFunctionLibrary.GetTeamAttitude
	// TEnumAsByte<ETeamAttitude> GetTeamAttitude(class AActor* ActorA, class AActor* ActorB);                                  // [0x1b0c3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(URBTeamComponent) == 0x00D0); // 208 bytes (0x0000B0 - 0x0000D0)
static_assert(sizeof(URBTeamFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
