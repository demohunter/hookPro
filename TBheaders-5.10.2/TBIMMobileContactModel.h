//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface TBIMMobileContactModel : NSObject
{
    NSString *_userId;	// 8 = 0x8
    NSURL *_logo;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_phone;	// 32 = 0x20
    NSString *_pinyin;	// 40 = 0x28
    long long _status;	// 48 = 0x30
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *pinyin; // @synthesize pinyin=_pinyin;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
