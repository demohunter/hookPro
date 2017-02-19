//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCDNImageConfigProtocol-Protocol.h"

@class NSString;

@interface OrangeConfigDefault : NSObject <TBCDNImageConfigProtocol>
{
    NSString *_orangeGroupName;	// 8 = 0x8
    NSString *_orangeGroupNameNoticeKey;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *orangeGroupNameNoticeKey; // @synthesize orangeGroupNameNoticeKey=_orangeGroupNameNoticeKey;
@property(retain, nonatomic) NSString *orangeGroupName; // @synthesize orangeGroupName=_orangeGroupName;
- (void).cxx_destruct;
- (id)initWithGroupFileName:(id)arg1;
- (id)init;
- (id)getConfigUpdateNoticeName;
- (id)getConfigContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
