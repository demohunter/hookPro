//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString;

@interface MLWebActivityModel : EtaModel
{
    long long _action;
    NSString *_roomId;
    NSString *_activityId;
    NSString *_activityUrl;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;

@end
