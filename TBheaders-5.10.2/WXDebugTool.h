//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class NSString, WXSDKInstance;

@interface WXDebugTool : NSObject <WXModuleProtocol>
{
}

+ (void)getData:(id)arg1 key:(id)arg2;
+ (id)getReplacedJSFramework;
+ (void)setReplacedJSFramework:(id)arg1;
+ (id)getReplacedBundleJS;
+ (void)setReplacedBundleJS:(id)arg1;
+ (_Bool)isDevToolDebug;
+ (void)setDevToolDebug:(_Bool)arg1;
+ (_Bool)isDebug;
+ (void)setDebug:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end

