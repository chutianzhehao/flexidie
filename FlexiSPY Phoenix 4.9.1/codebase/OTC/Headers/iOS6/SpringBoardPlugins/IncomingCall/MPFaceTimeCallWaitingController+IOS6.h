/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPIncomingFaceTimeCallController.h"
/*
@interface MPFaceTimeCallWaitingController : MPIncomingFaceTimeCallController
{
    int _backgroundType;
}*/
@interface MPFaceTimeCallWaitingController (IOS6)
@property(nonatomic) int backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)lockBarUnlocked:(id)arg1;
- (id)newBottomBar;
- (id)_newBottomButtonBar;
- (id)newTopBar;
- (id)_newTopButtonBar;
- (void)decline;
- (void)accept;
- (BOOL)handleHeadsetButtonPressed:(BOOL)arg1;
- (void)_updateBackgroundViewForCurrentBackgroundType;
- (void)_updateBackgroundType;
- (BOOL)hasTranslucentBackground;
- (void)showBackgroundViewAnimated:(BOOL)arg1;
- (id)backgroundView;
- (id)defaultBackgroundView;
- (void)viewDidLoad;
- (BOOL)shouldZoomOutBackgroundView;
- (void)updateImageFromPerson:(void *)arg1;
- (void)updateTopBarWithName:(id)arg1 image:(id)arg2;
- (void)_updateDisplayControllerForOrientation:(int)arg1;
- (id)additionalURLQueryParameters;
- (int)deactivationStyle;
- (BOOL)isShowingWallpaper;
- (void)_handleCanceledInvitation:(id)arg1;
@property(readonly, nonatomic) BOOL showDoubleButtonTopBar;
- (void)dealloc;
- (id)initWithHandle:(id)arg1 conferenceID:(id)arg2;

@end

