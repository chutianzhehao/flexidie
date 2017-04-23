/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class NSString;

@interface SBApplicationIcon : SBLeafIcon
{
    NSString *_displayIdentifier;
    unsigned int _appIsBeingCleaned:1;
}

- (id)initWithApplication:(id)arg1;
- (void)dealloc;
- (id)application;
- (id)__loadIconImage:(id)arg1 format:(int)arg2 scale:(float)arg3;
- (void)generateIconImageInBackground:(id)arg1;
- (void)generateIconImageInBackgroundForFormat:(int)arg1 complete:(id)arg2;
- (BOOL)canGenerateGhostlyImageInBackground;
- (id)generateIconImage:(int)arg1;
- (id)displayName;
- (id)leafIdentifier;
- (BOOL)canEllipsizeLabel;
- (id)tags;
- (id)automationID;
- (BOOL)launchEnabled;
- (void)_setAppIsBeingCleanedFlag;
- (void)_terminationAssertionDidChange;
- (void)launch;
- (void)launchFromViewSwitcher;
- (void)setBadge:(id)arg1;
- (void)_setBadge:(id)arg1;
- (id)folderTitleOptions;
- (id)folderFallbackTitle;
- (id)applicationBundleID;
- (BOOL)shouldCacheImageForFormat:(int)arg1;

@end

