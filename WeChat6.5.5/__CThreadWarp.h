//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __CThreadWarp : NSObject
{
    CDUnknownFunctionPointerType m_funp;
    void *m_arg;
    CDUnknownFunctionPointerType m_fun;
}

@property(nonatomic) void *m_arg; // @synthesize m_arg;
@property(nonatomic) CDUnknownFunctionPointerType m_fun; // @synthesize m_fun;
@property(nonatomic) CDUnknownFunctionPointerType m_funp; // @synthesize m_funp;
- (void)Run;
- (id)init;

@end

