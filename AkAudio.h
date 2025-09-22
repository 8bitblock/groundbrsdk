
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG
/// dependency: WwiseObjectUtils
/// dependency: WwiseResourceLoader

#pragma pack(push, 0x1)

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x01 (1 bytes)
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x01 (1 bytes)
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x01 (1 bytes)
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x01 (1 bytes)
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04 (4 bytes)
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x01 (1 bytes)
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x01 (1 bytes)
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x01 (1 bytes)
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x01 (1 bytes)
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x01 (1 bytes)
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x01 (1 bytes)
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x01 (1 bytes)
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x01 (1 bytes)
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x04 (4 bytes)
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x01 (1 bytes)
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x01 (1 bytes)
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x01 (1 bytes)
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x01 (1 bytes)
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x01 (1 bytes)
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x04 (4 bytes)
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x01 (1 bytes)
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04 (4 bytes)
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x04 (4 bytes)
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1
};

/// Enum /Script/AkAudio.EAkUnrealAudioRouting
/// Size: 0x04 (4 bytes)
enum class EAkUnrealAudioRouting : uint32_t
{
	EAkUnrealAudioRouting__Custom                                                    = 0,
	EAkUnrealAudioRouting__Separate                                                  = 1,
	EAkUnrealAudioRouting__AudioLink                                                 = 2,
	EAkUnrealAudioRouting__AudioMixer                                                = 3,
	EAkUnrealAudioRouting__EnableWwiseOnly                                           = 4,
	EAkUnrealAudioRouting__EnableUnrealOnly                                          = 5
};

