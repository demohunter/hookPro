//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBZombieObject : NSObject
{
    Class _origClass;	// 8 = 0x8
}

+ (void)initialize;
@property(nonatomic) Class origClass; // @synthesize origClass=_origClass;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

