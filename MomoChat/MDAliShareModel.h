//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface MDAliShareModel : NSObject
{
    int _scene;
    NSString *_title;
    NSString *_desc;
    NSString *_webPageUrl;
    NSData *_thumData;
    NSString *_thumUrl;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *thumUrl; // @synthesize thumUrl=_thumUrl;
@property(retain, nonatomic) NSData *thumData; // @synthesize thumData=_thumData;
@property(copy, nonatomic) NSString *webPageUrl; // @synthesize webPageUrl=_webPageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
