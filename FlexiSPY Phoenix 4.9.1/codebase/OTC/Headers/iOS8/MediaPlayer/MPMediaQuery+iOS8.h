/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class MPMediaLibrary, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSArray, NSSet;

@interface MPMediaQuery : NSObject <NSSecureCoding, NSCopying>
{
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    long long _staticEntityType;
}

+ (id)geniusMixesQuery;
+ (id)videoPodcastsQuery;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)homeVideosQuery;
+ (id)tvShowsQuery;
+ (id)musicVideosQuery;
+ (id)videosQuery;
+ (_Bool)isFilteringDisabled;
+ (void)setFilteringDisabled:(_Bool)arg1;
+ (void)initFilteringDisabled;
+ (id)genresQuery;
+ (id)composersQuery;
+ (id)compilationsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)audiobooksQuery;
+ (id)videoITunesUQuery;
+ (id)ITunesUAudioQuery;
+ (id)ITunesUQuery;
+ (id)podcastsQuery;
+ (id)playlistsQuery;
+ (id)songsQuery;
+ (id)artistsQuery;
+ (id)albumsQuery;
+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
- (void)setCriteria:(id)arg1;
- (id)criteria;
- (void)setStaticEntities:(id)arg1 entityType:(long long)arg2;
- (void)_enumerateCollectionsInOrder:(_Bool)arg1 usingBlock:(id)arg2;
- (void)_enumerateUnorderedCollectionsUsingBlock:(id)arg1;
- (void)_enumerateCollectionsUsingBlock:(id)arg1;
- (void)_enumerateItemsInOrder:(_Bool)arg1 usingBlock:(id)arg2;
- (void)_enumerateUnorderedItemsUsingBlock:(id)arg1;
- (void)_enumerateItemsUsingBlock:(id)arg1;
- (_Bool)_isFilteringDisabled;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(long long)arg3;
@property(readonly, nonatomic) NSArray *collectionSections;
@property(readonly, nonatomic) NSArray *itemSections;
@property(readonly, nonatomic) _Bool willGroupEntities;
- (unsigned long long)groupingThreshold;
@property(readonly, nonatomic) _Bool specifiesPlaylistItems;
@property(readonly, nonatomic) _Bool excludesEntitiesWithBlankNames;
@property(nonatomic) _Bool useSections;
@property(nonatomic) _Bool sortItems;
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;
@property(readonly, nonatomic) NSArray *collectionPersistentIdentifiers;
@property(readonly, nonatomic) NSArray *itemPersistentIdentifiers;
@property(readonly, nonatomic) unsigned long long _countOfCollections;
@property(readonly, nonatomic) unsigned long long _countOfItems;
@property(readonly, nonatomic) _Bool _hasCollections;
@property(readonly, nonatomic) _Bool _hasItems;
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;
@property(nonatomic) _Bool ignoreSystemFilterPredicates;
@property(nonatomic) long long groupingType;
@property(readonly, nonatomic) NSArray *collections;
@property(readonly, nonatomic) NSArray *items;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;
- (void)removeFilterPredicate:(id)arg1;
- (void)addFilterPredicate:(id)arg1;
@property(retain, nonatomic) NSSet *filterPredicates;
- (id)copyByRemovingStaticEntities;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithEntities:(id)arg1 entityType:(long long)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithFilterPredicatesInternal:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)init;

@end

