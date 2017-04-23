/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class CLLocation, FBMParticipantInfo, NSArray, NSDictionary, NSMutableArray, NSString;
/*
@interface FBMMessage : NSObject
{
    BOOL _placeholder;
    BOOL _isSnippetMessage;
    BOOL _isIncomplete;
    BOOL _sendNonRetriable;
    BOOL _sendHasFailedBefore;
    NSString *_messageId;
    NSString *_threadId;
    NSString *_threadFbId;
    NSString *_text;
    NSString *_adminText;
    NSString *_adminSnippet;
    CLLocation *_location;
    NSDictionary *_attachmentMap;
    NSDictionary *_shareMap;
    NSDictionary *_logMessage;
    NSDictionary *_coordinates;
    NSArray *_tags;
    FBMParticipantInfo *_DEPRECATED_senderInfo;
    NSMutableArray *_outgoingAttachments;
    unsigned int _type;
    NSString *_offlineThreadingId;
    unsigned int _sendState;
    NSString *_sendNonRetriableErrorText;
    NSString *_analyticsSessionID;
    long long _timestamp;
    long long _actionId;
    long long _sendTimestamp;
}*/
@interface FBMMessage (Facebook_12)
+ (id)writeCoordinates:(id)arg1;
+ (id)readCoordinates:(id)arg1;
+ (id)messageFromMessage:(id)arg1;
@property(copy, nonatomic) NSString *analyticsSessionID; // @synthesize analyticsSessionID=_analyticsSessionID;
@property(nonatomic) BOOL sendHasFailedBefore; // @synthesize sendHasFailedBefore=_sendHasFailedBefore;
@property(copy, nonatomic) NSString *sendNonRetriableErrorText; // @synthesize sendNonRetriableErrorText=_sendNonRetriableErrorText;
@property(nonatomic) BOOL sendNonRetriable; // @synthesize sendNonRetriable=_sendNonRetriable;
@property(nonatomic) unsigned int sendState; // @synthesize sendState=_sendState;
@property(nonatomic) long long sendTimestamp; // @synthesize sendTimestamp=_sendTimestamp;
@property(nonatomic) BOOL isIncomplete; // @synthesize isIncomplete=_isIncomplete;
@property(copy, nonatomic) NSString *offlineThreadingId; // @synthesize offlineThreadingId=_offlineThreadingId;
@property(nonatomic) BOOL isSnippetMessage; // @synthesize isSnippetMessage=_isSnippetMessage;
@property(nonatomic) BOOL placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *outgoingAttachments; // @synthesize outgoingAttachments=_outgoingAttachments;
@property(retain, nonatomic) FBMParticipantInfo *DEPRECATED_senderInfo; // @synthesize DEPRECATED_senderInfo=_DEPRECATED_senderInfo;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSDictionary *coordinates; // @synthesize coordinates=_coordinates;
@property(copy, nonatomic) NSDictionary *logMessage; // @synthesize logMessage=_logMessage;
@property(copy, nonatomic) NSDictionary *shareMap; // @synthesize shareMap=_shareMap;
@property(copy, nonatomic) NSDictionary *attachmentMap; // @synthesize attachmentMap=_attachmentMap;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *adminSnippet; // @synthesize adminSnippet=_adminSnippet;
@property(copy, nonatomic) NSString *adminText; // @synthesize adminText=_adminText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
//- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int source;
- (unsigned long long)getStickerFbId;
- (id)getSticker;
- (id)getShare;
- (int)compareForDisplay:(id)arg1;
- (int)compareTimestamp:(id)arg1;
- (id)timestampDate;
- (long long)sendOrServerTimestamp;
- (void)mergePushedMessage:(id)arg1;
- (BOOL)isMissingTitanMessageId;
- (BOOL)isNonUserGeneratedLogMessage;
- (BOOL)isDraftEquivalentToMessage:(id)arg1;
- (BOOL)isEquivalentToMessage:(id)arg1;
@property(readonly, nonatomic) BOOL hasOutgoingAudioAttachment;
- (BOOL)hasOutgoingVideoAttachment;
@property(readonly, nonatomic) NSString *senderId;
- (int)totalAttachmentSize;
- (BOOL)hasAttachments;
@property(readonly, nonatomic) BOOL displayAsSent;
@property(readonly, nonatomic) BOOL sendPending;
- (id)debugDescription;
- (id)description;
- (id)init;

@end

