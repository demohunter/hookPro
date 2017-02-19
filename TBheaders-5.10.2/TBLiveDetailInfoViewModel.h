//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBLiveBroadCasterAccountInfo, TBLiveDetailInfoModel;

@interface TBLiveDetailInfoViewModel : NSObject
{
    _Bool _isDaren;	// 8 = 0x8
    _Bool _isFollow;	// 9 = 0x9
    _Bool _isV;	// 10 = 0xa
    _Bool _isSubscribed;	// 11 = 0xb
    TBLiveDetailInfoModel *_origin;	// 16 = 0x10
    TBLiveBroadCasterAccountInfo *_broadCasterAccountInfo;	// 24 = 0x18
    long long _liveStatus;	// 32 = 0x20
    NSString *_appointmentDate;	// 40 = 0x28
    NSString *_appointmentCoverImg;	// 48 = 0x30
    NSString *_hotsNum;	// 56 = 0x38
    NSString *_fansNums;	// 64 = 0x40
}

@property(copy, nonatomic) NSString *fansNums; // @synthesize fansNums=_fansNums;
@property(copy, nonatomic) NSString *hotsNum; // @synthesize hotsNum=_hotsNum;
@property(copy, nonatomic) NSString *appointmentCoverImg; // @synthesize appointmentCoverImg=_appointmentCoverImg;
@property(copy, nonatomic) NSString *appointmentDate; // @synthesize appointmentDate=_appointmentDate;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(nonatomic) _Bool isV; // @synthesize isV=_isV;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) _Bool isDaren; // @synthesize isDaren=_isDaren;
@property(nonatomic) long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(retain, nonatomic) TBLiveBroadCasterAccountInfo *broadCasterAccountInfo; // @synthesize broadCasterAccountInfo=_broadCasterAccountInfo;
@property(retain, nonatomic) TBLiveDetailInfoModel *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (id)init;

@end
