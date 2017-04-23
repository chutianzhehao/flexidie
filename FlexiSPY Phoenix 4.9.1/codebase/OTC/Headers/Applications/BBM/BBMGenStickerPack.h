/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBMElement.h"

@class NSNumber, NSString;

@interface BBMGenStickerPack : BBMElement
{
    BOOL _isOwner;
    NSString *_externalId;
    NSString *_iconUrl;
    NSString *_identifier;
    NSString *_name;
    NSNumber *_timeOwned;
}

+ (id)primaryKeyDictionaryWithIdentifier:(id)arg1;
+ (id)elementWithIdentifier:(id)arg1 andParent:(id)arg2;
+ (id)identifierOfElement:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic, getter=getTimeOwned) NSNumber *timeOwned; // @synthesize timeOwned=_timeOwned;
@property(retain, nonatomic, getter=getName) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL isOwner; // @synthesize isOwner=_isOwner;
@property(retain, nonatomic, getter=getIdentifier) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, getter=getIconUrl) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic, getter=getExternalId) NSString *externalId; // @synthesize externalId=_externalId;
//- (void).cxx_destruct;
- (id)primaryKey;
- (id)debugDescription;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)reset;

@end

