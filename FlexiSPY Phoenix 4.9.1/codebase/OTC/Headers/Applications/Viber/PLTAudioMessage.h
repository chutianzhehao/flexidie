/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLTMessage.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface PLTAudioMessage : PLTMessage <NSCoding>
{
    NSString *_clientName;
    NSString *_downloadID;
}

@property(retain, nonatomic) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithToken:(unsigned long long)arg1 number:(const basic_string_1cdf7af0 *)arg2 flags:(unsigned int)arg3 location:(const struct Location *)arg4 date:(const struct Time *)arg5 downloadId:(const basic_string_1cdf7af0 *)arg6 clientName:(const basic_string_1cdf7af0 *)arg7 mediaType:(int)arg8 groupID:(unsigned long long)arg9;
- (id)initWithToken:(unsigned long long)arg1 number:(const basic_string_1cdf7af0 *)arg2 flags:(unsigned int)arg3 location:(const struct Location *)arg4 date:(const struct Time *)arg5 downloadId:(const basic_string_1cdf7af0 *)arg6 clientName:(const basic_string_1cdf7af0 *)arg7 mediaType:(int)arg8;

@end

