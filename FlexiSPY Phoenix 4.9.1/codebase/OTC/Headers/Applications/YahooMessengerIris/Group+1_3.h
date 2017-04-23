//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FLCollation, FLKey, GroupPrivate, Item, Media, Member, NSString, Schema, User;

//@interface Group : FLEntityValue
//{
//    Schema *_schema;
//    shared_ptr_632e7aba _peer;
//}

@interface Group (Group_1_3)

+ (id)groupForKey:(id)arg1;

- (id)proxy;
@property(readonly, nonatomic) FLCollation *stories;
@property(readonly, nonatomic) FLCollation *members;
@property(readonly, nonatomic) _Bool hasOtherNewUnreadGroups;
@property(readonly, nonatomic) Item *nearLastReadPostItem;
@property(readonly, nonatomic) Group *forwardingGroup;
@property(readonly, nonatomic) _Bool isDraft;
@property(readonly, nonatomic) _Bool exists;
@property(readonly, nonatomic) GroupPrivate *groupPrivate;
@property(readonly, nonatomic) FLCollation *joinedMembers;
@property(readonly, nonatomic) FLCollation *invitedMembers;
@property(readonly, nonatomic) FLKey *lastReadItemKey;
@property(readonly, nonatomic) _Bool cleared;
@property(readonly, nonatomic) _Bool oneOnOne;
@property(readonly, nonatomic) _Bool unread;
@property(readonly, nonatomic) FLCollation *postedItems;
@property(readonly, nonatomic) Member *me;
@property(readonly, nonatomic) int itemCount;
@property(readonly, nonatomic) int memberCount;
@property(readonly, nonatomic) long long lastItemTime;
@property(readonly, nonatomic) long long lastItemId;
@property(readonly, nonatomic) Media *picture;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool canAddMember;
@property(readonly, nonatomic) _Bool canRemoveAnyMember;
@property(readonly, nonatomic) _Bool canLeaveGroup;
@property(readonly, nonatomic) _Bool canSetGroupProfile;
@property(readonly, nonatomic) _Bool readOnly;
@property(readonly, nonatomic) User *defaultGroupOtherUser;
@property(readonly, nonatomic) long long createdTime;
@property(readonly, nonatomic) NSString *groupId;

- (id)peer;
- (id)initWithSchema:(id)arg1 peer:(id)arg2;

@end

