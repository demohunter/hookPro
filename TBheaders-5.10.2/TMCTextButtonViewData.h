//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TMCTextButtonViewData : NSObject
{
    NSString *_text;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_tip;	// 24 = 0x18
    NSString *_icon;	// 32 = 0x20
    long long _type;	// 40 = 0x28
    unsigned long long _backgroundColor;	// 48 = 0x30
    long long _position;	// 56 = 0x38
    NSString *_rn;	// 64 = 0x40
    NSString *_combo;	// 72 = 0x48
    unsigned long long _fontColor;	// 80 = 0x50
}

@property(nonatomic) unsigned long long fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *combo; // @synthesize combo=_combo;
@property(copy, nonatomic) NSString *rn; // @synthesize rn=_rn;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
