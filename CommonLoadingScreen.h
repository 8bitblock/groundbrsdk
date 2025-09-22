
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

/// Class /Script/CommonLoadingScreen.LoadingProcessInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULoadingProcessInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CommonLoadingScreen.LoadingProcessInterface.K2_ShouldShowLoadingScreen
	// bool K2_ShouldShowLoadingScreen(FString& OutDebugReason);                                                                // [0x8ef3e0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonLoadingScreen.LoadingProcessTask
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class ULoadingProcessTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonLoadingScreen.LoadingProcessTask.Unregister
	// void Unregister();                                                                                                       // [0x8ef5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonLoadingScreen.LoadingProcessTask.SetShowLoadingScreenReason
	// void SetShowLoadingScreenReason(FString InDebugReason);                                                                  // [0x8ef530] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonLoadingScreen.LoadingProcessTask.CreateLoadingScreenProcessTask
	// class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, FString ShowLoadingScreenReason); // [0x8eef80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonLoadingScreen.LoadingScreenManager
/// Size: 0x0120 (288 bytes) (0x000030 - 0x000120) align 8 MaxSize: 0x0120
class ULoadingScreenManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,380) /* FMulticastInlineDelegate */ __um(OnShowLoadingScreenAdditionalSecsTriggered);         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnPreLoadMapTriggered);                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnPostLoadMapTriggered);                             // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(OnSeamlessTravelStart);                              // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0xA8];                                      // 0x0078   (0x00A8)  MISSED


	/// Functions
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.RemoveLoadingScreenWatcher
	// void RemoveLoadingScreenWatcher(class UObject* Object);                                                                  // [0x8ef4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.K2_SetLoadingScreenCustomText
	// void K2_SetLoadingScreenCustomText(class UObject* WorldContextObject, FString NewText);                                  // [0x8ef2c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.GetLoadingScreenDisplayStatus
	// bool GetLoadingScreenDisplayStatus();                                                                                    // [0x8ef2a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.GetLoadingScreenCustomText
	// FString GetLoadingScreenCustomText();                                                                                    // [0x8ef1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.GetDebugReasonForShowingOrHidingLoadingScreen
	// FString GetDebugReasonForShowingOrHidingLoadingScreen();                                                                 // [0x8ef120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.GetCurrentLoadingMap
	// FString GetCurrentLoadingMap();                                                                                          // [0x8ef060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonLoadingScreen.LoadingScreenManager.AddLoadingScreenWatcher
	// void AddLoadingScreenWatcher(class UObject* Object);                                                                     // [0x8eeef0] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(ULoadingProcessInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULoadingProcessTask) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ULoadingScreenManager) == 0x0120); // 288 bytes (0x000030 - 0x000120)
