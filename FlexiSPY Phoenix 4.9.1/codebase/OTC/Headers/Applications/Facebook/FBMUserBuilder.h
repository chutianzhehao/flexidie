/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class FBMImageUrlCollection, FBMUserFetchStatus, FBMUserName, NSString;

@interface FBMUserBuilder : NSObject
{
    NSString *_userId;
    unsigned int _identityType;
    FBMUserName *_name;
    FBMUserName *_phoneticName;
    NSString *_nickname;
    BOOL _hasMessenger;
    BOOL _canInstallMessenger;
    FBMImageUrlCollection *_imageUrls;
    double _communicationRank;
    BOOL _isMemorialized;
    BOOL _isPartial;
    BOOL _isBlockedByViewer;
    FBMUserFetchStatus *_fetchStatus;
}

+ (id)userFromExistingUser:(id)arg1;
+ (id)user;
//- (void).cxx_destruct;
- (id)withFetchStatus:(id)arg1;
- (id)withIsBlockedByViewer:(BOOL)arg1;
- (id)withIsPartial:(BOOL)arg1;
- (id)withIsMemorialized:(BOOL)arg1;
- (id)withCommunicationRank:(double)arg1;
- (id)withImageUrls:(id)arg1;
- (id)withCanInstallMessenger:(BOOL)arg1;
- (id)withHasMessenger:(BOOL)arg1;
- (id)withNickname:(id)arg1;
- (id)withPhoneticName:(id)arg1;
- (id)withName:(id)arg1;
- (id)withIdentityType:(unsigned int)arg1;
- (id)withUserId:(id)arg1;
- (id)build;

@end

