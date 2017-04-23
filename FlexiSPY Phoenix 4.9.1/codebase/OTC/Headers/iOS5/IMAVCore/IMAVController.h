/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@interface IMAVController : NSObject
{
//    id <IMAVControllerDelegate> _delegate;
    BOOL _blockMultipleIncomingInvitations;
    BOOL _blockOutgoingInvitationsDuringCall;
    BOOL _blockIncomingInvitationsDuringCall;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL blockIncomingInvitationsDuringCall; // @synthesize blockIncomingInvitationsDuringCall=_blockIncomingInvitationsDuringCall;
@property(nonatomic) BOOL blockOutgoingInvitationsDuringCall; // @synthesize blockOutgoingInvitationsDuringCall=_blockOutgoingInvitationsDuringCall;
@property(nonatomic) BOOL blockMultipleIncomingInvitations; // @synthesize blockMultipleIncomingInvitations=_blockMultipleIncomingInvitations;
//@property(nonatomic) id <IMAVControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BOOL _ready;
- (void)requestPendingVCInvitations;
- (void)currentAVChatInfoChanged:(id)arg1;
@property(nonatomic) BOOL blockARDCapable;
@property(nonatomic) BOOL blockCameraCapable;
@property(nonatomic) BOOL blockMicrophoneCapable;
@property(nonatomic) BOOL blockAudioOnlyCalls;
@property(nonatomic) BOOL softwareMicrophoneEnabled;
@property(nonatomic) BOOL softwareCameraEnabled;
@property(readonly, nonatomic) BOOL softwareMicrophoneSupported;
@property(readonly, nonatomic) BOOL softwareCameraSupported;
- (BOOL)ardMuxingSupported;
@property(readonly, nonatomic) BOOL microphoneCapable;
@property(readonly, nonatomic) BOOL cameraCapable;
@property(readonly, nonatomic) BOOL ARDServerCapable;
- (BOOL)canReceiveWidescreen;
@property(readonly, nonatomic) BOOL canUseSmallDataBlobs;
@property(readonly, nonatomic) BOOL ARDClientCapable;
@property(readonly, nonatomic) BOOL hasRunningConference;
@property(readonly, nonatomic) BOOL hasActiveConference;
@property(readonly, nonatomic) BOOL microphoneConnected;
@property(readonly, nonatomic) BOOL cameraConnected;
@property(readonly, nonatomic) BOOL multiVideoCapable;
@property(readonly, nonatomic) BOOL multiAudioCapable;
- (void)updateActiveConference;
- (void)setHasActiveConference:(BOOL)arg1;
- (void)setHasRunningConference:(BOOL)arg1;
@property(readonly, nonatomic) unsigned int overallChatState;
- (void)pushCachedVCCapsToDaemon;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)setIMAVCapabilities:(int)arg1 toCaps:(int)arg2;
- (void)_setServiceVCCaps:(unsigned long long)arg1 toCaps:(unsigned long long)arg2;
- (void)dumpCaps;
- (void)cancelVCRequestWithBuddy:(id)arg1 vcProps:(id)arg2 forAccount:(id)arg3 conferenceID:(id)arg4;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 forAccount:(id)arg4 conferenceID:(id)arg5;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1;
- (id)vcResponseInfoWithSessionID:(unsigned int)arg1 ICEData:(id)arg2 natType:(id)arg3 natIP:(id)arg4 ardChannelInfo:(id)arg5 forParticipant:(id)arg6 relaySupported:(BOOL)arg7;
- (void)declineVCRequestWithBuddy:(id)arg1 response:(unsigned int)arg2 vcProps:(id)arg3 conferenceID:(id)arg4;
- (id)init;
- (void)setupIMAVController;
- (void)_markSetup;
- (BOOL)_shouldRunConferences;
- (BOOL)_shouldHandleInvites;
- (BOOL)_runningInLegacyVCApp;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;

@end

