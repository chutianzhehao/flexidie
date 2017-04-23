/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MessageSender.h"

#import "FBRequestDelegate-Protocol.h"

@class FetchThreadMethod, MarkThreadMethod, SendMessageMethod;

@interface BatchMessageSender : MessageSender <FBRequestDelegate>
{
    SendMessageMethod *_sendMessageMethod;
    MarkThreadMethod *_markThreadMethod;
    FetchThreadMethod *_fetchThreadMethod;
}

- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)handleFetchThreadResponse:(id)arg1;
- (void)handleMarkReadResponse:(id)arg1;
- (BOOL)handleSendMessageResponse:(id)arg1;
- (void)doSend;
- (id)fetchThreadRequest;
- (id)markReadRequest;
- (id)sendMessageRequest;
- (void)dealloc;
- (id)initWithThread:(id)arg1 message:(id)arg2 delegate:(id)arg3;

@end

