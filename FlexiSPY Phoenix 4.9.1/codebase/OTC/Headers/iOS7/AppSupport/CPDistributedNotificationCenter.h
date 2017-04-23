/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSString;

@interface CPDistributedNotificationCenter : NSObject
{
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource *_receiveNotificationSource;
    _Bool _isServer;
    struct __CFDictionary *_sendPorts;
    unsigned long long _startCount;
}

+ (id)centerForServerPort:(unsigned int)arg1;
+ (void)setCenter:(id)arg1 forServerPort:(unsigned int)arg2;
+ (struct __CFDictionary *)_serverPortToNotificationCenterMap;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerNamed:(id)arg1;
- (void)_receivedCheckIn:(unsigned int)arg1 auditToken:(CDStruct_6ad76789 *)arg2;
- (_Bool)postNotificationName:(id)arg1 userInfo:(id)arg2 toBundleIdentifier:(id)arg3;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)postNotificationName:(id)arg1;
- (void)runServer;
- (void)runServerOnCurrentThread;
- (void)deliverNotification:(id)arg1 userInfo:(id)arg2;
- (void)stopDeliveringNotifications;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop *)arg1;
- (void)startDeliveringNotificationsToMainThread;
- (void)_notificationServerWasRestarted;
- (void)_checkOutAndRemoveSource;
- (void)_checkIn;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop *)arg1;
- (id)name;
- (void)dealloc;
- (id)_initWithServerName:(id)arg1;

@end

