/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
//#import "NSObject.h"

@class EKCalendar, EKEventStore, EKParticipant, EKRecurrenceRule, NSArray, NSDate, NSMutableArray, NSNumber, NSString, NSTimeZone, NSURL;

@interface EKEvent : NSObject
{
    EKEventStore *_store;
    void *_event;
    NSDate *_occurrenceDate;
    NSString *_eventId;
    NSNumber *_calendarId;
    NSDate *_dateStamp;
    NSURL *_url;
    BOOL _allDay;
    BOOL _detached;
    BOOL _unread;
    NSString *_title;
    NSString *_location;
    NSString *_notes;
    NSMutableArray *_alarms;
    NSMutableArray *_attendees;
    EKParticipant *_organizer;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    EKCalendar *_calendar;
    int _status;
    int _partStatus;
    int _availability;
    NSString *_responseComment;
    NSTimeZone *_timeZone;
    NSDate *_originalStartDate;
    NSArray *_exceptionDates;
    NSArray *_recurrenceRules;
    unsigned long long _loadFlags;
    unsigned long long _dirtyFlags;
}

+ (id)eventWithEventStore:(id)arg1;
- (id)init;
- (id)initWithEventStore:(id)arg1;
- (id)initWithEventStore:(id)arg1 event:(void *)arg2 occurrenceDate:(id)arg3;
- (id)initWithEventStore:(id)arg1 event:(void *)arg2 occurrenceDate:(id)arg3 eventIdentifier:(id)arg4;
- (void)_clearCachedData;
- (void)dealloc;
@property(readonly, nonatomic) NSString *eventIdentifier;
- (id)rowId;
- (void *)objectRef;
- (id)store;
- (id)occurrenceDate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyState;
- (void)restoreState:(id)arg1;
- (void)setStore:(id)arg1;
- (void)_reconnectEvent;
- (void)_reconnectCalendar;
- (void)_setStoreInternal:(id)arg1;
- (void)_storeClosed;
- (void)_reconnectToServer;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isDirty;
- (BOOL)isStatusDirty;
- (BOOL)isDirtyIgnoringCalendar;
- (void)_sendModifiedNote;
@property(retain, nonatomic) EKCalendar *calendar;
- (id)_canMoveToCalendar:(id)arg1;
@property(copy, nonatomic) NSString *notes;
- (id)URL;
- (void)setURL:(id)arg1;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSString *location;
- (int)compareStartDateWithEvent:(id)arg1;
@property(nonatomic, getter=isAllDay) BOOL allDay;
@property(copy, nonatomic) NSDate *startDate;
- (double)duration;
@property(copy, nonatomic) NSDate *endDate;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (BOOL)isFloating;
- (id)initialStartDate;
- (id)initialEndDate;
//- (CDStruct_79f9e052)startDateGr;
//- (CDStruct_79f9e052)endDateGr;
//- (CDStruct_79f9e052)startDatePinnedForAllDay;
//- (CDStruct_79f9e052)endDatePinnedForAllDay;
@property(readonly, nonatomic) BOOL isDetached;
- (BOOL)isInvite;
- (id)_attendees;
@property(readonly, nonatomic) NSArray *attendees;
- (int)attendeeCount;
- (void)setAttendees:(id)arg1;
- (BOOL)hasAlarm;
- (id)nextAlarmDate;
- (id)_alarms;
@property(copy, nonatomic) NSArray *alarms;
- (int)alarmCount;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (BOOL)_areAlarmsDirty;
- (BOOL)_areRecurrenceRulesDirty;
- (BOOL)isRecurring;
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule;
- (int)recurrenceRuleCountInDB;
- (id)_recurrenceRules;
- (id)allRecurrenceRules;
- (int)recurrenceRuleCount;
- (BOOL)canAddRecurrence;
@property(readonly, nonatomic) int status;
- (int)participationStatus;
- (void)setParticipationStatus:(int)arg1;
- (BOOL)responseMustApplyToAll;
- (BOOL)isUnread;
- (void)clearUnreadState;
@property(nonatomic) int availability;
- (id)responseComment;
- (void)setResponseComment:(id)arg1;
@property(readonly, nonatomic) EKParticipant *organizer;
- (BOOL)isEditable;
- (id)exceptionDates;
- (id)originalEvent;
- (id)detachedEvents;
- (BOOL)requiresDetach;
- (BOOL)canDetachSingleOccurrence;
- (int)pendingParticipationStatus;
- (id)externalId;
- (BOOL)hasActionWithExternalAndFolderID;
- (BOOL)canSetAvailability;
- (BOOL)canAddAttendees;
- (BOOL)hasSelfAttendee;
- (BOOL)canSetAlarms;
- (BOOL)canBeRespondedTo;
- (id)description;
- (void)revert;
- (void)_disassociate;
- (BOOL)refresh;
- (BOOL)commit:(int)arg1 error:(id *)arg2;
- (BOOL)remove:(int)arg1 error:(id *)arg2;
- (BOOL)_commitRecurrenceRule:(id *)arg1;
- (BOOL)_commitAlarms:(id *)arg1;
- (BOOL)_commitAttendees:(id *)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id *)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1;
- (BOOL)_occurrenceExistsOnDate:(double)arg1;
//- (BOOL)_checkStartDateConstraintAgainstDate:(CDStruct_79f9e052)arg1 error:(id *)arg2;

@end

