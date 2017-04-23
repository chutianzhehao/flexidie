/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSMutableSet, /*NSObject<OS_dispatch_queue>, */NSPersistentStoreCoordinator, NSThread, RACDisposable, RACScheduler;
/*
@interface DBManager : NSObject
{
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
    NSPersistentStoreCoordinator *vtmPersistentStoreCoordinator;
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;
    NSManagedObjectContext *observingManagedObjectContext;
    NSManagedObjectContext *vtmManagedObjectContext;
    RACScheduler *backgroundScheduler;
    NSObject<OS_dispatch_queue> *backgroundDispatchQueue;
    NSObject<OS_dispatch_queue> *backgroundIndexQueue;
    NSPersistentStoreCoordinator *vibesStoreCoordinator;
    NSManagedObjectContext *vibesPrivateContext;
    NSManagedObjectContext *vibesPrivateWriteContext;
    NSThread *syncABThread;
    NSThread *rebuildNamesThread;
    id resignActiveObserver;
    id becomeActiveObserver;
    id mainContextWillSaveSubscription;
    id mainContextDidSaveSubscription;
    RACDisposable *recentlyJoinedExpirationTimer;
    CDStruct_84130ce7 backgroundSyncingTaskID;
    CDStruct_84130ce7 backgroundSyncTaskID;
    CDStruct_84130ce7 backgroundRebuildNamesTaskID;
    NSMutableSet *viberPhoneNums;
    NSMutableSet *numsToAdd;
    NSMutableSet *numsToDelete;
    NSMutableDictionary *backgroundTasksForNotSentMessages;
    NSMutableDictionary *notSentOperationsForNotSentMessages;
    double _syncThreadPriority;
    BOOL isMergingToMainContext;
    BOOL needToResetStorage;
    BOOL _pendingSyncAddressBookThread;
    BOOL _needToSynchronizeContacts;
    BOOL _forceShareAddressBookAfterSync;
}*/
@interface DBManager (Viber_5_2_0)
+ (void)deleteDatabaseFile;
+ (Class)mantleClassForEntityName:(id)arg1;
+ (id)contactDataArrayForSyncWithVBContact:(id)arg1 withOrder:(id)arg2;
+ (id)getGroupChangeMessageText:(id)arg1;
+ (void)registerAddressBookCallBack:(void *)arg1;
+ (void)unregisterAddressBookCallBack:(void *)arg1;
+ (id)generateBackName;
+ (id)newTemporaryLocalPath;
@property(nonatomic) BOOL forceShareAddressBookAfterSync; // @synthesize forceShareAddressBookAfterSync=_forceShareAddressBookAfterSync;
@property BOOL needToSynchronizeContacts; // @synthesize needToSynchronizeContacts=_needToSynchronizeContacts;
@property BOOL pendingSyncAddressBookThread; // @synthesize pendingSyncAddressBookThread=_pendingSyncAddressBookThread;
@property(readonly, nonatomic) double syncThreadPriority; // @synthesize syncThreadPriority=_syncThreadPriority;
@property BOOL needToResetStorage; // @synthesize needToResetStorage;
@property(retain) NSThread *rebuildNamesThread; // @synthesize rebuildNamesThread;
@property(retain) NSThread *syncABThread; // @synthesize syncABThread;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator;
@property(readonly, nonatomic) NSMutableSet *viberPhoneNums; // @synthesize viberPhoneNums;
//- (void).cxx_destruct;
- (void)dealloc;
- (id)getThreadContext;
- (BOOL)hasThreadContext;
- (void)invalidateThreadContext;
- (void)setThreadContext:(id)arg1;
- (id)operationForMessage:(id)arg1;
- (void)setOperation:(id)arg1 forMessage:(id)arg2;
- (void)endBackgroundTaskForNotSentMessage:(id)arg1;
- (void)startBackgroundTaskForNotSentMessage:(id)arg1;
- (void)databaseFail;
- (void)resetStorage;
- (void)deleteDatabase;
- (void)saveMainContextAfterMerge;
- (void)saveObservingContextAfterMerge;
- (BOOL)saveManagedObjectContext:(id)arg1 error:(id *)arg2;
- (BOOL)saveManagedObjectContext:(id)arg1;
- (void)saveThreadContext;
- (void)mergeToObservingContext:(id)arg1 changedKeysMap:(id)arg2;
- (void)mergeToMainContext:(id)arg1;
- (BOOL)isPhoneNumberIndexCheckNeeded:(id)arg1;
- (void)transferManagedObjects:(id)arg1 to:(id)arg2 completion:(void)arg3;
- (void)performReadInBackground:(id)arg1 completion:(void)arg2;
- (void)createEntityInBackground:(id)arg1 completion:(void)arg2;
- (void)saveChangesInBackground:(id)arg1 completion:(void)arg2 completionQueue:(id)arg3;
- (void)saveChangesInBackground:(id)arg1 completion:(void)arg2;
- (void)saveChangesInBackground:(id)arg1;
- (id)performReadInCurrentThread:(id)arg1;
- (id)createEntityInCurrentThread:(id)arg1;
- (void)saveGeneratedChangesInCurrentThread:(id)arg1;
- (void)createContextForCurrentThread;
- (id)objectsWithObjectsIDs:(id)arg1;
- (void)saveDefaultManagedObjectContext;
- (id)createManagedObjectWithEntityName:(id)arg1 withPropertiesValues:(id)arg2;
- (id)createManagedObjectWithEntityName:(id)arg1;
- (unsigned int)countForStoredRequest:(id)arg1 withParams:(id)arg2 inManagedObjectContext:(id)arg3;
- (unsigned int)countForStoredRequest:(id)arg1 withParams:(id)arg2;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2 sortDescriptors:(id)arg3 includesSubentities:(BOOL)arg4 inManagedObjectContext:(id)arg5;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2 sortDescriptors:(id)arg3 inManagedObjectContext:(id)arg4;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2 sortDescriptors:(id)arg3;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2;
- (id)executeStoredRequest:(id)arg1 withParams:(id)arg2 includesSubentities:(BOOL)arg3;
- (BOOL)migrateStore:(id)arg1 sourceModel:(id)arg2 destinationModel:(id)arg3 generateMigration:(BOOL)arg4 error:(id *)arg5;
- (BOOL)automaticallyMigrateStore:(id)arg1 error:(id *)arg2;
- (BOOL)loadWithoutMigrationStore:(id)arg1 error:(id *)arg2;
- (void)initiateTransferManagerCoreDataStack:(id)arg1;
- (void)initiateVibesCoreDataStack:(id)arg1;
- (void)configureLoadedStoreContext;
- (void)startBackgroundQueues;
- (void)suspendBackgroundQueues;
- (BOOL)loadPersistentStorageForUrl:(id)arg1 canPerformMigrationIfNeeded:(BOOL)arg2 error:(id *)arg3;
- (void)assignUIDForEntity:(id)arg1;
- (void)assignUIDS;
- (void)debugQuery:(id)arg1;
- (void)analyze;
- (void)migrateLastReadMessageIDs;
- (void)migrateLastMessageIDs;
- (void)migrateVibeIconPriorityChange;
- (void)migrateThumbnailEnumChange;
- (void)migrateTransferChangeFrom:(int)arg1 toType:(int)arg2;
- (void)fillReservedAppIDs;
- (void)updateLastMessageInfoIfNeeded;
- (void)migrateInvites;
- (void)updateTempPathForTransferTasks;
- (BOOL)migrateStorage:(id)arg1 sourceMetadata:(id)arg2 error:(id *)arg3 postMigrationSteps:(id)arg4;
- (void)completeInitWithAddressBook:(BOOL)arg1;
- (long long)maxUIDForEntity:(id)arg1;
- (void)syncUID;
- (void)purgeEmptyConversations;
- (BOOL)loadStorageWithURL:(id)arg1 lightMode:(BOOL)arg2;
- (void)endBackgroundRebuildNamesTask;
- (void)beginBackgroundRebuildNamesTask;
- (void)endBackgroundSyncTask;
- (void)beginBackgroundSyncTask;
- (void)beginBackgroundTask;
- (void)getAddressBookAccessSystemSettings;
- (void)allowAddressBookAccess;
- (void)syncIfNeededForContactsCount:(int)arg1;
- (void)enableAddressBook;
@property(nonatomic) BOOL isSyncThreadSlowed;
- (id)initWithAddressBook:(BOOL)arg1;
- (id)initInLightweightMode;
- (void)orderCheck:(id)arg1;
- (id)createStickerWithID:(id)arg1;
- (id)createStickersPackageWithID:(id)arg1 packageTitle:(id)arg2;
- (id)createStickersPackageWithID:(id)arg1;
- (unsigned int)downloadingPackagesCount;
- (id)pendingPackages;
- (id)packagesFailed;
- (id)packagesNotFinalized;
- (void)removeAllPackages;
- (void)removePackageWithID:(id)arg1;
- (id)packagesToDownload;
- (void)setStatus:(id)arg1 forStickersPackageWithID:(id)arg2;
- (unsigned int)countOfStickersPackagesInStatuses:(id)arg1;
- (id)stickersPackagesInStatuses:(id)arg1;
- (void)setStatus:(id)arg1 forStickersPackage:(id)arg2;
- (id)stickersGroupsInPackage:(id)arg1;
- (id)stickersPackageWithID:(id)arg1;
- (id)stickersPackagesForSettings;
- (id)stickersPackagesWithoutTitle;
- (id)displayedStickerPackages;
- (id)stickersPackages;
- (unsigned int)countOfStickersPackages;
- (void)syncPromotionPackages:(id)arg1 completion:(id)arg2;
- (void)importDownloadedStickers:(id)arg1 forPackageWithID:(id)arg2;
- (void)clearStickersPackagesData;
- (id)synchronouslyFetchPhoneNumberIndexForID:(id)arg1;
- (id)synchronouslyFetchConversationForID:(id)arg1;
- (id)synchronouslyFetchMessageForID:(id)arg1;
- (void)fetchModelForObjectWithManagedObjectID:(id)arg1 targetQueue:(id)arg2 completion:(id)arg3;
- (void)passVibesChangesToStore;
- (void)performSynchronousReadInVibesStack:(id)arg1;
- (void)performReadInVibesStack:(id)arg1;
- (void)saveGeneratedChangesInVibesStackWithTargetQueue:(id)arg1 updaterBlock:(id)arg2 completion:(void)arg3;
- (void)saveGeneratedChangesInVibesStack:(id)arg1;
- (void)deleteContactsInArray:(id)arg1 context:(id)arg2;
- (void)deleteAllContactsInContext:(id)arg1;
- (id)allABContactsForContext:(id)arg1;
- (BOOL)serverSyncUpdateContacts:(id)arg1 context:(id)arg2 syncManager:(id)arg3;
- (id)addServerContactToContext:(id)arg1 info:(id)arg2 recordID:(unsigned int)arg3;
- (id)addPhoneNumberIndexToContext:(id)arg1 phoneNumber:(id)arg2 canonizedNumber:(id)arg3 isViber:(BOOL)arg4 contact:(id)arg5;
- (void)updateSyncImages:(id)arg1;
- (void)syncWithServerContacts:(id)arg1;
- (void)syncServerContacts:(id)arg1;
- (id)createObserverForModel:(id)arg1;
- (id)vibesStackFRCForConversationList;
- (id)predicateForConversationListWithCapacity:(unsigned int)arg1 vibes:(BOOL)arg2;
- (id)vibesStackFRCForVibeList;
- (id)vibesStackFRCForConversation:(id)arg1;
- (void)setFetchOffset:(unsigned int)arg1 fetchLimit:(unsigned int)arg2 inFRC:(id)arg3;
- (void)setCountOfLastFetchingObjects:(unsigned int)arg1 onConversation:(id)arg2 forFRC:(id)arg3;
- (id)fetchedResultsControllerForConversationListWithGroupsOnly:(BOOL)arg1 delegate:(id)arg2;
- (id)fetchedResultsControllerForConversation:(id)arg1 messagesCount:(unsigned int)arg2 delegate:(id)arg3;
- (void)removeMessageFromIndexWithToken:(id)arg1;
- (void)addMessageToIndexWithText:(id)arg1 token:(id)arg2 conversation:(id)arg3;
- (void)startIndexing;
- (long)countMessagesForIndexing;
- (void)initSearchIndex;
- (void)setEnabledSources:(id)arg1;
- (void)removeSource:(id)arg1 inContext:(id)arg2;
- (id)createSourceInContext:(id)arg1;
- (id)getAllSourcesInContext:(id)arg1;
- (id)getAllSources;
- (void)cleanVibeAttachmentFilesIfNeeded;
- (unsigned long long)sizeOfAttachmentsWithCachePolicyRemoveAtReachingLimits;
- (void)reduceAttachmentsFilesSizeFrom:(unsigned long long)arg1 toSizeLimit:(unsigned long long)arg2;
- (id)requestForAttachmentsWithCachePolicyRemoveAtReachingLimits;
- (float)attachmentDurationForMessageWithID:(id)arg1;
- (void)restoreDurationForPTT;
- (void)sendMediaForAttachment:(id)arg1 withNewId:(id)arg2 resending:(BOOL)arg3;
- (void)redownloadIncomingAttachment:(id)arg1;
- (void)downloadAttachment:(id)arg1 startedByUser:(BOOL)arg2;
- (void)downloadAttachmentWithName:(id)arg1 startedByUser:(BOOL)arg2;
- (void)uploadAttachment:(id)arg1 resending:(BOOL)arg2;
- (void)uploadAttachmentWithName:(id)arg1;
- (void)cleanFileForAttachment:(id)arg1;
- (id)attachmentsForDownload;
- (id)attachmentsForUpload;
- (void)setName:(id)arg1 forAttachment:(id)arg2;
- (void)generateAttachmentPreview:(id)arg1;
- (void)checkAttachments;
- (id)allWaitingPicturesForConversations:(id)arg1;
- (id)allUnviewedPictures;
- (id)lastPicturesForConversation:(id)arg1;
- (id)getAttachmentByID:(id)arg1;
- (void)attachmentWithName:(id)arg1 block:(id)arg2;
- (id)getAttachmentWithName:(id)arg1;
- (void)cancelAttachmentUpload:(id)arg1;
- (void)deleteAttachment:(id)arg1;
- (void)deleteFilesOfAttachment:(id)arg1;
- (void)deletePttFileByAttachmentName:(id)arg1;
- (void)asyncSendMessageWithFakeAttachmentOfType:(id)arg1 conversation:(id)arg2 name:(id)arg3 ID:(id)arg4 duration:(id)arg5 completion:(id)arg6;
- (id)addAttachmentNamed:(id)arg1 type:(id)arg2 bucket:(id)arg3 ID:(id)arg4 url:(id)arg5 duration:(id)arg6;
- (id)addAttachmentNamed:(id)arg1 type:(id)arg2 bucket:(id)arg3 ID:(id)arg4 url:(id)arg5 duration:(id)arg6 thumbnailBucket:(id)arg7 thumbnailID:(id)arg8 thumbnailUrl:(id)arg9 state:(id)arg10 cachePolicy:(id)arg11;
- (id)addAttachmentNamed:(id)arg1 type:(id)arg2 bucket:(id)arg3 ID:(id)arg4 url:(id)arg5 duration:(id)arg6 thumbnailBucket:(id)arg7 thumbnailID:(id)arg8 thumbnailUrl:(id)arg9 state:(id)arg10;
- (id)addAttachmentNamed:(id)arg1 type:(id)arg2 bucket:(id)arg3 ID:(id)arg4 url:(id)arg5 duration:(id)arg6 state:(id)arg7 cachePolicy:(id)arg8;
- (id)addAttachmentNamed:(id)arg1 type:(id)arg2 bucket:(id)arg3 ID:(id)arg4 url:(id)arg5 duration:(id)arg6 state:(id)arg7;
- (id)addAttachmentNamed:(id)arg1 thumbnail:(id)arg2 animatedMessageInfo:(id)arg3;
- (id)createNewAttachmentFromAttachment:(id)arg1;
- (void)setUrl:(id)arg1 forAttachment:(id)arg2;
- (void)setState:(id)arg1 forAttachment:(id)arg2;
- (void)setAttachmentNamed:(id)arg1 forMessage:(id)arg2;
- (void)setDuration:(id)arg1 state:(id)arg2 forAttachment:(id)arg3;
- (void)deleteContacts:(id)arg1;
- (void)contactsNamesWithNumbers:(id)arg1 completion:(id)arg2;
- (id)getContactsNames:(id)arg1;
- (id)getContactFullName:(id)arg1;
- (void)markContactsNotRecentlyJoined:(id)arg1 inBackground:(BOOL)arg2;
- (id)contactsPartWithOffset:(int)arg1;
- (unsigned int)contactsCountBeginWithLetter:(id)arg1;
- (unsigned int)contactsCount;
- (unsigned int)contactsViberOutCount;
- (unsigned int)contactsViberCount;
- (id)findContactsWithRequest:(id)arg1 forTerm:(id)arg2;
- (id)findViberOutABContactsWithName:(id)arg1;
- (id)findViberABContactsWithName:(id)arg1;
- (id)findABContactsWithName:(id)arg1;
- (id)searchRequestWithRequest:(id)arg1 name:(id)arg2;
- (id)predicatesForComponents:(id)arg1 japanese:(BOOL)arg2;
- (unsigned int)recentlyJoinedCount;
- (id)recentlyJoinedContacts;
- (void)recentlyJoinedExpirationDate:(id)arg1;
- (id)abContactWithCanonizedPhone:(id)arg1;
- (id)abContactWithRecordID:(id)arg1;
- (void)addContactWithABRecord:(void *)arg1 isViber:(BOOL)arg2;
- (id)blockedABContacts;
- (id)internationalContacts;
- (id)viberOutContacts;
- (id)viberABContacts;
- (id)abContacts;
- (id)performContactRequest:(id)arg1;
- (id)abBlockedContactRequest;
- (id)abInternationalContactRequest;
- (id)abViberOutContactRequest;
- (id)abViberContactRequest;
- (id)abContactRequest;
- (id)sortDescriptorsForContacts;
- (void)removeUnregistredViberNumber:(id)arg1;
- (void)removeUnregistredCanonizedViberNumbers:(id)arg1;
- (void)addCanonizedViberNumber:(id)arg1 markAsRecentlyJoined:(BOOL)arg2;
- (void)addCanonizedViberNumber:(id)arg1;
- (void)addCanonizedViberNumbers:(id)arg1;
- (void)checkApplicationNames;
- (void)updateViberNumbers:(id)arg1;
- (void)updateViberNumbersDatabaseWithAddedNumbers:(id)arg1 deletedNumbers:(id)arg2 markAsRecentlyJoined:(BOOL)arg3;
- (BOOL)compareNumber:(id)arg1 with:(id)arg2;
- (BOOL)isViberPhoneNum:(id)arg1;
- (BOOL)isViberCanonizedNumber:(id)arg1;
- (void)checkContactIcons:(id)arg1;
- (void)checkViberIcons:(id)arg1;
- (void)checkUserIconsForCanonizedPhoneNumbers:(id)arg1;
- (void)checkVibeUserIcons:(id)arg1;
- (void)changeIconForIndex:(id)arg1 downloadID:(id)arg2;
- (void)reloadIncompleteViberIcons;
- (id)canonizedViberPhoneNumsForContact:(id)arg1;
- (id)viberPhoneNumsForContact:(id)arg1;
- (void)loadViberPhoneNumsFromDatabaseToSet;
- (void)setIsViberFlagByCanonizedPhoneNumber:(id)arg1;
- (id)addPhoneNumberIndexesWithPltUserDetails:(id)arg1;
- (id)addPhoneNumberIndexeWithPltUserDetails:(id)arg1;
- (BOOL)findAndMarkSystemPhoneNumberIndexes;
- (void)changeNameInPhoneNumberIndex:(id)arg1 toName:(id)arg2;
- (id)blockedVibeIndexes;
- (id)blockedApplicationIndexes;
- (id)blockedPhoneNumIndexesWithoutContact;
- (id)blockedPhoneNumIndexes;
- (BOOL)isBlockedWithCanonizedPhone:(id)arg1;
- (void)privateMarkPhoneNumberIndexes:(id)arg1 asBlocked:(BOOL)arg2;
- (void)markPhoneNumberIndexes:(id)arg1 asBlocked:(BOOL)arg2 saveContext:(BOOL)arg3;
- (void)markPhoneNumberIndexesAsBlocked:(BOOL)arg1 withCanonizedPhone:(id)arg2 saveContext:(BOOL)arg3;
- (BOOL)deleteUnusedPhoneNumberIndexes;
- (void)deletePhoneNumberIndexes:(id)arg1 inContext:(id)arg2;
- (void)deletePhoneNumberIndex:(id)arg1 inContext:(id)arg2;
- (void)checkIconForID:(id)arg1 withCompletion:(id)arg2;
- (void)checkCanonizedNumbers;
- (id)vibeIndexForGroupId:(unsigned long long)arg1;
- (id)applicationIndexForId:(unsigned long)arg1;
- (id)phoneNumberIndexForContact:(id)arg1 andCanonizedPhone:(id)arg2;
- (id)phoneNumberIndexForContact:(id)arg1 andPhone:(id)arg2;
- (id)indexesForCanonizedNumbers:(id)arg1;
- (id)viberPhoneNumIndexes;
- (void)viberPhoneNumIndexesWithoutContactAndIconFromNumbers:(id)arg1 completion:(id)arg2;
- (id)viberPhoneNumIndexesWithoutContact;
- (id)phoneNumIndexesWithoutContact;
- (id)closestMatchingPhoneNumIndexForCanonizedPhone:(id)arg1;
- (id)phoneNumIndexByCanonizedPhone:(id)arg1;
- (id)phoneNumberIndexesWithContactNumber:(id)arg1;
- (id)phoneNumIndexesWithCanonizedPhoneAndContact:(id)arg1;
- (id)phoneNumIndexesWithCanonizedPhone:(id)arg1;
- (id)phoneNumIndexesWithCanonizedPhone:(id)arg1 inContext:(id)arg2;
- (id)phoneNumIndexesWithPhoneAndLastChangedContact:(id)arg1;
- (id)phoneNumberIndexWithUID:(id)arg1;
- (id)addVibeIndexWithGroupId:(unsigned long long)arg1 name:(id)arg2 imageID:(id)arg3;
- (id)addPhoneNumberIndexWithPhone:(id)arg1 canonizedPhone:(id)arg2;
- (id)addAndSavePhoneNumberIndexWithPhone:(id)arg1 canonizedPhone:(id)arg2;
- (void)markAsInvalidMessagesWithIDs:(id)arg1 inGroup:(id)arg2 completion:(id)arg3;
- (void)markAsInvalidMessageWithToken:(id)arg1 completion:(id)arg2;
- (BOOL)syncMarkAsInvalidMessageWithToken:(id)arg1;
- (void)syncMarkAsInvalidMessage:(id)arg1;
- (void)updatePublicChatUnreadCountWithInvalidatedMessage:(id)arg1;
- (void)convertOldInvite:(id)arg1;
- (id)generateInviteByDictionary:(id)arg1;
- (id)extractOldInviteDictionary:(id)arg1;
- (void)setLikesForMessagesInfo:(id)arg1;
- (id)getMaxToken;
- (id)messageWithMaxToken;
- (id)messagesWithAttachmentsWithTypes:(id)arg1 forConversation:(id)arg2 notInStates:(id)arg3;
- (id)messagesWithPictureAndVideoAttachmentInConversation:(id)arg1;
- (void)setLocationAddress:(id)arg1 forMessage:(id)arg2;
- (void)setText:(id)arg1 forMessage:(id)arg2;
- (void)resendMessages;
- (void)resendMediaMessageWithAttachment:(id)arg1;
- (void)resendFormattedMessage:(id)arg1;
- (void)resendTextMessage:(id)arg1;
- (void)resendStoredMessage:(id)arg1;
- (void)resendStoredMessageWithObjectID:(id)arg1;
- (void)resendMessage:(id)arg1;
- (void)resendNotGroupTextMessage:(id)arg1;
- (void)resendGroupTextMessage:(id)arg1;
- (void)messageWithObjectIDNotSent:(id)arg1;
- (BOOL)isMessageResending:(id)arg1;
- (BOOL)isSelfMessage:(id)arg1;
- (id)messagesInStates:(id)arg1;
- (id)messageWithSeq:(id)arg1 canonizedPhoneNumber:(id)arg2 inAnyState:(id)arg3;
- (id)messagesWithSeq:(id)arg1 inAnyState:(id)arg2;
- (id)pendingMessagesWithSeq:(id)arg1;
- (void)messageExistsWithToken:(id)arg1 completion:(id)arg2;
- (BOOL)messageExistsWithToken:(id)arg1;
- (id)messageWithMessageID:(id)arg1 vibeUid:(id)arg2;
- (id)messageWithUID:(id)arg1;
- (id)messagesByTokens:(id)arg1;
- (id)messageWithToken:(id)arg1;
- (id)messageWithToken:(id)arg1 orSeq:(id)arg2 isOutgoing:(BOOL)arg3;
- (void)coreDeleteMessage:(id)arg1;
- (void)deleteFakePttMessage:(id)arg1;
- (void)setLike:(BOOL)arg1 forMessageWithToken:(id)arg2 updateCount:(BOOL)arg3 completion:(id)arg4;
- (void)syncSetLike:(BOOL)arg1 forMessageWithToken:(id)arg2 updateCount:(BOOL)arg3;
- (void)deleteOutgoingMessagesWithInvalidAttachments;
- (void)deleteUnusedFakePttMessages;
- (void)coreDeleteMessages:(id)arg1;
- (void)deleteAllMessagesInConversation:(id)arg1;
- (void)deleteMessageWithToken:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteVoiceMessages;
- (void)forwardFormattedMessage:(id)arg1 inConversation:(id)arg2 completion:(id)arg3;
- (void)forwardViberMessage:(id)arg1 inConversation:(id)arg2 convertToCustomLocation:(BOOL)arg3 completion:(id)arg4;
- (void)forwardViberMessage:(id)arg1 toContact:(id)arg2 forNumber:(id)arg3 convertToCustomLocation:(BOOL)arg4 completion:(id)arg5;
- (void)sendLocationMessageWithConversation:(id)arg1 location:(id)arg2 completion:(id)arg3;
- (void)sendPictureMessageWithConversation:(id)arg1 attachmentName:(id)arg2 description:(id)arg3 attachmentUrl:(id)arg4 completion:(id)arg5;
- (void)sendVideoMessageWithConversation:(id)arg1 attachmentName:(id)arg2 description:(id)arg3 attachmentUrl:(id)arg4 duration:(id)arg5 completion:(id)arg6;
- (void)sendPTTMessageWithConversation:(id)arg1 pttID:(id)arg2 completion:(id)arg3;
- (void)sendMessageOfType:(id)arg1 withText:(id)arg2 location:(id)arg3 conversation:(id)arg4 fileName:(id)arg5 attachmentUrl:(id)arg6 duration:(id)arg7 completion:(id)arg8 blockListContinueHandler:(void)arg9;
- (void)startCustomLocationDisplay:(id)arg1;
- (void)sendVDBMessage:(id)arg1 inVDBConversation:(id)arg2 checkBlockList:(BOOL)arg3 completion:(id)arg4;
- (void)sendVDBMessage:(id)arg1 inConversationWithID:(id)arg2 completion:(id)arg3;
- (void)prepareVDBMessageForSending:(id)arg1 attachLocation:(BOOL)arg2;
- (void)addSentMessage:(id)arg1 conversation:(id)arg2 seq:(id)arg3 location:(id)arg4 attachment:(id)arg5 attachmentType:(id)arg6 attachmentUrl:(id)arg7 duration:(id)arg8 completion:(id)arg9;
- (void)addSelfAddedToGroupMessage:(id)arg1 groupName:(id)arg2 completion:(id)arg3;
- (void)addSystemMessage:(id)arg1 completion:(id)arg2;
- (id)addViberSystemMessageFromPLTMessage:(id)arg1 addIndexToConversation:(BOOL)arg2 updateUnreadCount:(BOOL)arg3 treatAsRead:(BOOL)arg4;
- (id)addViberSystemMessageFromPLTMessage:(id)arg1;
- (void)addReceivedMessage:(id)arg1 attachmentCreatorBlock:(id)arg2 completion:(void)arg3;
- (void)addRangesToMessage:(id)arg1;
- (void)installPhoneNumberIndexForMessage:(id)arg1 phoneNumber:(id)arg2 isFromSyncedDevice:(BOOL)arg3 addIndexToConversation:(BOOL)arg4;
- (BOOL)addConversation:(id)arg1 forMessage:(id)arg2 phoneNumber:(id)arg3;
- (void)addLocation:(id)arg1 forMessage:(id)arg2;
- (BOOL)addToken:(id)arg1 seq:(id)arg2 forMessage:(id)arg3;
- (id)searchForPhoneNumberIndexAddToMessage:(id)arg1 forPhone:(id)arg2 canonizedNumber:(id)arg3;
- (id)searchForPhoneNumberIndexForPhone:(id)arg1 canonizedNumber:(id)arg2;
- (id)getPhoneNumberIndexForPhone:(id)arg1 canonizedNumber:(id)arg2;
- (id)addViberMessage;
- (id)addViberMessageFromPLTMessage:(id)arg1 addIndexToConversation:(BOOL)arg2 updateUnreadCount:(BOOL)arg3 treatAsRead:(BOOL)arg4 attachmentsCreatorBlock:(id)arg5;
- (id)addViberMessageFromPLTMessage:(id)arg1 addIndexToConversation:(BOOL)arg2 updateUnreadCount:(BOOL)arg3 treatAsRead:(BOOL)arg4;
- (id)addViberMessageFromPLTMessage:(id)arg1 attachmentsCreatorBlock:(id)arg2;
- (id)addViberMessageFromPLTMessage:(id)arg1;
- (void)markAsReadMessage:(id)arg1;
- (void)markAsReadMessageByToken:(id)arg1;
- (id)explicitSyncReadMessagesWithTokens:(SEL)arg1;
- (void)doMarkAsReadMessagesWithTokens:(id)arg1;
- (BOOL)doMarkAsReadMessage:(id)arg1;
- (void)notifyMarkAsReadMessage:(id)arg1;
- (void)markAsReadMessagesForConversation:(id)arg1 withTokensUntil:(id)arg2 lastMessageID:(id)arg3 markRecents:(BOOL)arg4;
- (void)markAsReadMessagesForConversation:(id)arg1;
- (id)explicitMarkSentMessagesAsReadForConversationWithPhoneNumber:(SEL)arg1 lastMessageToken:(id)arg2;
- (void)doMarkSentMessagesAsReadForConversationWithPhoneNumber:(id)arg1 lastMessageToken:(id)arg2 completion:(id)arg3;
- (unsigned long long)lastReadMessageTokenForConversation:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_markUnreadMessagesAsReadForConversation:(id)arg1 withTokensUntil:(id)arg2;
- (id)_explicitMarkAsReadMessagesForConversation:(SEL)arg1 withTokensUntil:(id)arg2 markRecents:(id)arg3 completion:(BOOL)arg4;
- (id)_explicitMarkAsReadMessagesForVibe:(SEL)arg1 withTokensUntil:(id)arg2 lastMessageID:(id)arg3 completion:(id)arg4;
- (id)explicitMarkAsReadMessagesForConversation:(SEL)arg1 withTokensUntil:(id)arg2 lastMessageID:(id)arg3 markRecents:(id)arg4 completion:(BOOL)arg5;
- (id)explicitMarkAsReadMessagesForConversationWithPhoneNumber:(SEL)arg1 groupID:(id)arg2 lastMessageID:(id)arg3 withTokensUntil:(id)arg4;
- (void)doMarkAsReadMessagesForConversationWithPhoneNumber:(id)arg1 groupID:(id)arg2 withTokensUntil:(id)arg3 lastMessageID:(id)arg4 markRecents:(BOOL)arg5 completion:(id)arg6;
- (id)fetchUnreadMessagesForConversation:(id)arg1 withTokensUntil:(id)arg2;
- (void)doMarkAsReadMessagesForConversationWithPhoneNumber:(id)arg1 groupID:(id)arg2 lastMessageToken:(id)arg3 lastMessageID:(id)arg4 completion:(id)arg5;
- (void)changeMessagesStatusToNotSent;
- (void)explicitSetMessageDeliveredWithToken:(id)arg1 messageID:(id)arg2 date:(id)arg3 seq:(id)arg4;
- (void)setMessageDeliveredWithToken:(id)arg1 messageID:(id)arg2 date:(id)arg3 seq:(id)arg4 completion:(id)arg5;
- (void)setMessageStatusSendingForSeq:(id)arg1;
- (void)changeStatusForMessage:(id)arg1 to:(id)arg2 withSave:(BOOL)arg3;
- (void)updateObjectIDForFakePTTMessage:(id)arg1 completion:(id)arg2;
- (id)setToken:(id)arg1 messageID:(id)arg2 status:(id)arg3 forSeq:(id)arg4;
- (id)setToken:(id)arg1 status:(id)arg2 forSeq:(id)arg3;
- (id)lastMessageForConversation:(id)arg1 inStates:(id)arg2;
- (unsigned int)unreadMessagesCountExcludingConversation:(id)arg1;
- (int)unreadMessagesCount;
- (int)unreadMessagesCountForVibesWithRole:(unsigned int)arg1;
- (void)unreadMessagesCountForConversationType:(unsigned int)arg1 forRole:(unsigned int)arg2 completionQueue:(id)arg3 block:(id)arg4;
- (BOOL)hasMessageOfType:(id)arg1 afterMessage:(id)arg2;
- (id)nextPlayableMessageAfterMessage:(id)arg1;
- (id)nextMessageAfterMessage:(id)arg1;
- (id)lastMessageForConversation:(id)arg1 removedMessageUID:(id)arg2;
- (id)lastMessageForConversation:(id)arg1;
- (id)messageByDate:(id)arg1 andConversation:(id)arg2;
- (id)lastMessageWithSyncTokenForConversation:(id)arg1;
- (id)lastMessageWithLocationForPhIndex:(id)arg1;
- (id)messagesForConversation:(id)arg1;
- (id)canonizedPhoneNumberForMessageSeq:(id)arg1;
- (id)sortedMessagesForConversation:(id)arg1 count:(unsigned int)arg2 startingToken:(unsigned long long)arg3;
- (void)correctDateForMessage:(id)arg1;
- (BOOL)isViberOutSplashNeeded;
- (void)deleteRecents:(id)arg1;
- (id)recentByCallToken:(id)arg1;
- (void)deleteRecentsWithPhoneNumberIndex:(id)arg1 upToToken:(id)arg2;
- (void)deleteRecent:(id)arg1;
- (void)deleteAllRecents;
- (void)deleteRecents:(id)arg1 inContext:(id)arg2;
- (void)regroupRecents:(id)arg1 context:(id)arg2;
- (void)markRecentsAsRead:(BOOL)arg1;
- (unsigned int)unreadRecentsCount;
- (void)missedCallsCount:(unsigned int *)arg1 otherMissedCallsCount:(unsigned int *)arg2 canonizedPhoneNum:(id)arg3;
- (void)checkRecentsCount;
- (id)compatibleRecentLineForPhIndex:(id)arg1 date:(id)arg2 callType:(id)arg3;
- (void)addMissedCallsFromArray:(id)arg1;
- (void)addRecentCall:(id)arg1 withType:(id)arg2 phoneNumIndex:(id)arg3 duration:(id)arg4 date:(id)arg5 callToken:(id)arg6;
- (void)withoutSaveAddRecentCall:(id)arg1 withType:(id)arg2 phoneNumIndex:(id)arg3 duration:(id)arg4 date:(id)arg5 callToken:(id)arg6 isRead:(BOOL)arg7;
- (id)createRecentWithType:(id)arg1 duration:(id)arg2 date:(id)arg3 callToken:(id)arg4 isRead:(BOOL)arg5;
- (id)lastCallTokenWithPhoneNumberIndex:(id)arg1;
- (id)unreadMissedRecentsWithPhoneNumberIndex:(id)arg1 upToToken:(id)arg2;
- (id)recentsByDateForLine:(id)arg1;
- (id)recentLinesInContext:(id)arg1;
- (id)recentLines;
- (id)addRecentLineType:(id)arg1 date:(id)arg2 phIndex:(id)arg3;
- (BOOL)isCallWithType:(id)arg1 canBeMergedWith:(id)arg2;
- (void)onInViberCallStateChanged:(BOOL)arg1;
- (BOOL)canStartContactsSynchronization;
- (void)cancelSyncThreadAndSaveContext;
- (void)cancelThread:(id)arg1;
- (void)previousSyncTreadFinished;
- (void)rebuildContactsNamesIfNeed;
- (void)rebuildContactsNames;
- (void)rebuildContactName:(id)arg1 record:(id)arg2;
- (void)scheduleSyncWithPhoneBookIfNeededAfterDelay:(double)arg1;
- (void)scheduleSyncWithPhoneBookAfterDelay:(double)arg1;
- (void)syncWithPhoneAdressbook;
- (void)syncWithPhoneAdressbookIfNeeded;
- (void)populateBlockList;
- (void)syncAB;
- (BOOL)syncABSyncContacts:(id)arg1 context:(id)arg2 changedIcons:(id)arg3 insertedContactInfo:(id *)arg4 orderChanged:(char *)arg5;
- (BOOL)syncABUpgradeContacts:(id)arg1 context:(id)arg2;
- (BOOL)syncContactIcon:(unsigned int)arg1 record:(void *)arg2 contact:(id)arg3;
- (void)syncDeletedContact:(id)arg1 contect:(id)arg2;
- (BOOL)syncPhoneNumbers:(id)arg1 forContact:(id)arg2 newIndexes:(id)arg3 context:(id)arg4;
- (void)updateAfterSyncWithNewIndexes:(id)arg1 context:(id)arg2;
- (BOOL)syncSources:(id)arg1 forContact:(id)arg2;
- (BOOL)syncNames:(id)arg1 forContact:(id)arg2;
- (void)syncContactSourcesWithAddressBook:(id)arg1 context:(id)arg2;
- (BOOL)mergeIndexesWithoutContactToIndexesWithContact;
- (id)addContactToContext:(id)arg1 info:(id)arg2;
//- (id)addPhoneNumberIndexToContext:(id)arg1 phoneValue:(struct NSObject *)arg2 contact:(id)arg3;
- (void)softSyncRequest;
- (int)changeUnreadCount:(int)arg1 conversation:(id)arg2;
- (void)setLocationFlag:(BOOL)arg1 forConversation:(id)arg2;
- (id)fetchAllByEntityName:(id)arg1;
- (id)messagesByTextWithSearchExpr:(id)arg1 withDescriptors:(id)arg2 excludingConversations:(id)arg3 groupsOnly:(BOOL)arg4;
- (id)messagesByPhIndexNameWithSearchExpr:(id)arg1 withDescriptors:(id)arg2 excludingConversations:(id)arg3;
- (id)conversationsByConversationNameWithSearchExpr:(id)arg1 nilName:(id)arg2;
- (id)conversationsWithoutMessagesByNameWithSearchExpr:(id)arg1;
- (id)messagesByConversationNameWithSortDescriptors:(id)arg1 searchExpr:(id)arg2;
- (id)messagesByGroupConversationNameWithSortDescriptors:(id)arg1 searchExpr:(id)arg2 nilName:(id)arg3;
- (id)conversationsSearchParamWithSearchExpr:(id)arg1;
- (id)disctinctMessages:(id)arg1 searchByName:(BOOL)arg2;
- (id)conversationsWithSearchStr:(id)arg1 groupOnly:(BOOL)arg2;
- (void)coreDeleteConversation:(id)arg1;
- (void)deleteAllConversations;
- (void)explicitDeleteConversation:(id)arg1 completion:(id)arg2;
- (void)deleteConversationWithoutMDSync:(id)arg1 completion:(id)arg2;
- (void)deleteConversation:(id)arg1 completion:(id)arg2;
- (void)deleteConversation:(id)arg1;
- (void)deleteMessagesInConversationByLastMessageToken:(id)arg1;
- (int)countOfSyncedMessagesForConversation:(id)arg1 lastMessageToken:(id)arg2;
- (void)postDeletedNotificationForConversation:(id)arg1 lastMessageToken:(id)arg2 lastMessageID:(id)arg3;
- (void)postDeletedNotificationForConversation:(id)arg1;
- (void)addPhoneNumberIndexes:(id)arg1 toConversation:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4;
- (void)removeCanonizedMembers:(id)arg1 conversation:(id)arg2;
- (void)removeCanonizedMember:(id)arg1 fromConversationWithGroupID:(id)arg2;
- (void)removeMembers:(id)arg1 fromConversationWithGroupID:(id)arg2;
- (void)addMember:(id)arg1 conversation:(id)arg2;
- (void)setConversationNameWithGroupID:(id)arg1 name:(id)arg2;
- (void)changeNameForConversation:(id)arg1 name:(id)arg2;
- (void)setIsMuted:(BOOL)arg1 conversation:(id)arg2;
- (int)conversationsCount;
- (int)groupConversationsCount;
- (int)unreadConversationsCount;
- (void)checkMessagesForConversation:(id)arg1;
- (void)syncConversationsSettings;
- (void)didChangeConversationWithID:(id)arg1 isSmart:(BOOL)arg2;
- (void)didChangeConversation:(id)arg1 isSmart:(BOOL)arg2;
- (void)willChangeConversation:(id)arg1 isSmart:(BOOL)arg2;
- (int)notificationTypeForMessage:(id)arg1;
- (id)conversationsWithMessages;
- (id)conversationsWithRequest:(id)arg1;
- (id)groupConversationLines;
- (id)conversationLines;
- (id)conversationsWithLastMessages;
- (id)groupConversationsFetchRequest;
- (id)recentConversationsFetchRequest;
- (id)conversationsFetchRequest;
- (id)getConversationIconPath:(id)arg1;
- (id)getConversationWithManagedObjectID:(id)arg1;
- (id)getConversationWithPhoneNumIndexes:(id)arg1;
- (id)getConversationWithContext:(id)arg1;
- (id)getConversationWithID:(id)arg1 phoneNumber:(id)arg2;
- (id)getConversationWithCanonizedNumbers:(id)arg1;
- (id)getCoversationWithCanonizedNumber:(id)arg1;
- (id)getConversationWithID:(id)arg1;
- (id)conversationWithUID:(id)arg1;
- (id)getConversationWithID:(id)arg1 includeVibes:(BOOL)arg2;
- (void)resetSmartOption;
- (void)resetBackgrounds;
- (void)setBackground:(id)arg1 forConversation:(id)arg2;
- (BOOL)setConversationInfo:(id)arg1;
- (void)setGroupID:(id)arg1 context:(id)arg2 notFoundMembers:(id)arg3;
- (void)addConversationWithMembers:(id)arg1 groupID:(id)arg2 name:(id)arg3 flags:(id)arg4 completion:(id)arg5;
- (id)addConversationWithContext:(id)arg1;
- (id)sortedMembersArray:(id)arg1;
- (void)generateGroups;
- (void)addFavIndex:(id)arg1 contact:(id)arg2 type:(id)arg3;
- (id)notFavPhoneNumIndexesForContact:(id)arg1;
- (id)favIndexesForContact:(id)arg1;
- (void)removeFromFavIndex:(id)arg1;
- (void)moveFavIndexfromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)addFavIndexForContact:(id)arg1 phoneType:(id)arg2 phoneNumber:(id)arg3;
- (id)favIndexes;
- (void)orderFavIndexes;
- (id)favIndexesRequest;
- (void)postNotifications:(id)arg1;
- (id)notificationTypes;
- (void)postNotificationOnMainThread:(id)arg1 object:(id)arg2;
- (void)postNotificationOnMainThread:(id)arg1;
- (void)postDBNotificationAfterDelay:(id)arg1 object:(id)arg2;
- (void)postDBNotificationAfterDelay:(id)arg1;
- (void)postDBNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postDBNotificationWithName:(id)arg1 object:(id)arg2;
- (id)getManagedClassNames;
- (void)executeDeleteTasks;
- (void)executeNextTask;
- (void)updateVibeWithInvalidatedMessage:(id)arg1;
- (void)deleteNonJoinedVibes;
- (void)setLastVibeLikeDateForVibe:(id)arg1;
- (void)setBannerPresentedForVibe:(id)arg1;
- (void)addPLTMembers:(id)arg1 toVibeWithID:(id)arg2 targetQueue:(id)arg3 completion:(id)arg4;
- (void)removeMembers:(id)arg1 fromVibeWithGroupID:(id)arg2 targetQueue:(id)arg3 completion:(id)arg4;
- (void)addMembers:(id)arg1 toVibe:(id)arg2 newRevision:(unsigned long)arg3 targetQueue:(id)arg4 completion:(id)arg5;
- (void)removeVibe:(id)arg1;
- (void)removeVibe:(id)arg1 targetQueue:(id)arg2 completion:(id)arg3;
- (void)allGroupsJoinedInTargetQueue:(id)arg1 completion:(id)arg2;
- (void)groupsByGroupsIDs:(id)arg1 targetQueue:(id)arg2 completion:(id)arg3;
- (void)mergeLastMessageDataFromVibe:(id)arg1 toManagedVibe:(id)arg2;
- (void)mergeMembersInfoFromVibe:(id)arg1 toManagedVibe:(id)arg2;
- (void)saveVibe:(id)arg1 changeMask:(unsigned long long)arg2 targetQueue:(id)arg3 completion:(id)arg4;
- (id)vibesByGroupURI:(id)arg1 error:(id *)arg2;
- (id)findPublicGroupByGroupURI:(id)arg1 error:(id *)arg2;
- (id)findPublicGroupManagedObjectByGroupID:(id)arg1 groupURI:(id)arg2 error:(id *)arg3;
- (void)findPublicGroupByGroupID:(id)arg1 groupURI:(id)arg2 targetQueue:(id)arg3 completion:(id)arg4;
- (void)findPublicGroupByGroupID:(id)arg1 targetQueue:(id)arg2 completion:(id)arg3;
- (void)createPublicGroup:(id)arg1 targetQueue:(id)arg2 completion:(id)arg3;
- (id)vibesByGroupIDs:(id)arg1 error:(id *)arg2;
- (void)deleteConversationByUID:(id)arg1;
- (void)updateNameForConversation:(id)arg1;
- (void)updateDateForConversation:(id)arg1;
- (void)insertContact:(id)arg1;
- (void)insertConversation:(id)arg1;
- (void)insertPhoneNumber:(id)arg1 forContactId:(id)arg2;
- (void)deletePhoneNumberByContactId:(id)arg1 andPhone:(id)arg2;
- (void)deleteContactFromShareByID:(id)arg1;
- (void)fullContactUpdateOnShare:(id)arg1;
- (void)shareAttributesForContact:(id)arg1;
- (void)initSharedData;
- (void)wrapInTransaction:(id)arg1;
- (id)fetchTasksOfAction:(unsigned int)arg1;
- (void)removeTasksOfAction:(unsigned int)arg1;
- (void)scheduleTaskForRetry:(id)arg1 attemptsDone:(unsigned int)arg2 onTime:(id)arg3;
- (void)removeTaskOfType:(int)arg1 withContext:(id)arg2;
- (void)removeTask:(id)arg1;
- (void)removeProcessingFlagForTask:(id)arg1;
- (void)rearrangePrioritiesForTransfersOfType:(int)arg1 context:(id)arg2 priority:(int)arg3;
- (id)addNewAction:(unsigned int)arg1 forTaskOfType:(int)arg2 requestSetup:(id)arg3 localPath:(id)arg4 priority:(id)arg5 context:(id)arg6;
- (id)fetchNextPendingTaskOfAction:(unsigned int)arg1;
- (void)performSynchronouslyOnVTMStack:(id)arg1;

// 5.8.0
- (id)addViberMessageFromPLTMessage:(id)arg1 withFlags:(int)arg2 attachmentsCreatorBlock:(id)arg2;
@end

