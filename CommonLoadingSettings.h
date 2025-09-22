
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Slate
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Enum /Script/CommonLoadingSettings.ESplashScreenType
/// Size: 0x01 (1 bytes)
enum class ESplashScreenType : uint8_t
{
	ESplashScreenType__BLACK                                                         = 0,
	ESplashScreenType__LOADING                                                       = 1,
	ESplashScreenType__IMAGE                                                         = 2
};

/// Class /Script/CommonLoadingSettings.CommonLoadingScreenSettings
/// Size: 0x0110 (272 bytes) (0x000038 - 0x000110) align 8 MaxSize: 0x0110
class UCommonLoadingScreenSettings : public UDeveloperSettings
{ 
public:
	FSoftClassPath                                     LoadingScreenWidget;                                        // 0x0038   (0x0018)  
	int32_t                                            LoadingScreenZOrder;                                        // 0x0050   (0x0004)  
	ESplashScreenType                                  SplashScreenType;                                           // 0x0054   (0x0001)  
	bool                                               bDisableSplashLoadingScreen;                                // 0x0055   (0x0001)  
	bool                                               bForceTickLoadingScreenEvenInEditor;                        // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              ShowLoadingScreenAdditionalSecs;                            // 0x0058   (0x0004)  
	float                                              ShowSplashScreenAdditionalSecs;                             // 0x005C   (0x0004)  
	float                                              LoadingScreenHeartbeatHangDuration;                         // 0x0060   (0x0004)  
	float                                              LogLoadingScreenHeartbeatInterval;                          // 0x0064   (0x0004)  
	TArray<FString>                                    BlockedMapNames;                                            // 0x0068   (0x0010)  
	FSoftObjectPath                                    SplashScreenImage;                                          // 0x0078   (0x0018)  
	TEnumAsByte<EStretch>                              SplashScreenStretch;                                        // 0x0090   (0x0001)  
	TEnumAsByte<EStretchDirection>                     SplashScreenStretchDirection;                               // 0x0091   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0092   (0x0006)  MISSED
	FText                                              SplashScreenLoadingText;                                    // 0x0098   (0x0018)  
	FSlateFontInfo                                     SplashScreenLoadingFont;                                    // 0x00B0   (0x0058)  
	bool                                               bLogLoadingScreenReasonEveryFrame;                          // 0x0108   (0x0001)  
	bool                                               bForceLoadingScreenVisible;                                 // 0x0109   (0x0001)  
	bool                                               bShowLoadingScreenAdditionalSecsEvenInEditor;               // 0x010A   (0x0001)  
	unsigned char                                      UnknownData02_7[0x5];                                       // 0x010B   (0x0005)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UCommonLoadingScreenSettings) == 0x0110); // 272 bytes (0x000038 - 0x000110)
static_assert(offsetof(UCommonLoadingScreenSettings, LoadingScreenWidget) == 0x0038);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenType) == 0x0054);
static_assert(offsetof(UCommonLoadingScreenSettings, BlockedMapNames) == 0x0068);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenImage) == 0x0078);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenStretch) == 0x0090);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenStretchDirection) == 0x0091);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenLoadingText) == 0x0098);
static_assert(offsetof(UCommonLoadingScreenSettings, SplashScreenLoadingFont) == 0x00B0);