/// Enum /Script/AkAudio.EAkCollisionChannel
/// Size: 0x01 (1 bytes)
enum class EAkCollisionChannel : uint8_t
{
	EAKCC_WorldStatic                                                                = 0,
	EAKCC_WorldDynamic                                                               = 1,
	EAKCC_Pawn                                                                       = 2,
	EAKCC_Visibility                                                                 = 3,
	EAKCC_Camera                                                                     = 4,
	EAKCC_PhysicsBody                                                                = 5,
	EAKCC_Vehicle                                                                    = 6,
	EAKCC_Destructible                                                               = 7,
	EAKCC_UseIntegrationSettingsDefault                                              = 8
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x01 (1 bytes)
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x02C0 (704 bytes) (0x0001F8 - 0x0002C0) align 16 MaxSize: 0x02C0
class UAkPortalComponent : public USceneComponent
{ 
public:
	bool                                               bDynamic;                                                   // 0x01F8   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x01F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x01FA   (0x0002)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x01FC   (0x0004)  
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                                // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_7[0xBF];                                      // 0x0201   (0x00BF)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.SetDynamic
	// void SetDynamic(bool bInDynamic);                                                                                        // [0xcf8d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	// bool PortalPlacementValid();                                                                                             // [0xcf7a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	// void OpenPortal();                                                                                                       // [0xcf7a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0xcf78f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0xcf7890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	// void ClosePortal();                                                                                                      // [0xcf75b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0268 (616 bytes) (0x000258 - 0x000268) align 8 MaxSize: 0x0268
class AAkAcousticPortal : public AVolume
{ 
public:
	class UAkPortalComponent*                          Portal;                                                     // 0x0258   (0x0008)  
	AkAcousticPortalState                              InitialState;                                               // 0x0260   (0x0001)  
	bool                                               bRequiresStateMigration;                                    // 0x0261   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0262   (0x0006)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                       // [0xcf7a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                                 // [0xcf7860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                      // [0xcf7590] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAkAudioType : public UObject
{ 
public:
	bool                                               bAutoLoad;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioType.UnloadData
	// void UnloadData(bool bAsync);                                                                                            // [0xcf9480] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.LoadData
	// void LoadData();                                                                                                         // [0xb51dc0] Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioType.GetWwiseShortID
	// int32_t GetWwiseShortID();                                                                                               // [0xcf7920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAkAcousticTexture : public UAkAudioType
{ 
public:
	FWwiseAcousticTextureCookedData                    AcousticTextureCookedData;                                  // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0210 (528 bytes) (0x0001F8 - 0x000210) align 16 MaxSize: 0x0210
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x01F8   (0x0018)  MISSED
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0260 (608 bytes) (0x000220 - 0x000260) align 8 MaxSize: 0x0260
class AAkAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0220   (0x0008)  
	class UAkComponent*                                AkComponent;                                                // 0x0228   (0x0008)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x0230   (0x0001)  
	bool                                               AutoPost;                                                   // 0x0231   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2E];                                      // 0x0232   (0x002E)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                                 // [0xcf9460] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                                // [0xcf9440] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkMainOutputSettings
{ 
	FString                                            AudioDeviceShareSet;                                        // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0004   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x0008   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x000C   (0x0004)  
	uint32_t                                           DiffractionOrder;                                           // 0x0010   (0x0004)  
	uint32_t                                           DiffractionOnReflectionsOrder;                              // 0x0014   (0x0004)  
	float                                              MaximumPathLength;                                          // 0x0018   (0x0004)  
	float                                              CPULimitPercentage;                                         // 0x001C   (0x0004)  
	uint32_t                                           LoadBalancingSpread;                                        // 0x0020   (0x0004)  
	bool                                               EnableGeometricDiffractionAndTransmission;                  // 0x0024   (0x0001)  
	bool                                               CalcEmitterVirtualPosition;                                 // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0028)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0070 (112 bytes) (0x000068 - 0x000070) align 8 MaxSize: 0x0070
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	FString                                            NetworkName;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
	uint32_t                                           VmPageSize;                                                 // 0x002C   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x003C (60 bytes) (0x000030 - 0x00003C) align 4 MaxSize: 0x003C
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           MaxNumJobWorkers;                                           // 0x0034   (0x0004)  
	uint32_t                                           JobWorkerMaxExecutionTimeUSec;                              // 0x0038   (0x0004)  
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x003C   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x0040   (0x0001)  
	bool                                               bVerboseSink;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0042   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C0   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UAkAudioBank : public UAkAudioType
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/AkAudio.AkAudioDeviceShareSet
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAkAudioDeviceShareSet : public UAkAudioType
{ 
public:
	FWwiseAudioDeviceShareSetCookedData                AudioDeviceShareSetCookedData;                              // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x00D0 (208 bytes) (0x000050 - 0x0000D0) align 8 MaxSize: 0x00D0
class UAkAudioEvent : public UAkAudioType
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0050   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x0058   (0x0004)  
	float                                              MaximumDuration;                                            // 0x005C   (0x0004)  
	FWwiseLocalizedEventCookedData                     EventCookedData;                                            // 0x0060   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObjectAndWait
	// int32_t PostOnGameObjectAndWait(class UAkGameObject* GameObject, FLatentActionInfo LatentActionInfo);                    // [0xcf88c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnGameObject
	// int32_t PostOnGameObject(class UAkGameObject* GameObject, FDelegateProperty& Delegate, int32_t CallbackMask);            // [0xcf8780] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponentAndWait
	// int32_t PostOnComponentAndWait(class UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0xcf8620] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnComponent
	// int32_t PostOnComponent(class UAkComponent* Component, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0xcf8480] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActorAndWait
	// int32_t PostOnActorAndWait(class AActor* Actor, bool bStopWhenAttachedObjectDestroyed, FLatentActionInfo LatentActionInfo); // [0xcf8320] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostOnActor
	// int32_t PostOnActor(class AActor* Actor, FDelegateProperty& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // [0xcf8180] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.PostAtLocation
	// int32_t PostAtLocation(FVector Location, FRotator Orientation, FDelegateProperty& Callback, int32_t CallbackMask, class UObject* WorldContextObject); // [0xcf7fa0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkAudioEvent.ExecuteAction
	// int32_t ExecuteAction(AkActionOnEventType ActionType, class AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0xcf75d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0220 (544 bytes) (0x0001F8 - 0x000220) align 16 MaxSize: 0x0218
class UAkGameObject : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x01F8   (0x0008)  
	FString                                            EventName;                                                  // 0x0200   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0210   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                             // [0xd00410] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);                     // [0xcff890] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0xcfd960] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback);                               // [0xcfd860] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FLatentActionInfo LatentInfo); // [0xcfd300] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, FString InEventName); // [0xcfd140] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0xcfca20] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x03D0 (976 bytes) (0x000218 - 0x0003D0) align 16 MaxSize: 0x03D0
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               bUseSpatialAudio;                                           // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0219   (0x0007)  MISSED
	TEnumAsByte<EAkCollisionChannel>                   OcclusionCollisionChannel;                                  // 0x0220   (0x0001)  
	bool                                               EnableSpotReflectors;                                       // 0x0221   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0222   (0x0002)  MISSED
	float                                              OuterRadius;                                                // 0x0224   (0x0004)  
	float                                              InnerRadius;                                                // 0x0228   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x022C   (0x0004)  MISSED
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0230   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0238   (0x0010)  
	int32_t                                            EarlyReflectionOrder;                                       // 0x0248   (0x0004)  
	float                                              EarlyReflectionBusSendGain;                                 // 0x024C   (0x0004)  
	float                                              EarlyReflectionMaxPathLength;                               // 0x0250   (0x0004)  
	float                                              roomReverbAuxBusGain;                                       // 0x0254   (0x0004)  
	int32_t                                            diffractionMaxEdges;                                        // 0x0258   (0x0004)  
	int32_t                                            diffractionMaxPaths;                                        // 0x025C   (0x0004)  
	float                                              diffractionMaxPathLength;                                   // 0x0260   (0x0004)  
	bool                                               DrawFirstOrderReflections;                                  // 0x0264   (0x0001)  
	bool                                               DrawSecondOrderReflections;                                 // 0x0265   (0x0001)  
	bool                                               DrawHigherOrderReflections;                                 // 0x0266   (0x0001)  
	bool                                               DrawDiffraction;                                            // 0x0267   (0x0001)  
	bool                                               StopWhenOwnerDestroyed;                                     // 0x0268   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0269   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x026C   (0x0004)  
	float                                              OcclusionRefreshInterval;                                   // 0x0270   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x0274   (0x0001)  
	unsigned char                                      UnknownData04_7[0x15B];                                     // 0x0275   (0x015B)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                          // [0xcf9700] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0xcf9510] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);                             // [0xcf9290] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                            // [0xcf9200] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                                // [0xcf9180] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                     // [0xcf90d0] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	// void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                    // [0xcf8f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEnableSpotReflectors
	// void SetEnableSpotReflectors(bool in_enable);                                                                            // [0xcf8ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                        // [0xcf8e60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                      // [0xcf8dc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float Value);                                                                           // [0xcf8c30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                       // [0xcf89c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, FLatentActionInfo LatentInfo);                          // [0xcf7e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(FLatentActionInfo LatentInfo);                                                // [0xcf7da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, FLatentActionInfo LatentInfo);      // [0xcf7c40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, FLatentActionInfo LatentInfo);      // [0xcf7ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetOcclusionCollisionChannel
	// TEnumAsByte<ECollisionChannel> GetOcclusionCollisionChannel();                                                           // [0xcf78c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                            // [0xcf7800] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0400 (1024 bytes) (0x0003D0 - 0x000400) align 16 MaxSize: 0x03F8
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x03D0   (0x0028)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                                 // [0xcf7f70] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x00C8 (200 bytes) (0x000050 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAkAuxBus : public UAkAudioType
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FWwiseLocalizedAuxBusCookedData                    AuxBusCookedData;                                           // 0x0058   (0x0060)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkBoolPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkWwiseObjectDetails
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemPath;                                                   // 0x0010   (0x0010)  
	FString                                            ItemId;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	FString                                            ItemPath;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0AD0 (2768 bytes) (0x000120 - 0x000AD0) align 8 MaxSize: 0x0AD0
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x340];                                     // 0x0120   (0x0340)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0461   (0x0003)  MISSED
	SDK_UNDEFINED(16,279) /* FDelegateProperty */      __um(CheckedStateDelegate);                                 // 0x0464   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0474   (0x0004)  MISSED
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0478   (0x0580)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x09F8   (0x0001)  
	bool                                               IsFocusable;                                                // 0x09F9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x09FA   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0A00   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0A10   (0x0040)  
	SDK_UNDEFINED(16,280) /* FMulticastInlineDelegate */ __um(AkOnCheckStateChanged);                              // 0x0A50   (0x0010)  
	SDK_UNDEFINED(16,281) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x0A60   (0x0010)  
	SDK_UNDEFINED(16,282) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0A70   (0x0010)  
	unsigned char                                      UnknownData04_7[0x50];                                      // 0x0A80   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0xcf9040] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0xcf8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                         // [0xcf8b90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                            // [0xcf8af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0xcf7980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0xcf7950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0xcf7830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                                 // [0xcf77b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                     // [0xcf7770] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UAkAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAkAssetPlatformData : public UObject
{ 
public:
	class UAkAssetData*                                CurrentAssetData;                                           // 0x0028   (0x0008)  
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UAkMediaAssetData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UAkMediaAsset : public UObject
{ 
public:
	TMap<FString, class UAkMediaAssetData*>            MediaAssetDataPerPlatform;                                  // 0x0028   (0x0050)  
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UAkFolder : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0450 (1104 bytes) (0x000450 - 0x000450) align 16 MaxSize: 0x0450
class UDrawPortalComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0450 (1104 bytes) (0x000450 - 0x000450) align 16 MaxSize: 0x0450
class UDrawRoomComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.AkEffectShareSet
/// Size: 0x00B8 (184 bytes) (0x000050 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAkEffectShareSet : public UAkAudioType
{ 
public:
	FWwiseLocalizedShareSetCookedData                  ShareSetCookedData;                                         // 0x0050   (0x0060)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                     // [0xd00860] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0xd00640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadInitBank
	// void UnloadInitBank();                                                                                                   // [0xd00620] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                                 // [0xd00590] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                              // [0xd00570] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                                // [0xd00550] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                            // [0xd004d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                          // [0xd004b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                     // [0xd00430] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                             // [0xd00380] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                               // [0xd002f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                           // [0xd00270] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0xd00030] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName SwitchState);            // [0xcffee0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                           // [0xcffde0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareSet);                          // [0xcffc90] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);  // [0xcffa40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                              // [0xcffbd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0xcff780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0xcff680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                                // [0xcff610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputDeviceEffect
	// bool SetOutputDeviceEffect(FAkOutputDeviceID InDeviceID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet); // [0xcff510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                           // [0xcff450] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                            // [0xcff390] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0xcff230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0xcff050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0xcfee70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0xcfed60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetDistanceProbe
	// void SetDistanceProbe(class AActor* Listener, class AActor* DistanceProbe);                                              // [0xcfeca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& Completed);                                    // [0xcfebb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);      // [0xcfea60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByName
	// bool SetBusEffectByName(FString InBusName, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0xcfe900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusEffectByID
	// bool SetBusEffectByID(FAkUniqueID InBusID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);            // [0xcfe800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                         // [0xcfe730] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetAuxBusEffect
	// bool SetAuxBusEffect(class UAkAuxBus* InAuxBus, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);       // [0xcfe630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetActorMixerEffect
	// bool SetActorMixerEffect(FAkUniqueID InAudioNodeID, int32_t InEffectIndex, class UAkEffectShareSet* InEffectShareSet);   // [0xcfe530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);             // [0xcfe3f0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                           // [0xcfe360] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.RemoveOutput
	// void RemoveOutput(FAkOutputDeviceID in_OutputDeviceId);                                                                  // [0xcfe2e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                    // [0xcfe1e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                         // [0xcfe0c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0xcfdf50] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0xcfdd90] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed, FString EventName); // [0xcfdb40] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0xcfd690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, FLatentActionInfo LatentInfo); // [0xcfd530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                     // [0xcfd120] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                   // [0xcfd090] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                          // [0xcfd000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                         // [0xb607f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareSet);                         // [0xcfcea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0xcfcc70] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                        // [0xcfc980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                             // [0xcfc880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0xcfc6e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                                 // [0xcfc610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0xcfc4d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0xcfc300] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia
	// void ClearSoundBanksAndMedia();                                                                                          // [0xcfc2e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                       // [0xcfc2e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                          // [0xcfc240] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                         // [0xcfc1b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutput
	// void AddOutput(FAkOutputSettings& in_Settings, FAkOutputDeviceID& out_DeviceID, TArray<UAkComponent*>& in_ListenerIDs);  // [0xcfc060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAkCallbackInfo : public UObject
{ 
public:
	class UAkComponent*                                AkComponent;                                                // 0x0028   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0030   (0x0004)  
	int32_t                                            EventId;                                                    // 0x0034   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                              // [0xd05530] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                            // [0xd05480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                        // [0xd053d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                              // [0xd05320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                            // [0xd05270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                         // [0xd051c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                              // [0xd05110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                                // [0xd05060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                       // [0xd05030] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                             // [0xd04f80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0038   (0x0004)  
	int32_t                                            position;                                                   // 0x003C   (0x0004)  
	FString                                            Label;                                                      // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0038   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x003C   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0040   (0x0004)  
	int32_t                                            MediaId;                                                    // 0x0044   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0030   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x0034   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	FString                                            UserCueName;                                                // 0x0060   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkGeometrySurfaceOverride
{ 
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x03A0 (928 bytes) (0x000210 - 0x0003A0) align 16 MaxSize: 0x03A0
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0211   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x0214   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0218   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x021C   (0x0004)  MISSED
	TMap<class UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x0220   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x0270   (0x0018)  
	bool                                               bEnableDiffraction;                                         // 0x0288   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0289   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x028A   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0290   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0298   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x02A8   (0x0050)  
	TMap<int32_t, double>                              SurfaceAreas;                                               // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData04_7[0x58];                                      // 0x0348   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                   // [0xd055a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	// void SendGeometry();                                                                                                     // [0xd05580] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                   // [0xd05560] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                      // [0xd04f60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0070 (112 bytes) (0x000050 - 0x000070) align 8 MaxSize: 0x0070
class UAkGroupValue : public UAkAudioType
{ 
public:
	FWwiseGroupValueCookedData                         GroupValueCookedData;                                       // 0x0050   (0x0014)  
	uint32_t                                           GroupShortId;                                               // 0x0064   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0040 (64 bytes) (0x00003C - 0x000040) align 4 MaxSize: 0x0040
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UAkHololensInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00C0   (0x0040)  


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x00A8 (168 bytes) (0x000050 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAkInitBank : public UAkAudioType
{ 
public:
	FWwiseInitBankCookedData                           InitBankCookedData;                                         // 0x0050   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UAkIOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D0   (0x003C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                          // [0xd08e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                      // [0xd08d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0148 (328 bytes) (0x000108 - 0x000148) align 8 MaxSize: 0x0148
class UAkItemBoolProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,283) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,284) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString NewText);                                                                                     // [0xd09490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0xd09040] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0xd08ff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                      // [0xd08e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                                  // [0xd08d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0148 (328 bytes) (0x000108 - 0x000148) align 8 MaxSize: 0x0148
class UAkItemProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,285) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,286) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                  // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString NewText);                                                                                     // [0xd09490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                           // [0xd09090] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                                 // [0xd08ff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0280 (640 bytes) (0x0001F8 - 0x000280) align 16 MaxSize: 0x0280
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01F9   (0x0003)  MISSED
	float                                              SendLevel;                                                  // 0x01FC   (0x0004)  
	float                                              FadeRate;                                                   // 0x0200   (0x0004)  
	float                                              Priority;                                                   // 0x0204   (0x0004)  
	bool                                               AutoAssignAuxBus;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0209   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0210   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0218   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0228   (0x0008)  MISSED
	class UAkAuxBus*                                   AuxBusManual;                                               // 0x0230   (0x0008)  
	unsigned char                                      UnknownData03_7[0x48];                                      // 0x0238   (0x0048)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                          // [0xd08ce0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxArm64InitializationSettings
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UAkLinuxArm64InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C0   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLinuxArm64InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxArm64PlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkLinuxArm64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C0   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 8 MaxSize: 0x0100
class UAkMacInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C0   (0x003C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0290 (656 bytes) (0x000258 - 0x000290) align 8 MaxSize: 0x0290
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled;                                                   // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0260   (0x0008)  
	FString                                            AuxBusName;                                                 // 0x0268   (0x0010)  
	float                                              SendLevel;                                                  // 0x0278   (0x0004)  
	float                                              FadeRate;                                                   // 0x027C   (0x0004)  
	float                                              Priority;                                                   // 0x0280   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0284   (0x0004)  MISSED
	class UAkLateReverbComponent*                      LateReverbComponent;                                        // 0x0288   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0250 (592 bytes) (0x000218 - 0x000250) align 16 MaxSize: 0x0250
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable;                                                    // 0x0218   (0x0001)  
	bool                                               bDynamic;                                                   // 0x0219   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x021A   (0x0002)  MISSED
	float                                              Priority;                                                   // 0x021C   (0x0004)  
	float                                              WallOcclusion;                                              // 0x0220   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x0224   (0x0004)  
	bool                                               AutoPost;                                                   // 0x0228   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0229   (0x000F)  MISSED
	class UAkAcousticTextureSetComponent*              GeometryComponent;                                          // 0x0238   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                    // [0xd092e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.SetDynamic
	// void SetDynamic(bool bInDynamic);                                                                                        // [0xd09250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                         // [0xd08fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAkRtpc : public UAkAudioType
{ 
public:
	FWwiseGameParameterCookedData                      GameParameterCookedData;                                    // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAkGeometrySurfacePropertiesToMap
{ 
	TWeakObjectPtr<class UAkAcousticTexture*>          AcousticTexture;                                            // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	float                                              OcclusionValue;                                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FAkAcousticTextureParams
{ 
	FVector4                                           AbsorptionValues;                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x0350 (848 bytes) (0x000028 - 0x000350) align 8 MaxSize: 0x0350
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0030   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0040   (0x0010)  
	FDirectoryPath                                     RootOutputPath;                                             // 0x0050   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolder;                                  // 0x0060   (0x0010)  
	FDirectoryPath                                     WwiseStagingDirectory;                                      // 0x0070   (0x0010)  
	bool                                               bSoundBanksTransfered;                                      // 0x0080   (0x0001)  
	bool                                               bAssetsMigrated;                                            // 0x0081   (0x0001)  
	bool                                               bProjectMigrated;                                           // 0x0082   (0x0001)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0083   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                           // 0x0084   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     DefaultFitToGeometryCollisionChannel;                       // 0x0085   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	SDK_UNDEFINED(80,287) /* TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap> */ __um(AkGeometryMap); // 0x0088   (0x0050)  
	float                                              GlobalDecayAbsorption;                                      // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TWeakObjectPtr<class UAkAuxBus*>                   DefaultReverbAuxBus;                                        // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00E8   (0x0020)  MISSED
	SDK_UNDEFINED(80,288) /* TMap<float, TWeakObjectPtr<UAkAuxBus*>> */ __um(EnvironmentDecayAuxBusMap);           // 0x0108   (0x0050)  
	FString                                            HFDampingName;                                              // 0x0158   (0x0010)  
	FString                                            DecayEstimateName;                                          // 0x0168   (0x0010)  
	FString                                            TimeToFirstReflectionName;                                  // 0x0178   (0x0010)  
	TWeakObjectPtr<class UAkRtpc*>                     HFDampingRTPC;                                              // 0x0188   (0x0008)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0190   (0x0020)  MISSED
	TWeakObjectPtr<class UAkRtpc*>                     DecayEstimateRTPC;                                          // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x20];                                      // 0x01B8   (0x0020)  MISSED
	TWeakObjectPtr<class UAkRtpc*>                     TimeToFirstReflectionRTPC;                                  // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData06_6[0x20];                                      // 0x01E0   (0x0020)  MISSED
	TWeakObjectPtr<class UAkAudioEvent*>               AudioInputEvent;                                            // 0x0200   (0x0008)  
	unsigned char                                      UnknownData07_6[0x20];                                      // 0x0208   (0x0020)  MISSED
	TMap<FGuid, FAkAcousticTextureParams>              AcousticTextureParamsMap;                                   // 0x0228   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x0278   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x0279   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x027A   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x027B   (0x0005)  MISSED
	FString                                            CommandletCommitMessage;                                    // 0x0280   (0x0010)  
	TMap<FString, FString>                             UnrealCultureToWwiseCulture;                                // 0x0290   (0x0050)  
	FString                                            DefaultAssetCreationPath;                                   // 0x02E0   (0x0010)  
	TWeakObjectPtr<class UAkInitBank*>                 InitBank;                                                   // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData09_6[0x20];                                      // 0x02F8   (0x0020)  MISSED
	EAkUnrealAudioRouting                              AudioRouting;                                               // 0x0318   (0x0004)  
	bool                                               bWwiseSoundEngineEnabled;                                   // 0x031C   (0x0001)  
	bool                                               bWwiseAudioLinkEnabled;                                     // 0x031D   (0x0001)  
	bool                                               bAkAudioMixerEnabled;                                       // 0x031E   (0x0001)  
	unsigned char                                      UnknownData10_6[0x1];                                       // 0x031F   (0x0001)  MISSED
	float                                              DefaultScalingFactor;                                       // 0x0320   (0x0004)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x0324   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x0325   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x0326   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x0327   (0x0001)  
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0328   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0338   (0x0010)  
	unsigned char                                      UnknownData11_7[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0028   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0038   (0x0010)  
	FDirectoryPath                                     RootOutputPathOverride;                                     // 0x0048   (0x0010)  
	FDirectoryPath                                     GeneratedSoundBanksFolderOverride;                          // 0x0058   (0x0010)  
	FString                                            WaapiIPAddress;                                             // 0x0068   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0078   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x007C   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x007D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x007E   (0x0002)  MISSED
	uint32_t                                           WaapiTranslatorTimeout;                                     // 0x0080   (0x0004)  
	bool                                               SuppressGeneratedSoundBanksPathWarnings;                    // 0x0084   (0x0001)  
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x0085   (0x0001)  
	bool                                               AskForWwiseAssetReload;                                     // 0x0086   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x0087   (0x0001)  MISSED
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkPropertyToControl
{ 
	FString                                            ItemProperty;                                               // 0x0000   (0x0010)  
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0530 (1328 bytes) (0x000108 - 0x000530) align 8 MaxSize: 0x0530
class UAkSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0108   (0x0004)  
	SDK_UNDEFINED(16,289) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x010C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x011C   (0x0004)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0120   (0x0340)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0460   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0461   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x0464   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0474   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0484   (0x0001)  
	bool                                               Locked;                                                     // 0x0485   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0486   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x0488   (0x0004)  
	bool                                               IsFocusable;                                                // 0x048C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x048D   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x0490   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x04A0   (0x0040)  
	SDK_UNDEFINED(16,290) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x04E0   (0x0010)  
	SDK_UNDEFINED(16,291) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                      // 0x04F0   (0x0010)  
	SDK_UNDEFINED(16,292) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                  // 0x0500   (0x0010)  
	unsigned char                                      UnknownData04_7[0x20];                                      // 0x0510   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0xd096d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0xd09650] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0xd095c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0xd09530] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0xd09400] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0xd09370] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                      // [0xd091b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                   // [0xd09110] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                        // [0xd090e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                       // [0xd08f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                               // [0xd08f30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0270 (624 bytes) (0x000258 - 0x000270) align 8 MaxSize: 0x0270
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                        // 0x0258   (0x0008)  
	class UAkLateReverbComponent*                      LateReverb;                                                 // 0x0260   (0x0008)  
	class UAkRoomComponent*                            Room;                                                       // 0x0268   (0x0008)  
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0258 (600 bytes) (0x000220 - 0x000258) align 8 MaxSize: 0x0258
class AAkSpotReflector : public AActor
{ 
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0220   (0x0008)  
	FString                                            EarlyReflectionAuxBusName;                                  // 0x0228   (0x0010)  
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0238   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x0240   (0x0004)  
	float                                              Level;                                                      // 0x0244   (0x0004)  
	bool                                               SameRoomOnly;                                               // 0x0248   (0x0001)  
	bool                                               EnableRoomOverride;                                         // 0x0249   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x024A   (0x0006)  MISSED
	class AActor*                                      RoomOverride;                                               // 0x0250   (0x0008)  
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0420 (1056 bytes) (0x0003F8 - 0x000420) align 16 MaxSize: 0x0420
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
public:
	class USoundSubmix*                                SubmixToRecord;                                             // 0x03F8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0400   (0x0020)  MISSED
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAkSurfacePoly
{ 
	class UAkAcousticTexture*                          Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0240 (576 bytes) (0x000210 - 0x000240) align 16 MaxSize: 0x0240
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors;                                   // 0x0210   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	TArray<FAkSurfacePoly>                             AcousticPolys;                                              // 0x0218   (0x0010)  
	bool                                               bEnableDiffraction;                                         // 0x0228   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0229   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x022A   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0230   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0238   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                        // [0xd0f2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties
	// void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);                                                  // [0xd0f1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                          // [0xd0e170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                        // [0xd05560] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAkTrigger : public UAkAudioType
{ 
public:
	FWwiseTriggerCookedData                            TriggerCookedData;                                          // 0x0050   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0020)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00D0   (0x003C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                        // [0xd0f090] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0xd0ee20] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                                // [0xd0ed50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& Callback);                                                    // [0xd0e0c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& Callback);                                                   // [0xd0e010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                         // [0xd0df80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                                // [0xd0d4d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                            // [0xd0d420] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions);    // [0xd0d000] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                            // [0xd08e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                        // [0xd08d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);         // [0xd0eb70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0xd0e950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);           // [0xd0e780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);              // [0xd0e5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0xd0e3b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0xd0e190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                        // [0xd0de10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                             // [0xd0dc00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0xd0dab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0xd0d960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                             // [0xd0d810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                      // [0xd0d5c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                             // [0xd0d2f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                         // [0xd0d200] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                                 // [0xd08e30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                             // [0xd08d70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	uint32_t                                           MaxSystemAudioObjects;                                      // 0x0040   (0x0004)  
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C0   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0044 (68 bytes) (0x00003C - 0x000044) align 4 MaxSize: 0x0044
struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	uint32_t                                           uMaxSystemAudioObjects;                                     // 0x0040   (0x0004)  
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UAkWinGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0030   (0x0070)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0020)  
	FAkWinGDKAdvancedInitializationSettings            AdvancedSettings;                                           // 0x00C0   (0x0044)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                           // [0xcf79b0] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0148 (328 bytes) (0x000108 - 0x000148) align 8 MaxSize: 0x0148
class UAkWwiseTree : public UWidget
{ 
public:
	SDK_UNDEFINED(16,293) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,294) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0128   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString NewText);                                                                                     // [0xd09490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                                 // [0xd0dd80] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                                 // [0xd08ff0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0168 (360 bytes) (0x000108 - 0x000168) align 8 MaxSize: 0x0168
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	SDK_UNDEFINED(16,295) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,296) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                      // 0x0118   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0128   (0x0040)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x0168 (360 bytes) (0x0000E8 - 0x000168) align 8 MaxSize: 0x0168
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x00E8   (0x0028)  MISSED
	class UAkAudioEvent*                               Event;                                                      // 0x0110   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x011C   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FString                                            EventName;                                                  // 0x0128   (0x0010)  
	float                                              MaxSourceDuration;                                          // 0x0138   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FString                                            MaxDurationSourceID;                                        // 0x0140   (0x0010)  
	unsigned char                                      UnknownData04_7[0x18];                                      // 0x0150   (0x0018)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x00A8 (168 bytes) (0x000090 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0090   (0x0010)  
	bool                                               bIsAMasterTrack;                                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	TEnumAsByte<ERichCurveTangentWeightMode>           TangentWeightMode;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	TEnumAsByte<ERichCurveInterpMode>                  InterpMode;                                                 // 0x0004   (0x0001)  
	TEnumAsByte<ERichCurveTangentMode>                 TangentMode;                                                // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMovieSceneFloatChannelSerializationHelper
{ 
	TEnumAsByte<ERichCurveExtrapolation>               PreInfinityExtrap;                                          // 0x0000   (0x0001)  
	TEnumAsByte<ERichCurveExtrapolation>               PostInfinityExtrap;                                         // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              DefaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0250 (592 bytes) (0x0000E8 - 0x000250) align 8 MaxSize: 0x0250
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	class UAkRtpc*                                     RTPC;                                                       // 0x00E8   (0x0008)  
	FString                                            Name;                                                       // 0x00F0   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0100   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0180   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01B0   (0x00A0)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,297) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0040   (0x0048)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, bool bStopWhenAttachedToDestroyed); // [0xd10e00] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0xd10dc0] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,298) /* FMulticastInlineDelegate */ __um(Completed);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0040   (0x0040)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0xd10ff0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                              // [0xd10de0] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAkExternalSourceInfo
{ 
	FString                                            ExternalSrcName;                                            // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            Filename;                                                   // 0x0018   (0x0010)  
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0003 (3 bytes) (0x000002 - 0x000003) align 1 MaxSize: 0x0003
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               Value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0008 (8 bytes) (0x000002 - 0x000008) align 4 MaxSize: 0x0008
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               Value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0004 (4 bytes) (0x000002 - 0x000004) align 1 MaxSize: 0x0004
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               Param1;                                                     // 0x0002   (0x0001)  
	char                                               Param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkOutputSettings
{ 
	class UAkAudioDeviceShareSet*                      AudioDeviceShareSet;                                        // 0x0000   (0x0008)  
	int32_t                                            IdDevice;                                                   // 0x0008   (0x0004)  
	PanningRule                                        PanRule;                                                    // 0x000C   (0x0001)  
	AkChannelConfiguration                             ChannelConfig;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkIOSAdvancedInitializationSettings
/// Size: 0x003C (60 bytes) (0x00003C - 0x00003C) align 4 MaxSize: 0x003C
struct FAkIOSAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAkReverbDescriptor
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	class UPrimitiveComponent*                         Primitive;                                                  // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FAkSurfaceEdgeInfo
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FAkSurfaceEdgeVerts
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiFieldNames
{ 
	FString                                            FieldName;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAkWaapiUri
{ 
	FString                                            Uri;                                                        // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioEventSection*              Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioRTPCSection*               Section;                                                    // 0x0020   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UAkPortalComponent) == 0x02C0); // 704 bytes (0x0001F8 - 0x0002C0)
static_assert(sizeof(AAkAcousticPortal) == 0x0268); // 616 bytes (0x000258 - 0x000268)
static_assert(sizeof(UAkAudioType) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UAkAcousticTexture) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAkAcousticTextureSetComponent) == 0x0210); // 528 bytes (0x0001F8 - 0x000210)
static_assert(sizeof(AAkAmbientSound) == 0x0260); // 608 bytes (0x000220 - 0x000260)
static_assert(sizeof(FAkMainOutputSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSpatialAudioSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkCommonInitializationSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FAkCommonInitializationSettingsWithSampleRate) == 0x0070); // 112 bytes (0x000068 - 0x000070)
static_assert(sizeof(FAkCommunicationSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkCommunicationSettingsWithSystemInitialization) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAkAdvancedInitializationSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkAdvancedInitializationSettingsWithMultiCoreRendering) == 0x003C); // 60 bytes (0x000030 - 0x00003C)
static_assert(sizeof(FAkAndroidAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkAndroidInitializationSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UAkPlatformInfo) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UAkAndroidPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkAudioBank) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UAkAudioDeviceShareSet) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAkAudioEvent) == 0x00D0); // 208 bytes (0x000050 - 0x0000D0)
static_assert(sizeof(UAkGameObject) == 0x0218); // 536 bytes (0x0001F8 - 0x000218)
static_assert(sizeof(UAkComponent) == 0x03D0); // 976 bytes (0x000218 - 0x0003D0)
static_assert(sizeof(UAkAudioInputComponent) == 0x03F8); // 1016 bytes (0x0003D0 - 0x0003F8)
static_assert(sizeof(UAkAuxBus) == 0x00C8); // 200 bytes (0x000050 - 0x0000C8)
static_assert(sizeof(FAkBoolPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWwiseObjectDetails) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkWwiseItemToControl) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UAkCheckBox) == 0x0AD0); // 2768 bytes (0x000120 - 0x000AD0)
static_assert(sizeof(UAkAssetData) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UAkAssetPlatformData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAkMediaAssetData) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAkMediaAsset) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UAkLocalizedMediaAsset) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkExternalMediaAsset) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UAkFolder) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UDrawPortalComponent) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(UDrawRoomComponent) == 0x0450); // 1104 bytes (0x000450 - 0x000450)
static_assert(sizeof(UAkEffectShareSet) == 0x00B8); // 184 bytes (0x000050 - 0x0000B8)
static_assert(sizeof(UAkGameplayStatics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkCallbackInfo) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAkEventCallbackInfo) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAkMIDIEventCallbackInfo) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UAkMarkerCallbackInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UAkDurationCallbackInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FAkSegmentInfo) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UAkMusicSyncCallbackInfo) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(FAkGeometrySurfaceOverride) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkAcousticSurface) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkTriangle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkGeometryData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAkGeometryComponent) == 0x03A0); // 928 bytes (0x000210 - 0x0003A0)
static_assert(sizeof(UAkGroupValue) == 0x0070); // 112 bytes (0x000050 - 0x000070)
static_assert(sizeof(FAkHololensAdvancedInitializationSettings) == 0x0040); // 64 bytes (0x00003C - 0x000040)
static_assert(sizeof(UAkHololensInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkHololensPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkInitBank) == 0x00A8); // 168 bytes (0x000050 - 0x0000A8)
static_assert(sizeof(FAkAudioSession) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UAkIOSInitializationSettings) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UAkIOSPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkItemBoolPropertiesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkItemBoolProperties) == 0x0148); // 328 bytes (0x000108 - 0x000148)
static_assert(sizeof(UAkItemPropertiesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkItemProperties) == 0x0148); // 328 bytes (0x000108 - 0x000148)
static_assert(sizeof(UAkLateReverbComponent) == 0x0280); // 640 bytes (0x0001F8 - 0x000280)
static_assert(sizeof(UAkLinuxArm64InitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkLinuxArm64PlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkLinuxInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkLinuxPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkMacInitializationSettings) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UAkMacPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkPlatformInitialisationSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AAkReverbVolume) == 0x0290); // 656 bytes (0x000258 - 0x000290)
static_assert(sizeof(UAkRoomComponent) == 0x0250); // 592 bytes (0x000218 - 0x000250)
static_assert(sizeof(UAkRtpc) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(FAkGeometrySurfacePropertiesToMap) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAkAcousticTextureParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UAkSettings) == 0x0350); // 848 bytes (0x000028 - 0x000350)
static_assert(sizeof(UAkSettingsPerUser) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FAkPropertyToControl) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAkSlider) == 0x0530); // 1328 bytes (0x000108 - 0x000530)
static_assert(sizeof(AAkSpatialAudioVolume) == 0x0270); // 624 bytes (0x000258 - 0x000270)
static_assert(sizeof(AAkSpotReflector) == 0x0258); // 600 bytes (0x000220 - 0x000258)
static_assert(sizeof(UAkStateValue) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkSubmixInputComponent) == 0x0420); // 1056 bytes (0x0003F8 - 0x000420)
static_assert(sizeof(FAkSurfacePoly) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UAkSurfaceReflectorSetComponent) == 0x0240); // 576 bytes (0x000210 - 0x000240)
static_assert(sizeof(UAkSwitchValue) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkTrigger) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAkTVOSInitializationSettings) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UAkTVOSPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWaapiCalls) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USAkWaapiFieldNamesConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkWaapiJsonManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAkWaapiUriConv) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAkWindowsAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkWindowsInitializationSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UAkWin32PlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWin64PlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWindowsPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FAkWinGDKAdvancedInitializationSettings) == 0x0044); // 68 bytes (0x00003C - 0x000044)
static_assert(sizeof(UAkWinGDKInitializationSettings) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(UAkWinAnvilInitializationSettings) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(UAkWinGDKPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWinAnvilPlatformInfo) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UAkWwiseTree) == 0x0148); // 328 bytes (0x000108 - 0x000148)
static_assert(sizeof(UAkWwiseTreeSelector) == 0x0168); // 360 bytes (0x000108 - 0x000168)
static_assert(sizeof(UMovieSceneAkAudioEventSection) == 0x0168); // 360 bytes (0x0000E8 - 0x000168)
static_assert(sizeof(UMovieSceneAkTrack) == 0x00A8); // 168 bytes (0x000090 - 0x0000A8)
static_assert(sizeof(UMovieSceneAkAudioEventTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FMovieSceneTangentDataSerializationHelper) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMovieSceneFloatValueSerializationHelper) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMovieSceneFloatChannelSerializationHelper) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMovieSceneAkAudioRTPCSection) == 0x0250); // 592 bytes (0x0000E8 - 0x000250)
static_assert(sizeof(UMovieSceneAkAudioRTPCTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UPostEventAsync) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UPostEventAtLocationAsync) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(FAKWaapiJsonObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiSubscriptionId) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAkExternalSourceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAkMidiEventBase) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FAkMidiProgramChange) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiChannelAftertouch) == 0x0003); // 3 bytes (0x000002 - 0x000003)
static_assert(sizeof(FAkMidiNoteAftertouch) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiPitchBend) == 0x0008); // 8 bytes (0x000002 - 0x000008)
static_assert(sizeof(FAkMidiCc) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiNoteOnOff) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkMidiGeneric) == 0x0004); // 4 bytes (0x000002 - 0x000004)
static_assert(sizeof(FAkOutputSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkChannelMask) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FAkCommunicationSettingsWithCommSelection) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FAkIOSAdvancedInitializationSettings) == 0x003C); // 60 bytes (0x00003C - 0x00003C)
static_assert(sizeof(FAkReverbDescriptor) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSurfaceEdgeInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FAkSurfaceEdgeVerts) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAkWaapiFieldNames) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAkWaapiUri) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneAkAudioEventTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneAkAudioRTPCTemplate) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(offsetof(UAkPortalComponent, InitialState) == 0x01F9);
static_assert(offsetof(UAkPortalComponent, ObstructionCollisionChannel) == 0x0200);
static_assert(offsetof(AAkAcousticPortal, Portal) == 0x0258);
static_assert(offsetof(AAkAcousticPortal, InitialState) == 0x0260);
static_assert(offsetof(UAkAudioType, UserData) == 0x0030);
static_assert(offsetof(UAkAcousticTexture, AcousticTextureCookedData) == 0x0050);
static_assert(offsetof(AAkAmbientSound, AkAudioEvent) == 0x0220);
static_assert(offsetof(AAkAmbientSound, AkComponent) == 0x0228);
static_assert(offsetof(FAkMainOutputSettings, AudioDeviceShareSet) == 0x0000);
static_assert(offsetof(FAkMainOutputSettings, PanningRule) == 0x0014);
static_assert(offsetof(FAkMainOutputSettings, ChannelConfigType) == 0x0018);
static_assert(offsetof(FAkCommonInitializationSettings, MainOutputSettings) == 0x0010);
static_assert(offsetof(FAkCommonInitializationSettings, SpatialAudioSettings) == 0x0040);
static_assert(offsetof(FAkCommunicationSettings, NetworkName) == 0x0008);
static_assert(offsetof(UAkAndroidInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkAndroidInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkAndroidInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkAudioDeviceShareSet, AudioDeviceShareSetCookedData) == 0x0050);
static_assert(offsetof(UAkAudioEvent, EventCookedData) == 0x0060);
static_assert(offsetof(UAkAudioEvent, RequiredBank) == 0x00C0);
static_assert(offsetof(UAkGameObject, AkAudioEvent) == 0x01F8);
static_assert(offsetof(UAkGameObject, EventName) == 0x0200);
static_assert(offsetof(UAkComponent, OcclusionCollisionChannel) == 0x0220);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBus) == 0x0230);
static_assert(offsetof(UAkComponent, EarlyReflectionAuxBusName) == 0x0238);
static_assert(offsetof(UAkAuxBus, AuxBusCookedData) == 0x0058);
static_assert(offsetof(UAkAuxBus, RequiredBank) == 0x00B8);
static_assert(offsetof(FAkBoolPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemName) == 0x0000);
static_assert(offsetof(FAkWwiseObjectDetails, ItemPath) == 0x0010);
static_assert(offsetof(FAkWwiseObjectDetails, ItemId) == 0x0020);
static_assert(offsetof(FAkWwiseItemToControl, ItemPicked) == 0x0000);
static_assert(offsetof(FAkWwiseItemToControl, ItemPath) == 0x0030);
static_assert(offsetof(UAkCheckBox, CheckedState) == 0x0460);
static_assert(offsetof(UAkCheckBox, WidgetStyle) == 0x0478);
static_assert(offsetof(UAkCheckBox, HorizontalAlignment) == 0x09F8);
static_assert(offsetof(UAkCheckBox, ThePropertyToControl) == 0x0A00);
static_assert(offsetof(UAkCheckBox, ItemToControl) == 0x0A10);
static_assert(offsetof(UAkAssetPlatformData, CurrentAssetData) == 0x0028);
static_assert(offsetof(UAkMediaAsset, MediaAssetDataPerPlatform) == 0x0028);
static_assert(offsetof(UAkEffectShareSet, ShareSetCookedData) == 0x0050);
static_assert(offsetof(UAkCallbackInfo, AkComponent) == 0x0028);
static_assert(offsetof(UAkMarkerCallbackInfo, Label) == 0x0040);
static_assert(offsetof(UAkMusicSyncCallbackInfo, SegmentInfo) == 0x0034);
static_assert(offsetof(UAkMusicSyncCallbackInfo, MusicSyncType) == 0x0058);
static_assert(offsetof(UAkMusicSyncCallbackInfo, UserCueName) == 0x0060);
static_assert(offsetof(FAkGeometrySurfaceOverride, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticSurface, Name) == 0x0008);
static_assert(offsetof(FAkGeometryData, Vertices) == 0x0000);
static_assert(offsetof(FAkGeometryData, Surfaces) == 0x0010);
static_assert(offsetof(FAkGeometryData, Triangles) == 0x0020);
static_assert(offsetof(FAkGeometryData, ToOverrideAcousticTexture) == 0x0030);
static_assert(offsetof(FAkGeometryData, ToOverrideOcclusion) == 0x0040);
static_assert(offsetof(UAkGeometryComponent, MeshType) == 0x0210);
static_assert(offsetof(UAkGeometryComponent, StaticMeshSurfaceOverride) == 0x0220);
static_assert(offsetof(UAkGeometryComponent, CollisionMeshSurfaceOverride) == 0x0270);
static_assert(offsetof(UAkGeometryComponent, AssociatedRoom) == 0x0290);
static_assert(offsetof(UAkGeometryComponent, GeometryData) == 0x02A8);
static_assert(offsetof(UAkGeometryComponent, SurfaceAreas) == 0x02F8);
static_assert(offsetof(UAkGroupValue, GroupValueCookedData) == 0x0050);
static_assert(offsetof(UAkHololensInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkHololensInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkHololensInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkInitBank, InitBankCookedData) == 0x0050);
static_assert(offsetof(FAkAudioSession, AudioSessionCategory) == 0x0000);
static_assert(offsetof(FAkAudioSession, AudioSessionMode) == 0x0008);
static_assert(offsetof(UAkIOSInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkIOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkIOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkIOSInitializationSettings, AdvancedSettings) == 0x00D0);
static_assert(offsetof(UAkLateReverbComponent, AuxBus) == 0x0210);
static_assert(offsetof(UAkLateReverbComponent, AuxBusName) == 0x0218);
static_assert(offsetof(UAkLateReverbComponent, AuxBusManual) == 0x0230);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkLinuxArm64InitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkLinuxInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkLinuxInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkLinuxInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkMacInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkMacInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkMacInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(AAkReverbVolume, AuxBus) == 0x0260);
static_assert(offsetof(AAkReverbVolume, AuxBusName) == 0x0268);
static_assert(offsetof(AAkReverbVolume, LateReverbComponent) == 0x0288);
static_assert(offsetof(UAkRoomComponent, GeometryComponent) == 0x0238);
static_assert(offsetof(UAkRtpc, GameParameterCookedData) == 0x0050);
static_assert(offsetof(FAkGeometrySurfacePropertiesToMap, AcousticTexture) == 0x0000);
static_assert(offsetof(FAkAcousticTextureParams, AbsorptionValues) == 0x0000);
static_assert(offsetof(UAkSettings, WwiseProjectPath) == 0x0030);
static_assert(offsetof(UAkSettings, WwiseSoundDataFolder) == 0x0040);
static_assert(offsetof(UAkSettings, RootOutputPath) == 0x0050);
static_assert(offsetof(UAkSettings, GeneratedSoundBanksFolder) == 0x0060);
static_assert(offsetof(UAkSettings, WwiseStagingDirectory) == 0x0070);
static_assert(offsetof(UAkSettings, DefaultOcclusionCollisionChannel) == 0x0084);
static_assert(offsetof(UAkSettings, DefaultFitToGeometryCollisionChannel) == 0x0085);
static_assert(offsetof(UAkSettings, DefaultReverbAuxBus) == 0x00E0);
static_assert(offsetof(UAkSettings, HFDampingName) == 0x0158);
static_assert(offsetof(UAkSettings, DecayEstimateName) == 0x0168);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionName) == 0x0178);
static_assert(offsetof(UAkSettings, HFDampingRTPC) == 0x0188);
static_assert(offsetof(UAkSettings, DecayEstimateRTPC) == 0x01B0);
static_assert(offsetof(UAkSettings, TimeToFirstReflectionRTPC) == 0x01D8);
static_assert(offsetof(UAkSettings, AudioInputEvent) == 0x0200);
static_assert(offsetof(UAkSettings, AcousticTextureParamsMap) == 0x0228);
static_assert(offsetof(UAkSettings, CommandletCommitMessage) == 0x0280);
static_assert(offsetof(UAkSettings, UnrealCultureToWwiseCulture) == 0x0290);
static_assert(offsetof(UAkSettings, DefaultAssetCreationPath) == 0x02E0);
static_assert(offsetof(UAkSettings, InitBank) == 0x02F0);
static_assert(offsetof(UAkSettings, AudioRouting) == 0x0318);
static_assert(offsetof(UAkSettings, WwiseWindowsInstallationPath) == 0x0328);
static_assert(offsetof(UAkSettings, WwiseMacInstallationPath) == 0x0338);
static_assert(offsetof(UAkSettingsPerUser, WwiseWindowsInstallationPath) == 0x0028);
static_assert(offsetof(UAkSettingsPerUser, WwiseMacInstallationPath) == 0x0038);
static_assert(offsetof(UAkSettingsPerUser, RootOutputPathOverride) == 0x0048);
static_assert(offsetof(UAkSettingsPerUser, GeneratedSoundBanksFolderOverride) == 0x0058);
static_assert(offsetof(UAkSettingsPerUser, WaapiIPAddress) == 0x0068);
static_assert(offsetof(FAkPropertyToControl, ItemProperty) == 0x0000);
static_assert(offsetof(UAkSlider, WidgetStyle) == 0x0120);
static_assert(offsetof(UAkSlider, Orientation) == 0x0460);
static_assert(offsetof(UAkSlider, SliderBarColor) == 0x0464);
static_assert(offsetof(UAkSlider, SliderHandleColor) == 0x0474);
static_assert(offsetof(UAkSlider, ThePropertyToControl) == 0x0490);
static_assert(offsetof(UAkSlider, ItemToControl) == 0x04A0);
static_assert(offsetof(AAkSpatialAudioVolume, SurfaceReflectorSet) == 0x0258);
static_assert(offsetof(AAkSpatialAudioVolume, LateReverb) == 0x0260);
static_assert(offsetof(AAkSpatialAudioVolume, Room) == 0x0268);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBus) == 0x0220);
static_assert(offsetof(AAkSpotReflector, EarlyReflectionAuxBusName) == 0x0228);
static_assert(offsetof(AAkSpotReflector, AcousticTexture) == 0x0238);
static_assert(offsetof(AAkSpotReflector, RoomOverride) == 0x0250);
static_assert(offsetof(UAkSubmixInputComponent, SubmixToRecord) == 0x03F8);
static_assert(offsetof(FAkSurfacePoly, Texture) == 0x0000);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AcousticPolys) == 0x0218);
static_assert(offsetof(UAkSurfaceReflectorSetComponent, AssociatedRoom) == 0x0230);
static_assert(offsetof(UAkTrigger, TriggerCookedData) == 0x0050);
static_assert(offsetof(UAkTVOSInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkTVOSInitializationSettings, AudioSession) == 0x00A0);
static_assert(offsetof(UAkTVOSInitializationSettings, CommunicationSettings) == 0x00B0);
static_assert(offsetof(UAkTVOSInitializationSettings, AdvancedSettings) == 0x00D0);
static_assert(offsetof(UAkWindowsInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkWindowsInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkWindowsInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommonSettings) == 0x0030);
static_assert(offsetof(UAkWinGDKInitializationSettings, CommunicationSettings) == 0x00A0);
static_assert(offsetof(UAkWinGDKInitializationSettings, AdvancedSettings) == 0x00C0);
static_assert(offsetof(UMovieSceneAkAudioEventSection, Event) == 0x0110);
static_assert(offsetof(UMovieSceneAkAudioEventSection, EventName) == 0x0128);
static_assert(offsetof(UMovieSceneAkAudioEventSection, MaxDurationSourceID) == 0x0140);
static_assert(offsetof(UMovieSceneAkTrack, Sections) == 0x0090);
static_assert(offsetof(FMovieSceneTangentDataSerializationHelper, TangentWeightMode) == 0x0008);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, InterpMode) == 0x0004);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, TangentMode) == 0x0005);
static_assert(offsetof(FMovieSceneFloatValueSerializationHelper, Tangent) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PreInfinityExtrap) == 0x0000);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, PostInfinityExtrap) == 0x0001);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Times) == 0x0008);
static_assert(offsetof(FMovieSceneFloatChannelSerializationHelper, Values) == 0x0018);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPC) == 0x00E8);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, Name) == 0x00F0);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatCurve) == 0x0100);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, FloatChannelSerializationHelper) == 0x0180);
static_assert(offsetof(UMovieSceneAkAudioRTPCSection, RTPCChannel) == 0x01B0);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSrcName) == 0x0000);
static_assert(offsetof(FAkExternalSourceInfo, CodecID) == 0x0010);
static_assert(offsetof(FAkExternalSourceInfo, Filename) == 0x0018);
static_assert(offsetof(FAkExternalSourceInfo, ExternalSourceAsset) == 0x0028);
static_assert(offsetof(FAkMidiEventBase, Type) == 0x0000);
static_assert(offsetof(FAkMidiCc, Cc) == 0x0002);
static_assert(offsetof(FAkOutputSettings, AudioDeviceShareSet) == 0x0000);
static_assert(offsetof(FAkOutputSettings, PanRule) == 0x000C);
static_assert(offsetof(FAkOutputSettings, ChannelConfig) == 0x000D);
static_assert(offsetof(FAkCommunicationSettingsWithCommSelection, CommunicationSystem) == 0x0018);
static_assert(offsetof(FAkReverbDescriptor, Primitive) == 0x0018);
static_assert(offsetof(FAkWaapiFieldNames, FieldName) == 0x0000);
static_assert(offsetof(FAkWaapiUri, Uri) == 0x0000);
static_assert(offsetof(FMovieSceneAkAudioEventTemplate, Section) == 0x0020);
static_assert(offsetof(FMovieSceneAkAudioRTPCTemplate, Section) == 0x0020);
