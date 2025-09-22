
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaUtils

#pragma pack(push, 0x1)

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None                                            = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor                                     = 1,
	EMediaWebcamCaptureDeviceFilter__Front                                           = 2,
	EMediaWebcamCaptureDeviceFilter__Rear                                            = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown                                         = 8
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None                                             = 0,
	EMediaVideoCaptureDeviceFilter__Card                                             = 1,
	EMediaVideoCaptureDeviceFilter__Software                                         = 2,
	EMediaVideoCaptureDeviceFilter__Unknown                                          = 4,
	EMediaVideoCaptureDeviceFilter__Webcam                                           = 8
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x01 (1 bytes)
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None                                             = 0,
	EMediaAudioCaptureDeviceFilter__Card                                             = 1,
	EMediaAudioCaptureDeviceFilter__Microphone                                       = 2,
	EMediaAudioCaptureDeviceFilter__Software                                         = 4,
	EMediaAudioCaptureDeviceFilter__Unknown                                          = 8
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio                                                         = 0,
	EMediaPlayerTrack__Caption                                                       = 1,
	EMediaPlayerTrack__Metadata                                                      = 2,
	EMediaPlayerTrack__Script                                                        = 3,
	EMediaPlayerTrack__Subtitle                                                      = 4,
	EMediaPlayerTrack__Text                                                          = 5,
	EMediaPlayerTrack__Video                                                         = 6
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x01 (1 bytes)
enum class EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min                                                 = 0,
	EMediaSoundComponentFFTSize__Small                                               = 1,
	EMediaSoundComponentFFTSize__Medium                                              = 2,
	EMediaSoundComponentFFTSize__Large                                               = 3
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04 (4 bytes)
enum class EMediaSoundChannels : uint32_t
{
	EMediaSoundChannels__Mono                                                        = 0,
	EMediaSoundChannels__Stereo                                                      = 1,
	EMediaSoundChannels__Surround                                                    = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x01 (1 bytes)
enum class MediaTextureOrientation : uint8_t
{
	MTORI_Original                                                                   = 0,
	MTORI_CW90                                                                       = 1,
	MTORI_CW180                                                                      = 2,
	MTORI_CW270                                                                      = 3
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x01 (1 bytes)
enum class MediaTextureOutputFormat : uint8_t
{
	MTOF_Default                                                                     = 0,
	MTOF_SRGB_LINOUT                                                                 = 1
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UMediaSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSource.Validate
	// bool Validate();                                                                                                         // [0xacd710] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionString
	// void SetMediaOptionString(FName& Key, FString Value);                                                                    // [0x3b153a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionInt64
	// void SetMediaOptionInt64(FName& Key, int64_t Value);                                                                     // [0x3b152d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionFloat
	// void SetMediaOptionFloat(FName& Key, float Value);                                                                       // [0x3b151f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.SetMediaOptionBool
	// void SetMediaOptionBool(FName& Key, bool Value);                                                                         // [0x3b15110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSource.GetURL
	// FString GetURL();                                                                                                        // [0x3b139c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UBaseMediaSource : public UMediaSource
{ 
public:
	FName                                              PlayerName;                                                 // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UFileMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            FilePath;                                                   // 0x0088   (0x0010)  
	bool                                               PrecacheFile;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_7[0x17];                                      // 0x0099   (0x0017)  MISSED


	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                          // [0x3b14fd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	// void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                             // [0x3b128a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	// void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x3b12750] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	// void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32_t Filter);                              // [0x3b12600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMediaComponent : public UActorComponent
{ 
public:
	class UMediaTexture*                               MediaTexture;                                               // 0x00B0   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                                  // [0x3344450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3b12f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaTimeStampInfo : public UObject
{ 
public:
	FTimespan                                          Time;                                                       // 0x0028   (0x0008)  
	int64_t                                            SequenceIndex;                                              // 0x0030   (0x0008)  
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UMediaPlayer : public UObject
{ 
public:
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnEndReached);                                       // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(OnMediaClosed);                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnMediaOpened);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(OnMediaOpenFailed);                                  // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnPlaybackResumed);                                  // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(OnPlaybackSuspended);                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnSeekCompleted);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnTracksChanged);                                    // 0x0098   (0x0010)  
	FTimespan                                          CacheAhead;                                                 // 0x00A8   (0x0008)  
	FTimespan                                          CacheBehind;                                                // 0x00B0   (0x0008)  
	FTimespan                                          CacheBehindGame;                                            // 0x00B8   (0x0008)  
	bool                                               NativeAudioOut;                                             // 0x00C0   (0x0001)  
	bool                                               PlayOnOpen;                                                 // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00C2   (0x0002)  MISSED
	bool                                               Shuffle : 1;                                                // 0x00C4:0 (0x0001)  
	bool                                               Loop : 1;                                                   // 0x00C4:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class UMediaPlaylist*                              Playlist;                                                   // 0x00C8   (0x0008)  
	int32_t                                            PlaylistIndex;                                              // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FTimespan                                          TimeDelay;                                                  // 0x00D8   (0x0008)  
	float                                              HorizontalFieldOfView;                                      // 0x00E0   (0x0004)  
	float                                              VerticalFieldOfView;                                        // 0x00E4   (0x0004)  
	FRotator                                           ViewRotation;                                               // 0x00E8   (0x000C)  
	unsigned char                                      UnknownData03_6[0x2C];                                      // 0x00F4   (0x002C)  MISSED
	FGuid                                              PlayerGuid;                                                 // 0x0120   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0130   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0x3b15e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0x3b15e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x3b15d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x3b15c60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x3b15b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x3b15a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x3b15920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x3b158a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x3b156e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                      // [0x3b15650] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(class UMediaSource* Options);                                                                       // [0x3b154a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x3b15070] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x3b14d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x3b14cc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x3b14bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x3b14b50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x3b14b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                           // [0x3b14a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                         // [0x3b148b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                      // [0x3b14890] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                             // [0x3b14860] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x3b14830] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                               // [0x3b14780] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(class UMediaSource* MediaSource, FMediaPlayerOptions& Options);                               // [0x3b14670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x3b14480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(class UMediaSource* MediaSource);                                                                        // [0x3b143e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);                                                 // [0x3b14310] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(class UMediaPlaylist* InPlaylist);                                                                     // [0x3b14270] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                         // [0x3b141c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                             // [0x3b14170] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                          // [0x3b14140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x3b14110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x3b140e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x3b140b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x3b14080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                     // [0x3b14050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                         // [0x3b14020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                      // [0x3b13ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                         // [0x3b13ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x3b13e80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3b13d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x3b13cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x3b13bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x3b13b10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x3b13a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x3b13a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetURL
	// FString GetURL();                                                                                                        // [0x3b13980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x3b13890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x3b137c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x3b13690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.getTimeStamp
	// class UMediaTimeStampInfo* getTimeStamp();                                                                               // [0x3b13660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                                // [0x3b13620] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x3b135e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x3b134b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x3b133d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x3b133a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                              // [0x3b13240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// class UMediaPlaylist* GetPlaylist();                                                                                     // [0x3b13220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                   // [0x3b131e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x3b13150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x3b13080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                    // [0x3b12e60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x3b12e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x3b12d90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                            // [0x3b12d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x3b12c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x3b12b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x3b12ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                            // [0x3b125e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                            // [0x3b12530] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(class UMediaSource* MediaSource);                                                                     // [0x3b12490] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x3b12460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UMediaPlaylist : public UObject
{ 
public:
	TArray<class UMediaSource*>                        Items;                                                      // 0x0028   (0x0010)  


	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t Index, class UMediaSource* Replacement);                                                            // [0x3b14a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t Index);                                                                                            // [0x3b14980] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(class UMediaSource* MediaSource);                                                                            // [0x3b148e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                           // [0x3b141a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(class UMediaSource* MediaSource, int32_t Index);                                                             // [0x3b13f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// class UMediaSource* GetRandom(int32_t& OutIndex);                                                                        // [0x3b13300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// class UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                    // [0x3b13260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// class UMediaSource* GetNext(int32_t& InOutIndex);                                                                        // [0x3b12f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// class UMediaSource* Get(int32_t Index);                                                                                  // [0x3b129f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                                // [0x3b12160] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                          // [0x3b120b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(class UMediaSource* MediaSource);                                                                               // [0x3b12010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x0820 (2080 bytes) (0x0006C0 - 0x000820) align 16 MaxSize: 0x0820
class UMediaSoundComponent : public USynthComponent
{ 
public:
	EMediaSoundChannels                                Channels;                                                   // 0x06C0   (0x0004)  
	bool                                               DynamicRateAdjustment;                                      // 0x06C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x06C5   (0x0003)  MISSED
	float                                              RateAdjustmentFactor;                                       // 0x06C8   (0x0004)  
	FFloatRange                                        RateAdjustmentRange;                                        // 0x06CC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06DC   (0x0004)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x138];                                     // 0x06E8   (0x0138)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x3b15770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x3b15530] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x3b14f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x3b14e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x3b14de0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x3b13460] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x3b13030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3b12f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                                // [0x3b12dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x3b12210] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x0260 (608 bytes) (0x000178 - 0x000260) align 16 MaxSize: 0x0260
class UMediaTexture : public UTexture
{ 
public:
	TEnumAsByte<TextureAddress>                        AddressX;                                                   // 0x0178   (0x0001)  
	TEnumAsByte<TextureAddress>                        AddressY;                                                   // 0x0179   (0x0001)  
	bool                                               AutoClear;                                                  // 0x017A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x017B   (0x0001)  MISSED
	FLinearColor                                       ClearColor;                                                 // 0x017C   (0x0010)  
	bool                                               EnableGenMips;                                              // 0x018C   (0x0001)  
	char                                               NumMips;                                                    // 0x018D   (0x0001)  
	bool                                               NewStyleOutput;                                             // 0x018E   (0x0001)  
	TEnumAsByte<MediaTextureOutputFormat>              OutputFormat;                                               // 0x018F   (0x0001)  
	float                                              CurrentAspectRatio;                                         // 0x0190   (0x0004)  
	TEnumAsByte<MediaTextureOrientation>               CurrentOrientation;                                         // 0x0194   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0195   (0x0003)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0198   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC0];                                      // 0x01A0   (0x00C0)  MISSED


	/// Functions
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);                                                                 // [0x3b155c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                      // [0x3b13ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                             // [0x3b135b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x3b12f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                     // [0x3b12e00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                                  // [0x3b12a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0088 (136 bytes) (0x000080 - 0x000088) align 8 MaxSize: 0x0088
class UPlatformMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0080   (0x0008)  
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UStreamMediaSource : public UBaseMediaSource
{ 
public:
	FString                                            StreamUrl;                                                  // 0x0088   (0x0010)  
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               bUseTimeSynchronization;                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            FrameDelay;                                                 // 0x008C   (0x0004)  
	double                                             TimeDelay;                                                  // 0x0090   (0x0008)  
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMediaCaptureDevice
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	FString                                            URL;                                                        // 0x0018   (0x0010)  
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMediaSoundComponentSpectralData
{ 
	float                                              FrequencyHz;                                                // 0x0000   (0x0004)  
	float                                              Magnitude;                                                  // 0x0004   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UMediaSource) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UBaseMediaSource) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UFileMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(sizeof(UMediaBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMediaComponent) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UMediaTimeStampInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMediaPlayer) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UMediaPlaylist) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMediaSoundComponent) == 0x0820); // 2080 bytes (0x0006C0 - 0x000820)
static_assert(sizeof(UMediaTexture) == 0x0260); // 608 bytes (0x000178 - 0x000260)
static_assert(sizeof(UPlatformMediaSource) == 0x0088); // 136 bytes (0x000080 - 0x000088)
static_assert(sizeof(UStreamMediaSource) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(UTimeSynchronizableMediaSource) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(FMediaCaptureDevice) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMediaSoundComponentSpectralData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(offsetof(UBaseMediaSource, PlayerName) == 0x0080);
static_assert(offsetof(UFileMediaSource, FilePath) == 0x0088);
static_assert(offsetof(UMediaComponent, MediaTexture) == 0x00B0);
static_assert(offsetof(UMediaComponent, MediaPlayer) == 0x00B8);
static_assert(offsetof(UMediaTimeStampInfo, Time) == 0x0028);
static_assert(offsetof(UMediaPlayer, CacheAhead) == 0x00A8);
static_assert(offsetof(UMediaPlayer, CacheBehind) == 0x00B0);
static_assert(offsetof(UMediaPlayer, CacheBehindGame) == 0x00B8);
static_assert(offsetof(UMediaPlayer, Playlist) == 0x00C8);
static_assert(offsetof(UMediaPlayer, TimeDelay) == 0x00D8);
static_assert(offsetof(UMediaPlayer, ViewRotation) == 0x00E8);
static_assert(offsetof(UMediaPlayer, PlayerGuid) == 0x0120);
static_assert(offsetof(UMediaPlaylist, Items) == 0x0028);
static_assert(offsetof(UMediaSoundComponent, Channels) == 0x06C0);
static_assert(offsetof(UMediaSoundComponent, RateAdjustmentRange) == 0x06CC);
static_assert(offsetof(UMediaSoundComponent, MediaPlayer) == 0x06E0);
static_assert(offsetof(UMediaTexture, AddressX) == 0x0178);
static_assert(offsetof(UMediaTexture, AddressY) == 0x0179);
static_assert(offsetof(UMediaTexture, ClearColor) == 0x017C);
static_assert(offsetof(UMediaTexture, OutputFormat) == 0x018F);
static_assert(offsetof(UMediaTexture, CurrentOrientation) == 0x0194);
static_assert(offsetof(UMediaTexture, MediaPlayer) == 0x0198);
static_assert(offsetof(UPlatformMediaSource, MediaSource) == 0x0080);
static_assert(offsetof(UStreamMediaSource, StreamUrl) == 0x0088);
static_assert(offsetof(FMediaCaptureDevice, DisplayName) == 0x0000);
static_assert(offsetof(FMediaCaptureDevice, URL) == 0x0018);
