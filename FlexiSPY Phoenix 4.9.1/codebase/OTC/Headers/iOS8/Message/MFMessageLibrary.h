/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import"Message-Structs.h"
@class NSString, MFAttachmentLibraryDataProvider;

@interface MFMessageLibrary : NSObject {

	NSString* _path;
	MFAttachmentLibraryDataProvider* _attachmentDataProvider;

}
-(void)dealloc;
-(void)commit;
-(id)initWithPath:(id)arg1 ;
-(id)dataProvider;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(char)arg2 isEncrypted:(char)arg3 forMessage:(id)arg4 ;
-(char)shouldCancel;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(void)deleteMailboxes:(id)arg1 ;
-(void)deleteAccount:(id)arg1 ;
-(char)renameMailboxes:(id)arg1 to:(id)arg2 ;
-(int)libraryIDForAccount:(id)arg1 ;
-(int)createLibraryIDForAccount:(id)arg1 ;
-(unsigned)serverUnreadOnlyOnServerCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 ;
-(unsigned)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 ;
-(unsigned)mailboxIDForURLString:(id)arg1 ;
-(id)urlForMailboxID:(unsigned)arg1 ;
-(id)mailboxUidForMessage:(id)arg1 ;
-(void)setMessage:(id)arg1 isPartial:(char)arg2 ;
-(char)isMessageContentsLocallyAvailable:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2 ;
-(void)setSummary:(id)arg1 forMessage:(id)arg2 ;
-(id)dataPathForMessage:(id)arg1 ;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)accountForMessage:(id)arg1 ;
-(void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(char)arg3 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 ;
-(oneway void)updateMessage:(id)arg1 withMetadata:(/*^block*/id)arg2 ;
-(id)metadataForMessage:(id)arg1 key:(id)arg2 ;
-(unsigned)totalCountForMailbox:(id)arg1 ;
-(unsigned)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(char)arg2 includeThreadSearchResults:(char)arg3 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 range:(NSRange)arg2 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inRemoteMailbox:(id)arg3 ;
-(id)serverSearchResultMessagesForMailbox:(id)arg1 ;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1 ;
-(id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)messageWithMessageID:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(id)headerDataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)dataForMimePart:(id)arg1 isComplete:(char*)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(char)arg3 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 ;
-(id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(char*)arg3 ;
-(id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2 ;
-(void)compactMessages:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(char)arg9 addPOPUIDs:(char)arg10 dataSectionsByMessage:(id)arg11 ;
-(void)compactMailbox:(id)arg1 ;
-(char)hasCompleteDataForMimePart:(id)arg1 ;
-(void)compactMessages:(id)arg1 permanently:(char)arg2 ;
-(void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2 ;
-(void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(char)arg7 ;
-(void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2 ;
-(void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)arg1 externalConversationID:(long long)arg2 ;
-(id)messagesNeedingSyncConfirmationForMailbox:(id)arg1 ;
-(id)messagesWithoutSummariesForMailbox:(id)arg1 ;
-(id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned)arg2 limit:(unsigned)arg3 ;
-(id)orderedBatchOfMessagesEndingAtRowId:(unsigned)arg1 limit:(unsigned)arg2 success:(char*)arg3 ;
-(unsigned)deletedCountForMailbox:(id)arg1 ;
-(void)setServerUnreadOnlyOnServerCount:(unsigned)arg1 forMailbox:(id)arg2 ;
-(id)oldestMessageInMailbox:(id)arg1 ;
-(id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 ;
-(unsigned)maximumRemoteIDForMailbox:(id)arg1 ;
-(unsigned)minimumRemoteIDForMailbox:(id)arg1 ;
-(id)sequenceIdentifierForMailbox:(id)arg1 ;
-(void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2 ;
-(id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned)arg2 ;
-(void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3 ;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)arg1 fromMailbox:(id)arg2 ;
-(id)getDetailsForAllMessagesFromMailbox:(id)arg1 ;
-(id)getDetailsForMessages:(unsigned)arg1 absoluteBottom:(unsigned)arg2 topOfDesiredRange:(unsigned)arg3 range:(NSRange*)arg4 fromMailbox:(id)arg5 ;
-(id)messagesWithMessageIDHeader:(id)arg1 ;
-(void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(char)arg2 andNotify:(char)arg3 ;
-(id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 isPartial:(char)arg2 ;
-(id)dataConsumerForMessage:(id)arg1 ;
-(id)metadataForMessage:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 range:(NSRange)arg4 ;
-(void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 success:(char*)arg3 ;
-(id)messagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 success:(char*)arg4 ;
-(char)libraryExists;
-(void)closeDatabaseConnections;
-(void)deletePOPUID:(id)arg1 inMailbox:(id)arg2 ;
-(id)UIDsToDeleteInMailbox:(id)arg1 ;
-(id)deletedUIDsInMailbox:(id)arg1 ;
-(id)allUIDsInMailbox:(id)arg1 ;
-(id)hiddenPOPUIDsInMailbox:(id)arg1 ;
-(void)lockDBForWriting;
-(void)appendOfflineCacheOperation:(id)arg1 forAccount:(int)arg2 lastTemporaryID:(unsigned)arg3 ;
-(void)markOfflineCacheOperationAsComplete:(id)arg1 ;
-(id)offlineCacheOperationsForAccount:(int)arg1 lastTemporaryID:(unsigned*)arg2 ;
-(void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(int)arg2 ;
-(void)consumeOfflineCacheReplayDataForAccount:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)deleteOfflineCacheDataForAccount:(int)arg1 ;
-(void)updateFlagsForMessagesInPlace:(id)arg1 success:(char*)arg2 ;
-(id)remoteStoreForMessage:(id)arg1 ;
-(id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(char)arg3 newMessagesByOldMessage:(id)arg4 ;
-(void)setFlagsForMessages:(id)arg1 ;
-(void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3 ;
-(id)storedIntegerPropertyWithName:(id)arg1 ;
-(void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2 ;
-(char)isBusy;
@end

