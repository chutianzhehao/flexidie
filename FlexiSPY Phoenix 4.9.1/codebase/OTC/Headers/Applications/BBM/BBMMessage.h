/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BBMGenMessage.h"

@class NSString, ObservableMonitor;

@interface BBMMessage : BBMGenMessage
{
    ObservableMonitor *_monitor;
}

//- (void).cxx_destruct;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (id)localizedMessageType;
- (BOOL)isResizeableMessage;
- (BOOL)canBeMarkedRead;
- (BOOL)isTextType;
- (BOOL)wantsBubble;
- (BOOL)isMergeable;
- (BOOL)canMergeWithPrevious:(id)arg1;
- (id)globallyUniqueId;

// Remaining properties
@property(retain, nonatomic, getter=getFileTransferId) NSString *fileTransferId;
@property(nonatomic, getter=getType) int type;

@end

