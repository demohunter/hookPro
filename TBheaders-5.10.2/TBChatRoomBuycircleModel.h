//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBChatRoomBuycircleModel : TBJSONModel
{
    NSString *_valid;	// 8 = 0x8
    NSString *_totalItemCnt;	// 16 = 0x10
    NSString *_ccode;	// 24 = 0x18
    NSString *_userId;	// 32 = 0x20
    NSString *_groupId;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
@property(retain, nonatomic) NSString *totalItemCnt; // @synthesize totalItemCnt=_totalItemCnt;
@property(retain, nonatomic) NSString *valid; // @synthesize valid=_valid;
- (void).cxx_destruct;

@end

