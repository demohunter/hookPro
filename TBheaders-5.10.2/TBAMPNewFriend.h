//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBAMPNewFriend : NSObject
{
    NSString *_friendUserId;	// 8 = 0x8
    NSString *_userIcon;	// 16 = 0x10
    NSString *_msgId;	// 24 = 0x18
    NSString *_friendUserName;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    long long _sourceType;	// 48 = 0x30
    NSString *_feedId;	// 56 = 0x38
    long long _status;	// 64 = 0x40
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *friendUserName; // @synthesize friendUserName=_friendUserName;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(retain, nonatomic) NSString *friendUserId; // @synthesize friendUserId=_friendUserId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
