//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDTextLinkAdModel, NSArray;

@interface MDAliAdModel : NSObject
{
    _Bool _isBeShown;
    long long _positionType;
    MDTextLinkAdModel *_textLinkModel;
    long long _displayType;
    NSArray *_textIconArray;
    NSObject *_feedsObject;
}

@property(copy, nonatomic) NSObject *feedsObject; // @synthesize feedsObject=_feedsObject;
@property(retain, nonatomic) NSArray *textIconArray; // @synthesize textIconArray=_textIconArray;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) MDTextLinkAdModel *textLinkModel; // @synthesize textLinkModel=_textLinkModel;
@property(nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(nonatomic) _Bool isBeShown; // @synthesize isBeShown=_isBeShown;
- (void)dealloc;

@end
