//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MidSmallJZDModel : JDModel
{
    _Bool _support;
    _Bool _selected;
    NSString *_batchId;
    NSString *_carriageMoney;
    NSString *_carriageMoneyTip;
    NSArray *_days;
    NSString *_promiseName;
    NSString *_promise311Tip;
    NSString *_promiseDate;
    NSString *_promiseTimeRange;
    NSNumber *_promiseType;
    NSString *_show311Text;
    NSString *_promiseSendPay;
    NSDictionary *_promiseTime;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool support; // @synthesize support=_support;
@property(retain, nonatomic) NSDictionary *promiseTime; // @synthesize promiseTime=_promiseTime;
@property(retain, nonatomic) NSString *promiseSendPay; // @synthesize promiseSendPay=_promiseSendPay;
@property(retain, nonatomic) NSString *show311Text; // @synthesize show311Text=_show311Text;
@property(retain, nonatomic) NSNumber *promiseType; // @synthesize promiseType=_promiseType;
@property(retain, nonatomic) NSString *promiseTimeRange; // @synthesize promiseTimeRange=_promiseTimeRange;
@property(retain, nonatomic) NSString *promiseDate; // @synthesize promiseDate=_promiseDate;
@property(retain, nonatomic) NSString *promise311Tip; // @synthesize promise311Tip=_promise311Tip;
@property(retain, nonatomic) NSString *promiseName; // @synthesize promiseName=_promiseName;
@property(retain, nonatomic) NSArray *days; // @synthesize days=_days;
@property(retain, nonatomic) NSString *carriageMoneyTip; // @synthesize carriageMoneyTip=_carriageMoneyTip;
@property(retain, nonatomic) NSString *carriageMoney; // @synthesize carriageMoney=_carriageMoney;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
