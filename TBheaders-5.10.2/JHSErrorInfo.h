//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL, UIImage;

@interface JHSErrorInfo : NSObject <NSCopying>
{
    UIImage *_image;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_summary;	// 24 = 0x18
    NSString *_actionButtonTitle;	// 32 = 0x20
    UIImage *_buttonImage;	// 40 = 0x28
    NSURL *_buttonImageUrl;	// 48 = 0x30
}

+ (id)defaultApiLockedErrorStatusInfo;
+ (id)defaultNetworkResponseErrorStatusInfo;
+ (id)defaultEmptyContentStatusInfo;
+ (id)modelStatusInfoWithImage:(id)arg1 title:(id)arg2 summary:(id)arg3 actionButtonTitle:(id)arg4 buttonImage:(id)arg5 actionButtonImageUrl:(id)arg6;
+ (id)modelStatusInfoWithImage:(id)arg1 title:(id)arg2 summary:(id)arg3 actionButtonTitle:(id)arg4 buttonImage:(id)arg5;
+ (id)modelStatusInfoWithImage:(id)arg1 title:(id)arg2 summary:(id)arg3 actionButtonImageUrl:(id)arg4;
+ (id)modelStatusInfoWithImage:(id)arg1 title:(id)arg2 summary:(id)arg3 actionButtonTitle:(id)arg4;
+ (id)modelStatusInfoWithSummary:(id)arg1 actionButtonTitle:(id)arg2;
+ (id)modelStatusInfoWithTitle:(id)arg1 summary:(id)arg2 actionButtonTitle:(id)arg3;
+ (id)modelStatusInfoWithTitle:(id)arg1 summary:(id)arg2;
@property(retain, nonatomic) NSURL *buttonImageUrl; // @synthesize buttonImageUrl=_buttonImageUrl;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

