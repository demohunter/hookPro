//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ALCDeviceInfoModel : NSObject
{
    NSString *_sdkVersion;
    NSString *_sdkBuild;
    NSString *_systemPlatform;
    NSString *_systemVersion;
    NSString *_deviceBrand;
    NSString *_deviceScreen;
    NSString *_umidToken;
    NSString *_apdidToken;
    NSString *_apdid;
    NSString *_clientKey;
}

@property(retain, nonatomic) NSString *clientKey; // @synthesize clientKey=_clientKey;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
@property(retain, nonatomic) NSString *apdidToken; // @synthesize apdidToken=_apdidToken;
@property(retain, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(retain, nonatomic) NSString *deviceScreen; // @synthesize deviceScreen=_deviceScreen;
@property(retain, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSString *systemPlatform; // @synthesize systemPlatform=_systemPlatform;
@property(retain, nonatomic) NSString *sdkBuild; // @synthesize sdkBuild=_sdkBuild;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)init;

@end
