/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "SBLeafIcon.h"
//
//@class NSString;
//
//@interface SBApplicationIcon : SBLeafIcon
//{
//    NSString *_displayIdentifier;
//    unsigned int _appIsBeingCleaned:1;
//}
@interface SBApplicationIcon (IOS6)
- (id)applicationBundleID;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)arg1;
- (void)launchFromViewSwitcher;
- (void)launch;
- (void)_terminationAssertionDidChange;
- (void)_setAppIsBeingCleanedFlag;
- (BOOL)launchEnabled;
- (id)automationID;
- (id)tags;
- (BOOL)canEllipsizeLabel;
- (id)displayName;
- (id)generateIconImage:(int)arg1;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)arg1;
- (void)generateIconImageInBackground:(id)arg1;
- (id)blockForGeneratingIconImageInBackgroundWithFormat:(SEL)arg1;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(SEL)arg1 complete:(int)arg2;
- (id)__loadIconImage:(id)arg1 format:(int)arg2 scale:(float)arg3;
- (void)completeUninstall;
- (id)application;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;

@end

