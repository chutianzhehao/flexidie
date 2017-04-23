//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>


@class IGDirectInboxMetaData, IGDirectThreadStore, NSDate, NSString;

@interface IGDirectCache : NSObject
{
    NSDate *_timeInboxLastCached;
    IGDirectInboxMetaData *_inbox;
}

+ (id)sharedCache;
@property(copy, nonatomic) IGDirectInboxMetaData *inbox; // @synthesize inbox=_inbox;
@property(retain, nonatomic) NSDate *timeInboxLastCached; // @synthesize timeInboxLastCached=_timeInboxLastCached;

- (unsigned long long)subscriptionStatus;
- (void)removeAllPendingMessages;
- (id)allPendingMessages;
- (void)removePendingMessage:(id)arg1;
- (void)removeThreadWithId:(id)arg1;
- (void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(_Bool)arg3;
- (id)updateThreadWithThread:(id)arg1 mergeOption:(unsigned long long)arg2;
- (id)updateThreadWithDictionary:(id)arg1 mergeOption:(unsigned long long)arg2;
- (void)updateOrAddPendingMessage:(id)arg1;
- (id)storedThreadWithUsers:(id)arg1;
- (void)fetchThreadWithId:(id)arg1 completion:(id)arg2;
- (id)storedThreadWithID:(id)arg1;
- (void)storeThread:(id)arg1;
- (id)threadsWithOptions:(id)arg1;
- (void)fetchThreadPageFromCursor:(id)arg1 completion:(id)arg2;
- (void)fetchThreadsWithOptions:(id)arg1 completion:(id)arg2;
- (void)saveThreads:(id)arg1 mergeOption:(unsigned long long)arg2 completion:(id)arg3;
- (id)inboxCacheFileURL;
- (void)clearInboxData;
- (void)readInboxFromDisk:(id)arg1;
- (void)saveInbox:(id)arg1;
- (void)fetchInboxCompletion:(id)arg1;
- (void)saveInbox:(id)arg1 threads:(id)arg2 completion:(id)arg3;
@property(readonly, nonatomic) IGDirectThreadStore *threadStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

