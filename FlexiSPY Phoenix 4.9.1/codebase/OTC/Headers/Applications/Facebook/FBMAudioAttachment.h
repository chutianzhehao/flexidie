/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FBMAttachment.h"

#import "OutgoingAttachment-Protocol.h"

@class NSData, NSURL;

@interface FBMAudioAttachment : FBMAttachment <OutgoingAttachment>
{
    NSURL *_location;
    NSData *_attachmentData;
    double _duration;
    double _timestamp;
}

+ (id)mimeType;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSData *attachmentData; // @synthesize attachmentData=_attachmentData;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *location; // @synthesize location=_location;
//- (void).cxx_destruct;
- (id)description;
- (double)loadFromFilename;
- (void)cancelPrepareAttachmentData;
- (BOOL)canCancelPrepareAttachmentData;
- (void)prepareAttachmentDataWithCompletedBlock:(id)arg1;
- (id)attachmentFilename;
- (id)attachmentHandle;
- (void)addAsAttachFile:(id)arg1;
- (void)addAsParamsToDictionary:(id)arg1;
- (void)addAsParamsToRequest:(id)arg1;
- (id)getThumbnailOfSize:(struct CGSize)arg1;
- (id)init;

@end

