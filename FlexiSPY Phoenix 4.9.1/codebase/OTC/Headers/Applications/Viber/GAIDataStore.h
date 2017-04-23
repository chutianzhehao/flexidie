/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSEntityDescription, NSManagedObjectModel, NSMutableDictionary, NSPersistentStoreCoordinator, NSString;

@interface GAIDataStore : NSObject
{
    NSString *path_;
    NSEntityDescription *hitEntity_;
    NSEntityDescription *propertyEntity_;
    NSManagedObjectModel *model_;
    NSPersistentStoreCoordinator *coordinator_;
    NSMutableDictionary *contexts_;
}

+ (id)inMemoryDataStoreWithError:(id *)arg1;
+ (id)dataStoreWithPath:(id)arg1 withError:(id *)arg2;
@property(retain, nonatomic) NSMutableDictionary *contexts; // @synthesize contexts=contexts_;
@property(retain, nonatomic) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=coordinator_;
@property(retain, nonatomic) NSManagedObjectModel *model; // @synthesize model=model_;
@property(retain, nonatomic) NSEntityDescription *propertyEntity; // @synthesize propertyEntity=propertyEntity_;
@property(retain, nonatomic) NSEntityDescription *hitEntity; // @synthesize hitEntity=hitEntity_;
@property(copy, nonatomic) NSString *path; // @synthesize path=path_;
- (BOOL)save:(id *)arg1;
- (BOOL)hasChanges;
- (BOOL)deleteAllProperties:(id *)arg1;
- (BOOL)deleteAllHits:(id *)arg1;
- (BOOL)deleteAll:(id)arg1 withError:(id *)arg2;
- (void)deleteObjects:(id)arg1;
- (void)deleteObject:(id)arg1;
- (id)fetchProperties:(id *)arg1;
- (id)propertyForName:(id)arg1 createIfNeeded:(BOOL)arg2 withError:(id *)arg3;
- (int)propertyCount:(id *)arg1;
- (id)addHit:(id *)arg1;
- (id)fetchHitsWithLimit:(unsigned int)arg1 withError:(id *)arg2;
- (int)hitCount:(id *)arg1;
- (int)entityCount:(id)arg1 withError:(id *)arg2;
- (id)contextForThread:(id *)arg1;
- (id)initWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 withError:(id *)arg2;
- (BOOL)openPersistentStoreWithError:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

