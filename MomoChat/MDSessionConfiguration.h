//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString;

@interface MDSessionConfiguration : NSObject
{
    CDUnknownBlockType _verifyURLString;
    CDUnknownBlockType _statDict;
    CDUnknownBlockType _statString;
    CDUnknownBlockType _urlStringWithType;
    CDUnknownBlockType _publicKeyExchangeUrlString;
    CDUnknownBlockType _monitorBlock;
    long long _momoAppVersion;
    CDUnknownBlockType _momoID;
    CDUnknownBlockType _session;
    NSString *_userAgent;
    NSData *_userAgentData;
    NSMutableArray *_protocolClasses;
    CDUnknownBlockType _injectParamBlock;
}

+ (id)defaultSessionConfiguration;
@property(copy, nonatomic) CDUnknownBlockType injectParamBlock; // @synthesize injectParamBlock=_injectParamBlock;
@property(retain, nonatomic) NSMutableArray *protocolClasses; // @synthesize protocolClasses=_protocolClasses;
@property(retain, nonatomic) NSData *userAgentData; // @synthesize userAgentData=_userAgentData;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy, nonatomic) CDUnknownBlockType session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType momoID; // @synthesize momoID=_momoID;
@property(nonatomic) long long momoAppVersion; // @synthesize momoAppVersion=_momoAppVersion;
@property(copy, nonatomic) CDUnknownBlockType monitorBlock; // @synthesize monitorBlock=_monitorBlock;
@property(copy, nonatomic) CDUnknownBlockType publicKeyExchangeUrlString; // @synthesize publicKeyExchangeUrlString=_publicKeyExchangeUrlString;
@property(copy, nonatomic) CDUnknownBlockType urlStringWithType; // @synthesize urlStringWithType=_urlStringWithType;
@property(copy, nonatomic) CDUnknownBlockType statString; // @synthesize statString=_statString;
@property(copy, nonatomic) CDUnknownBlockType statDict; // @synthesize statDict=_statDict;
@property(copy, nonatomic) CDUnknownBlockType verifyURLString; // @synthesize verifyURLString=_verifyURLString;
- (void).cxx_destruct;
- (void)unregisterClass:(Class)arg1;
- (void)registerClass:(Class)arg1;

@end
