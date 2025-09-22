
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/SunPosition.SunPositionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USunPositionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SunPosition.SunPositionFunctionLibrary.GetSunPosition
	// void GetSunPosition(float Latitude, float Longitude, float Timezone, bool bIsDaylightSavingTime, int32_t Year, int32_t Month, int32_t Day, int32_t Hours, int32_t Minutes, int32_t Seconds, FSunPositionData& SunPositionData); // [0x1aa8170] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/SunPosition.SunPositionData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSunPositionData
{ 
	float                                              Elevation;                                                  // 0x0000   (0x0004)  
	float                                              CorrectedElevation;                                         // 0x0004   (0x0004)  
	float                                              Azimuth;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTimespan                                          SunriseTime;                                                // 0x0010   (0x0008)  
	FTimespan                                          SunsetTime;                                                 // 0x0018   (0x0008)  
	FTimespan                                          SolarNoon;                                                  // 0x0020   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USunPositionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSunPositionData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FSunPositionData, SunriseTime) == 0x0010);
static_assert(offsetof(FSunPositionData, SunsetTime) == 0x0018);
static_assert(offsetof(FSunPositionData, SolarNoon) == 0x0020);
