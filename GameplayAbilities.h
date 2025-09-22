
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataRegistry
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTasks
/// dependency: MovieScene
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately              = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd                    = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source                                    = 0,
	EGameplayEffectAttributeCaptureSource__Target                                    = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority                                        = 0,
	EGameplayAbilityActivationMode__NonAuthority                                     = 1,
	EGameplayAbilityActivationMode__Predicting                                       = 2,
	EGameplayAbilityActivationMode__Confirmed                                        = 3,
	EGameplayAbilityActivationMode__Rejected                                         = 4
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x01 (1 bytes)
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm                                   = 0,
	EAbilityGenericReplicatedEvent__GenericCancel                                    = 1,
	EAbilityGenericReplicatedEvent__InputPressed                                     = 2,
	EAbilityGenericReplicatedEvent__InputReleased                                    = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient                          = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer                          = 5,
	EAbilityGenericReplicatedEvent__GameCustom1                                      = 6,
	EAbilityGenericReplicatedEvent__GameCustom2                                      = 7,
	EAbilityGenericReplicatedEvent__GameCustom3                                      = 8,
	EAbilityGenericReplicatedEvent__GameCustom4                                      = 9,
	EAbilityGenericReplicatedEvent__GameCustom5                                      = 10,
	EAbilityGenericReplicatedEvent__GameCustom6                                      = 11
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x01 (1 bytes)
enum class EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive                                                      = 0,
	EGameplayCueEvent__WhileActive                                                   = 1,
	EGameplayCueEvent__Executed                                                      = 2,
	EGameplayCueEvent__Removed                                                       = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal                                          = 0,
	EGameplayEffectReplicationMode__Mixed                                            = 1,
	EGameplayEffectReplicationMode__Full                                             = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame                                             = 1,
	EAbilityTaskWaitState__WaitingOnUser                                             = 2,
	EAbilityTaskWaitState__WaitingOnAvatar                                           = 4
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x01 (1 bytes)
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource                  = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward                     = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace                        = 2
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x01 (1 bytes)
enum class EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait                                                = 0,
	EAbilityTaskNetSyncType__OnlyServerWait                                          = 1,
	EAbilityTaskNetSyncType__OnlyClientWait                                          = 2
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x01 (1 bytes)
enum class EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None                                             = 0,
	EWaitAttributeChangeComparison__GreaterThan                                      = 1,
	EWaitAttributeChangeComparison__LessThan                                         = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo                             = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo                                = 4,
	EWaitAttributeChangeComparison__NotEqualTo                                       = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo                                   = 6
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1                                             = 0,
	EGameplayAbilityInputBinds__Ability2                                             = 1,
	EGameplayAbilityInputBinds__Ability3                                             = 2,
	EGameplayAbilityInputBinds__Ability4                                             = 3,
	EGameplayAbilityInputBinds__Ability5                                             = 4,
	EGameplayAbilityInputBinds__Ability6                                             = 5,
	EGameplayAbilityInputBinds__Ability7                                             = 6,
	EGameplayAbilityInputBinds__Ability8                                             = 7,
	EGameplayAbilityInputBinds__Ability9                                             = 8
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x01 (1 bytes)
enum class ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any                                                  = 0,
	ETargetDataFilterSelf__TDFS_NoSelf                                               = 1,
	ETargetDataFilterSelf__TDFS_NoOthers                                             = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform                          = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform                            = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform                           = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x01 (1 bytes)
enum class EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant                                          = 0,
	EGameplayTargetingConfirmation__UserConfirmed                                    = 1,
	EGameplayTargetingConfirmation__Custom                                           = 2,
	EGameplayTargetingConfirmation__CustomMulti                                      = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x01 (1 bytes)
enum class ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position                                                 = 0,
	ERepAnimPositionMethod__CurrentSectionId                                         = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent                                     = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded                                     = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo                                   = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer                                = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution                           = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination                         = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly                                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted                               = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly                                    = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated                              = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly                                   = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced                                   = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor                              = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution                          = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x01 (1 bytes)
enum class EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters                                           = 0,
	EGameplayCuePayloadType__FromSpec                                                = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset                         = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod                        = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack                        = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration     = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication                = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset                                  = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication            = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh                              = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant                                             = 0,
	EGameplayEffectDurationType__Infinite                                            = 1,
	EGameplayEffectDurationType__HasDuration                                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked             = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient                           = 1
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x01 (1 bytes)
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude                          = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue                          = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude                     = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel      = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat                               = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased                              = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass                      = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller                                 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x01 (1 bytes)
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved                                              = 0,
	EGameplayTagEventType__AnyCountChange                                            = 1
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x01 (1 bytes)
enum class EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None                                                = 0,
	EGameplayEffectStackingType__AggregateBySource                                   = 1,
	EGameplayEffectStackingType__AggregateByTarget                                   = 2
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x01 (1 bytes)
enum class EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive                                                         = 0,
	EGameplayModOp__Multiplicitive                                                   = 1,
	EGameplayModOp__Division                                                         = 2,
	EGameplayModOp__Override                                                         = 3,
	EGameplayModOp__Max                                                              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x01 (1 bytes)
enum class EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel0                                          = 0,
	EGameplayModEvaluationChannel__Channel1                                          = 1,
	EGameplayModEvaluationChannel__Channel2                                          = 2,
	EGameplayModEvaluationChannel__Channel3                                          = 3,
	EGameplayModEvaluationChannel__Channel4                                          = 4,
	EGameplayModEvaluationChannel__Channel5                                          = 5,
	EGameplayModEvaluationChannel__Channel6                                          = 6,
	EGameplayModEvaluationChannel__Channel7                                          = 7,
	EGameplayModEvaluationChannel__Channel8                                          = 8,
	EGameplayModEvaluationChannel__Channel9                                          = 9
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAbilityAsync : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync.EndAction
	// void EndAction();                                                                                                        // [0xe4d440] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x00F8 (248 bytes) (0x000038 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x0048   (0x00B0)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	// class UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(class AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0xe53280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	// void OnAppliedDelegate__DelegateSignature(class AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x235b330] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
