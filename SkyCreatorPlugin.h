
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

#pragma pack(push, 0x1)

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorStarMapRotationType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorStarMapRotationType : uint8_t
{
	StarMapRotationType_NoRotation                                                   = 0,
	StarMapRotationType_FollowSun                                                    = 1,
	StarMapRotationType_FollowMoon                                                   = 2
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudNoiseDetailResolution
/// Size: 0x01 (1 bytes)
enum class EVolumetricCloudNoiseDetailResolution : uint8_t
{
	VolumetricCloudNoiseDetailResolution                                             = 0,
	VolumetricCloudNoiseDetailResolution2                                            = 1
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudNoiseShapeResolution
/// Size: 0x01 (1 bytes)
enum class EVolumetricCloudNoiseShapeResolution : uint8_t
{
	VolumetricCloudNoiseShapeResolution                                              = 0,
	VolumetricCloudNoiseShapeResolution2                                             = 1,
	VolumetricCloudNoiseShapeResolution3                                             = 2
};

/// Enum /Script/SkyCreatorPlugin.EVolumetricCloudRenderTargetMode
/// Size: 0x01 (1 bytes)
enum class EVolumetricCloudRenderTargetMode : uint8_t
{
	VolumetricCloudRenderTargetMode_Default                                          = 0,
	VolumetricCloudRenderTargetMode_Quality                                          = 1,
	VolumetricCloudRenderTargetMode_Performance                                      = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorMoonPositionType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorMoonPositionType : uint8_t
{
	MoonPositionType_Simple                                                          = 0,
	MoonPositionType_SimpleFixedElevation                                            = 1,
	MoonPositionType_Real                                                            = 2
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorSunPositionType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorSunPositionType : uint8_t
{
	SunPositionType_Simple                                                           = 0,
	SunPositionType_Real                                                             = 1
};

/// Enum /Script/SkyCreatorPlugin.ESkyCreatorEditorWeatherType
/// Size: 0x01 (1 bytes)
enum class ESkyCreatorEditorWeatherType : uint8_t
{
	EditorWeather_WeatherPreset                                                      = 0,
	EditorWeather_WeatherSettings                                                    = 1
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyAtmosphereSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 4 MaxSize: 0x0080
struct FSkyCreatorSkyAtmosphereSettings
{ 
	float                                              RayleighScatteringScale;                                    // 0x0000   (0x0004)  
	FLinearColor                                       RayleighScattering;                                         // 0x0004   (0x0010)  
	float                                              RayleighExponentialDistribution;                            // 0x0014   (0x0004)  
	float                                              MieScatteringScale;                                         // 0x0018   (0x0004)  
	FLinearColor                                       MieScattering;                                              // 0x001C   (0x0010)  
	float                                              MieAbsorptionScale;                                         // 0x002C   (0x0004)  
	FLinearColor                                       MieAbsorption;                                              // 0x0030   (0x0010)  
	float                                              MieAnisotropy;                                              // 0x0040   (0x0004)  
	float                                              MieExponentialDistribution;                                 // 0x0044   (0x0004)  
	float                                              AbsorptionScale;                                            // 0x0048   (0x0004)  
	FLinearColor                                       Absorption;                                                 // 0x004C   (0x0010)  
	FLinearColor                                       SkyLuminanceFactor;                                         // 0x005C   (0x0010)  
	FLinearColor                                       GroundAlbedo;                                               // 0x006C   (0x0010)  
	float                                              HeightFogContribution;                                      // 0x007C   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorVolumetricCloudSettings
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 4 MaxSize: 0x00A8
struct FSkyCreatorVolumetricCloudSettings
{ 
	float                                              StratusCoverage;                                            // 0x0000   (0x0004)  
	float                                              StratusCoverageVariation;                                   // 0x0004   (0x0004)  
	float                                              StratusHeightVariation;                                     // 0x0008   (0x0004)  
	float                                              StratocumulusCoverage;                                      // 0x000C   (0x0004)  
	float                                              StratocumulusCoverageVariation;                             // 0x0010   (0x0004)  
	float                                              StratocumulusHeightVariation;                               // 0x0014   (0x0004)  
	float                                              CumulusCoverage;                                            // 0x0018   (0x0004)  
	float                                              CumulusCoverageVariation;                                   // 0x001C   (0x0004)  
	float                                              CumulusHeightVariation;                                     // 0x0020   (0x0004)  
	float                                              CumulonimbusCoverage;                                       // 0x0024   (0x0004)  
	float                                              CumulonimbusAnvil;                                          // 0x0028   (0x0004)  
	float                                              CumulonimbusHeightVariation;                                // 0x002C   (0x0004)  
	float                                              DensityBottom;                                              // 0x0030   (0x0004)  
	float                                              DensityMiddle;                                              // 0x0034   (0x0004)  
	float                                              DensityTop;                                                 // 0x0038   (0x0004)  
	FLinearColor                                       Albedo;                                                     // 0x003C   (0x0010)  
	FLinearColor                                       GroundAlbedo;                                               // 0x004C   (0x0010)  
	float                                              BeersPowderIntensity;                                       // 0x005C   (0x0004)  
	float                                              BeersPowderDepth;                                           // 0x0060   (0x0004)  
	float                                              BottomOcclusion;                                            // 0x0064   (0x0004)  
	float                                              BottomOcclusionHeight;                                      // 0x0068   (0x0004)  
	FLinearColor                                       NightEmissive;                                              // 0x006C   (0x0010)  
	float                                              PhaseG;                                                     // 0x007C   (0x0004)  
	float                                              PhaseG2;                                                    // 0x0080   (0x0004)  
	float                                              PhaseBlend;                                                 // 0x0084   (0x0004)  
	float                                              MultiScatteringContribution;                                // 0x0088   (0x0004)  
	float                                              MultiScatteringOcclusion;                                   // 0x008C   (0x0004)  
	float                                              MultiScatteringEccentricity;                                // 0x0090   (0x0004)  
	float                                              NoiseShapeIntensityA;                                       // 0x0094   (0x0004)  
	float                                              NoiseShapeIntensityB;                                       // 0x0098   (0x0004)  
	float                                              NoiseShapeIntensityC;                                       // 0x009C   (0x0004)  
	float                                              NoiseShapeIntensityD;                                       // 0x00A0   (0x0004)  
	float                                              TurbulenceIntensity;                                        // 0x00A4   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorBackgroundCloudSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FSkyCreatorBackgroundCloudSettings
{ 
	float                                              BackgroundCloudsIntensity;                                  // 0x0000   (0x0004)  
	FLinearColor                                       BackgroundCloudsColorTint;                                  // 0x0004   (0x0010)  
	float                                              BackgroundCloudsLayerA;                                     // 0x0014   (0x0004)  
	float                                              BackgroundCloudsLayerB;                                     // 0x0018   (0x0004)  
	float                                              BackgroundCloudsLayerC;                                     // 0x001C   (0x0004)  
	float                                              BackgroundCloudsLightningPhase;                             // 0x0020   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSkyLightSettings
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FSkyCreatorSkyLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	float                                              NightIntensity;                                             // 0x0004   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       LowerHemisphereColor;                                       // 0x0018   (0x0010)  
	float                                              CloudAmbientOcclusionStrength;                              // 0x0028   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorSunLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 MaxSize: 0x0048
struct FSkyCreatorSunLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorMoonLightSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 MaxSize: 0x0048
struct FSkyCreatorMoonLightSettings
{ 
	float                                              Intensity;                                                  // 0x0000   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x0004   (0x0010)  
	float                                              Temperature;                                                // 0x0014   (0x0004)  
	float                                              VolumetricScatteringIntensity;                              // 0x0018   (0x0004)  
	FLinearColor                                       AtmosphereDiskColorScale;                                   // 0x001C   (0x0010)  
	FLinearColor                                       CloudScatteredLuminanceScale;                               // 0x002C   (0x0010)  
	float                                              CloudShadowStrength;                                        // 0x003C   (0x0004)  
	float                                              CloudShadowOnAtmosphereStrength;                            // 0x0040   (0x0004)  
	float                                              CloudShadowOnSurfaceStrength;                               // 0x0044   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorExponentialHeightFogSettings
/// Size: 0x0064 (100 bytes) (0x000000 - 0x000064) align 4 MaxSize: 0x0064
struct FSkyCreatorExponentialHeightFogSettings
{ 
	float                                              FogDensity;                                                 // 0x0000   (0x0004)  
	float                                              FogHeightFalloff;                                           // 0x0004   (0x0004)  
	FLinearColor                                       FogInscatteringColor;                                       // 0x0008   (0x0010)  
	float                                              FogStartDistance;                                           // 0x0018   (0x0004)  
	float                                              SecondFogDensity;                                           // 0x001C   (0x0004)  
	float                                              SecondFogHeightFalloff;                                     // 0x0020   (0x0004)  
	float                                              DirectionalInscatteringExponent;                            // 0x0024   (0x0004)  
	float                                              DirectionalInscatteringStartDistance;                       // 0x0028   (0x0004)  
	FLinearColor                                       DirectionalInscatteringColor;                               // 0x002C   (0x0010)  
	float                                              VolumetricFogScatteringDistribution;                        // 0x003C   (0x0004)  
	FLinearColor                                       VolumetricFogAlbedo;                                        // 0x0040   (0x0010)  
	FLinearColor                                       VolumetricFogEmissive;                                      // 0x0050   (0x0010)  
	float                                              VolumetricFogExtinctionScale;                               // 0x0060   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorStarMapSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 4 MaxSize: 0x0048
struct FSkyCreatorStarMapSettings
{ 
	float                                              StarMapIntensity;                                           // 0x0000   (0x0004)  
	FLinearColor                                       StarMapColorTint;                                           // 0x0004   (0x0010)  
	float                                              StarMapTwinkleIntensity;                                    // 0x0014   (0x0004)  
	float                                              StarMapTwinkleSaturation;                                   // 0x0018   (0x0004)  
	float                                              StarMapTwinkleSpeed;                                        // 0x001C   (0x0004)  
	float                                              StarMapHorizonThreshold;                                    // 0x0020   (0x0004)  
	float                                              StarMapAtmosphereThreshold;                                 // 0x0024   (0x0004)  
	FLinearColor                                       NightHorizonColor;                                          // 0x0028   (0x0010)  
	FLinearColor                                       NightZenithColor;                                           // 0x0038   (0x0010)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherFXSettings
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 4 MaxSize: 0x0100
struct FSkyCreatorWeatherFXSettings
{ 
	float                                              RainAmount;                                                 // 0x0000   (0x0004)  
	FLinearColor                                       RainColor;                                                  // 0x0004   (0x0010)  
	float                                              RainGravity;                                                // 0x0014   (0x0004)  
	float                                              RainLifetimeMin;                                            // 0x0018   (0x0004)  
	float                                              RainLifetimeMax;                                            // 0x001C   (0x0004)  
	float                                              RainSizeMin;                                                // 0x0020   (0x0004)  
	float                                              RainSizeMax;                                                // 0x0024   (0x0004)  
	float                                              RainSplashLifetimeMin;                                      // 0x0028   (0x0004)  
	float                                              RainSplashLifetimeMax;                                      // 0x002C   (0x0004)  
	FVector2D                                          RainSplashSizeMin;                                          // 0x0030   (0x0008)  
	FVector2D                                          RainSplashSizeMax;                                          // 0x0038   (0x0008)  
	float                                              SnowAmount;                                                 // 0x0040   (0x0004)  
	FLinearColor                                       SnowColor;                                                  // 0x0044   (0x0010)  
	float                                              SnowGravity;                                                // 0x0054   (0x0004)  
	float                                              SnowTurbulence;                                             // 0x0058   (0x0004)  
	float                                              SnowLifetimeMin;                                            // 0x005C   (0x0004)  
	float                                              SnowLifetimeMax;                                            // 0x0060   (0x0004)  
	float                                              SnowSizeMin;                                                // 0x0064   (0x0004)  
	float                                              SnowSizeMax;                                                // 0x0068   (0x0004)  
	bool                                               EnableLightnings;                                           // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              LightningSpawnIntervalMin;                                  // 0x0070   (0x0004)  
	float                                              LightningSpawnIntervalMax;                                  // 0x0074   (0x0004)  
	FLinearColor                                       LightningColorMin;                                          // 0x0078   (0x0010)  
	FLinearColor                                       LightningColorMax;                                          // 0x0088   (0x0010)  
	float                                              LightningLifetime;                                          // 0x0098   (0x0004)  
	float                                              LightningBoltSpawnChance;                                   // 0x009C   (0x0004)  
	float                                              LightningBoltWidthMin;                                      // 0x00A0   (0x0004)  
	float                                              LightningBoltWidthMax;                                      // 0x00A4   (0x0004)  
	float                                              LightningBoltLengthMin;                                     // 0x00A8   (0x0004)  
	float                                              LightningBoltLengthMax;                                     // 0x00AC   (0x0004)  
	float                                              LightningBoltCurveFrequency;                                // 0x00B0   (0x0004)  
	float                                              LightningBoltCurveStrengthMin;                              // 0x00B4   (0x0004)  
	float                                              LightningBoltCurveStrengthMax;                              // 0x00B8   (0x0004)  
	float                                              LightningBoltJitterStrength;                                // 0x00BC   (0x0004)  
	float                                              LightningBranchSpawnChance;                                 // 0x00C0   (0x0004)  
	float                                              LightningBranchScaleMin;                                    // 0x00C4   (0x0004)  
	float                                              LightningBranchScaleMax;                                    // 0x00C8   (0x0004)  
	float                                              RainbowAmount;                                              // 0x00CC   (0x0004)  
	FLinearColor                                       RainbowColor;                                               // 0x00D0   (0x0010)  
	float                                              RainbowRadius;                                              // 0x00E0   (0x0004)  
	float                                              RainbowThickness;                                           // 0x00E4   (0x0004)  
	FLinearColor                                       SecondaryRainbowColor;                                      // 0x00E8   (0x0010)  
	float                                              SecondaryRainbowRadius;                                     // 0x00F8   (0x0004)  
	float                                              SecondaryRainbowThickness;                                  // 0x00FC   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherMaterialFXSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 4 MaxSize: 0x0068
struct FSkyCreatorWeatherMaterialFXSettings
{ 
	float                                              WetnessAmount;                                              // 0x0000   (0x0004)  
	FLinearColor                                       WetnessColor;                                               // 0x0004   (0x0010)  
	float                                              PuddlesAmount;                                              // 0x0014   (0x0004)  
	FLinearColor                                       PuddlesColor;                                               // 0x0018   (0x0010)  
	float                                              RainRipplesAmount;                                          // 0x0028   (0x0004)  
	float                                              RainRipplesIntensity;                                       // 0x002C   (0x0004)  
	float                                              RainRipplesForceMinRadius;                                  // 0x0030   (0x0004)  
	float                                              RainRipplesForceMaxRadius;                                  // 0x0034   (0x0004)  
	float                                              RainRipplesRingsNumber;                                     // 0x0038   (0x0004)  
	float                                              RainRipplesRingsDelay;                                      // 0x003C   (0x0004)  
	float                                              RainRipplesDamping;                                         // 0x0040   (0x0004)  
	float                                              WindRipplesIntensity;                                       // 0x0044   (0x0004)  
	float                                              WindRipplesSpeed;                                           // 0x0048   (0x0004)  
	float                                              SnowAmount;                                                 // 0x004C   (0x0004)  
	FLinearColor                                       SnowColor;                                                  // 0x0050   (0x0010)  
	float                                              SnowIntensity;                                              // 0x0060   (0x0004)  
	float                                              SnowSparklesThreshold;                                      // 0x0064   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWindSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FSkyCreatorWindSettings
{ 
	float                                              CloudWindDirection;                                         // 0x0000   (0x0004)  
	float                                              CloudWindSpeed;                                             // 0x0004   (0x0004)  
	float                                              CloudNoiseShapeWindDirection;                               // 0x0008   (0x0004)  
	float                                              CloudNoiseShapeWindSpeedHorizontal;                         // 0x000C   (0x0004)  
	float                                              CloudNoiseDetailWindSpeedVertical;                          // 0x0010   (0x0004)  
	float                                              PrecipitationWindDirection;                                 // 0x0014   (0x0004)  
	float                                              PrecipitationWindSpeed;                                     // 0x0018   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorPostProcessSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FSkyCreatorPostProcessSettings
{ 
	float                                              BloomIntensity;                                             // 0x0000   (0x0004)  
	float                                              BloomThreshold;                                             // 0x0004   (0x0004)  
	float                                              ExposureCompensation;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorWeatherSettings
/// Size: 0x0444 (1092 bytes) (0x000000 - 0x000444) align 4 MaxSize: 0x0444
struct FSkyCreatorWeatherSettings
{ 
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0000   (0x0080)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x0080   (0x00A8)  
	FSkyCreatorBackgroundCloudSettings                 BackgroundCloudSettings;                                    // 0x0128   (0x0024)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x014C   (0x002C)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x0178   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x01C0   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x0208   (0x0064)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x026C   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x02B4   (0x0100)  
	FSkyCreatorWeatherMaterialFXSettings               WeatherMaterialFXSettings;                                  // 0x03B4   (0x0068)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x041C   (0x001C)  
	FSkyCreatorPostProcessSettings                     PostProcessSettings;                                        // 0x0438   (0x000C)  
};

/// Struct /Script/SkyCreatorPlugin.CelestialPositionData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCelestialPositionData
{ 
	float                                              Elevation;                                                  // 0x0000   (0x0004)  
	float                                              Azimuth;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/SkyCreatorPlugin.SkyCreatorLightningParameters
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FSkyCreatorLightningParameters
{ 
	FLinearColor                                       position;                                                   // 0x0000   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/SkyCreatorPlugin.SkyCreator
/// Size: 0x1038 (4152 bytes) (0x000220 - 0x001038) align 8 MaxSize: 0x1038
class ASkyCreator : public AActor
{ 
public:
	class USceneComponent*                             Root;                                                       // 0x0220   (0x0008)  
	class UBillboardComponent*                         Billboard;                                                  // 0x0228   (0x0008)  
	class UStaticMeshComponent*                        Compass;                                                    // 0x0230   (0x0008)  
	class USkyAtmosphereComponent*                     SkyAtmosphere;                                              // 0x0238   (0x0008)  
	class UVolumetricCloudComponent*                   VolumetricCloud;                                            // 0x0240   (0x0008)  
	class USkyLightComponent*                          SkyLight;                                                   // 0x0248   (0x0008)  
	class UDirectionalLightComponent*                  SunLight;                                                   // 0x0250   (0x0008)  
	class UDirectionalLightComponent*                  MoonLight;                                                  // 0x0258   (0x0008)  
	class UExponentialHeightFogComponent*              ExponentialHeightFog;                                       // 0x0260   (0x0008)  
	class UPostProcessComponent*                       PostProcess;                                                // 0x0268   (0x0008)  
	class UStaticMeshComponent*                        StarMap;                                                    // 0x0270   (0x0008)  
	class UStaticMeshComponent*                        SunSphere;                                                  // 0x0278   (0x0008)  
	class UStaticMeshComponent*                        MoonSphere;                                                 // 0x0280   (0x0008)  
	class USceneCaptureComponent2D*                    OcclusionCapture;                                           // 0x0288   (0x0008)  
	class UNiagaraComponent*                           WeatherFX;                                                  // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SkySphere;                                                  // 0x0298   (0x0008)  
	class UMaterialInterface*                          SkySphereMaterial;                                          // 0x02A0   (0x0008)  
	class UMaterialInstanceDynamic*                    SkySphereMID;                                               // 0x02A8   (0x0008)  
	bool                                               bUseEditorTimeOfDay;                                        // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	float                                              EditorTimeOfDay;                                            // 0x02B4   (0x0004)  
	bool                                               bUseEditorWeatherSettings;                                  // 0x02B8   (0x0001)  
	TEnumAsByte<ESkyCreatorEditorWeatherType>          EditorWeatherType;                                          // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x02BA   (0x0006)  MISSED
	class USkyCreatorWeatherPreset*                    EditorWeatherPreset;                                        // 0x02C0   (0x0008)  
	FSkyCreatorWeatherSettings                         EditorWeatherSettings;                                      // 0x02C8   (0x0444)  
	bool                                               bIsUsedWithSequencer;                                       // 0x070C   (0x0001)  
	bool                                               bIsEditorTickEnabled;                                       // 0x070D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x070E   (0x0002)  MISSED
	float                                              TimeOfDay;                                                  // 0x0710   (0x0004)  
	FSkyCreatorWeatherSettings                         WeatherSettings;                                            // 0x0714   (0x0444)  
	class UMaterialParameterCollection*                CommonMPC;                                                  // 0x0B58   (0x0008)  
	float                                              SkySphereRadius;                                            // 0x0B60   (0x0004)  
	bool                                               bShowDebugVariables;                                        // 0x0B64   (0x0001)  
	TEnumAsByte<ESkyCreatorSunPositionType>            SunPositionType;                                            // 0x0B65   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0B66   (0x0002)  MISSED
	FCelestialPositionData                             SunPositionData;                                            // 0x0B68   (0x0008)  
	TEnumAsByte<ESkyCreatorMoonPositionType>           MoonPositionType;                                           // 0x0B70   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0B71   (0x0003)  MISSED
	FCelestialPositionData                             MoonPositionData;                                           // 0x0B74   (0x0008)  
	float                                              SunriseTime;                                                // 0x0B7C   (0x0004)  
	float                                              SunsetTime;                                                 // 0x0B80   (0x0004)  
	float                                              SunDawnOffsetTime;                                          // 0x0B84   (0x0004)  
	float                                              SunDuskOffsetTime;                                          // 0x0B88   (0x0004)  
	float                                              SunDawnTime;                                                // 0x0B8C   (0x0004)  
	float                                              SunDuskTime;                                                // 0x0B90   (0x0004)  
	float                                              SunElevation;                                               // 0x0B94   (0x0004)  
	float                                              SunAzimuth;                                                 // 0x0B98   (0x0004)  
	float                                              SunMinAngleAtDawnDusk;                                      // 0x0B9C   (0x0004)  
	float                                              SunFadeInOutTime;                                           // 0x0BA0   (0x0004)  
	float                                              MoonriseTime;                                               // 0x0BA4   (0x0004)  
	float                                              MoonsetTime;                                                // 0x0BA8   (0x0004)  
	float                                              MoonElevation;                                              // 0x0BAC   (0x0004)  
	float                                              MoonAzimuth;                                                // 0x0BB0   (0x0004)  
	float                                              MoonFadeInOutTime;                                          // 0x0BB4   (0x0004)  
	float                                              Latitude;                                                   // 0x0BB8   (0x0004)  
	float                                              Longitude;                                                  // 0x0BBC   (0x0004)  
	float                                              Timezone;                                                   // 0x0BC0   (0x0004)  
	bool                                               bDaylightSavingTime;                                        // 0x0BC4   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0BC5   (0x0003)  MISSED
	int32_t                                            Year;                                                       // 0x0BC8   (0x0004)  
	int32_t                                            Month;                                                      // 0x0BCC   (0x0004)  
	int32_t                                            Day;                                                        // 0x0BD0   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0BD4   (0x0004)  MISSED
	FDateTime                                          Date;                                                       // 0x0BD8   (0x0008)  
	bool                                               bLightTransition;                                           // 0x0BE0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x0BE1   (0x0003)  MISSED
	float                                              SunSurfaceBrightness;                                       // 0x0BE4   (0x0004)  
	float                                              MoonSurfaceBrightness;                                      // 0x0BE8   (0x0004)  
	float                                              SunCurrentElevation;                                        // 0x0BEC   (0x0004)  
	float                                              TransitionStartSunAngle;                                    // 0x0BF0   (0x0004)  
	float                                              TransitionMiddleSunAngle;                                   // 0x0BF4   (0x0004)  
	float                                              TransitionEndSunAngle;                                      // 0x0BF8   (0x0004)  
	float                                              NightIntensityTransitionStartSunAngle;                      // 0x0BFC   (0x0004)  
	float                                              NightIntensityTransitionEndSunAngle;                        // 0x0C00   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SkyAtmosphereMobility;                                      // 0x0C04   (0x0001)  
	ESkyAtmosphereTransformMode                        TransformMode;                                              // 0x0C05   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x0C06   (0x0002)  MISSED
	float                                              PlanetRadius;                                               // 0x0C08   (0x0004)  
	float                                              AtmosphereHeight;                                           // 0x0C0C   (0x0004)  
	float                                              AerialPespectiveViewDistanceScale;                          // 0x0C10   (0x0004)  
	FVector                                            PlanetTopPosition;                                          // 0x0C14   (0x000C)  
	float                                              TraceSampleCountScale;                                      // 0x0C20   (0x0004)  
	float                                              GodRaysResolution;                                          // 0x0C24   (0x0004)  
	float                                              LayerBottomAltitude;                                        // 0x0C28   (0x0004)  
	float                                              LayerHeight;                                                // 0x0C2C   (0x0004)  
	float                                              TracingStartMaxDistance;                                    // 0x0C30   (0x0004)  
	float                                              TracingMaxDistance;                                         // 0x0C34   (0x0004)  
	bool                                               bPerSampleAtmosphericLightTransmittance;                    // 0x0C38   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0C39   (0x0007)  MISSED
	class UMaterialParameterCollection*                VolumetricCloudsMPC;                                        // 0x0C40   (0x0008)  
	FVector                                            LayerBottomAltitudePosition;                                // 0x0C48   (0x000C)  
	FVector                                            LayerTopAltitudePosition;                                   // 0x0C54   (0x000C)  
	class UMaterialInterface*                          CurrentVolumetricCloudMaterial;                             // 0x0C60   (0x0008)  
	class UMaterialInstanceDynamic*                    VolumetricCloudMID;                                         // 0x0C68   (0x0008)  
	class UMaterialInterface*                          VolumetricCloudDensitySampleMaterial;                       // 0x0C70   (0x0008)  
	class UMaterialInstanceDynamic*                    VolumetricCloudDensitySampleMID;                            // 0x0C78   (0x0008)  
	class UTextureRenderTarget2D*                      VolumetricCloudDensitySampleRT;                             // 0x0C80   (0x0008)  
	bool                                               bCinematicQuality;                                          // 0x0C88   (0x0001)  
	TEnumAsByte<EVolumetricCloudRenderTargetMode>      RenderMode;                                                 // 0x0C89   (0x0001)  
	bool                                               bHighQualityAerialPerspective;                              // 0x0C8A   (0x0001)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x0C8B   (0x0001)  MISSED
	int32_t                                            MultiScatteringApproximationOctaveCount;                    // 0x0C8C   (0x0004)  
	bool                                               bGroundContribution;                                        // 0x0C90   (0x0001)  
	bool                                               bRayMarchVolumeShadow;                                      // 0x0C91   (0x0001)  
	unsigned char                                      UnknownData11_6[0x2];                                       // 0x0C92   (0x0002)  MISSED
	float                                              ViewSampleCountScale;                                       // 0x0C94   (0x0004)  
	float                                              ReflectionSampleCountScale;                                 // 0x0C98   (0x0004)  
	float                                              ShadowViewSampleCountScale;                                 // 0x0C9C   (0x0004)  
	float                                              ShadowReflectionSampleCountScale;                           // 0x0CA0   (0x0004)  
	float                                              ShadowTracingDistance;                                      // 0x0CA4   (0x0004)  
	float                                              CloudMapScale;                                              // 0x0CA8   (0x0004)  
	FVector2D                                          CloudMapOffset;                                             // 0x0CAC   (0x0008)  
	float                                              CoverageVariationMapScale;                                  // 0x0CB4   (0x0004)  
	TEnumAsByte<EVolumetricCloudNoiseShapeResolution>  NoiseShapeResolution;                                       // 0x0CB8   (0x0001)  
	TEnumAsByte<EVolumetricCloudNoiseDetailResolution> NoiseDetailResolution;                                      // 0x0CB9   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x0CBA   (0x0002)  MISSED
	float                                              NoiseShapeScale;                                            // 0x0CBC   (0x0004)  
	float                                              NoiseDetailScale;                                           // 0x0CC0   (0x0004)  
	float                                              TurbulenceScale;                                            // 0x0CC4   (0x0004)  
	float                                              BackgroundCloudsContrast;                                   // 0x0CC8   (0x0004)  
	float                                              BackgroundCloudsReflectionScale;                            // 0x0CCC   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SkyLightMobility;                                           // 0x0CD0   (0x0001)  
	bool                                               bRealTimeCapture;                                           // 0x0CD1   (0x0001)  
	bool                                               bSkyLightCaptureTimeSlice;                                  // 0x0CD2   (0x0001)  
	bool                                               bLowerHemisphereIsSolidColor;                               // 0x0CD3   (0x0001)  
	bool                                               bCloudAmbientOcclusion;                                     // 0x0CD4   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0CD5   (0x0003)  MISSED
	float                                              CloudAmbientOcclusionExtent;                                // 0x0CD8   (0x0004)  
	float                                              CloudAmbientOcclusionMapResolutionScale;                    // 0x0CDC   (0x0004)  
	float                                              CloudAmbientOcclusionApertureScale;                         // 0x0CE0   (0x0004)  
	TEnumAsByte<EComponentMobility>                    SunLightMobility;                                           // 0x0CE4   (0x0001)  
	bool                                               bControlSunDirection;                                       // 0x0CE5   (0x0001)  
	bool                                               bSunConstantIntensity;                                      // 0x0CE6   (0x0001)  
	unsigned char                                      UnknownData14_6[0x1];                                       // 0x0CE7   (0x0001)  MISSED
	float                                              SunIntensity;                                               // 0x0CE8   (0x0004)  
	float                                              SunCurrentIntensity;                                        // 0x0CEC   (0x0004)  
	bool                                               bSunUseTemperature;                                         // 0x0CF0   (0x0001)  
	unsigned char                                      UnknownData15_6[0x3];                                       // 0x0CF1   (0x0003)  MISSED
	float                                              SunDiskSize;                                                // 0x0CF4   (0x0004)  
	bool                                               bSunConstantAtmosphereDiskColorScale;                       // 0x0CF8   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x0CF9   (0x0003)  MISSED
	FLinearColor                                       SunAtmosphereDiskColorScale;                                // 0x0CFC   (0x0010)  
	bool                                               bSunPerPixelAtmosphereTransmittance;                        // 0x0D0C   (0x0001)  
	unsigned char                                      UnknownData17_6[0x3];                                       // 0x0D0D   (0x0003)  MISSED
	float                                              SunCloudShadowExtent;                                       // 0x0D10   (0x0004)  
	float                                              SunCloudShadowMapResolutionScale;                           // 0x0D14   (0x0004)  
	float                                              SunCloudShadowRaySampleCountScale;                          // 0x0D18   (0x0004)  
	TEnumAsByte<EComponentMobility>                    MoonLightMobility;                                          // 0x0D1C   (0x0001)  
	bool                                               bControlMoonDirection;                                      // 0x0D1D   (0x0001)  
	bool                                               bMoonConstantIntensity;                                     // 0x0D1E   (0x0001)  
	unsigned char                                      UnknownData18_6[0x1];                                       // 0x0D1F   (0x0001)  MISSED
	float                                              MoonIntensity;                                              // 0x0D20   (0x0004)  
	float                                              MoonCurrentIntensity;                                       // 0x0D24   (0x0004)  
	bool                                               bMoonUseTemperature;                                        // 0x0D28   (0x0001)  
	unsigned char                                      UnknownData19_6[0x3];                                       // 0x0D29   (0x0003)  MISSED
	float                                              MoonDiskSize;                                               // 0x0D2C   (0x0004)  
	float                                              MoonRotation;                                               // 0x0D30   (0x0004)  
	float                                              MoonPhase;                                                  // 0x0D34   (0x0004)  
	bool                                               bMoonPhaseLightIntensityScale;                              // 0x0D38   (0x0001)  
	unsigned char                                      UnknownData20_6[0x3];                                       // 0x0D39   (0x0003)  MISSED
	float                                              MoonPhaseLightIntensityMinScale;                            // 0x0D3C   (0x0004)  
	float                                              MoonPhaseLightIntensityMaxScale;                            // 0x0D40   (0x0004)  
	bool                                               bMoonConstantAtmosphereDiskColorScale;                      // 0x0D44   (0x0001)  
	unsigned char                                      UnknownData21_6[0x3];                                       // 0x0D45   (0x0003)  MISSED
	FLinearColor                                       MoonAtmosphereDiskColorScale;                               // 0x0D48   (0x0010)  
	bool                                               bMoonPerPixelAtmosphereTransmittance;                       // 0x0D58   (0x0001)  
	unsigned char                                      UnknownData22_6[0x3];                                       // 0x0D59   (0x0003)  MISSED
	float                                              MoonCloudShadowExtent;                                      // 0x0D5C   (0x0004)  
	float                                              MoonCloudShadowMapResolutionScale;                          // 0x0D60   (0x0004)  
	float                                              MoonCloudShadowRaySampleCountScale;                         // 0x0D64   (0x0004)  
	TEnumAsByte<EComponentMobility>                    ExponentialHeightFogMobility;                               // 0x0D68   (0x0001)  
	bool                                               bEnableExponentialHeightFog;                                // 0x0D69   (0x0001)  
	bool                                               bVolumetricFog;                                             // 0x0D6A   (0x0001)  
	unsigned char                                      UnknownData23_6[0x1];                                       // 0x0D6B   (0x0001)  MISSED
	float                                              FogHeightOffset;                                            // 0x0D6C   (0x0004)  
	float                                              SecondFogHeightOffset;                                      // 0x0D70   (0x0004)  
	unsigned char                                      UnknownData24_6[0x4];                                       // 0x0D74   (0x0004)  MISSED
	class UTexture2D*                                  StarMapTexture;                                             // 0x0D78   (0x0008)  
	TEnumAsByte<ESkyCreatorStarMapRotationType>        StarMapRotationType;                                        // 0x0D80   (0x0001)  
	unsigned char                                      UnknownData25_6[0x3];                                       // 0x0D81   (0x0003)  MISSED
	FVector                                            StarMapAdditionalRotation;                                  // 0x0D84   (0x000C)  
	bool                                               bEnableOcclusionCapture;                                    // 0x0D90   (0x0001)  
	unsigned char                                      UnknownData26_6[0x7];                                       // 0x0D91   (0x0007)  MISSED
	class UTextureRenderTarget2D*                      OcclusionRenderTarget;                                      // 0x0D98   (0x0008)  
	float                                              OcclusionCaptureWidth;                                      // 0x0DA0   (0x0004)  
	float                                              OcclusionCaptureHeight;                                     // 0x0DA4   (0x0004)  
	bool                                               bOcclusionCaptureRealtimeUpdate;                            // 0x0DA8   (0x0001)  
	unsigned char                                      UnknownData27_6[0x3];                                       // 0x0DA9   (0x0003)  MISSED
	float                                              OcclusionCaptureStepDistance;                               // 0x0DAC   (0x0004)  
	float                                              OcclusionCaptureStepSize;                                   // 0x0DB0   (0x0004)  
	float                                              OcclusionBias;                                              // 0x0DB4   (0x0004)  
	int32_t                                            OcclusionBlurSamples;                                       // 0x0DB8   (0x0004)  
	float                                              OcclusionBlurDistance;                                      // 0x0DBC   (0x0004)  
	float                                              OcclusionMaskFadeHardness;                                  // 0x0DC0   (0x0004)  
	FVector                                            CameraLocation;                                             // 0x0DC4   (0x000C)  
	FVector                                            CameraLocationSnapped;                                      // 0x0DD0   (0x000C)  
	FVector                                            OcclusionCurrentLocation;                                   // 0x0DDC   (0x000C)  
	float                                              WeatherFXCutoffWorldHeight;                                 // 0x0DE8   (0x0004)  
	float                                              WeatherFXCutoffSoftness;                                    // 0x0DEC   (0x0004)  
	float                                              PrecipitationSpawnRadius;                                   // 0x0DF0   (0x0004)  
	bool                                               bEnableGPUPrecipitation;                                    // 0x0DF4   (0x0001)  
	unsigned char                                      UnknownData28_6[0x3];                                       // 0x0DF5   (0x0003)  MISSED
	float                                              PrecipitationSpawnRadiusGPU;                                // 0x0DF8   (0x0004)  
	float                                              PrecipitationMaxViewDistance;                               // 0x0DFC   (0x0004)  
	float                                              PrecipitationVerticalCheckDistance;                         // 0x0E00   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     PrecipitationCollisionChannel;                              // 0x0E04   (0x0001)  
	unsigned char                                      UnknownData29_6[0x3];                                       // 0x0E05   (0x0003)  MISSED
	float                                              PrecipitationDepthFadeDistance;                             // 0x0E08   (0x0004)  
	float                                              PrecipitationCameraFadeDistance;                            // 0x0E0C   (0x0004)  
	float                                              PrecipitationCameraFadeOffset;                              // 0x0E10   (0x0004)  
	float                                              RainSpawnRateMaxCPU;                                        // 0x0E14   (0x0004)  
	float                                              RainSpawnRateMaxGPU;                                        // 0x0E18   (0x0004)  
	float                                              RainDistanceScaleFactor;                                    // 0x0E1C   (0x0004)  
	float                                              RainCameraMotionAlignmentScale;                             // 0x0E20   (0x0004)  
	float                                              RainVelocityElongationScale;                                // 0x0E24   (0x0004)  
	float                                              RainMaskHardness;                                           // 0x0E28   (0x0004)  
	float                                              RainSplashSpawnRateMax;                                     // 0x0E2C   (0x0004)  
	float                                              RainSplashSpawnRateMaxGPU;                                  // 0x0E30   (0x0004)  
	float                                              SnowSpawnRateMaxCPU;                                        // 0x0E34   (0x0004)  
	float                                              SnowSpawnRateMaxGPU;                                        // 0x0E38   (0x0004)  
	float                                              SnowDistanceScaleFactor;                                    // 0x0E3C   (0x0004)  
	float                                              SnowCameraMotionAlignmentScale;                             // 0x0E40   (0x0004)  
	float                                              SnowVelocityElongationScale;                                // 0x0E44   (0x0004)  
	float                                              SnowMaskHardness;                                           // 0x0E48   (0x0004)  
	unsigned char                                      UnknownData30_6[0x4];                                       // 0x0E4C   (0x0004)  MISSED
	class UTextureRenderTarget2D*                      LightningsParametersRT;                                     // 0x0E50   (0x0008)  
	TArray<FSkyCreatorLightningParameters>             LightningParameters;                                        // 0x0E58   (0x0010)  
	unsigned char                                      UnknownData31_6[0x8];                                       // 0x0E68   (0x0008)  MISSED
	float                                              CurrentLightningInterval;                                   // 0x0E70   (0x0004)  
	FVector                                            LastLightningPosition;                                      // 0x0E74   (0x000C)  
	TArray<FVector>                                    LightningAvailablePositions;                                // 0x0E80   (0x0010)  
	int32_t                                            LightningCurrentIndex;                                      // 0x0E90   (0x0004)  
	bool                                               bSampleCloudDensity;                                        // 0x0E94   (0x0001)  
	unsigned char                                      UnknownData32_6[0x3];                                       // 0x0E95   (0x0003)  MISSED
	int32_t                                            LightningMaxSamples;                                        // 0x0E98   (0x0004)  
	float                                              LightningSpawnInnerRadius;                                  // 0x0E9C   (0x0004)  
	float                                              LightningSpawnOuterRadius;                                  // 0x0EA0   (0x0004)  
	float                                              LightningRandomDegreeInConeMax;                             // 0x0EA4   (0x0004)  
	float                                              LightningBoltEmissiveScale;                                 // 0x0EA8   (0x0004)  
	unsigned char                                      UnknownData33_6[0xC];                                       // 0x0EAC   (0x000C)  MISSED
	float                                              LightningFlashFadeUpdateRate;                               // 0x0EB8   (0x0004)  
	float                                              LightningFlashFadeDelta;                                    // 0x0EBC   (0x0004)  
	float                                              LightningFlashEmissiveScale;                                // 0x0EC0   (0x0004)  
	float                                              LightningFlashEmissiveReflectionScale;                      // 0x0EC4   (0x0004)  
	float                                              LightningFlashRadiusScale;                                  // 0x0EC8   (0x0004)  
	float                                              LightningFlashFadeSpeed;                                    // 0x0ECC   (0x0004)  
	float                                              RainbowDistance;                                            // 0x0ED0   (0x0004)  
	float                                              RainbowDepthFadeDistance;                                   // 0x0ED4   (0x0004)  
	float                                              MaterialFXCutoffWorldHeight;                                // 0x0ED8   (0x0004)  
	float                                              MaterialFXCutoffSoftness;                                   // 0x0EDC   (0x0004)  
	float                                              WetnessSlopeAngle;                                          // 0x0EE0   (0x0004)  
	float                                              WetnessSlopeSmoothness;                                     // 0x0EE4   (0x0004)  
	float                                              PuddlesMaskScale;                                           // 0x0EE8   (0x0004)  
	float                                              PuddlesRoughness;                                           // 0x0EEC   (0x0004)  
	float                                              PuddlesSlopeAngle;                                          // 0x0EF0   (0x0004)  
	float                                              PuddlesSlopeSmoothness;                                     // 0x0EF4   (0x0004)  
	bool                                               bEnableRainRipplesSolver;                                   // 0x0EF8   (0x0001)  
	bool                                               bPauseRainRipplesSolver;                                    // 0x0EF9   (0x0001)  
	unsigned char                                      UnknownData34_6[0xE];                                       // 0x0EFA   (0x000E)  MISSED
	float                                              RainRipplesUpdateRate;                                      // 0x0F08   (0x0004)  
	float                                              RainRipplesScale;                                           // 0x0F0C   (0x0004)  
	float                                              RainRipplesMaxDensity;                                      // 0x0F10   (0x0004)  
	float                                              WindRipplesScale;                                           // 0x0F14   (0x0004)  
	float                                              RainRipplesSolverDelta;                                     // 0x0F18   (0x0004)  
	int32_t                                            RainRipplesSolverHeightState;                               // 0x0F1C   (0x0004)  
	class UMaterialInterface*                          RainRipplesPropagation;                                     // 0x0F20   (0x0008)  
	class UMaterialInstanceDynamic*                    RainRipplesPropagationMID;                                  // 0x0F28   (0x0008)  
	class UMaterialInterface*                          RainRipplesForce;                                           // 0x0F30   (0x0008)  
	class UMaterialInterface*                          RainRipplesNormal;                                          // 0x0F38   (0x0008)  
	class UMaterialInstanceDynamic*                    RainRipplesNormalMID;                                       // 0x0F40   (0x0008)  
	class UTextureRenderTarget2D*                      RainRipplesPropagationFrame0;                               // 0x0F48   (0x0008)  
	class UTextureRenderTarget2D*                      RainRipplesPropagationFrame1;                               // 0x0F50   (0x0008)  
	class UTextureRenderTarget2D*                      RainRipplesPropagationFrame2;                               // 0x0F58   (0x0008)  
	class UTextureRenderTarget2D*                      RainRipplesNormalRT;                                        // 0x0F60   (0x0008)  
	float                                              SnowMaskScale;                                              // 0x0F68   (0x0004)  
	float                                              SnowScale;                                                  // 0x0F6C   (0x0004)  
	float                                              SnowRoughness;                                              // 0x0F70   (0x0004)  
	float                                              SnowSparklesScale;                                          // 0x0F74   (0x0004)  
	float                                              SnowSparklesRoughness;                                      // 0x0F78   (0x0004)  
	float                                              SnowSlopeAngle;                                             // 0x0F7C   (0x0004)  
	float                                              SnowSlopeSmoothness;                                        // 0x0F80   (0x0004)  
	bool                                               bEnableWind;                                                // 0x0F84   (0x0001)  
	bool                                               bIndependentWindControl;                                    // 0x0F85   (0x0001)  
	unsigned char                                      UnknownData35_6[0x2];                                       // 0x0F86   (0x0002)  MISSED
	FSkyCreatorWindSettings                            EditorIndependentWindSettings;                              // 0x0F88   (0x001C)  
	float                                              CloudWindSkewAmount;                                        // 0x0FA4   (0x0004)  
	FVector                                            CloudWindOffset;                                            // 0x0FA8   (0x000C)  
	FVector                                            CloudWindSkewDirection;                                     // 0x0FB4   (0x000C)  
	float                                              CloudWindSkewForce;                                         // 0x0FC0   (0x0004)  
	FVector                                            CloudNoiseShapeWindOffset;                                  // 0x0FC4   (0x000C)  
	FVector                                            CloudNoiseDetailWindOffset;                                 // 0x0FD0   (0x000C)  
	bool                                               bUseExposureSettings;                                       // 0x0FDC   (0x0001)  
	bool                                               bExtendDefaultLuminanceRange;                               // 0x0FDD   (0x0001)  
	unsigned char                                      UnknownData36_6[0x2];                                       // 0x0FDE   (0x0002)  MISSED
	float                                              PostProcessPriority;                                        // 0x0FE0   (0x0004)  
	TEnumAsByte<EAutoExposureMethod>                   ExposureMethod;                                             // 0x0FE4   (0x0001)  
	unsigned char                                      UnknownData37_6[0x3];                                       // 0x0FE5   (0x0003)  MISSED
	class UCurveFloat*                                 ExposureBiasCurve;                                          // 0x0FE8   (0x0008)  
	class UTexture*                                    ExposureMeterMask;                                          // 0x0FF0   (0x0008)  
	float                                              ExposureMinBrightness;                                      // 0x0FF8   (0x0004)  
	float                                              ExposureMaxBrightness;                                      // 0x0FFC   (0x0004)  
	float                                              ExposureMinEV100;                                           // 0x1000   (0x0004)  
	float                                              ExposureMaxEV100;                                           // 0x1004   (0x0004)  
	float                                              ExposureSpeedUp;                                            // 0x1008   (0x0004)  
	float                                              ExposureSpeedDown;                                          // 0x100C   (0x0004)  
	float                                              ExposureLowPercent;                                         // 0x1010   (0x0004)  
	float                                              ExposureHighPercent;                                        // 0x1014   (0x0004)  
	float                                              ExposureHistogramLogMin;                                    // 0x1018   (0x0004)  
	float                                              ExposureHistogramLogMax;                                    // 0x101C   (0x0004)  
	float                                              ExposureHistogramMinEV100;                                  // 0x1020   (0x0004)  
	float                                              ExposureHistogramMaxEV100;                                  // 0x1024   (0x0004)  
	SDK_UNDEFINED(16,528) /* FMulticastInlineDelegate */ __um(OnLightningStrike);                                  // 0x1028   (0x0010)  


	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreator.UpdateSettingsSequencer
	// void UpdateSettingsSequencer();                                                                                          // [0x1a7a2a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SpawnLightningStrike
	// void SpawnLightningStrike(FVector LightningPosition);                                                                    // [0x1a7a210] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetYear
	// void SetYear(int32_t NewValue);                                                                                          // [0x1a7a0f0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindSettings
	// void SetWindSettings(FSkyCreatorWindSettings InWindSettings);                                                            // [0x1a7a030] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWindIndependentSettings
	// void SetWindIndependentSettings(FSkyCreatorWindSettings InWindSettings);                                                 // [0x1a79f70] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherSettings
	// void SetWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettings);                                                   // [0x1a79e50] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherMaterialFXSettings
	// void SetWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettings);                     // [0x1a79d20] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetWeatherFXSettings
	// void SetWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettings);                                             // [0x1a79c20] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetVolumetricCloudSettings
	// void SetVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettings);                           // [0x1a79b10] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetTimeZone
	// void SetTimeZone(float NewValue);                                                                                        // [0x1a79a90] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetTime
	// void SetTime(float InTime);                                                                                              // [0x1a79a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunSimplePositionSettings
	// void SetSunSimplePositionSettings(float InSunriseTime, float InSunsetTime, float InSunElevation, float InSunAzimuth);    // [0x1a797b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunsetTime
	// void SetSunsetTime(float NewValue);                                                                                      // [0x1a79990] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunriseTime
	// void SetSunriseTime(float NewValue);                                                                                     // [0x1a79910] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunMinAngleAtDawnDusk
	// void SetSunMinAngleAtDawnDusk(float NewValue);                                                                           // [0x1a79730] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunLightSettings
	// void SetSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettings);                                                // [0x1a79620] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunIntensity
	// void SetSunIntensity(float NewValue);                                                                                    // [0x1a795a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunElevation
	// void SetSunElevation(float NewValue);                                                                                    // [0x1a79520] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDuskOffsetTime
	// void SetSunDuskOffsetTime(float NewValue);                                                                               // [0x1a794a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDiskSize
	// void SetSunDiskSize(float NewValue);                                                                                     // [0x1a79420] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunDawnOffsetTime
	// void SetSunDawnOffsetTime(float NewValue);                                                                               // [0x1a793a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunAzimuth
	// void SetSunAzimuth(float NewValue);                                                                                      // [0x1a79320] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSunAtmosphereDiskColorScale
	// void SetSunAtmosphereDiskColorScale(FLinearColor NewValue);                                                              // [0x1a79290] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapSettings
	// void SetStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettings);                                                   // [0x1a79180] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetStarMapAdditionalRotation
	// void SetStarMapAdditionalRotation(FVector NewValue);                                                                     // [0x1a790f0] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyLightSettings
	// void SetSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettings);                                                // [0x1a79000] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetSkyAtmosphereSettings
	// void SetSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettings);                                 // [0x1a78f00] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetRealPositionSettings
	// void SetRealPositionSettings(float InLatitude, float InLongitude, float InTimeZone, bool InbDaylightSavingTime, int32_t InYear, int32_t InMonth, int32_t InDay); // [0x1a78cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetPostProcessSettings
	// void SetPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettings);                                       // [0x1a78c10] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonSimplePositionSettings
	// void SetMoonSimplePositionSettings(float InMoonriseTime, float InMoonsetTime, float InMoonElevation, float InMoonAzimuth); // [0x1a789b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonsetTime
	// void SetMoonsetTime(float NewValue);                                                                                     // [0x1a78b90] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonRotation
	// void SetMoonRotation(float NewValue);                                                                                    // [0x1a78930] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonriseTime
	// void SetMoonriseTime(float NewValue);                                                                                    // [0x1a78b10] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonPhase
	// void SetMoonPhase(float NewValue);                                                                                       // [0x1a788b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonLightSettings
	// void SetMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettings);                                             // [0x1a787a0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonIntensity
	// void SetMoonIntensity(float NewValue);                                                                                   // [0x1a78720] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonElevation
	// void SetMoonElevation(float NewValue);                                                                                   // [0x1a786a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonDiskSize
	// void SetMoonDiskSize(float NewValue);                                                                                    // [0x1a78620] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonAzimuth
	// void SetMoonAzimuth(float NewValue);                                                                                     // [0x1a785a0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMoonAtmosphereDiskColorScale
	// void SetMoonAtmosphereDiskColorScale(FLinearColor NewValue);                                                             // [0x1a78510] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetMonth
	// void SetMonth(int32_t NewValue);                                                                                         // [0x1a78480] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLongitude
	// void SetLongitude(float NewValue);                                                                                       // [0x1a78400] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLayerHeight
	// void SetLayerHeight(float NewValue);                                                                                     // [0x1a78380] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLayerBottomAltitude
	// void SetLayerBottomAltitude(float NewValue);                                                                             // [0x1a78300] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetLatitude
	// void SetLatitude(float NewValue);                                                                                        // [0x1a78280] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetExponentialHeightFogSettings
	// void SetExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettings);            // [0x1a78150] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorWeatherSettings
	// void SetEditorWeatherSettings(FSkyCreatorWeatherSettings NewValue);                                                      // [0x1a78030] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorWeatherPreset
	// void SetEditorWeatherPreset(class USkyCreatorWeatherPreset* NewValue);                                                   // [0x1a77fa0] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetEditorTimeOfDay
	// void SetEditorTimeOfDay(float NewValue);                                                                                 // [0x1a77f20] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetDay
	// void SetDay(int32_t NewValue);                                                                                           // [0x1a77e90] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetCloudMapOffset
	// void SetCloudMapOffset(FVector2D NewValue);                                                                              // [0x1a77e10] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetbDaylightSavingTime
	// void SetbDaylightSavingTime(bool NewValue);                                                                              // [0x1a7a180] Final|Native|Public  
	// Function /Script/SkyCreatorPlugin.SkyCreator.SetBackgroundCloudSettings
	// void SetBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettings);                           // [0x1a77d40] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.RealtimeTimeOfDay
	// void RealtimeTimeOfDay(float DeltaSeconds, float DayCycleDuration);                                                      // [0x1a77c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateWeather
	// void OnRep_UpdateWeather();                                                                                              // [0x1a77c50] Final|Native|Private 
	// Function /Script/SkyCreatorPlugin.SkyCreator.OnRep_UpdateTime
	// void OnRep_UpdateTime();                                                                                                 // [0x1a77c30] Final|Native|Private 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindSettings
	// void LerpWindSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha);    // [0x1a77ac0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWindIndependentSettings
	// void LerpWindIndependentSettings(FSkyCreatorWindSettings InWindSettingsA, FSkyCreatorWindSettings InWindSettingsB, float Alpha); // [0x1a77950] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWetnessAmount
	// void LerpWetnessAmount(float WetnessAmountA, float WetnessAmountB, float Alpha);                                         // [0x1a77830] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherSettings
	// void LerpWeatherSettings(FSkyCreatorWeatherSettings InWeatherSettingsA, FSkyCreatorWeatherSettings InWeatherSettingsB, float Alpha); // [0x1a775d0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherMaterialFXSettings
	// void LerpWeatherMaterialFXSettings(FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsA, FSkyCreatorWeatherMaterialFXSettings InWeatherMaterialFXSettingsB, float Alpha); // [0x1a77370] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpWeatherFXSettings
	// void LerpWeatherFXSettings(FSkyCreatorWeatherFXSettings InWeatherFXSettingsA, FSkyCreatorWeatherFXSettings InWeatherFXSettingsB, float Alpha); // [0x1a77150] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpVolumetricCloudSettings
	// void LerpVolumetricCloudSettings(FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsA, FSkyCreatorVolumetricCloudSettings InVolumetricCloudSettingsB, float Alpha); // [0x1a76f20] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSunLightSettings
	// void LerpSunLightSettings(FSkyCreatorSunLightSettings InSunLightSettingsA, FSkyCreatorSunLightSettings InSunLightSettingsB, float Alpha); // [0x1a76d30] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpStarMapSettings
	// void LerpStarMapSettings(FSkyCreatorStarMapSettings InStarMapSettingsA, FSkyCreatorStarMapSettings InStarMapSettingsB, float Alpha); // [0x1a76b40] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSnowAmount
	// void LerpSnowAmount(float SnowAmountA, float SnowAmountB, float Alpha);                                                  // [0x1a76a20] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyLightSettings
	// void LerpSkyLightSettings(FSkyCreatorSkyLightSettings InSkyLightSettingsA, FSkyCreatorSkyLightSettings InSkyLightSettingsB, float Alpha); // [0x1a76870] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpSkyAtmosphereSettings
	// void LerpSkyAtmosphereSettings(FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsA, FSkyCreatorSkyAtmosphereSettings InSkyAtmosphereSettingsB, float Alpha); // [0x1a76690] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpPuddlesAmount
	// void LerpPuddlesAmount(float PuddlesAmountA, float PuddlesAmountB, float Alpha);                                         // [0x1a76570] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpPostProcessSettings
	// void LerpPostProcessSettings(FSkyCreatorPostProcessSettings InPostProcessSettingsA, FSkyCreatorPostProcessSettings InPostProcessSettingsB, float Alpha); // [0x1a76410] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpMoonLightSettings
	// void LerpMoonLightSettings(FSkyCreatorMoonLightSettings InMoonLightSettingsA, FSkyCreatorMoonLightSettings InMoonLightSettingsB, float Alpha); // [0x1a76220] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpExponentialHeightFogSettings
	// void LerpExponentialHeightFogSettings(FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsA, FSkyCreatorExponentialHeightFogSettings InExponentialHeightFogSettingsB, float Alpha); // [0x1a75fc0] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.LerpBackgroundCloudSettings
	// void LerpBackgroundCloudSettings(FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsA, FSkyCreatorBackgroundCloudSettings InBackgroundCloudSettingsB, float Alpha); // [0x1a75e40] Native|Public|BlueprintCallable 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWindSettings
	// FSkyCreatorWindSettings GetWindSettings();                                                                               // [0x1a75df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherSettings
	// FSkyCreatorWeatherSettings GetWeatherSettings();                                                                         // [0x1a75d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherMaterialFXSettings
	// FSkyCreatorWeatherMaterialFXSettings GetWeatherMaterialFXSettings();                                                     // [0x1a75cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetWeatherFXSettings
	// FSkyCreatorWeatherFXSettings GetWeatherFXSettings();                                                                     // [0x1a75c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetVolumetricCloudSettings
	// FSkyCreatorVolumetricCloudSettings GetVolumetricCloudSettings();                                                         // [0x1a75ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetTime
	// float GetTime();                                                                                                         // [0x1a75b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunPosition
	// FRotator GetSunPosition(float Time);                                                                                     // [0x1a75ad0] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSunLightSettings
	// FSkyCreatorSunLightSettings GetSunLightSettings();                                                                       // [0x1a75a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapSettings
	// FSkyCreatorStarMapSettings GetStarMapSettings();                                                                         // [0x1a75a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetStarMapRotation
	// FRotator GetStarMapRotation();                                                                                           // [0x1a759d0] Final|Native|Public|HasDefaults|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyLightSettings
	// FSkyCreatorSkyLightSettings GetSkyLightSettings();                                                                       // [0x1a75980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetSkyAtmosphereSettings
	// FSkyCreatorSkyAtmosphereSettings GetSkyAtmosphereSettings();                                                             // [0x1a75900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetPostProcessSettings
	// FSkyCreatorPostProcessSettings GetPostProcessSettings();                                                                 // [0x1a758c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPosition
	// FRotator GetMoonPosition(float Time);                                                                                    // [0x1a75820] Final|Native|Public|HasDefaults 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonPhase
	// float GetMoonPhase();                                                                                                    // [0x1a757f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetMoonLightSettings
	// FSkyCreatorMoonLightSettings GetMoonLightSettings();                                                                     // [0x1a75790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetLastLightningPosition
	// FVector GetLastLightningPosition();                                                                                      // [0x1a75750] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetExponentialHeightFogSettings
	// FSkyCreatorExponentialHeightFogSettings GetExponentialHeightFogSettings();                                               // [0x1a756e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetCloudDensityAtPosition
	// float GetCloudDensityAtPosition(FVector position);                                                                       // [0x1a75640] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreator.GetBackgroundCloudSettings
	// FSkyCreatorBackgroundCloudSettings GetBackgroundCloudSettings();                                                         // [0x1a755f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SkyCreatorPlugin.SkyCreator.FindLightningPosition
	// bool FindLightningPosition(FVector position, FVector& OutPosition);                                                      // [0x1a75500] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USkyCreatorFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.KilometersToCentimeters
	// float KilometersToCentimeters(float Value);                                                                              // [0x1a7d6e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.IsApplicationForegroundNow
	// bool IsApplicationForegroundNow();                                                                                       // [0x1a7d6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealSunPosition
	// FCelestialPositionData GetRealSunPosition(float Latitude, float Longitude, float Timezone, bool bIsDaylightSavingTime, FDateTime DateTime); // [0x1a7d450] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetRealMoonPosition
	// FCelestialPositionData GetRealMoonPosition(float Latitude, float Longitude, float Timezone, bool bIsDaylightSavingTime, FDateTime DateTime); // [0x1a7d2a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.GetCloudDensityAtPosition
	// float GetCloudDensityAtPosition(class UObject* WorldContextObject, FVector position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget); // [0x1a7d0e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.FindLightningPosition
	// bool FindLightningPosition(class UObject* WorldContextObject, bool bSampleCloudDensity, int32_t Samples, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget, FVector position, float InnerRadius, float OuterRadius, float MinHeight, float MaxHeight, float DensityThreshold, FVector& OutPosition); // [0x1a7cd10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.ElevationRefraction
	// double ElevationRefraction(double F);                                                                                    // [0x1a7cc80] Final|Native|Static|Private 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.DynamicConvertRenderTargetToTexture2D
	// class UTexture2D* DynamicConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget);                     // [0x1a7cbe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.CreateAndAssignMID
	// void CreateAndAssignMID(class UObject* WorldContextObject, class UMaterialInterface* InMaterial, class UMaterialInstanceDynamic*& InMID); // [0x1a7cad0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.ConvertRenderTargetToTexture2D
	// void ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget, class UTexture2D*& Texture);             // [0x1a7ca00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.CheckCloudDensityAtPosition
	// bool CheckCloudDensityAtPosition(class UObject* WorldContextObject, FVector position, class UMaterialParameterCollection* ParameterCollection, class UMaterialInterface* Material, class UTextureRenderTarget2D* RenderTarget); // [0x1a7c840] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/SkyCreatorPlugin.SkyCreatorFunctionLibrary.CentimetersToKilometers
	// float CentimetersToKilometers(float Value);                                                                              // [0x1a7c7b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset
/// Size: 0x0490 (1168 bytes) (0x000030 - 0x000490) align 8 MaxSize: 0x0490
class USkyCreatorWeatherPreset : public UDataAsset
{ 
public:
	FText                                              Description;                                                // 0x0030   (0x0018)  
	FSkyCreatorSkyAtmosphereSettings                   SkyAtmosphereSettings;                                      // 0x0048   (0x0080)  
	FSkyCreatorVolumetricCloudSettings                 VolumetricCloudSettings;                                    // 0x00C8   (0x00A8)  
	FSkyCreatorBackgroundCloudSettings                 BackgroundCloudSettings;                                    // 0x0170   (0x0024)  
	FSkyCreatorSkyLightSettings                        SkyLightSettings;                                           // 0x0194   (0x002C)  
	FSkyCreatorSunLightSettings                        SunLightSettings;                                           // 0x01C0   (0x0048)  
	FSkyCreatorMoonLightSettings                       MoonLightSettings;                                          // 0x0208   (0x0048)  
	FSkyCreatorExponentialHeightFogSettings            ExponentialHeightFogSettings;                               // 0x0250   (0x0064)  
	FSkyCreatorStarMapSettings                         StarMapSettings;                                            // 0x02B4   (0x0048)  
	FSkyCreatorWeatherFXSettings                       WeatherFXSettings;                                          // 0x02FC   (0x0100)  
	FSkyCreatorWeatherMaterialFXSettings               WeatherMaterialFXSettings;                                  // 0x03FC   (0x0068)  
	FSkyCreatorWindSettings                            WindSettings;                                               // 0x0464   (0x001C)  
	FSkyCreatorPostProcessSettings                     PostProcessSettings;                                        // 0x0480   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x048C   (0x0004)  MISSED


	/// Functions
	// Function /Script/SkyCreatorPlugin.SkyCreatorWeatherPreset.GetWeatherPresetSettings
	// FSkyCreatorWeatherSettings GetWeatherPresetSettings();                                                                   // [0x1a7d600] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

#pragma pack(pop)


static_assert(sizeof(FSkyCreatorSkyAtmosphereSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FSkyCreatorVolumetricCloudSettings) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FSkyCreatorBackgroundCloudSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FSkyCreatorSkyLightSettings) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FSkyCreatorSunLightSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorMoonLightSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorExponentialHeightFogSettings) == 0x0064); // 100 bytes (0x000000 - 0x000064)
static_assert(sizeof(FSkyCreatorStarMapSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FSkyCreatorWeatherFXSettings) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(FSkyCreatorWeatherMaterialFXSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FSkyCreatorWindSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FSkyCreatorPostProcessSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSkyCreatorWeatherSettings) == 0x0444); // 1092 bytes (0x000000 - 0x000444)
static_assert(sizeof(FCelestialPositionData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSkyCreatorLightningParameters) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(ASkyCreator) == 0x1038); // 4152 bytes (0x000220 - 0x001038)
static_assert(sizeof(USkyCreatorFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USkyCreatorWeatherPreset) == 0x0490); // 1168 bytes (0x000030 - 0x000490)
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, RayleighScattering) == 0x0004);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, MieScattering) == 0x001C);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, MieAbsorption) == 0x0030);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, Absorption) == 0x004C);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, SkyLuminanceFactor) == 0x005C);
static_assert(offsetof(FSkyCreatorSkyAtmosphereSettings, GroundAlbedo) == 0x006C);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, Albedo) == 0x003C);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, GroundAlbedo) == 0x004C);
static_assert(offsetof(FSkyCreatorVolumetricCloudSettings, NightEmissive) == 0x006C);
static_assert(offsetof(FSkyCreatorBackgroundCloudSettings, BackgroundCloudsColorTint) == 0x0004);
static_assert(offsetof(FSkyCreatorSkyLightSettings, LightColor) == 0x0008);
static_assert(offsetof(FSkyCreatorSkyLightSettings, LowerHemisphereColor) == 0x0018);
static_assert(offsetof(FSkyCreatorSunLightSettings, LightColor) == 0x0004);
static_assert(offsetof(FSkyCreatorSunLightSettings, AtmosphereDiskColorScale) == 0x001C);
static_assert(offsetof(FSkyCreatorSunLightSettings, CloudScatteredLuminanceScale) == 0x002C);
static_assert(offsetof(FSkyCreatorMoonLightSettings, LightColor) == 0x0004);
static_assert(offsetof(FSkyCreatorMoonLightSettings, AtmosphereDiskColorScale) == 0x001C);
static_assert(offsetof(FSkyCreatorMoonLightSettings, CloudScatteredLuminanceScale) == 0x002C);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, FogInscatteringColor) == 0x0008);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, DirectionalInscatteringColor) == 0x002C);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, VolumetricFogAlbedo) == 0x0040);
static_assert(offsetof(FSkyCreatorExponentialHeightFogSettings, VolumetricFogEmissive) == 0x0050);
static_assert(offsetof(FSkyCreatorStarMapSettings, StarMapColorTint) == 0x0004);
static_assert(offsetof(FSkyCreatorStarMapSettings, NightHorizonColor) == 0x0028);
static_assert(offsetof(FSkyCreatorStarMapSettings, NightZenithColor) == 0x0038);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainColor) == 0x0004);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainSplashSizeMin) == 0x0030);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainSplashSizeMax) == 0x0038);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, SnowColor) == 0x0044);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, LightningColorMin) == 0x0078);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, LightningColorMax) == 0x0088);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, RainbowColor) == 0x00D0);
static_assert(offsetof(FSkyCreatorWeatherFXSettings, SecondaryRainbowColor) == 0x00E8);
static_assert(offsetof(FSkyCreatorWeatherMaterialFXSettings, WetnessColor) == 0x0004);
static_assert(offsetof(FSkyCreatorWeatherMaterialFXSettings, PuddlesColor) == 0x0018);
static_assert(offsetof(FSkyCreatorWeatherMaterialFXSettings, SnowColor) == 0x0050);
static_assert(offsetof(FSkyCreatorWeatherSettings, SkyAtmosphereSettings) == 0x0000);
static_assert(offsetof(FSkyCreatorWeatherSettings, VolumetricCloudSettings) == 0x0080);
static_assert(offsetof(FSkyCreatorWeatherSettings, BackgroundCloudSettings) == 0x0128);
static_assert(offsetof(FSkyCreatorWeatherSettings, SkyLightSettings) == 0x014C);
static_assert(offsetof(FSkyCreatorWeatherSettings, SunLightSettings) == 0x0178);
static_assert(offsetof(FSkyCreatorWeatherSettings, MoonLightSettings) == 0x01C0);
static_assert(offsetof(FSkyCreatorWeatherSettings, ExponentialHeightFogSettings) == 0x0208);
static_assert(offsetof(FSkyCreatorWeatherSettings, StarMapSettings) == 0x026C);
static_assert(offsetof(FSkyCreatorWeatherSettings, WeatherFXSettings) == 0x02B4);
static_assert(offsetof(FSkyCreatorWeatherSettings, WeatherMaterialFXSettings) == 0x03B4);
static_assert(offsetof(FSkyCreatorWeatherSettings, WindSettings) == 0x041C);
static_assert(offsetof(FSkyCreatorWeatherSettings, PostProcessSettings) == 0x0438);
static_assert(offsetof(FSkyCreatorLightningParameters, position) == 0x0000);
static_assert(offsetof(FSkyCreatorLightningParameters, Color) == 0x0010);
static_assert(offsetof(ASkyCreator, Root) == 0x0220);
static_assert(offsetof(ASkyCreator, Billboard) == 0x0228);
static_assert(offsetof(ASkyCreator, Compass) == 0x0230);
static_assert(offsetof(ASkyCreator, SkyAtmosphere) == 0x0238);
static_assert(offsetof(ASkyCreator, VolumetricCloud) == 0x0240);
static_assert(offsetof(ASkyCreator, SkyLight) == 0x0248);
static_assert(offsetof(ASkyCreator, SunLight) == 0x0250);
static_assert(offsetof(ASkyCreator, MoonLight) == 0x0258);
static_assert(offsetof(ASkyCreator, ExponentialHeightFog) == 0x0260);
static_assert(offsetof(ASkyCreator, PostProcess) == 0x0268);
static_assert(offsetof(ASkyCreator, StarMap) == 0x0270);
static_assert(offsetof(ASkyCreator, SunSphere) == 0x0278);
static_assert(offsetof(ASkyCreator, MoonSphere) == 0x0280);
static_assert(offsetof(ASkyCreator, OcclusionCapture) == 0x0288);
static_assert(offsetof(ASkyCreator, WeatherFX) == 0x0290);
static_assert(offsetof(ASkyCreator, SkySphere) == 0x0298);
static_assert(offsetof(ASkyCreator, SkySphereMaterial) == 0x02A0);
static_assert(offsetof(ASkyCreator, SkySphereMID) == 0x02A8);
static_assert(offsetof(ASkyCreator, EditorWeatherType) == 0x02B9);
static_assert(offsetof(ASkyCreator, EditorWeatherPreset) == 0x02C0);
static_assert(offsetof(ASkyCreator, EditorWeatherSettings) == 0x02C8);
static_assert(offsetof(ASkyCreator, WeatherSettings) == 0x0714);
static_assert(offsetof(ASkyCreator, CommonMPC) == 0x0B58);
static_assert(offsetof(ASkyCreator, SunPositionType) == 0x0B65);
static_assert(offsetof(ASkyCreator, SunPositionData) == 0x0B68);
static_assert(offsetof(ASkyCreator, MoonPositionType) == 0x0B70);
static_assert(offsetof(ASkyCreator, MoonPositionData) == 0x0B74);
static_assert(offsetof(ASkyCreator, Date) == 0x0BD8);
static_assert(offsetof(ASkyCreator, SkyAtmosphereMobility) == 0x0C04);
static_assert(offsetof(ASkyCreator, TransformMode) == 0x0C05);
static_assert(offsetof(ASkyCreator, PlanetTopPosition) == 0x0C14);
static_assert(offsetof(ASkyCreator, VolumetricCloudsMPC) == 0x0C40);
static_assert(offsetof(ASkyCreator, LayerBottomAltitudePosition) == 0x0C48);
static_assert(offsetof(ASkyCreator, LayerTopAltitudePosition) == 0x0C54);
static_assert(offsetof(ASkyCreator, CurrentVolumetricCloudMaterial) == 0x0C60);
static_assert(offsetof(ASkyCreator, VolumetricCloudMID) == 0x0C68);
static_assert(offsetof(ASkyCreator, VolumetricCloudDensitySampleMaterial) == 0x0C70);
static_assert(offsetof(ASkyCreator, VolumetricCloudDensitySampleMID) == 0x0C78);
static_assert(offsetof(ASkyCreator, VolumetricCloudDensitySampleRT) == 0x0C80);
static_assert(offsetof(ASkyCreator, RenderMode) == 0x0C89);
static_assert(offsetof(ASkyCreator, CloudMapOffset) == 0x0CAC);
static_assert(offsetof(ASkyCreator, NoiseShapeResolution) == 0x0CB8);
static_assert(offsetof(ASkyCreator, NoiseDetailResolution) == 0x0CB9);
static_assert(offsetof(ASkyCreator, SkyLightMobility) == 0x0CD0);
static_assert(offsetof(ASkyCreator, SunLightMobility) == 0x0CE4);
static_assert(offsetof(ASkyCreator, SunAtmosphereDiskColorScale) == 0x0CFC);
static_assert(offsetof(ASkyCreator, MoonLightMobility) == 0x0D1C);
static_assert(offsetof(ASkyCreator, MoonAtmosphereDiskColorScale) == 0x0D48);
static_assert(offsetof(ASkyCreator, ExponentialHeightFogMobility) == 0x0D68);
static_assert(offsetof(ASkyCreator, StarMapTexture) == 0x0D78);
static_assert(offsetof(ASkyCreator, StarMapRotationType) == 0x0D80);
static_assert(offsetof(ASkyCreator, StarMapAdditionalRotation) == 0x0D84);
static_assert(offsetof(ASkyCreator, OcclusionRenderTarget) == 0x0D98);
static_assert(offsetof(ASkyCreator, CameraLocation) == 0x0DC4);
static_assert(offsetof(ASkyCreator, CameraLocationSnapped) == 0x0DD0);
static_assert(offsetof(ASkyCreator, OcclusionCurrentLocation) == 0x0DDC);
static_assert(offsetof(ASkyCreator, PrecipitationCollisionChannel) == 0x0E04);
static_assert(offsetof(ASkyCreator, LightningsParametersRT) == 0x0E50);
static_assert(offsetof(ASkyCreator, LightningParameters) == 0x0E58);
static_assert(offsetof(ASkyCreator, LastLightningPosition) == 0x0E74);
static_assert(offsetof(ASkyCreator, LightningAvailablePositions) == 0x0E80);
static_assert(offsetof(ASkyCreator, RainRipplesPropagation) == 0x0F20);
static_assert(offsetof(ASkyCreator, RainRipplesPropagationMID) == 0x0F28);
static_assert(offsetof(ASkyCreator, RainRipplesForce) == 0x0F30);
static_assert(offsetof(ASkyCreator, RainRipplesNormal) == 0x0F38);
static_assert(offsetof(ASkyCreator, RainRipplesNormalMID) == 0x0F40);
static_assert(offsetof(ASkyCreator, RainRipplesPropagationFrame0) == 0x0F48);
static_assert(offsetof(ASkyCreator, RainRipplesPropagationFrame1) == 0x0F50);
static_assert(offsetof(ASkyCreator, RainRipplesPropagationFrame2) == 0x0F58);
static_assert(offsetof(ASkyCreator, RainRipplesNormalRT) == 0x0F60);
static_assert(offsetof(ASkyCreator, EditorIndependentWindSettings) == 0x0F88);
static_assert(offsetof(ASkyCreator, CloudWindOffset) == 0x0FA8);
static_assert(offsetof(ASkyCreator, CloudWindSkewDirection) == 0x0FB4);
static_assert(offsetof(ASkyCreator, CloudNoiseShapeWindOffset) == 0x0FC4);
static_assert(offsetof(ASkyCreator, CloudNoiseDetailWindOffset) == 0x0FD0);
static_assert(offsetof(ASkyCreator, ExposureMethod) == 0x0FE4);
static_assert(offsetof(ASkyCreator, ExposureBiasCurve) == 0x0FE8);
static_assert(offsetof(ASkyCreator, ExposureMeterMask) == 0x0FF0);
static_assert(offsetof(USkyCreatorWeatherPreset, Description) == 0x0030);
static_assert(offsetof(USkyCreatorWeatherPreset, SkyAtmosphereSettings) == 0x0048);
static_assert(offsetof(USkyCreatorWeatherPreset, VolumetricCloudSettings) == 0x00C8);
static_assert(offsetof(USkyCreatorWeatherPreset, BackgroundCloudSettings) == 0x0170);
static_assert(offsetof(USkyCreatorWeatherPreset, SkyLightSettings) == 0x0194);
static_assert(offsetof(USkyCreatorWeatherPreset, SunLightSettings) == 0x01C0);
static_assert(offsetof(USkyCreatorWeatherPreset, MoonLightSettings) == 0x0208);
static_assert(offsetof(USkyCreatorWeatherPreset, ExponentialHeightFogSettings) == 0x0250);
static_assert(offsetof(USkyCreatorWeatherPreset, StarMapSettings) == 0x02B4);
static_assert(offsetof(USkyCreatorWeatherPreset, WeatherFXSettings) == 0x02FC);
static_assert(offsetof(USkyCreatorWeatherPreset, WeatherMaterialFXSettings) == 0x03FC);
static_assert(offsetof(USkyCreatorWeatherPreset, WindSettings) == 0x0464);
static_assert(offsetof(USkyCreatorWeatherPreset, PostProcessSettings) == 0x0480);
