/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@interface SKImageScaler : NSObject
{
}

+ (id)cropImage:(id)arg1 toFitTargetSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 toFillTargetSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 toFillTargetSize:(struct CGSize)arg2 allowUpscale:(BOOL)arg3;
+ (struct CGImage *)newScaleCGImage:(struct CGImage *)arg1 toFillTargetSize:(struct CGSize)arg2 allowUpscale:(BOOL)arg3;
+ (struct CGImage *)new_scaleCGImage:(struct CGImage *)arg1 toFitTargetSize:(struct CGSize)arg2 cropSize:(struct CGSize)arg3;
+ (float)scalarForSize:(struct CGSize)arg1 toFitTargetSize:(struct CGSize)arg2;
+ (float)scalarForSize:(struct CGSize)arg1 toFillTargetSize:(struct CGSize)arg2;

@end