public:
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0048   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	// class UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(class AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0xe53610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	// void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x235b330] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	// class UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0xe53770] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0060 (96 bytes) (0x000050 - 0x000060) align 8 MaxSize: 0x0060
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	// class UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(class AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce); // [0xe53870] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
	// bool TargetDataHasOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                   // [0xe53120] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
	// bool TargetDataHasHitResult(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                                 // [0xe52fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
	// bool TargetDataHasEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                 // [0xe52e60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
	// bool TargetDataHasActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                                    // [0xe52d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
	// FGameplayEffectSpecHandle SetStackCountToMax(FGameplayEffectSpecHandle SpecHandle);                                      // [0xe52bf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
	// FGameplayEffectSpecHandle SetStackCount(FGameplayEffectSpecHandle SpecHandle, int32_t StackCount);                       // [0xe52aa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
	// FGameplayEffectSpecHandle SetDuration(FGameplayEffectSpecHandle SpecHandle, float Duration);                             // [0xe52950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
	// void SendGameplayEventToActor(class AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload);                   // [0xe52640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
	// bool NotEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);          // [0xe522c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
	// FGameplayEffectSpecHandle MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel); // [0xe52120] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
	// FGameplayCueParameters MakeGameplayCueParameters(float NormalizedMagnitude, float RawMagnitude, FGameplayEffectContextHandle EffectContext, FGameplayTag MatchedTagName, FGameplayTag OriginalTag, FGameplayTagContainer AggregatedSourceTags, FGameplayTagContainer AggregatedTargetTags, FVector Location, FVector Normal, class AActor* Instigator, class AActor* EffectCauser, class UObject* SourceObject, class UPhysicalMaterial* PhysicalMaterial, int32_t GameplayEffectLevel, int32_t AbilityLevel, class USceneComponent* TargetAttachComponent, bool bReplicateLocationWhenUsingMinimalRepProxy); // [0xe519a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
	// FGameplayTargetDataFilterHandle MakeFilterHandle(FGameplayTargetDataFilter Filter, class AActor* FilterActor);           // [0xe51800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
	// bool IsValid(FGameplayAttribute Attribute);                                                                              // [0xe51610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
	// bool IsInstigatorLocallyControlledPlayer(FGameplayCueParameters Parameters);                                             // [0xe51470] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
	// bool IsInstigatorLocallyControlled(FGameplayCueParameters Parameters);                                                   // [0xe512d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
	// bool HasHitResult(FGameplayCueParameters Parameters);                                                                    // [0xe51130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
	// FTransform GetTargetDataOrigin(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                             // [0xe50fa0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
	// FTransform GetTargetDataEndPointTransform(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                  // [0xe50e10] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
	// FVector GetTargetDataEndPoint(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                              // [0xe50ca0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
	// FVector GetOrigin(FGameplayCueParameters Parameters);                                                                    // [0xe50af0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
	// float GetModifiedAttributeMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayAttribute Attribute);                 // [0xe50870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
	// FTransform GetInstigatorTransform(FGameplayCueParameters Parameters);                                                    // [0xe506a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
	// class AActor* GetInstigatorActor(FGameplayCueParameters Parameters);                                                     // [0xe50500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
	// FHitResult GetHitResultFromTargetData(FGameplayAbilityTargetDataHandle& HitResult, int32_t Index);                       // [0xe50330] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
	// FHitResult GetHitResult(FGameplayCueParameters Parameters);                                                              // [0xe50140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
	// bool GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Location, FVector& Normal); // [0xe4fec0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
	// bool GetGameplayCueDirection(class AActor* TargetActor, FGameplayCueParameters Parameters, FVector& Direction);          // [0xe4fc80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
	// float GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0xe4fa10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
	// float GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute); // [0xe4f7a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
	// float GetFloatAttributeBase(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);       // [0xe4f530] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
	// float GetFloatAttribute(class AActor* Actor, FGameplayAttribute Attribute, bool& bSuccessfullyFoundAttribute);           // [0xe4f2c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
	// FGameplayEffectContextHandle GetEffectContext(FGameplayEffectSpecHandle SpecHandle);                                     // [0xe4f1b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
	// int32_t GetDataCountFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                        // [0xe4f090] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
	// TArray<FGameplayEffectSpecHandle> GetAllLinkedGameplayEffectSpecHandles(FGameplayEffectSpecHandle SpecHandle);           // [0xe4eea0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
	// TArray<AActor*> GetAllActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData);                                // [0xe4ed60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
	// TArray<AActor*> GetActorsFromTargetData(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index);                    // [0xe4ebe0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
	// int32_t GetActorCount(FGameplayCueParameters Parameters);                                                                // [0xe4ea40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
	// class AActor* GetActorByIndex(FGameplayCueParameters Parameters, int32_t Index);                                         // [0xe4e860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
	// float GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle);                                    // [0xe4e7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
	// float GetActiveGameplayEffectStartTime(FActiveGameplayEffectHandle ActiveHandle);                                        // [0xe4e740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
	// int32_t GetActiveGameplayEffectStackLimitCount(FActiveGameplayEffectHandle ActiveHandle);                                // [0xe4e6b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
	// int32_t GetActiveGameplayEffectStackCount(FActiveGameplayEffectHandle ActiveHandle);                                     // [0xe4e620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
	// float GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle); // [0xe4e540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
	// float GetActiveGameplayEffectExpectedEndTime(FActiveGameplayEffectHandle ActiveHandle);                                  // [0xe4e4b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
	// FString GetActiveGameplayEffectDebugString(FActiveGameplayEffectHandle ActiveHandle);                                    // [0xe4e3c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
	// class UAbilitySystemComponent* GetAbilitySystemComponent(class AActor* Actor);                                           // [0xe4e330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
	// void ForwardGameplayCueToTarget(TScriptInterface<Class> TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0xe4e0f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
	// FGameplayAbilityTargetDataHandle FilterTargetData(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTargetDataFilterHandle ActorFilterClass); // [0xe4df10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
	// float EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, float BaseValue, bool& bSuccess); // [0xe4db50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
	// float EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags, bool& bSuccess); // [0xe4d7e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
	// bool EqualEqual_GameplayAttributeGameplayAttribute(FGameplayAttribute AttributeA, FGameplayAttribute AttributeB);        // [0xe4d460] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
	// void EffectContextSetOrigin(FGameplayEffectContextHandle EffectContext, FVector Origin);                                 // [0xe4d310] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
	// bool EffectContextIsValid(FGameplayEffectContextHandle EffectContext);                                                   // [0xe4d220] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
	// bool EffectContextIsInstigatorLocallyControlled(FGameplayEffectContextHandle EffectContext);                             // [0xe4d130] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
	// bool EffectContextHasHitResult(FGameplayEffectContextHandle EffectContext);                                              // [0xe4d040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
	// class UObject* EffectContextGetSourceObject(FGameplayEffectContextHandle EffectContext);                                 // [0xe4cf50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
	// class AActor* EffectContextGetOriginalInstigatorActor(FGameplayEffectContextHandle EffectContext);                       // [0xe4ce60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
	// FVector EffectContextGetOrigin(FGameplayEffectContextHandle EffectContext);                                              // [0xe4cd60] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
	// class AActor* EffectContextGetInstigatorActor(FGameplayEffectContextHandle EffectContext);                               // [0xe4cc70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
	// FHitResult EffectContextGetHitResult(FGameplayEffectContextHandle EffectContext);                                        // [0xe4cb30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
	// class AActor* EffectContextGetEffectCauser(FGameplayEffectContextHandle EffectContext);                                  // [0xe4ca40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
	// void EffectContextAddHitResult(FGameplayEffectContextHandle EffectContext, FHitResult HitResult, bool bReset);           // [0xe4c830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
	// bool DoesTargetDataContainActor(FGameplayAbilityTargetDataHandle& TargetData, int32_t Index, class AActor* Actor);       // [0xe4c680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
	// bool DoesGameplayCueMeetTagRequirements(FGameplayCueParameters Parameters, FGameplayTagRequirements& SourceTagReqs, FGameplayTagRequirements& TargetTagReqs); // [0xe4c380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
	// FGameplayEffectSpecHandle CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone); // [0xe4c1e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
	// void BreakGameplayCueParameters(FGameplayCueParameters& Parameters, float& NormalizedMagnitude, float& RawMagnitude, FGameplayEffectContextHandle& EffectContext, FGameplayTag& MatchedTagName, FGameplayTag& OriginalTag, FGameplayTagContainer& AggregatedSourceTags, FGameplayTagContainer& AggregatedTargetTags, FVector& Location, FVector& Normal, class AActor*& Instigator, class AActor*& EffectCauser, class UObject*& SourceObject, class UPhysicalMaterial*& PhysicalMaterial, int32_t& GameplayEffectLevel, int32_t& AbilityLevel, class USceneComponent*& TargetAttachComponent, bool& bReplicateLocationWhenUsingMinimalRepProxy); // [0xe4b9c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignTagSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FGameplayTag DataTag, float Magnitude); // [0xe4b820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
	// FGameplayEffectSpecHandle AssignSetByCallerMagnitude(FGameplayEffectSpecHandle SpecHandle, FName DataName, float Magnitude); // [0xe4b680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
	// FGameplayAbilityTargetDataHandle AppendTargetDataHandle(FGameplayAbilityTargetDataHandle TargetHandle, FGameplayAbilityTargetDataHandle& HandleToAdd); // [0xe4b480] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
	// FGameplayEffectSpecHandle AddLinkedGameplayEffectSpec(FGameplayEffectSpecHandle SpecHandle, FGameplayEffectSpecHandle LinkedGameplayEffectSpec); // [0xe4b2e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
	// FGameplayEffectSpecHandle AddLinkedGameplayEffect(FGameplayEffectSpecHandle SpecHandle, class UClass* LinkedGameplayEffect); // [0xe4b180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
	// FGameplayEffectSpecHandle AddGrantedTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);   // [0xe4afd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
	// FGameplayEffectSpecHandle AddGrantedTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);              // [0xe4ae70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
	// FGameplayEffectSpecHandle AddAssetTags(FGameplayEffectSpecHandle SpecHandle, FGameplayTagContainer NewGameplayTags);     // [0xe4acc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
	// FGameplayEffectSpecHandle AddAssetTag(FGameplayEffectSpecHandle SpecHandle, FGameplayTag NewGameplayTag);                // [0xe4ab60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromLocations(FGameplayAbilityTargetingLocationInfo& SourceLocation, FGameplayAbilityTargetingLocationInfo& TargetLocation); // [0xe4a9b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromHitResult(FHitResult& HitResult);                                  // [0xe4a890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActorArray(TArray<AActor*>& ActorArray, bool OneTargetPerHandle);  // [0xe4a770] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
	// FGameplayAbilityTargetDataHandle AbilityTargetDataFromActor(class AActor* Actor);                                        // [0xe4a6b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAttributeDefaults
{ 
	class UClass*                                      Attributes;                                                 // 0x0000   (0x0008)  
	class UDataTable*                                  DefaultStartingTable;                                       // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayAbilitySpecHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPredictionKey
{ 
	class UPackageMap*                                 PredictiveConnection;                                       // 0x0000   (0x0008)  
	int16_t                                            Current;                                                    // 0x0008   (0x0002)  
	int16_t                                            Base;                                                       // 0x000A   (0x0002)  
	bool                                               bIsStale;                                                   // 0x000C   (0x0001)  
	bool                                               bIsServerInitiated;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayAbilityActivationInfo
{ 
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                             // 0x0000   (0x0001)  
	bool                                               bCanBeEndedByOtherInstance : 1;                             // 0x0001:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FPredictionKey                                     PredictionKeyWhenActivated;                                 // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FActiveGameplayEffectHandle
{ 
	int32_t                                            Handle;                                                     // 0x0000   (0x0004)  
	bool                                               bPassedFiltersAndWasExecuted;                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00E0 (224 bytes) (0x00000C - 0x0000E0) align 8 MaxSize: 0x00E0
struct FGameplayAbilitySpec : FFastArraySerializerItem
{ 
	FGameplayAbilitySpecHandle                         Handle;                                                     // 0x000C   (0x0004)  
	class UGameplayAbility*                            Ability;                                                    // 0x0010   (0x0008)  
	int32_t                                            Level;                                                      // 0x0018   (0x0004)  
	int32_t                                            InputID;                                                    // 0x001C   (0x0004)  
	class UObject*                                     SourceObject;                                               // 0x0020   (0x0008)  
	char                                               ActiveCount;                                                // 0x0028   (0x0001)  
	bool                                               InputPressed : 1;                                           // 0x0029:0 (0x0001)  
	bool                                               RemoveAfterActivation : 1;                                  // 0x0029:1 (0x0001)  
	bool                                               PendingRemove : 1;                                          // 0x0029:2 (0x0001)  
	bool                                               bActivateOnce : 1;                                          // 0x0029:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     ActivationInfo;                                             // 0x0030   (0x0018)  
	FGameplayTagContainer                              DynamicAbilityTags;                                         // 0x0048   (0x0020)  
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                     // 0x0068   (0x0010)  
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                        // 0x0078   (0x0010)  
	FActiveGameplayEffectHandle                        GameplayEffectHandle;                                       // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0090   (0x0050)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FGameplayAbilitySpecContainer : FFastArraySerializer
{ 
	TArray<FGameplayAbilitySpec>                       Items;                                                      // 0x0108   (0x0010)  
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0118   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayAbilityRepAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	float                                              PlayRate;                                                   // 0x0008   (0x0004)  
	float                                              position;                                                   // 0x000C   (0x0004)  
	float                                              BlendTime;                                                  // 0x0010   (0x0004)  
	char                                               NextSectionID;                                              // 0x0014   (0x0001)  
	bool                                               bRepPosition : 1;                                           // 0x0015:0 (0x0001)  
	bool                                               IsStopped : 1;                                              // 0x0015:1 (0x0001)  
	bool                                               ForcePlayBit : 1;                                           // 0x0015:2 (0x0001)  
	bool                                               SkipPositionCorrection : 1;                                 // 0x0015:3 (0x0001)  
	bool                                               bSkipPlayRate : 1;                                          // 0x0015:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	char                                               SectionIdToPlay;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityLocalAnimMontage
{ 
	class UAnimMontage*                                AnimMontage;                                                // 0x0000   (0x0008)  
	bool                                               PlayBit;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
	class UGameplayAbility*                            AnimatingAbility;                                           // 0x0020   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FGameplayAttribute
{ 
	FString                                            AttributeName;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UStruct*                                     AttributeOwner;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectModifiedAttribute
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	float                                              TotalMagnitude;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayEffectAttributeCaptureDefinition
{ 
	FGameplayAttribute                                 AttributeToCapture;                                         // 0x0000   (0x0038)  
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                            // 0x0038   (0x0001)  
	bool                                               bSnapshot;                                                  // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayEffectAttributeCaptureSpec
{ 
	FGameplayEffectAttributeCaptureDefinition          BackingDefinition;                                          // 0x0000   (0x0040)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{ 
	TArray<FGameplayEffectAttributeCaptureSpec>        SourceAttributes;                                           // 0x0000   (0x0010)  
	TArray<FGameplayEffectAttributeCaptureSpec>        TargetAttributes;                                           // 0x0010   (0x0010)  
	bool                                               bHasNonSnapshottedAttributes;                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FTagContainerAggregator
{ 
	FGameplayTagContainer                              CapturedActorTags;                                          // 0x0000   (0x0020)  
	FGameplayTagContainer                              CapturedSpecTags;                                           // 0x0020   (0x0020)  
	FGameplayTagContainer                              ScopedTags;                                                 // 0x0040   (0x0020)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FModifierSpec
{ 
	float                                              EvaluatedMagnitude;                                         // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FScalableFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FCurveTableRowHandle                               Curve;                                                      // 0x0008   (0x0010)  
	FDataRegistryType                                  RegistryType;                                               // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayAbilitySpecDef
{ 
	class UClass*                                      Ability;                                                    // 0x0000   (0x0008)  
	FScalableFloat                                     LevelScalableFloat;                                         // 0x0008   (0x0028)  
	int32_t                                            InputID;                                                    // 0x0030   (0x0004)  
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UObject*                                     SourceObject;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0040   (0x0050)  MISSED
	FGameplayAbilitySpecHandle                         AssignedHandle;                                             // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectContextHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (664 bytes) (0x000000 - 0x000298) align 8 MaxSize: 0x0298
struct FGameplayEffectSpec
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectAttributeCaptureSpecContainer       CapturedRelevantAttributes;                                 // 0x0018   (0x0028)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              Duration;                                                   // 0x0050   (0x0004)  
	float                                              Period;                                                     // 0x0054   (0x0004)  
	float                                              ChanceToApplyToTarget;                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FTagContainerAggregator                            CapturedSourceTags;                                         // 0x0060   (0x0088)  
	FTagContainerAggregator                            CapturedTargetTags;                                         // 0x00E8   (0x0088)  
	FGameplayTagContainer                              DynamicGrantedTags;                                         // 0x0170   (0x0020)  
	FGameplayTagContainer                              DynamicAssetTags;                                           // 0x0190   (0x0020)  
	TArray<FModifierSpec>                              Modifiers;                                                  // 0x01B0   (0x0010)  
	int32_t                                            StackCount;                                                 // 0x01C0   (0x0004)  
	bool                                               bCompletedSourceAttributeCapture : 1;                       // 0x01C4:0 (0x0001)  
	bool                                               bCompletedTargetAttributeCapture : 1;                       // 0x01C4:1 (0x0001)  
	bool                                               bDurationLocked : 1;                                        // 0x01C4:2 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilitySpecs;                                        // 0x01C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0xA0];                                      // 0x01D8   (0x00A0)  MISSED
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0278   (0x0018)  
	float                                              Level;                                                      // 0x0290   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x0368 (872 bytes) (0x00000C - 0x000368) align 8 MaxSize: 0x0368
struct FActiveGameplayEffect : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0xC];                                       // 0x000C   (0x000C)  MISSED
	FGameplayEffectSpec                                Spec;                                                       // 0x0018   (0x0298)  
	FPredictionKey                                     PredictionKey;                                              // 0x02B0   (0x0010)  
	float                                              StartServerWorldTime;                                       // 0x02C0   (0x0004)  
	float                                              CachedStartServerWorldTime;                                 // 0x02C4   (0x0004)  
	float                                              StartWorldTime;                                             // 0x02C8   (0x0004)  
	bool                                               bIsInhibited;                                               // 0x02CC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x9B];                                      // 0x02CD   (0x009B)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x0478 (1144 bytes) (0x000108 - 0x000478) align 8 MaxSize: 0x0478
struct FActiveGameplayEffectsContainer : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0108   (0x0028)  MISSED
	TArray<FActiveGameplayEffect>                      GameplayEffects_Internal;                                   // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_6[0x310];                                     // 0x0140   (0x0310)  MISSED
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                            // 0x0450   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0460   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FGameplayCueParameters
{ 
	float                                              NormalizedMagnitude;                                        // 0x0000   (0x0004)  
	float                                              RawMagnitude;                                               // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
	FGameplayTag                                       MatchedTagName;                                             // 0x0020   (0x0008)  
	FGameplayTag                                       OriginalTag;                                                // 0x0028   (0x0008)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	FVector_NetQuantize10                              Location;                                                   // 0x0070   (0x000C)  
	FVector_NetQuantizeNormal                          Normal;                                                     // 0x007C   (0x000C)  
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0088   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0090   (0x0008)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x0098   (0x0008)  
	TWeakObjectPtr<class UPhysicalMaterial*>           PhysicalMaterial;                                           // 0x00A0   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x00A8   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x00AC   (0x0004)  
	TWeakObjectPtr<class USceneComponent*>             TargetAttachComponent;                                      // 0x00B0   (0x0008)  
	bool                                               bReplicateLocationWhenUsingMinimalRepProxy;                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00F0 (240 bytes) (0x00000C - 0x0000F0) align 8 MaxSize: 0x00F0
struct FActiveGameplayCue : FFastArraySerializerItem
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	FGameplayCueParameters                             Parameters;                                                 // 0x0028   (0x00C0)  
	bool                                               bPredictivelyRemoved;                                       // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0128 (296 bytes) (0x000108 - 0x000128) align 8 MaxSize: 0x0128
struct FActiveGameplayCueContainer : FFastArraySerializer
{ 
	TArray<FActiveGameplayCue>                         GameplayCues;                                               // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0120   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMinimalReplicationTagCountMap
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FReplicatedPredictionKeyItem : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
struct FReplicatedPredictionKeyMap : FFastArraySerializer
{ 
	TArray<FReplicatedPredictionKeyItem>               PredictionKeys;                                             // 0x0108   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1368 (4968 bytes) (0x000120 - 0x001368) align 8 MaxSize: 0x1368
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0120   (0x0010)  MISSED
	TArray<FAttributeDefaults>                         DefaultStartingData;                                        // 0x0130   (0x0010)  
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                          // 0x0140   (0x0010)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x198];                                     // 0x0158   (0x0198)  MISSED
	float                                              OutgoingDuration;                                           // 0x02F0   (0x0004)  
	float                                              IncomingDuration;                                           // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x02F8   (0x0020)  MISSED
	TArray<FString>                                    ClientDebugStrings;                                         // 0x0318   (0x0010)  
	TArray<FString>                                    ServerDebugStrings;                                         // 0x0328   (0x0010)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x0338   (0x0058)  MISSED
	bool                                               UserAbilityActivationInhibited;                             // 0x0390   (0x0001)  
	bool                                               ReplicationProxyEnabled;                                    // 0x0391   (0x0001)  
	bool                                               bSuppressGrantAbility;                                      // 0x0392   (0x0001)  
	bool                                               bSuppressGameplayCues;                                      // 0x0393   (0x0001)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0394   (0x0004)  MISSED
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                        // 0x0398   (0x0010)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x03A8   (0x0028)  MISSED
	class AActor*                                      OwnerActor;                                                 // 0x03D0   (0x0008)  
	class AActor*                                      AvatarActor;                                                // 0x03D8   (0x0008)  
	unsigned char                                      UnknownData06_6[0x10];                                      // 0x03E0   (0x0010)  MISSED
	FGameplayAbilitySpecContainer                      ActivatableAbilities;                                       // 0x03F0   (0x0120)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x0510   (0x0030)  MISSED
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                            // 0x0540   (0x0010)  
	unsigned char                                      UnknownData08_6[0x200];                                     // 0x0550   (0x0200)  MISSED
	FGameplayAbilityRepAnimMontage                     RepAnimMontageInfo;                                         // 0x0750   (0x0030)  
	bool                                               bCachedIsNetSimulated;                                      // 0x0780   (0x0001)  
	bool                                               bPendingMontageRep;                                         // 0x0781   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x0782   (0x0006)  MISSED
	FGameplayAbilityLocalAnimMontage                   LocalAnimMontageInfo;                                       // 0x0788   (0x0028)  
	unsigned char                                      UnknownData10_6[0xA0];                                      // 0x07B0   (0x00A0)  MISSED
	FActiveGameplayEffectsContainer                    ActiveGameplayEffects;                                      // 0x0850   (0x0478)  
	FActiveGameplayCueContainer                        ActiveGameplayCues;                                         // 0x0CC8   (0x0128)  
	FActiveGameplayCueContainer                        MinimalReplicationGameplayCues;                             // 0x0DF0   (0x0128)  
	unsigned char                                      UnknownData11_6[0x128];                                     // 0x0F18   (0x0128)  MISSED
	TArray<char>                                       BlockedAbilityBindings;                                     // 0x1040   (0x0010)  
	unsigned char                                      UnknownData12_6[0x128];                                     // 0x1050   (0x0128)  MISSED
	FMinimalReplicationTagCountMap                     MinimalReplicationTags;                                     // 0x1178   (0x0060)  
	unsigned char                                      UnknownData13_6[0x10];                                      // 0x11D8   (0x0010)  MISSED
	FMinimalReplicationTagCountMap                     ReplicatedLooseTags;                                        // 0x11E8   (0x0060)  
	unsigned char                                      UnknownData14_6[0x8];                                       // 0x1248   (0x0008)  MISSED
	FReplicatedPredictionKeyMap                        ReplicatedPredictionKeyMap;                                 // 0x1250   (0x0118)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);                          // [0xe5b890] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0xe5b780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// void TargetConfirm();                                                                                                    // [0xe5b760] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	// void TargetCancel();                                                                                                     // [0xe5b740] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0xe5b6b0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0xe5b5b0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0xe5b4d0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0xe5b050] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0xe5aee0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0xe5ad60] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0xe5aad0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0xe5a8a0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0xe5a6d0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0xe5a620] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0xe5a570] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0xe5a480] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// void ServerPrintDebug_Request();                                                                                         // [0xe5a430] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0xe5a290] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// void ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate);                           // [0xe5a180] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0xe59ff0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, FName SectionName);                    // [0xe59ee0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0xe59db0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0xe59c00] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0xe59af0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0xe59a10] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0xe59920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0xe59830] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0xe59740] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0xe59740] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// void OnRep_ServerDebugString();                                                                                          // [0xe59720] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0xe59700] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// void OnRep_OwningActor();                                                                                                // [0xe596e0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// void OnRep_ClientDebugString();                                                                                          // [0xe596c0] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// void OnRep_ActivateAbilities();                                                                                          // [0xe596a0] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0xe59410] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0xe59230] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0xe58fa0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0xe58d60] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0xe58bd0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0xe58a50] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0xe585d0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0xe58450] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0xe58810] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0xe582d0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0xe580b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0xe58030] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);                                                // [0xe57f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0xe57ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// bool GetUserAbilityActivationInhibited();                                                                                // [0xe57e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	// int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0xe57df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0xe57bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// int32_t GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0xe57aa0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0xe579a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0xe578c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0xe57830] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0xe57700] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0xe575f0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0xe574f0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0xe573f0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0xe570b0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0xe56fc0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0xe56ee0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0xe56d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0xe56b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent* Target); // [0xe56a60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0xe56980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x235b330] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x235b330] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0310 (784 bytes) (0x000310 - 0x000310) align 8 MaxSize: 0x0310
class AAbilitySystemDebugHUD : public AHUD
{ 
public:
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNetSerializeScriptStructCache
{ 
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0000   (0x0010)  
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x0260 (608 bytes) (0x000028 - 0x000260) align 8 MaxSize: 0x0260
class UAbilitySystemGlobals : public UObject
{ 
public:
	FSoftClassPath                                     AbilitySystemGlobalsClassName;                              // 0x0028   (0x0018)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0040   (0x0028)  MISSED
	FGameplayTag                                       ActivateFailIsDeadTag;                                      // 0x0068   (0x0008)  
	FName                                              ActivateFailIsDeadName;                                     // 0x0070   (0x0008)  
	FGameplayTag                                       ActivateFailCooldownTag;                                    // 0x0078   (0x0008)  
	FName                                              ActivateFailCooldownName;                                   // 0x0080   (0x0008)  
	FGameplayTag                                       ActivateFailCostTag;                                        // 0x0088   (0x0008)  
	FName                                              ActivateFailCostName;                                       // 0x0090   (0x0008)  
	FGameplayTag                                       ActivateFailTagsBlockedTag;                                 // 0x0098   (0x0008)  
	FName                                              ActivateFailTagsBlockedName;                                // 0x00A0   (0x0008)  
	FGameplayTag                                       ActivateFailTagsMissingTag;                                 // 0x00A8   (0x0008)  
	FName                                              ActivateFailTagsMissingName;                                // 0x00B0   (0x0008)  
	FGameplayTag                                       ActivateFailNetworkingTag;                                  // 0x00B8   (0x0008)  
	FName                                              ActivateFailNetworkingName;                                 // 0x00C0   (0x0008)  
	int32_t                                            MinimalReplicationTagCountBits;                             // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNetSerializeScriptStructCache                     TargetDataStructCache;                                      // 0x00D0   (0x0010)  
	bool                                               bAllowGameplayModEvaluationChannels;                        // 0x00E0   (0x0001)  
	EGameplayModEvaluationChannel                      DefaultGameplayModEvaluationChannel;                        // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	FName                                              GameplayModEvaluationChannelAliases[10];                    // 0x00E4   (0x0050)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0134   (0x0004)  MISSED
	FSoftObjectPath                                    GlobalCurveTableName;                                       // 0x0138   (0x0018)  
	class UCurveTable*                                 GlobalCurveTable;                                           // 0x0150   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeMetaDataTableName;                           // 0x0158   (0x0018)  
	class UDataTable*                                  GlobalAttributeMetaDataTable;                               // 0x0170   (0x0008)  
	FSoftObjectPath                                    GlobalAttributeSetDefaultsTableName;                        // 0x0178   (0x0018)  
	TArray<FSoftObjectPath>                            GlobalAttributeSetDefaultsTableNames;                       // 0x0190   (0x0010)  
	TArray<class UCurveTable*>                         GlobalAttributeDefaultsTables;                              // 0x01A0   (0x0010)  
	FSoftObjectPath                                    GlobalGameplayCueManagerClass;                              // 0x01B0   (0x0018)  
	FSoftObjectPath                                    GlobalGameplayCueManagerName;                               // 0x01C8   (0x0018)  
	TArray<FString>                                    GameplayCueNotifyPaths;                                     // 0x01E0   (0x0010)  
	FSoftObjectPath                                    GameplayTagResponseTableName;                               // 0x01F0   (0x0018)  
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                   // 0x0208   (0x0008)  
	bool                                               PredictTargetGameplayEffects;                               // 0x0210   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0211   (0x0007)  MISSED
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                   // 0x0218   (0x0008)  
	unsigned char                                      UnknownData05_7[0x40];                                      // 0x0220   (0x0040)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
	// void ToggleIgnoreAbilitySystemCosts();                                                                                   // [0xe61840] Exec|Native|Public   
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
	// void ToggleIgnoreAbilitySystemCooldowns();                                                                               // [0xe61820] Exec|Native|Public   
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
	// void ServerEndPlayerAbility(FString AbilityNameMatch);                                                                   // [0xe61730] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
	// void ServerCancelPlayerAbility(FString AbilityNameMatch);                                                                // [0xe61730] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
	// void ServerActivatePlayerAbility(FString AbilityNameMatch);                                                              // [0xe61730] Final|Exec|Native|Public 
	// Function /Script/GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
	// void ListPlayerAbilities();                                                                                              // [0xb00010] Final|Exec|Native|Public 
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAttributeSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
public:
	float                                              MaxHealth;                                                  // 0x0030   (0x0004)  
	float                                              Health;                                                     // 0x0034   (0x0004)  
	float                                              Mana;                                                       // 0x0038   (0x0004)  
	float                                              MaxMana;                                                    // 0x003C   (0x0004)  
	float                                              Damage;                                                     // 0x0040   (0x0004)  
	float                                              SpellDamage;                                                // 0x0044   (0x0004)  
	float                                              PhysicalDamage;                                             // 0x0048   (0x0004)  
	float                                              CritChance;                                                 // 0x004C   (0x0004)  
	float                                              CritMultiplier;                                             // 0x0050   (0x0004)  
	float                                              ArmorDamageReduction;                                       // 0x0054   (0x0004)  
	float                                              DodgeChance;                                                // 0x0058   (0x0004)  
	float                                              LifeSteal;                                                  // 0x005C   (0x0004)  
	float                                              Strength;                                                   // 0x0060   (0x0004)  
	float                                              StackingAttribute1;                                         // 0x0064   (0x0004)  
	float                                              StackingAttribute2;                                         // 0x0068   (0x0004)  
	float                                              NoStackAttribute;                                           // 0x006C   (0x0004)  
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x02C8 (712 bytes) (0x0002A8 - 0x0002C8) align 8 MaxSize: 0x02C8
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x02A8   (0x0018)  MISSED
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x02C0   (0x0008)  
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0080 (128 bytes) (0x000068 - 0x000080) align 8 MaxSize: 0x0080
class UAbilityTask : public UGameplayTask
{ 
public:
	class UGameplayAbility*                            Ability;                                                    // 0x0068   (0x0008)  
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                     // 0x0070   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
public:
	FName                                              ForceName;                                                  // 0x0080   (0x0008)  
	ERootMotionFinishVelocityMode                      FinishVelocityMode;                                         // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FVector                                            FinishSetVelocity;                                          // 0x008C   (0x000C)  
	float                                              FinishClampVelocity;                                        // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UCharacterMovementComponent*                 MovementComponent;                                          // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x00F0 (240 bytes) (0x0000B8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	FVector                                            WorldDirection;                                             // 0x00C8   (0x000C)  
	float                                              Strength;                                                   // 0x00D4   (0x0004)  
	float                                              Duration;                                                   // 0x00D8   (0x0004)  
	bool                                               bIsAdditive;                                                // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00E0   (0x0008)  
	bool                                               bEnableGravity;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0xe5fa40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0110 (272 bytes) (0x0000B8 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnLanded);                                           // 0x00C8   (0x0010)  
	FRotator                                           Rotation;                                                   // 0x00D8   (0x000C)  
	float                                              Distance;                                                   // 0x00E4   (0x0004)  
	float                                              Height;                                                     // 0x00E8   (0x0004)  
	float                                              Duration;                                                   // 0x00EC   (0x0004)  
	float                                              MinimumLandedTriggerTime;                                   // 0x00F0   (0x0004)  
	bool                                               bFinishOnLanded;                                            // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0xe61560] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// void Finish();                                                                                                           // [0xe61540] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve); // [0xe5fd90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x0130 (304 bytes) (0x0000B8 - 0x000130) align 8 MaxSize: 0x0130
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FVector                                            StartLocation;                                              // 0x00D0   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00DC   (0x000C)  
	class AActor*                                      TargetActor;                                                // 0x00E8   (0x0008)  
	FVector                                            TargetLocationOffset;                                       // 0x00F0   (0x000C)  
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                            // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x0100   (0x0004)  
	bool                                               bDisableDestinationReachedInterrupt;                        // 0x0104   (0x0001)  
	bool                                               bSetNewMovementMode;                                        // 0x0105   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x0106   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x0107   (0x0001)  
	class UCurveVector*                                PathOffsetCurve;                                            // 0x0108   (0x0008)  
	class UCurveFloat*                                 TimeMappingCurve;                                           // 0x0110   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedHorizontalCurve;                             // 0x0118   (0x0008)  
	class UCurveFloat*                                 TargetLerpSpeedVerticalCurve;                               // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0128   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// void OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget);                                        // [0xe61660] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                             // [0xe61640] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0xe609a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0xe60160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0108 (264 bytes) (0x0000B8 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnTimedOut);                                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnTimedOutAndDestinationReached);                    // 0x00C8   (0x0010)  
	FVector                                            StartLocation;                                              // 0x00D8   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00E4   (0x000C)  
	float                                              Duration;                                                   // 0x00F0   (0x0004)  
	bool                                               bSetNewMovementMode;                                        // 0x00F4   (0x0001)  
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                            // 0x00F5   (0x0001)  
	bool                                               bRestrictSpeedToExpected;                                   // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00F7   (0x0001)  MISSED
	class UCurveVector*                                PathOffsetCurve;                                            // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0100   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0xe60650] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0110 (272 bytes) (0x0000B8 - 0x000110) align 8 MaxSize: 0x0110
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
public:
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x00B8   (0x0010)  
	FVector                                            Location;                                                   // 0x00C8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class AActor*                                      LocationActor;                                              // 0x00D8   (0x0008)  
	float                                              Strength;                                                   // 0x00E0   (0x0004)  
	float                                              Duration;                                                   // 0x00E4   (0x0004)  
	float                                              Radius;                                                     // 0x00E8   (0x0004)  
	bool                                               bIsPush;                                                    // 0x00EC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00ED   (0x0001)  
	bool                                               bNoZForce;                                                  // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00EF   (0x0001)  MISSED
	class UCurveFloat*                                 StrengthDistanceFalloff;                                    // 0x00F0   (0x0008)  
	class UCurveFloat*                                 StrengthOverTime;                                           // 0x00F8   (0x0008)  
	bool                                               bUseFixedWorldDirection;                                    // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0101   (0x0003)  MISSED
	FRotator                                           FixedWorldDirection;                                        // 0x0104   (0x000C)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0xe61030] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnTargetLocationReached);                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0090   (0x0004)  MISSED
	FVector                                            StartLocation;                                              // 0x0094   (0x000C)  
	FVector                                            TargetLocation;                                             // 0x00A0   (0x000C)  
	float                                              DurationOfMovement;                                         // 0x00AC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UCurveFloat*                                 LerpCurve;                                                  // 0x00B8   (0x0008)  
	class UCurveVector*                                LerpCurveVector;                                            // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// class UAbilityTask_MoveToLocation* MoveToLocation(class UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve); // [0xe643a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnSync);                                             // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// class UAbilityTask_NetworkSyncPoint* WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType); // [0xe66a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// void OnSignalCallback();                                                                                                 // [0xe649b0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0108 (264 bytes) (0x000080 - 0x000108) align 8 MaxSize: 0x0108
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnCompleted);                                        // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(OnCancelled);                                        // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C0   (0x0028)  MISSED
	class UAnimMontage*                                MontageToPlay;                                              // 0x00E8   (0x0008)  
	float                                              Rate;                                                       // 0x00F0   (0x0004)  
	FName                                              StartSection;                                               // 0x00F4   (0x0008)  
	float                                              AnimRootMotionTranslationScale;                             // 0x00FC   (0x0004)  
	float                                              StartTimeSeconds;                                           // 0x0100   (0x0004)  
	bool                                               bStopWhenAbilityEnds;                                       // 0x0104   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0105   (0x0003)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0xe64990] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);                                                     // [0xe648c0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);                                               // [0xe647f0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// class UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, FName TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds); // [0xe63eb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_Repeat : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnPerformAction);                                    // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// class UAbilityTask_Repeat* RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount); // [0xe649d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x00C8 (200 bytes) (0x000080 - 0x0000C8) align 8 MaxSize: 0x00C8
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(success);                                            // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// class UAbilityTask_SpawnActor* SpawnActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class); // [0xe64ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class AActor* SpawnedActor); // [0xe64110] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, class UClass* Class, class AActor*& SpawnedActor); // [0xe63b90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnStateEnded);                                       // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnStateInterrupted);                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// class UAbilityTask_StartAbilityState* StartAbilityState(class UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0xe64ca0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(TimeElapsed);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0090   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// class UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0xe64ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// class UAbilityTask_VisualizeTargeting* VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, FName TaskInstanceName, float Duration); // [0xe64da0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0xe642d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0xe63d90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x0138 (312 bytes) (0x000080 - 0x000138) align 8 MaxSize: 0x0138
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,465) /* FMulticastInlineDelegate */ __um(OnActivate);                                         // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0xA8];                                      // 0x0090   (0x00A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0xe65460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0xe65660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// class UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0xe652c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);                                                        // [0xe64580] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,466) /* FMulticastInlineDelegate */ __um(OnCommit);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0090   (0x0068)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0xe65980] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// class UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(class UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0xe65830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);                                                          // [0xe64610] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x00F8 (248 bytes) (0x000080 - 0x0000F8) align 8 MaxSize: 0x00F8
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,467) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0090   (0x0060)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0xe66660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// class UAbilityTask_WaitAttributeChange* WaitForAttributeChange(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner); // [0xe65b00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x0140 (320 bytes) (0x000080 - 0x000140) align 8 MaxSize: 0x0140
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,468) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x0090   (0x00A8)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// class UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0xe65e30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x00F0 (240 bytes) (0x000080 - 0x0000F0) align 8 MaxSize: 0x00F0
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,469) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0090   (0x0058)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x00E8   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// class UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner); // [0xe66330] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,470) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// class UAbilityTask_WaitCancel* WaitCancel(class UGameplayAbility* OwningAbility);                                        // [0xe65040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0xe64790] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0xe646a0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,471) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// class UAbilityTask_WaitConfirm* WaitConfirm(class UGameplayAbility* OwningAbility);                                      // [0xe650d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// void OnConfirmCallback(class UGameplayAbility* InAbility);                                                               // [0xe646e0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,472) /* FMulticastInlineDelegate */ __um(OnConfirm);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,473) /* FMulticastInlineDelegate */ __um(OnCancel);                                           // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// class UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(class UGameplayAbility* OwningAbility);                          // [0xe65160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// void OnLocalConfirmCallback();                                                                                           // [0xe647d0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0xe647b0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// void OnConfirmCallback();                                                                                                // [0xe64770] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0xe646c0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,474) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// class UAbilityTask_WaitDelay* WaitDelay(class UGameplayAbility* OwningAbility, float Time);                              // [0xe651f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x01B8 (440 bytes) (0x000080 - 0x0001B8) align 8 MaxSize: 0x01B8
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x128];                                     // 0x0080   (0x0128)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0xe69390] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x01D8 (472 bytes) (0x0001B8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,475) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0xe6a400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// class UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0xe6a030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x01D8 (472 bytes) (0x0001B8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
public:
	SDK_UNDEFINED(16,476) /* FMulticastInlineDelegate */ __um(OnApplied);                                          // 0x01B8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0xe6ab10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// class UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0xe6a740] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x0128 (296 bytes) (0x000080 - 0x000128) align 8 MaxSize: 0x0128
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,477) /* FMulticastInlineDelegate */ __um(bLocked);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0090   (0x0088)  MISSED
	class UAbilitySystemComponent*                     ExternalOwner;                                              // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// class UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0xe6ae50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,478) /* FMulticastInlineDelegate */ __um(OnRemoved);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,479) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x00A0   (0x0020)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// class UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0xe69de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0xe694f0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x00B8 (184 bytes) (0x000080 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,480) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,481) /* FMulticastInlineDelegate */ __um(InvalidHandle);                                      // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00A0   (0x0018)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// class UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0xe69ec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0xe695d0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,482) /* FMulticastInlineDelegate */ __um(EventReceived);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0090   (0x0008)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// class UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(class UGameplayAbility* OwningAbility, FGameplayTag EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0xe6b110] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0080   (0x0010)  MISSED
	class UAbilitySystemComponent*                     OptionalExternalTarget;                                     // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// void GameplayTagCallback(FGameplayTag Tag, int32_t NewCount);                                                            // [0xe692c0] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,483) /* FMulticastInlineDelegate */ __um(Added);                                              // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// class UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0xe6b2b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
public:
	SDK_UNDEFINED(16,484) /* FMulticastInlineDelegate */ __um(Removed);                                            // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// class UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, FGameplayTag Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0xe6b400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,485) /* FMulticastInlineDelegate */ __um(OnPress);                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// class UAbilityTask_WaitInputPress* WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);      // [0xe6b550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// void OnPressCallback();                                                                                                  // [0xe699e0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,486) /* FMulticastInlineDelegate */ __um(OnRelease);                                          // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// class UAbilityTask_WaitInputRelease* WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased); // [0xe6b620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// void OnReleaseCallback();                                                                                                // [0xe69a00] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,487) /* FMulticastInlineDelegate */ __um(OnChange);                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0xe698d0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// class UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0xe68ff0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0090 (144 bytes) (0x000080 - 0x000090) align 8 MaxSize: 0x0090
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,488) /* FMulticastInlineDelegate */ __um(OnOverlap);                                          // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility* OwningAbility);                                   // [0xe69fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// void OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0xe696f0] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,489) /* FMulticastInlineDelegate */ __um(ValidData);                                          // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,490) /* FMulticastInlineDelegate */ __um(Cancelled);                                          // 0x0090   (0x0010)  
	class UClass*                                      TargetClass;                                                // 0x00A0   (0x0008)  
	class AGameplayAbilityTargetActor*                 TargetActor;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// class UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor); // [0xe6b840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// class UAbilityTask_WaitTargetData* WaitTargetData(class UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class); // [0xe6b6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0xe69dc0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0xe69c60] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0xe69b40] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0xe69a20] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// void FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor);        // [0xe691f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// bool BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor*& SpawnedActor); // [0xe68ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x00A8 (168 bytes) (0x000080 - 0x0000A8) align 8 MaxSize: 0x00A8
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
public:
	SDK_UNDEFINED(16,491) /* FMulticastInlineDelegate */ __um(OnVelocityChage);                                    // 0x0080   (0x0010)  
	class UMovementComponent*                          CachedMovementComponent;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0098   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// class UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0xe690c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayAbilityTargetDataHandle
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FGameplayEventData
{ 
	FGameplayTag                                       EventTag;                                                   // 0x0000   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0008   (0x0008)  
	class AActor*                                      Target;                                                     // 0x0010   (0x0008)  
	class UObject*                                     OptionalObject;                                             // 0x0018   (0x0008)  
	class UObject*                                     OptionalObject2;                                            // 0x0020   (0x0008)  
	FGameplayEffectContextHandle                       ContextHandle;                                              // 0x0028   (0x0018)  
	FGameplayTagContainer                              InstigatorTags;                                             // 0x0040   (0x0020)  
	FGameplayTagContainer                              TargetTags;                                                 // 0x0060   (0x0020)  
	float                                              EventMagnitude;                                             // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0088   (0x0028)  
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FAbilityTriggerData
{ 
	FGameplayTag                                       TriggerTag;                                                 // 0x0000   (0x0008)  
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x03B0 (944 bytes) (0x000028 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x80];                                      // 0x0028   (0x0080)  MISSED
	FGameplayTagContainer                              AbilityTags;                                                // 0x00A8   (0x0020)  
	bool                                               bReplicateInputDirectly;                                    // 0x00C8   (0x0001)  
	bool                                               RemoteInstanceEnded;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CA   (0x0004)  MISSED
	TEnumAsByte<EGameplayAbilityReplicationPolicy>     ReplicationPolicy;                                          // 0x00CE   (0x0001)  
	TEnumAsByte<EGameplayAbilityInstancingPolicy>      InstancingPolicy;                                           // 0x00CF   (0x0001)  
	bool                                               bServerRespectsRemoteAbilityCancellation;                   // 0x00D0   (0x0001)  
	bool                                               bRetriggerInstancedAbility;                                 // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00D2   (0x0006)  MISSED
	FGameplayAbilityActivationInfo                     CurrentActivationInfo;                                      // 0x00D8   (0x0018)  
	FGameplayEventData                                 CurrentEventData;                                           // 0x00F0   (0x00B0)  
	TEnumAsByte<EGameplayAbilityNetExecutionPolicy>    NetExecutionPolicy;                                         // 0x01A0   (0x0001)  
	TEnumAsByte<EGameplayAbilityNetSecurityPolicy>     NetSecurityPolicy;                                          // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	class UClass*                                      CostGameplayEffectClass;                                    // 0x01A8   (0x0008)  
	TArray<FAbilityTriggerData>                        AbilityTriggers;                                            // 0x01B0   (0x0010)  
	class UClass*                                      CooldownGameplayEffectClass;                                // 0x01C0   (0x0008)  
	FGameplayTagContainer                              CancelAbilitiesWithTag;                                     // 0x01C8   (0x0020)  
	FGameplayTagContainer                              BlockAbilitiesWithTag;                                      // 0x01E8   (0x0020)  
	FGameplayTagContainer                              ActivationOwnedTags;                                        // 0x0208   (0x0020)  
	FGameplayTagContainer                              ActivationRequiredTags;                                     // 0x0228   (0x0020)  
	FGameplayTagContainer                              ActivationBlockedTags;                                      // 0x0248   (0x0020)  
	FGameplayTagContainer                              SourceRequiredTags;                                         // 0x0268   (0x0020)  
	FGameplayTagContainer                              SourceBlockedTags;                                          // 0x0288   (0x0020)  
	FGameplayTagContainer                              TargetRequiredTags;                                         // 0x02A8   (0x0020)  
	FGameplayTagContainer                              TargetBlockedTags;                                          // 0x02C8   (0x0020)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x02E8   (0x0020)  MISSED
	TArray<class UGameplayTask*>                       ActiveTasks;                                                // 0x0308   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0318   (0x0010)  MISSED
	class UAnimMontage*                                CurrentMontage;                                             // 0x0328   (0x0008)  
	unsigned char                                      UnknownData06_6[0x60];                                      // 0x0330   (0x0060)  MISSED
	bool                                               bIsActive;                                                  // 0x0390   (0x0001)  
	bool                                               bIsAbilityEnding;                                           // 0x0391   (0x0001)  
	bool                                               bIsCancelable;                                              // 0x0392   (0x0001)  
	bool                                               bIsBlockingOtherAbilities;                                  // 0x0393   (0x0001)  
	unsigned char                                      UnknownData07_6[0x14];                                      // 0x0394   (0x0014)  MISSED
	bool                                               bMarkPendingKillOnAbilityEnd;                               // 0x03A8   (0x0001)  
	unsigned char                                      UnknownData08_7[0x7];                                       // 0x03A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0xe75b60] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0xe75ad0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0xe75800] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// void RemoveGrantedByEffect();                                                                                            // [0xe757e0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0xe75760] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0xe75690] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	// void MontageJumpToSection(FName SectionName);                                                                            // [0xe75600] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0xe75500] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0xe75460] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);                // [0xe75300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x235b330] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0xe75270] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	// bool K2_HasAuthority();                                                                                                  // [0xe75240] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0xe75080] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0xe74f40] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	// void K2_EndAbility();                                                                                                    // [0xe74f20] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0xe74e80] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0xe74d90] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	// bool K2_CommitAbility();                                                                                                 // [0xe74d60] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// bool K2_CheckAbilityCost();                                                                                              // [0xe74d30] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// bool K2_CheckAbilityCooldown();                                                                                          // [0xe74d00] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	// void K2_CancelAbility();                                                                                                 // [0xe74ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x235b330] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0xe74ae0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0xe749f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0xe747e0] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0xe74660] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x235b330] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x235b330] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0xe74630] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// void InvalidateClientPredictionKey();                                                                                    // [0xe74610] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	// class UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);              // [0xe744e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// class USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                         // [0xe744b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// class AActor* GetOwningActorFromActorInfo();                                                                             // [0xe74480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0xe74400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// class UObject* GetCurrentSourceObject();                                                                                 // [0xe743d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	// class UAnimMontage* GetCurrentMontage();                                                                                 // [0xe743a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// float GetCooldownTimeRemaining();                                                                                        // [0xe74370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0xe741f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// class AActor* GetAvatarActorFromActorInfo();                                                                             // [0xe741c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0xe74150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                 // [0xe74120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	// int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                     // [0xe73ff0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	// int32_t GetAbilityLevel();                                                                                               // [0xe73fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0xe73f30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0xe73ea0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0xe73dd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0xe73d40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0xe73c60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0xe73b40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0xe73a20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0xe73820] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0xe73700] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x03B0 (944 bytes) (0x0003B0 - 0x0003B0) align 8 MaxSize: 0x03B0
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x03E8 (1000 bytes) (0x0003B0 - 0x0003E8) align 8 MaxSize: 0x03E8
class UGameplayAbility_Montage : public UGameplayAbility
{ 
public:
	class UAnimMontage*                                MontageToPlay;                                              // 0x03B0   (0x0008)  
	float                                              PlayRate;                                                   // 0x03B8   (0x0004)  
	FName                                              SectionName;                                                // 0x03BC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03C4   (0x0004)  MISSED
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                        // 0x03C8   (0x0010)  
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                              // 0x03D8   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGameplayAbilityBlueprint : public UBlueprint
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAbilityBindInfo
{ 
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      GameplayAbilityClass;                                       // 0x0008   (0x0008)  
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayAbilitySet : public UDataAsset
{ 
public:
	TArray<FGameplayAbilityBindInfo>                   Abilities;                                                  // 0x0030   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FGameplayAbilityTargetingLocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         LiteralTransform;                                           // 0x0020   (0x0030)  
	class AActor*                                      SourceActor;                                                // 0x0050   (0x0008)  
	class UMeshComponent*                              SourceComponent;                                            // 0x0058   (0x0008)  
	class UGameplayAbility*                            SourceAbility;                                              // 0x0060   (0x0008)  
	FName                                              SourceSocketName;                                           // 0x0068   (0x0008)  
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FWorldReticleParameters
{ 
	FVector                                            AOEScale;                                                   // 0x0000   (0x000C)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayTargetDataFilterHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0340 (832 bytes) (0x000220 - 0x000340) align 16 MaxSize: 0x0338
class AGameplayAbilityTargetActor : public AActor
{ 
public:
	bool                                               ShouldProduceTargetDataOnServer;                            // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0221   (0x000F)  MISSED
	FGameplayAbilityTargetingLocationInfo              StartLocation;                                              // 0x0230   (0x0070)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x02A0   (0x0030)  MISSED
	class APlayerController*                           MasterPC;                                                   // 0x02D0   (0x0008)  
	class UGameplayAbility*                            OwningAbility;                                              // 0x02D8   (0x0008)  
	bool                                               bDestroyOnConfirmation;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class AActor*                                      SourceActor;                                                // 0x02E8   (0x0008)  
	FWorldReticleParameters                            ReticleParams;                                              // 0x02F0   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
	class UClass*                                      ReticleClass;                                               // 0x0300   (0x0008)  
	FGameplayTargetDataFilterHandle                    Filter;                                                     // 0x0308   (0x0010)  
	bool                                               bDebug;                                                     // 0x0318   (0x0001)  
	unsigned char                                      UnknownData04_6[0x17];                                      // 0x0319   (0x0017)  MISSED
	class UAbilitySystemComponent*                     GenericDelegateBoundASC;                                    // 0x0330   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// void ConfirmTargeting();                                                                                                 // [0xe7abc0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// void CancelTargeting();                                                                                                  // [0xc31b50] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0350 (848 bytes) (0x000338 - 0x000350) align 16 MaxSize: 0x0350
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
public:
	float                                              MaxRange;                                                   // 0x0338   (0x0004)  
	FCollisionProfileName                              TraceProfile;                                               // 0x033C   (0x0008)  
	bool                                               bTraceAffectsAimPitch;                                      // 0x0344   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x0345   (0x000B)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0370 (880 bytes) (0x000350 - 0x000370) align 16 MaxSize: 0x0370
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
	float                                              CollisionRadius;                                            // 0x0350   (0x0004)  
	float                                              CollisionHeight;                                            // 0x0354   (0x0004)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0358   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0390 (912 bytes) (0x000370 - 0x000390) align 16 MaxSize: 0x0390
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
public:
	class UClass*                                      PlacedActorClass;                                           // 0x0370   (0x0008)  
	class UMaterialInterface*                          PlacedActorMaterial;                                        // 0x0378   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0340 (832 bytes) (0x000338 - 0x000340) align 16 MaxSize: 0x0340
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
public:
	float                                              Radius;                                                     // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x033C   (0x0004)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0350 (848 bytes) (0x000350 - 0x000350) align 16 MaxSize: 0x0350
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0240 (576 bytes) (0x000220 - 0x000240) align 8 MaxSize: 0x0240
class AGameplayAbilityWorldReticle : public AActor
{ 
public:
	FWorldReticleParameters                            Parameters;                                                 // 0x0220   (0x000C)  
	bool                                               bFaceOwnerFlat;                                             // 0x022C   (0x0001)  
	bool                                               bSnapToTargetedActor;                                       // 0x022D   (0x0001)  
	bool                                               bIsTargetValid;                                             // 0x022E   (0x0001)  
	bool                                               bIsTargetAnActor;                                           // 0x022F   (0x0001)  
	class APlayerController*                           MasterPC;                                                   // 0x0230   (0x0008)  
	class AActor*                                      TargetingActor;                                             // 0x0238   (0x0008)  


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x235b330] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// void OnParametersInitialized();                                                                                          // [0x235b330] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0xe7abe0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0258 (600 bytes) (0x000240 - 0x000258) align 8 MaxSize: 0x0258
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
public:
	class UCapsuleComponent*                           CollisionComponent;                                         // 0x0240   (0x0008)  
	TArray<class UActorComponent*>                     VisualizationComponents;                                    // 0x0248   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
	// void ForwardGameplayCueToParent();                                                                                       // [0xe7ac70] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
	// void BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters);               // [0x235b330] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayCueObjectLibrary
{ 
	TArray<FString>                                    Paths;                                                      // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0010   (0x0020)  MISSED
	class UObjectLibrary*                              ActorObjectLibrary;                                         // 0x0030   (0x0008)  
	class UObjectLibrary*                              StaticObjectLibrary;                                        // 0x0038   (0x0008)  
	class UGameplayCueSet*                             CueSet;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               bShouldSyncScan;                                            // 0x004C   (0x0001)  
	bool                                               bShouldAsyncLoad;                                           // 0x004D   (0x0001)  
	bool                                               bShouldSyncLoad;                                            // 0x004E   (0x0001)  
	bool                                               bHasBeenInitialized;                                        // 0x004F   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayEffectSpecForRPC
{ 
	class UGameplayEffect*                             Def;                                                        // 0x0000   (0x0008)  
	TArray<FGameplayEffectModifiedAttribute>           ModifiedAttributes;                                         // 0x0008   (0x0010)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0018   (0x0018)  
	FGameplayTagContainer                              AggregatedSourceTags;                                       // 0x0030   (0x0020)  
	FGameplayTagContainer                              AggregatedTargetTags;                                       // 0x0050   (0x0020)  
	float                                              Level;                                                      // 0x0070   (0x0004)  
	float                                              AbilityLevel;                                               // 0x0074   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0170 (368 bytes) (0x000000 - 0x000170) align 8 MaxSize: 0x0170
struct FGameplayCuePendingExecute
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0018   (0x0010)  
	EGameplayCuePayloadType                            PayloadType;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UAbilitySystemComponent*                     OwningComponent;                                            // 0x0030   (0x0008)  
	FGameplayEffectSpecForRPC                          FromSpec;                                                   // 0x0038   (0x0078)  
	FGameplayCueParameters                             CueParameters;                                              // 0x00B0   (0x00C0)  
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FPreallocationInfo
{ 
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0000   (0x0050)  MISSED
	TArray<class UClass*>                              ClassesNeedingPreallocation;                                // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x0310 (784 bytes) (0x000030 - 0x000310) align 8 MaxSize: 0x0310
class UGameplayCueManager : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0030   (0x0018)  MISSED
	FGameplayCueObjectLibrary                          RuntimeGameplayCueObjectLibrary;                            // 0x0048   (0x0050)  
	FGameplayCueObjectLibrary                          EditorGameplayCueObjectLibrary;                             // 0x0098   (0x0050)  
	unsigned char                                      UnknownData01_6[0x1C8];                                     // 0x00E8   (0x01C8)  MISSED
	TArray<class UClass*>                              LoadedGameplayCueNotifyClasses;                             // 0x02B0   (0x0010)  
	TArray<class UClass*>                              GameplayCueClassesForPreallocation;                         // 0x02C0   (0x0010)  
	TArray<FGameplayCuePendingExecute>                 PendingExecuteCues;                                         // 0x02D0   (0x0010)  
	int32_t                                            GameplayCueSendContextCount;                                // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02E4   (0x0004)  MISSED
	TArray<FPreallocationInfo>                         PreallocationInfoList_Internal;                             // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x02F8   (0x0018)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0280 (640 bytes) (0x000220 - 0x000280) align 8 MaxSize: 0x0280
class AGameplayCueNotify_Actor : public AActor
{ 
public:
	bool                                               bAutoDestroyOnRemove;                                       // 0x0220   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0221   (0x0003)  MISSED
	float                                              AutoDestroyDelay;                                           // 0x0224   (0x0004)  
	bool                                               WarnIfTimelineIsStillRunning;                               // 0x0228   (0x0001)  
	bool                                               WarnIfLatentActionIsStillRunning;                           // 0x0229   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x022A   (0x0002)  MISSED
	FGameplayTag                                       GameplayCueTag;                                             // 0x022C   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x0234   (0x0008)  
	bool                                               bAutoAttachToOwner;                                         // 0x023C   (0x0001)  
	bool                                               IsOverride;                                                 // 0x023D   (0x0001)  
	bool                                               bUniqueInstancePerInstigator;                               // 0x023E   (0x0001)  
	bool                                               bUniqueInstancePerSourceObject;                             // 0x023F   (0x0001)  
	bool                                               bAllowMultipleOnActiveEvents;                               // 0x0240   (0x0001)  
	bool                                               bAllowMultipleWhileActiveEvents;                            // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0242   (0x0002)  MISSED
	int32_t                                            NumPreallocatedInstances;                                   // 0x0244   (0x0004)  
	unsigned char                                      UnknownData03_7[0x38];                                      // 0x0248   (0x0038)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0xe81a20] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0xe81680] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// void OnOwnerDestroyed(class AActor* DestroyedActor);                                                                     // [0xe815f0] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0xe81250] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0xe80eb0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x235b330] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// void K2_EndGameplayCue();                                                                                                // [0xc31c90] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayCueNotify_Static : public UObject
{ 
public:
	FGameplayTag                                       GameplayCueTag;                                             // 0x0028   (0x0008)  
	FName                                              GameplayCueName;                                            // 0x0030   (0x0008)  
	bool                                               IsOverride;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// bool WhileActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                            // [0xe81bf0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// bool OnRemove(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0xe81850] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// bool OnExecute(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                              // [0xe81420] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	// bool OnActive(class AActor* MyTarget, FGameplayCueParameters& Parameters);                                               // [0xe81080] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x235b330] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0040   (0x0008)  
	class UParticleSystem*                             ParticleSystem;                                             // 0x0048   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameplayCueNotifyData
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
	FSoftObjectPath                                    GameplayCueNotifyObj;                                       // 0x0008   (0x0018)  
	class UClass*                                      LoadedGameplayCueClass;                                     // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UGameplayCueSet : public UDataAsset
{ 
public:
	TArray<FGameplayCueNotifyData>                     GameplayCueData;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
public:
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FAttributeBasedFloat
{ 
	FScalableFloat                                     Coefficient;                                                // 0x0000   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0028   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0050   (0x0028)  
	FGameplayEffectAttributeCaptureDefinition          BackingAttribute;                                           // 0x0078   (0x0040)  
	FCurveTableRowHandle                               AttributeCurve;                                             // 0x00B8   (0x0010)  
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                   // 0x00C8   (0x0001)  
	EGameplayModEvaluationChannel                      FinalChannel;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FGameplayTagContainer                              SourceTagFilter;                                            // 0x00D0   (0x0020)  
	FGameplayTagContainer                              TargetTagFilter;                                            // 0x00F0   (0x0020)  
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FCustomCalculationBasedFloat
{ 
	class UClass*                                      CalculationClassMagnitude;                                  // 0x0000   (0x0008)  
	FScalableFloat                                     Coefficient;                                                // 0x0008   (0x0028)  
	FScalableFloat                                     PreMultiplyAdditiveValue;                                   // 0x0030   (0x0028)  
	FScalableFloat                                     PostMultiplyAdditiveValue;                                  // 0x0058   (0x0028)  
	FCurveTableRowHandle                               FinalLookupCurve;                                           // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSetByCallerFloat
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	FGameplayTag                                       DataTag;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01E0 (480 bytes) (0x000000 - 0x0001E0) align 8 MaxSize: 0x01E0
struct FGameplayEffectModifierMagnitude
{ 
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FScalableFloat                                     ScalableFloatMagnitude;                                     // 0x0008   (0x0028)  
	FAttributeBasedFloat                               AttributeBasedMagnitude;                                    // 0x0030   (0x0110)  
	FCustomCalculationBasedFloat                       CustomMagnitude;                                            // 0x0140   (0x0090)  
	FSetByCallerFloat                                  SetByCallerMagnitude;                                       // 0x01D0   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGameplayModEvaluationChannelSettings
{ 
	EGameplayModEvaluationChannel                      Channel;                                                    // 0x0000   (0x0001)  
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGameplayTagRequirements
{ 
	FGameplayTagContainer                              RequireTags;                                                // 0x0000   (0x0020)  
	FGameplayTagContainer                              IgnoreTags;                                                 // 0x0020   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x02D0 (720 bytes) (0x000000 - 0x0002D0) align 8 MaxSize: 0x02D0
struct FGameplayModifierInfo
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FScalableFloat                                     Magnitude;                                                  // 0x0040   (0x0028)  
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0068   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0249   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0250   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0290   (0x0040)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x02B8 (696 bytes) (0x000000 - 0x0002B8) align 8 MaxSize: 0x02B8
struct FGameplayEffectExecutionScopedModifierInfo
{ 
	FGameplayEffectAttributeCaptureDefinition          CapturedAttribute;                                          // 0x0000   (0x0040)  
	FGameplayTag                                       TransientAggregatorIdentifier;                              // 0x0040   (0x0008)  
	EGameplayEffectScopedModifierAggregatorType        AggregatorType;                                             // 0x0048   (0x0001)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FGameplayEffectModifierMagnitude                   ModifierMagnitude;                                          // 0x0050   (0x01E0)  
	FGameplayModEvaluationChannelSettings              EvaluationChannelSettings;                                  // 0x0230   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0231   (0x0007)  MISSED
	FGameplayTagRequirements                           SourceTags;                                                 // 0x0238   (0x0040)  
	FGameplayTagRequirements                           TargetTags;                                                 // 0x0278   (0x0040)  
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FConditionalGameplayEffect
{ 
	class UClass*                                      EffectClass;                                                // 0x0000   (0x0008)  
	FGameplayTagContainer                              RequiredSourceTags;                                         // 0x0008   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FGameplayEffectExecutionDefinition
{ 
	class UClass*                                      CalculationClass;                                           // 0x0000   (0x0008)  
	FGameplayTagContainer                              PassedInTags;                                               // 0x0008   (0x0020)  
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                       // 0x0028   (0x0010)  
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                           // 0x0038   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x0048   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FGameplayEffectCue
{ 
	FGameplayAttribute                                 MagnitudeAttribute;                                         // 0x0000   (0x0038)  
	float                                              MinLevel;                                                   // 0x0038   (0x0004)  
	float                                              MaxLevel;                                                   // 0x003C   (0x0004)  
	FGameplayTagContainer                              GameplayCueTags;                                            // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FInheritedTagContainer
{ 
	FGameplayTagContainer                              CombinedTags;                                               // 0x0000   (0x0020)  
	FGameplayTagContainer                              Added;                                                      // 0x0020   (0x0020)  
	FGameplayTagContainer                              Removed;                                                    // 0x0040   (0x0020)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	SDK_UNDEFINED(16,492) /* FDelegateProperty */      __um(CustomMatchDelegate_BP);                               // 0x0010   (0x0010)  
	FGameplayTagQuery                                  OwningTagQuery;                                             // 0x0020   (0x0048)  
	FGameplayTagQuery                                  EffectTagQuery;                                             // 0x0068   (0x0048)  
	FGameplayTagQuery                                  SourceTagQuery;                                             // 0x00B0   (0x0048)  
	FGameplayAttribute                                 ModifyingAttribute;                                         // 0x00F8   (0x0038)  
	class UObject*                                     EffectSource;                                               // 0x0130   (0x0008)  
	class UClass*                                      EffectDefinition;                                           // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0140   (0x0010)  MISSED
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0800 (2048 bytes) (0x000028 - 0x000800) align 8 MaxSize: 0x0800
class UGameplayEffect : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	EGameplayEffectDurationType                        DurationPolicy;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGameplayEffectModifierMagnitude                   DurationMagnitude;                                          // 0x0038   (0x01E0)  
	FScalableFloat                                     Period;                                                     // 0x0218   (0x0028)  
	bool                                               bExecutePeriodicEffectOnApplication;                        // 0x0240   (0x0001)  
	EGameplayEffectPeriodInhibitionRemovedPolicy       PeriodicInhibitionPolicy;                                   // 0x0241   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0242   (0x0006)  MISSED
	TArray<FGameplayModifierInfo>                      Modifiers;                                                  // 0x0248   (0x0010)  
	TArray<FGameplayEffectExecutionDefinition>         Executions;                                                 // 0x0258   (0x0010)  
	FScalableFloat                                     ChanceToApplyToTarget;                                      // 0x0268   (0x0028)  
	TArray<class UClass*>                              ApplicationRequirements;                                    // 0x0290   (0x0010)  
	TArray<class UClass*>                              TargetEffectClasses;                                        // 0x02A0   (0x0010)  
	TArray<FConditionalGameplayEffect>                 ConditionalGameplayEffects;                                 // 0x02B0   (0x0010)  
	TArray<class UClass*>                              OverflowEffects;                                            // 0x02C0   (0x0010)  
	bool                                               bDenyOverflowApplication;                                   // 0x02D0   (0x0001)  
	bool                                               bClearStackOnOverflow;                                      // 0x02D1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x02D2   (0x0006)  MISSED
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                           // 0x02D8   (0x0010)  
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                             // 0x02E8   (0x0010)  
	bool                                               bRequireModifierSuccessToTriggerCues;                       // 0x02F8   (0x0001)  
	bool                                               bSuppressStackingCues;                                      // 0x02F9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x02FA   (0x0006)  MISSED
	TArray<FGameplayEffectCue>                         GameplayCues;                                               // 0x0300   (0x0010)  
	class UGameplayEffectUIData*                       UIData;                                                     // 0x0310   (0x0008)  
	FInheritedTagContainer                             InheritableGameplayEffectTags;                              // 0x0318   (0x0060)  
	FInheritedTagContainer                             InheritableOwnedTagsContainer;                              // 0x0378   (0x0060)  
	FGameplayTagRequirements                           OngoingTagRequirements;                                     // 0x03D8   (0x0040)  
	FGameplayTagRequirements                           ApplicationTagRequirements;                                 // 0x0418   (0x0040)  
	FGameplayTagRequirements                           RemovalTagRequirements;                                     // 0x0458   (0x0040)  
	FInheritedTagContainer                             RemoveGameplayEffectsWithTags;                              // 0x0498   (0x0060)  
	FGameplayTagRequirements                           GrantedApplicationImmunityTags;                             // 0x04F8   (0x0040)  
	FGameplayEffectQuery                               GrantedApplicationImmunityQuery;                            // 0x0538   (0x0150)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0688   (0x0008)  MISSED
	FGameplayEffectQuery                               RemoveGameplayEffectQuery;                                  // 0x0690   (0x0150)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x07E0   (0x0001)  MISSED
	EGameplayEffectStackingType                        StackingType;                                               // 0x07E1   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x07E2   (0x0002)  MISSED
	int32_t                                            StackLimitCount;                                            // 0x07E4   (0x0004)  
	EGameplayEffectStackingDurationPolicy              StackDurationRefreshPolicy;                                 // 0x07E8   (0x0001)  
	EGameplayEffectStackingPeriodPolicy                StackPeriodResetPolicy;                                     // 0x07E9   (0x0001)  
	EGameplayEffectStackingExpirationPolicy            StackExpirationPolicy;                                      // 0x07EA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x07EB   (0x0005)  MISSED
	TArray<FGameplayAbilitySpecDef>                    GrantedAbilities;                                           // 0x07F0   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameplayEffectCalculation : public UObject
{ 
public:
	TArray<FGameplayEffectAttributeCaptureDefinition>  RelevantAttributesToCapture;                                // 0x0028   (0x0010)  
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
public:


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
	// bool CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC); // [0xe86e10] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bRequiresPassedInTags;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0xe86f70] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGameplayEffectUIData : public UObject
{ 
public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
public:
	FText                                              Description;                                                // 0x0028   (0x0018)  
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
public:
	bool                                               bAllowNonNetAuthorityDependencyRegistration;                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0xe86d40] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGameplayTagReponsePair
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x0008)  
	class UClass*                                      ResponseGameplayEffect;                                     // 0x0008   (0x0008)  
	TArray<class UClass*>                              ResponseGameplayEffects;                                    // 0x0010   (0x0010)  
	int32_t                                            SoftCountCap;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayTagResponseTableEntry
{ 
	FGameplayTagReponsePair                            Positive;                                                   // 0x0000   (0x0028)  
	FGameplayTagReponsePair                            Negative;                                                   // 0x0028   (0x0028)  
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x01E8 (488 bytes) (0x000030 - 0x0001E8) align 8 MaxSize: 0x01E8
class UGameplayTagReponseTable : public UDataAsset
{ 
public:
	TArray<FGameplayTagResponseTableEntry>             Entries;                                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x1A8];                                     // 0x0040   (0x01A8)  MISSED


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// void TagResponseEvent(FGameplayTag Tag, int32_t NewCount, class UAbilitySystemComponent* ASC, int32_t Idx);              // [0xe87170] Final|Native|Protected 
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayCueTag
{ 
	FGameplayTag                                       GameplayCueTag;                                             // 0x0000   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FMovieSceneGameplayCueKey
{ 
	FGameplayCueTag                                    Cue;                                                        // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x000C)  
	FVector                                            Normal;                                                     // 0x0014   (0x000C)  
	FName                                              AttachSocketName;                                           // 0x0020   (0x0008)  
	float                                              NormalizedMagnitude;                                        // 0x0028   (0x0004)  
	FMovieSceneObjectBindingID                         Instigator;                                                 // 0x002C   (0x0018)  
	FMovieSceneObjectBindingID                         EffectCauser;                                               // 0x0044   (0x0018)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterial;                                           // 0x0060   (0x0008)  
	int32_t                                            GameplayEffectLevel;                                        // 0x0068   (0x0004)  
	int32_t                                            AbilityLevel;                                               // 0x006C   (0x0004)  
	bool                                               bAttachToBinding;                                           // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FMovieSceneGameplayCueChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0008   (0x0010)  
	TArray<FMovieSceneGameplayCueKey>                  KeyValues;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x0188 (392 bytes) (0x000100 - 0x000188) align 8 MaxSize: 0x0188
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueChannel                      Channel;                                                    // 0x0100   (0x0088)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0178 (376 bytes) (0x000100 - 0x000178) align 8 MaxSize: 0x0178
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
public:
	FMovieSceneGameplayCueKey                          Cue;                                                        // 0x0100   (0x0078)  
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x00A0 (160 bytes) (0x000090 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0xe870e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTickableAttributeSetInterface : public UInterface
{ 
public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayEffectSpecHandle
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayEffectRemovalInfo
{ 
	bool                                               bPrematureRemoval;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0004   (0x0004)  
	FGameplayEffectContextHandle                       EffectContext;                                              // 0x0008   (0x0018)  
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FServerAbilityRPCBatch
{ 
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FPredictionKey                                     PredictionKey;                                              // 0x0008   (0x0010)  
	FGameplayAbilityTargetDataHandle                   TargetData;                                                 // 0x0018   (0x0028)  
	bool                                               InputPressed;                                               // 0x0040   (0x0001)  
	bool                                               Ended;                                                      // 0x0041   (0x0001)  
	bool                                               Started;                                                    // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FAttributeMetaData : FTableRowBase
{ 
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              MinValue;                                                   // 0x000C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            DerivedAttributeInfo;                                       // 0x0018   (0x0010)  
	bool                                               bCanStack;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FGameplayAttributeData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              BaseValue;                                                  // 0x0008   (0x0004)  
	float                                              CurrentValue;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTargetDataFilter
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SelfActor;                                                  // 0x0008   (0x0008)  
	class UClass*                                      RequiredActorClass;                                         // 0x0010   (0x0008)  
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                                 // 0x0018   (0x0001)  
	bool                                               bReverseFilter;                                             // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FGameplayAbilityTargetData_SingleTargetHit : FGameplayAbilityTargetData
{ 
	FHitResult                                         HitResult;                                                  // 0x0008   (0x0088)  
	bool                                               bHitReplaced;                                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FGameplayAbilityTargetData_ActorArray : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	SDK_UNDEFINED(16,493) /* TArray<TWeakObjectPtr<AActor*>> */ __um(TargetActorArray);                            // 0x0080   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FGameplayAbilityTargetData_LocationInfo : FGameplayAbilityTargetData
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FGameplayAbilityTargetingLocationInfo              SourceLocation;                                             // 0x0010   (0x0070)  
	FGameplayAbilityTargetingLocationInfo              TargetLocation;                                             // 0x0080   (0x0070)  
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{ 
	FGameplayAbilitySpecHandle                         AbilityHandle;                                              // 0x0000   (0x0004)  
	int32_t                                            PredictionKeyAtCreation;                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAbilityTaskDebugMessage
{ 
	class UGameplayTask*                               FromTask;                                                   // 0x0000   (0x0008)  
	FString                                            Message;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAbilityEndedData
{ 
	class UGameplayAbility*                            AbilityThatEnded;                                           // 0x0000   (0x0008)  
	FGameplayAbilitySpecHandle                         AbilitySpecHandle;                                          // 0x0008   (0x0004)  
	bool                                               bReplicateEndAbility;                                       // 0x000C   (0x0001)  
	bool                                               bWasCancelled;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayAbilityActorInfo
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      OwnerActor;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      AvatarActor;                                                // 0x0010   (0x0008)  
	TWeakObjectPtr<class APlayerController*>           PlayerController;                                           // 0x0018   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     AbilitySystemComponent;                                     // 0x0020   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      SkeletalMeshComponent;                                      // 0x0028   (0x0008)  
	TWeakObjectPtr<class UAnimInstance*>               AnimInstance;                                               // 0x0030   (0x0008)  
	TWeakObjectPtr<class UMovementComponent*>          MovementComponent;                                          // 0x0038   (0x0008)  
	FName                                              AffectedAnimInstanceTag;                                    // 0x0040   (0x0008)  
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x0290 (656 bytes) (0x000000 - 0x000290) align 16 MaxSize: 0x0290
struct FMinimalGameplayCueReplicationProxy
{ 
	unsigned char                                      UnknownData00_7[0x280];                                     // 0x0000   (0x0280)  MISSED
	class UAbilitySystemComponent*                     Owner;                                                      // 0x0280   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayCueTranslationLink
{ 
	class UGameplayCueTranslator*                      RulesCDO;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FGameplayCueTranslatorNodeIndex
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FGameplayCueTranslatorNode
{ 
	TArray<FGameplayCueTranslationLink>                Links;                                                      // 0x0000   (0x0010)  
	FGameplayCueTranslatorNodeIndex                    CachedIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       CachedGameplayTag;                                          // 0x0014   (0x0008)  
	FName                                              CachedGameplayTagName;                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0024   (0x0054)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FGameplayCueTranslationManager
{ 
	TArray<FGameplayCueTranslatorNode>                 TranslationLUT;                                             // 0x0000   (0x0010)  
	TMap<FName, FGameplayCueTranslatorNodeIndex>       TranslationNameToIndexMap;                                  // 0x0010   (0x0050)  
	class UGameplayTagsManager*                        TagManager;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FActiveGameplayEffectQuery
{ 
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0000   (0x0088)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGameplayModifierEvaluatedData
{ 
	FGameplayAttribute                                 Attribute;                                                  // 0x0000   (0x0038)  
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Magnitude;                                                  // 0x003C   (0x0004)  
	FActiveGameplayEffectHandle                        Handle;                                                     // 0x0040   (0x0008)  
	bool                                               IsValid;                                                    // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGameplayEffectCustomExecutionOutput
{ 
	TArray<FGameplayModifierEvaluatedData>             OutputModifiers;                                            // 0x0000   (0x0010)  
	bool                                               bTriggerConditionalGameplayEffects : 1;                     // 0x0010:0 (0x0001)  
	bool                                               bHandledStackCountManually : 1;                             // 0x0010:1 (0x0001)  
	bool                                               bHandledGameplayCuesManually : 1;                           // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FGameplayEffectCustomExecutionParameters
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FGameplayTagBlueprintPropertyMapping
{ 
	FGameplayTag                                       TagToMap;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0008   (0x0020)  MISSED
	FName                                              PropertyName;                                               // 0x0028   (0x0008)  
	FGuid                                              PropertyGuid;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameplayTagBlueprintPropertyMap
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<FGameplayTagBlueprintPropertyMapping>       PropertyMappings;                                           // 0x0010   (0x0010)  
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FGameplayEffectContext
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class AActor*>                      Instigator;                                                 // 0x0008   (0x0008)  
	TWeakObjectPtr<class AActor*>                      EffectCauser;                                               // 0x0010   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityCDO;                                                 // 0x0018   (0x0008)  
	TWeakObjectPtr<class UGameplayAbility*>            AbilityInstanceNotReplicated;                               // 0x0020   (0x0008)  
	int32_t                                            AbilityLevel;                                               // 0x0028   (0x0004)  
	TWeakObjectPtr<class UObject*>                     SourceObject;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<class UAbilitySystemComponent*>     InstigatorAbilitySystemComponent;                           // 0x0034   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(16,494) /* TArray<TWeakObjectPtr<AActor*>> */ __um(Actors);                                      // 0x0040   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	FVector                                            WorldOrigin;                                                // 0x0060   (0x000C)  
	bool                                               bHasWorldOrigin : 1;                                        // 0x006C:0 (0x0001)  
	bool                                               bReplicateSourceObject : 1;                                 // 0x006C:1 (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x006D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAbilityAsync) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAbilityAsync_WaitGameplayEffectApplied) == 0x00F8); // 248 bytes (0x000038 - 0x0000F8)
static_assert(sizeof(UAbilityAsync_WaitGameplayEvent) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UAbilityAsync_WaitGameplayTag) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagAdded) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAbilityAsync_WaitGameplayTagRemoved) == 0x0060); // 96 bytes (0x000050 - 0x000060)
static_assert(sizeof(UAbilitySystemBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAttributeDefaults) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayAbilitySpecHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPredictionKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayAbilityActivationInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FActiveGameplayEffectHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilitySpec) == 0x00E0); // 224 bytes (0x00000C - 0x0000E0)
static_assert(sizeof(FGameplayAbilitySpecContainer) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(FGameplayAbilityRepAnimMontage) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGameplayAbilityLocalAnimMontage) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayAttribute) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FGameplayEffectModifiedAttribute) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayEffectAttributeCaptureDefinition) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpec) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectAttributeCaptureSpecContainer) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTagContainerAggregator) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FModifierSpec) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FScalableFloat) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayAbilitySpecDef) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FGameplayEffectContextHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayEffectSpec) == 0x0298); // 664 bytes (0x000000 - 0x000298)
static_assert(sizeof(FActiveGameplayEffect) == 0x0368); // 872 bytes (0x00000C - 0x000368)
static_assert(sizeof(FActiveGameplayEffectsContainer) == 0x0478); // 1144 bytes (0x000108 - 0x000478)
static_assert(sizeof(FGameplayCueParameters) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FActiveGameplayCue) == 0x00F0); // 240 bytes (0x00000C - 0x0000F0)
static_assert(sizeof(FActiveGameplayCueContainer) == 0x0128); // 296 bytes (0x000108 - 0x000128)
static_assert(sizeof(FMinimalReplicationTagCountMap) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FReplicatedPredictionKeyItem) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(FReplicatedPredictionKeyMap) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UAbilitySystemComponent) == 0x1368); // 4968 bytes (0x000120 - 0x001368)
static_assert(sizeof(AAbilitySystemDebugHUD) == 0x0310); // 784 bytes (0x000310 - 0x000310)
static_assert(sizeof(FNetSerializeScriptStructCache) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAbilitySystemGlobals) == 0x0260); // 608 bytes (0x000028 - 0x000260)
static_assert(sizeof(UAbilitySystemInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAbilitySystemReplicationProxyInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAttributeSet) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAbilitySystemTestAttributeSet) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(AAbilitySystemTestPawn) == 0x02C8); // 712 bytes (0x0002A8 - 0x0002C8)
static_assert(sizeof(UAbilityTask) == 0x0080); // 128 bytes (0x000068 - 0x000080)
static_assert(sizeof(UAbilityTask_ApplyRootMotion_Base) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_ApplyRootMotionConstantForce) == 0x00F0); // 240 bytes (0x0000B8 - 0x0000F0)
static_assert(sizeof(UAbilityTask_ApplyRootMotionJumpForce) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToActorForce) == 0x0130); // 304 bytes (0x0000B8 - 0x000130)
static_assert(sizeof(UAbilityTask_ApplyRootMotionMoveToForce) == 0x0108); // 264 bytes (0x0000B8 - 0x000108)
static_assert(sizeof(UAbilityTask_ApplyRootMotionRadialForce) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(UAbilityTask_MoveToLocation) == 0x00C8); // 200 bytes (0x000080 - 0x0000C8)
static_assert(sizeof(UAbilityTask_NetworkSyncPoint) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_PlayMontageAndWait) == 0x0108); // 264 bytes (0x000080 - 0x000108)
static_assert(sizeof(UAbilityTask_Repeat) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_SpawnActor) == 0x00C8); // 200 bytes (0x000080 - 0x0000C8)
static_assert(sizeof(UAbilityTask_StartAbilityState) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_VisualizeTargeting) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitAbilityActivate) == 0x0138); // 312 bytes (0x000080 - 0x000138)
static_assert(sizeof(UAbilityTask_WaitAbilityCommit) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UAbilityTask_WaitAttributeChange) == 0x00F8); // 248 bytes (0x000080 - 0x0000F8)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeRatioThreshold) == 0x0140); // 320 bytes (0x000080 - 0x000140)
static_assert(sizeof(UAbilityTask_WaitAttributeChangeThreshold) == 0x00F0); // 240 bytes (0x000080 - 0x0000F0)
static_assert(sizeof(UAbilityTask_WaitCancel) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_WaitConfirm) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitConfirmCancel) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitDelay) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied) == 0x01B8); // 440 bytes (0x000080 - 0x0001B8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Self) == 0x01D8); // 472 bytes (0x0001B8 - 0x0001D8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectApplied_Target) == 0x01D8); // 472 bytes (0x0001B8 - 0x0001D8)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectBlockedImmunity) == 0x0128); // 296 bytes (0x000080 - 0x000128)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectRemoved) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitGameplayEffectStackChange) == 0x00B8); // 184 bytes (0x000080 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitGameplayEvent) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(UAbilityTask_WaitGameplayTag) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(UAbilityTask_WaitGameplayTagAdded) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitGameplayTagRemoved) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAbilityTask_WaitInputPress) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitInputRelease) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitMovementModeChange) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
static_assert(sizeof(UAbilityTask_WaitOverlap) == 0x0090); // 144 bytes (0x000080 - 0x000090)
static_assert(sizeof(UAbilityTask_WaitTargetData) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(UAbilityTask_WaitVelocityChange) == 0x00A8); // 168 bytes (0x000080 - 0x0000A8)
static_assert(sizeof(FGameplayAbilityTargetDataHandle) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEventData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAbilityTriggerData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UGameplayAbility) == 0x03B0); // 944 bytes (0x000028 - 0x0003B0)
static_assert(sizeof(UGameplayAbility_CharacterJump) == 0x03B0); // 944 bytes (0x0003B0 - 0x0003B0)
static_assert(sizeof(UGameplayAbility_Montage) == 0x03E8); // 1000 bytes (0x0003B0 - 0x0003E8)
static_assert(sizeof(UGameplayAbilityBlueprint) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(FGameplayAbilityBindInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGameplayAbilitySet) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FGameplayAbilityTargetingLocationInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FWorldReticleParameters) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGameplayTargetDataFilterHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(AGameplayAbilityTargetActor) == 0x0338); // 824 bytes (0x000220 - 0x000338)
static_assert(sizeof(AGameplayAbilityTargetActor_Trace) == 0x0350); // 848 bytes (0x000338 - 0x000350)
static_assert(sizeof(AGameplayAbilityTargetActor_GroundTrace) == 0x0370); // 880 bytes (0x000350 - 0x000370)
static_assert(sizeof(AGameplayAbilityTargetActor_ActorPlacement) == 0x0390); // 912 bytes (0x000370 - 0x000390)
static_assert(sizeof(AGameplayAbilityTargetActor_Radius) == 0x0340); // 832 bytes (0x000338 - 0x000340)
static_assert(sizeof(AGameplayAbilityTargetActor_SingleLineTrace) == 0x0350); // 848 bytes (0x000350 - 0x000350)
static_assert(sizeof(AGameplayAbilityWorldReticle) == 0x0240); // 576 bytes (0x000220 - 0x000240)
static_assert(sizeof(AGameplayAbilityWorldReticle_ActorVisualization) == 0x0258); // 600 bytes (0x000240 - 0x000258)
static_assert(sizeof(UGameplayCueInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayCueObjectLibrary) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectSpecForRPC) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FGameplayCuePendingExecute) == 0x0170); // 368 bytes (0x000000 - 0x000170)
static_assert(sizeof(FPreallocationInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UGameplayCueManager) == 0x0310); // 784 bytes (0x000030 - 0x000310)
static_assert(sizeof(AGameplayCueNotify_Actor) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(UGameplayCueNotify_Static) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGameplayCueNotify_HitImpact) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FGameplayCueNotifyData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UGameplayCueSet) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UGameplayCueTranslator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayCueTranslator_Test) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAttributeBasedFloat) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FCustomCalculationBasedFloat) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSetByCallerFloat) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayEffectModifierMagnitude) == 0x01E0); // 480 bytes (0x000000 - 0x0001E0)
static_assert(sizeof(FGameplayModEvaluationChannelSettings) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGameplayTagRequirements) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FGameplayModifierInfo) == 0x02D0); // 720 bytes (0x000000 - 0x0002D0)
static_assert(sizeof(FGameplayEffectExecutionScopedModifierInfo) == 0x02B8); // 696 bytes (0x000000 - 0x0002B8)
static_assert(sizeof(FConditionalGameplayEffect) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayEffectExecutionDefinition) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FGameplayEffectCue) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FInheritedTagContainer) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FGameplayEffectQuery) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(UGameplayEffect) == 0x0800); // 2048 bytes (0x000028 - 0x000800)
static_assert(sizeof(UGameplayEffectCalculation) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGameplayEffectCustomApplicationRequirement) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayEffectExecutionCalculation) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGameplayEffectUIData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameplayEffectUIData_TextOnly) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGameplayModMagnitudeCalculation) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FGameplayTagReponsePair) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FGameplayTagResponseTableEntry) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UGameplayTagReponseTable) == 0x01E8); // 488 bytes (0x000030 - 0x0001E8)
static_assert(sizeof(FGameplayCueTag) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMovieSceneGameplayCueKey) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FMovieSceneGameplayCueChannel) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(UMovieSceneGameplayCueTriggerSection) == 0x0188); // 392 bytes (0x000100 - 0x000188)
static_assert(sizeof(UMovieSceneGameplayCueSection) == 0x0178); // 376 bytes (0x000100 - 0x000178)
static_assert(sizeof(UMovieSceneGameplayCueTrack) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UTickableAttributeSetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGameplayEffectSpecHandle) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayEffectRemovalInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FServerAbilityRPCBatch) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FAttributeMetaData) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FGameplayAttributeData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayTargetDataFilter) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayAbilityTargetData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGameplayAbilityTargetData_SingleTargetHit) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FGameplayAbilityTargetData_ActorArray) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FGameplayAbilityTargetData_LocationInfo) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAbilityTaskDebugMessage) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAbilityEndedData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGameplayAbilityActorInfo) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FMinimalGameplayCueReplicationProxy) == 0x0290); // 656 bytes (0x000000 - 0x000290)
static_assert(sizeof(FGameplayCueTranslationLink) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayCueTranslatorNodeIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FGameplayCueTranslatorNode) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FGameplayCueTranslationManager) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FActiveGameplayEffectQuery) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FGameplayModifierEvaluatedData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGameplayEffectCustomExecutionOutput) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameplayEffectCustomExecutionParameters) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FGameplayTagBlueprintPropertyMapping) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FGameplayTagBlueprintPropertyMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGameplayEffectContext) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(FAttributeDefaults, Attributes) == 0x0000);
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 0x0008);
static_assert(offsetof(FPredictionKey, PredictiveConnection) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0x0000);
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpec, Handle) == 0x000C);
static_assert(offsetof(FGameplayAbilitySpec, Ability) == 0x0010);
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 0x0020);
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 0x0030);
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 0x0048);
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 0x0068);
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 0x0078);
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 0x0088);
static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 0x0108);
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 0x0118);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 0x0018);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0x0000);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 0x0010);
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 0x0020);
static_assert(offsetof(FGameplayAttribute, AttributeName) == 0x0000);
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 0x0030);
static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 0x0038);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0x0000);
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 0x0010);
static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0x0000);
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 0x0020);
static_assert(offsetof(FTagContainerAggregator, ScopedTags) == 0x0040);
static_assert(offsetof(FScalableFloat, Curve) == 0x0008);
static_assert(offsetof(FScalableFloat, RegistryType) == 0x0018);
static_assert(offsetof(FGameplayAbilitySpecDef, Ability) == 0x0000);
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 0x0008);
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 0x0034);
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 0x0038);
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 0x0090);
static_assert(offsetof(FGameplayEffectSpec, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 0x0018);
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 0x0060);
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 0x00E8);
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 0x0170);
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 0x0190);
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 0x01B0);
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 0x01C8);
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 0x0278);
static_assert(offsetof(FActiveGameplayEffect, Spec) == 0x0018);
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 0x02B0);
static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 0x0130);
static_assert(offsetof(FActiveGameplayEffectsContainer, ApplicationImmunityQueryEffects) == 0x0450);
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 0x0008);
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 0x0020);
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 0x0028);
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 0x0030);
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 0x0050);
static_assert(offsetof(FGameplayCueParameters, Location) == 0x0070);
static_assert(offsetof(FGameplayCueParameters, Normal) == 0x007C);
static_assert(offsetof(FGameplayCueParameters, Instigator) == 0x0088);
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 0x0090);
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 0x0098);
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 0x00A0);
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 0x00B0);
static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 0x000C);
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 0x0018);
static_assert(offsetof(FActiveGameplayCue, Parameters) == 0x0028);
static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 0x0108);
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 0x0120);
static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 0x0050);
static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 0x0010);
static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 0x0108);
static_assert(offsetof(UAbilitySystemComponent, DefaultStartingData) == 0x0130);
static_assert(offsetof(UAbilitySystemComponent, SpawnedAttributes) == 0x0140);
static_assert(offsetof(UAbilitySystemComponent, AffectedAnimInstanceTag) == 0x0150);
static_assert(offsetof(UAbilitySystemComponent, ClientDebugStrings) == 0x0318);
static_assert(offsetof(UAbilitySystemComponent, ServerDebugStrings) == 0x0328);
static_assert(offsetof(UAbilitySystemComponent, SpawnedTargetActors) == 0x0398);
static_assert(offsetof(UAbilitySystemComponent, OwnerActor) == 0x03D0);
static_assert(offsetof(UAbilitySystemComponent, AvatarActor) == 0x03D8);
static_assert(offsetof(UAbilitySystemComponent, ActivatableAbilities) == 0x03F0);
static_assert(offsetof(UAbilitySystemComponent, AllReplicatedInstancedAbilities) == 0x0540);
static_assert(offsetof(UAbilitySystemComponent, RepAnimMontageInfo) == 0x0750);
static_assert(offsetof(UAbilitySystemComponent, LocalAnimMontageInfo) == 0x0788);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayEffects) == 0x0850);
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayCues) == 0x0CC8);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationGameplayCues) == 0x0DF0);
static_assert(offsetof(UAbilitySystemComponent, BlockedAbilityBindings) == 0x1040);
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationTags) == 0x1178);
static_assert(offsetof(UAbilitySystemComponent, ReplicatedLooseTags) == 0x11E8);
static_assert(offsetof(UAbilitySystemComponent, ReplicatedPredictionKeyMap) == 0x1250);
static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0x0000);
static_assert(offsetof(UAbilitySystemGlobals, AbilitySystemGlobalsClassName) == 0x0028);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadTag) == 0x0068);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadName) == 0x0070);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownTag) == 0x0078);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownName) == 0x0080);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostTag) == 0x0088);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostName) == 0x0090);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedTag) == 0x0098);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedName) == 0x00A0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingTag) == 0x00A8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingName) == 0x00B0);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingTag) == 0x00B8);
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingName) == 0x00C0);
static_assert(offsetof(UAbilitySystemGlobals, TargetDataStructCache) == 0x00D0);
static_assert(offsetof(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel) == 0x00E1);
static_assert(offsetof(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases) == 0x00E4);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTableName) == 0x0138);
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTable) == 0x0150);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName) == 0x0158);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTable) == 0x0170);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName) == 0x0178);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames) == 0x0190);
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeDefaultsTables) == 0x01A0);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerClass) == 0x01B0);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerName) == 0x01C8);
static_assert(offsetof(UAbilitySystemGlobals, GameplayCueNotifyPaths) == 0x01E0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTableName) == 0x01F0);
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTable) == 0x0208);
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManager) == 0x0218);
static_assert(offsetof(AAbilitySystemTestPawn, AbilitySystemComponent) == 0x02C0);
static_assert(offsetof(UAbilityTask, Ability) == 0x0068);
static_assert(offsetof(UAbilityTask, AbilitySystemComponent) == 0x0070);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, ForceName) == 0x0080);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode) == 0x0088);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity) == 0x008C);
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, MovementComponent) == 0x00A0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection) == 0x00C8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime) == 0x00E0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Rotation) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve) == 0x0100);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation) == 0x00D0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation) == 0x00DC);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor) == 0x00E8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment) == 0x00FC);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode) == 0x0106);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve) == 0x0108);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve) == 0x0110);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve) == 0x0118);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve) == 0x0120);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation) == 0x00E4);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode) == 0x00F5);
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Location) == 0x00C8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, LocationActor) == 0x00D8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff) == 0x00F0);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime) == 0x00F8);
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection) == 0x0104);
static_assert(offsetof(UAbilityTask_MoveToLocation, StartLocation) == 0x0094);
static_assert(offsetof(UAbilityTask_MoveToLocation, TargetLocation) == 0x00A0);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurve) == 0x00B8);
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurveVector) == 0x00C0);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, MontageToPlay) == 0x00E8);
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, StartSection) == 0x00F4);
static_assert(offsetof(UAbilityTask_WaitAttributeChange, ExternalOwner) == 0x00F0);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner) == 0x0138);
static_assert(offsetof(UAbilityTask_WaitAttributeChangeThreshold, ExternalOwner) == 0x00E8);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied, ExternalOwner) == 0x01A8);
static_assert(offsetof(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner) == 0x0118);
static_assert(offsetof(UAbilityTask_WaitGameplayEvent, OptionalExternalTarget) == 0x0098);
static_assert(offsetof(UAbilityTask_WaitGameplayTag, OptionalExternalTarget) == 0x0090);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetClass) == 0x00A0);
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetActor) == 0x00A8);
static_assert(offsetof(UAbilityTask_WaitVelocityChange, CachedMovementComponent) == 0x0090);
static_assert(offsetof(FGameplayEventData, EventTag) == 0x0000);
static_assert(offsetof(FGameplayEventData, Instigator) == 0x0008);
static_assert(offsetof(FGameplayEventData, Target) == 0x0010);
static_assert(offsetof(FGameplayEventData, OptionalObject) == 0x0018);
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 0x0020);
static_assert(offsetof(FGameplayEventData, ContextHandle) == 0x0028);
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 0x0040);
static_assert(offsetof(FGameplayEventData, TargetTags) == 0x0060);
static_assert(offsetof(FGameplayEventData, TargetData) == 0x0088);
static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0x0000);
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 0x0008);
static_assert(offsetof(UGameplayAbility, AbilityTags) == 0x00A8);
static_assert(offsetof(UGameplayAbility, ReplicationPolicy) == 0x00CE);
static_assert(offsetof(UGameplayAbility, InstancingPolicy) == 0x00CF);
static_assert(offsetof(UGameplayAbility, CurrentActivationInfo) == 0x00D8);
static_assert(offsetof(UGameplayAbility, CurrentEventData) == 0x00F0);
static_assert(offsetof(UGameplayAbility, NetExecutionPolicy) == 0x01A0);
static_assert(offsetof(UGameplayAbility, NetSecurityPolicy) == 0x01A1);
static_assert(offsetof(UGameplayAbility, CostGameplayEffectClass) == 0x01A8);
static_assert(offsetof(UGameplayAbility, AbilityTriggers) == 0x01B0);
static_assert(offsetof(UGameplayAbility, CooldownGameplayEffectClass) == 0x01C0);
static_assert(offsetof(UGameplayAbility, CancelAbilitiesWithTag) == 0x01C8);
static_assert(offsetof(UGameplayAbility, BlockAbilitiesWithTag) == 0x01E8);
static_assert(offsetof(UGameplayAbility, ActivationOwnedTags) == 0x0208);
static_assert(offsetof(UGameplayAbility, ActivationRequiredTags) == 0x0228);
static_assert(offsetof(UGameplayAbility, ActivationBlockedTags) == 0x0248);
static_assert(offsetof(UGameplayAbility, SourceRequiredTags) == 0x0268);
static_assert(offsetof(UGameplayAbility, SourceBlockedTags) == 0x0288);
static_assert(offsetof(UGameplayAbility, TargetRequiredTags) == 0x02A8);
static_assert(offsetof(UGameplayAbility, TargetBlockedTags) == 0x02C8);
static_assert(offsetof(UGameplayAbility, ActiveTasks) == 0x0308);
static_assert(offsetof(UGameplayAbility, CurrentMontage) == 0x0328);
static_assert(offsetof(UGameplayAbility_Montage, MontageToPlay) == 0x03B0);
static_assert(offsetof(UGameplayAbility_Montage, SectionName) == 0x03BC);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectClassesWhileAnimating) == 0x03C8);
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectsWhileAnimating) == 0x03D8);
static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0x0000);
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 0x0008);
static_assert(offsetof(UGameplayAbilitySet, Abilities) == 0x0030);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 0x0020);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 0x0050);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 0x0058);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 0x0060);
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 0x0068);
static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0x0000);
static_assert(offsetof(AGameplayAbilityTargetActor, StartLocation) == 0x0230);
static_assert(offsetof(AGameplayAbilityTargetActor, MasterPC) == 0x02D0);
static_assert(offsetof(AGameplayAbilityTargetActor, OwningAbility) == 0x02D8);
static_assert(offsetof(AGameplayAbilityTargetActor, SourceActor) == 0x02E8);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleParams) == 0x02F0);
static_assert(offsetof(AGameplayAbilityTargetActor, ReticleClass) == 0x0300);
static_assert(offsetof(AGameplayAbilityTargetActor, Filter) == 0x0308);
static_assert(offsetof(AGameplayAbilityTargetActor, GenericDelegateBoundASC) == 0x0330);
static_assert(offsetof(AGameplayAbilityTargetActor_Trace, TraceProfile) == 0x033C);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass) == 0x0370);
static_assert(offsetof(AGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial) == 0x0378);
static_assert(offsetof(AGameplayAbilityWorldReticle, Parameters) == 0x0220);
static_assert(offsetof(AGameplayAbilityWorldReticle, MasterPC) == 0x0230);
static_assert(offsetof(AGameplayAbilityWorldReticle, TargetingActor) == 0x0238);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent) == 0x0240);
static_assert(offsetof(AGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents) == 0x0248);
static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0x0000);
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 0x0030);
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 0x0038);
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 0x0040);
static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0x0000);
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 0x0008);
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 0x0018);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 0x0030);
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 0x0050);
static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 0x0018);
static_assert(offsetof(FGameplayCuePendingExecute, PayloadType) == 0x0028);
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 0x0030);
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 0x0038);
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 0x00B0);
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 0x0050);
static_assert(offsetof(UGameplayCueManager, RuntimeGameplayCueObjectLibrary) == 0x0048);
static_assert(offsetof(UGameplayCueManager, EditorGameplayCueObjectLibrary) == 0x0098);
static_assert(offsetof(UGameplayCueManager, LoadedGameplayCueNotifyClasses) == 0x02B0);
static_assert(offsetof(UGameplayCueManager, GameplayCueClassesForPreallocation) == 0x02C0);
static_assert(offsetof(UGameplayCueManager, PendingExecuteCues) == 0x02D0);
static_assert(offsetof(UGameplayCueManager, PreallocationInfoList_Internal) == 0x02E8);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueTag) == 0x022C);
static_assert(offsetof(AGameplayCueNotify_Actor, GameplayCueName) == 0x0234);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueTag) == 0x0028);
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueName) == 0x0030);
static_assert(offsetof(UGameplayCueNotify_HitImpact, Sound) == 0x0040);
static_assert(offsetof(UGameplayCueNotify_HitImpact, ParticleSystem) == 0x0048);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0x0000);
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 0x0008);
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 0x0020);
static_assert(offsetof(UGameplayCueSet, GameplayCueData) == 0x0030);
static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0x0000);
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 0x0028);
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 0x0050);
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 0x0078);
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 0x00B8);
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 0x00C8);
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 0x00C9);
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 0x00D0);
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 0x00F0);
static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0x0000);
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 0x0008);
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 0x0030);
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 0x0058);
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 0x0080);
static_assert(offsetof(FSetByCallerFloat, DataName) == 0x0000);
static_assert(offsetof(FSetByCallerFloat, DataTag) == 0x0008);
static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0x0000);
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 0x0008);
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 0x0030);
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 0x0140);
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 0x01D0);
static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0x0000);
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 0x0020);
static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierInfo, Magnitude) == 0x0040);
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 0x0068);
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 0x0248);
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 0x0250);
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 0x0290);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 0x0040);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 0x0048);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 0x0049);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 0x0050);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 0x0230);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 0x0238);
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 0x0278);
static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0x0000);
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0x0000);
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 0x0008);
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 0x0028);
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffectClasses) == 0x0038);
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 0x0048);
static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0x0000);
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 0x0040);
static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0x0000);
static_assert(offsetof(FInheritedTagContainer, Added) == 0x0020);
static_assert(offsetof(FInheritedTagContainer, Removed) == 0x0040);
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 0x0020);
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 0x0068);
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 0x00B0);
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 0x00F8);
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 0x0130);
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 0x0138);
static_assert(offsetof(UGameplayEffect, DurationPolicy) == 0x0030);
static_assert(offsetof(UGameplayEffect, DurationMagnitude) == 0x0038);
static_assert(offsetof(UGameplayEffect, Period) == 0x0218);
static_assert(offsetof(UGameplayEffect, PeriodicInhibitionPolicy) == 0x0241);
static_assert(offsetof(UGameplayEffect, Modifiers) == 0x0248);
static_assert(offsetof(UGameplayEffect, Executions) == 0x0258);
static_assert(offsetof(UGameplayEffect, ChanceToApplyToTarget) == 0x0268);
static_assert(offsetof(UGameplayEffect, ApplicationRequirements) == 0x0290);
static_assert(offsetof(UGameplayEffect, TargetEffectClasses) == 0x02A0);
static_assert(offsetof(UGameplayEffect, ConditionalGameplayEffects) == 0x02B0);
static_assert(offsetof(UGameplayEffect, OverflowEffects) == 0x02C0);
static_assert(offsetof(UGameplayEffect, PrematureExpirationEffectClasses) == 0x02D8);
static_assert(offsetof(UGameplayEffect, RoutineExpirationEffectClasses) == 0x02E8);
static_assert(offsetof(UGameplayEffect, GameplayCues) == 0x0300);
static_assert(offsetof(UGameplayEffect, UIData) == 0x0310);
static_assert(offsetof(UGameplayEffect, InheritableGameplayEffectTags) == 0x0318);
static_assert(offsetof(UGameplayEffect, InheritableOwnedTagsContainer) == 0x0378);
static_assert(offsetof(UGameplayEffect, OngoingTagRequirements) == 0x03D8);
static_assert(offsetof(UGameplayEffect, ApplicationTagRequirements) == 0x0418);
static_assert(offsetof(UGameplayEffect, RemovalTagRequirements) == 0x0458);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectsWithTags) == 0x0498);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityTags) == 0x04F8);
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityQuery) == 0x0538);
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectQuery) == 0x0690);
static_assert(offsetof(UGameplayEffect, StackingType) == 0x07E1);
static_assert(offsetof(UGameplayEffect, StackDurationRefreshPolicy) == 0x07E8);
static_assert(offsetof(UGameplayEffect, StackPeriodResetPolicy) == 0x07E9);
static_assert(offsetof(UGameplayEffect, StackExpirationPolicy) == 0x07EA);
static_assert(offsetof(UGameplayEffect, GrantedAbilities) == 0x07F0);
static_assert(offsetof(UGameplayEffectCalculation, RelevantAttributesToCapture) == 0x0028);
static_assert(offsetof(UGameplayEffectUIData_TextOnly, Description) == 0x0028);
static_assert(offsetof(FGameplayTagReponsePair, Tag) == 0x0000);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 0x0008);
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 0x0010);
static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0x0000);
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 0x0028);
static_assert(offsetof(UGameplayTagReponseTable, Entries) == 0x0030);
static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0x0000);
static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0x0000);
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 0x0008);
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 0x0014);
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 0x0020);
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 0x002C);
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 0x0044);
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 0x0060);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 0x0008);
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 0x0018);
static_assert(offsetof(UMovieSceneGameplayCueTriggerSection, Channel) == 0x0100);
static_assert(offsetof(UMovieSceneGameplayCueSection, Cue) == 0x0100);
static_assert(offsetof(UMovieSceneGameplayCueTrack, Sections) == 0x0090);
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, AbilitySpecHandle) == 0x0000);
static_assert(offsetof(FServerAbilityRPCBatch, PredictionKey) == 0x0008);
static_assert(offsetof(FServerAbilityRPCBatch, TargetData) == 0x0018);
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 0x0018);
static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 0x0008);
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 0x0010);
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 0x0018);
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x0008);
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x0010);
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x0080);
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0x0000);
static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0x0000);
static_assert(offsetof(FAbilityTaskDebugMessage, Message) == 0x0008);
static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0x0000);
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 0x0008);
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 0x0010);
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 0x0018);
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 0x0020);
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 0x0028);
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 0x0030);
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 0x0038);
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 0x0040);
static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 0x0280);
static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0x0000);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 0x0010);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 0x0014);
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 0x001C);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0x0000);
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 0x0010);
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 0x0060);
static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0x0000);
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 0x0038);
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 0x0040);
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0x0000);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0x0000);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 0x0028);
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 0x0030);
static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 0x0010);
static_assert(offsetof(FGameplayEffectContext, Instigator) == 0x0008);
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 0x0010);
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 0x0018);
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 0x0020);
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 0x002C);
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 0x0034);
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 0x0060);
