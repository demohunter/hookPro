//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImageView, UILabel;

@interface TBCouponwalletGListCellSubView : UIControl
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_titlelabel;	// 16 = 0x10
    UILabel *_contextlabel;	// 24 = 0x18
    UILabel *_badgeView;	// 32 = 0x20
    UILabel *_richLabel;	// 40 = 0x28
    NSString *_url;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UILabel *richLabel; // @synthesize richLabel=_richLabel;
@property(retain, nonatomic) UILabel *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *contextlabel; // @synthesize contextlabel=_contextlabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configCell:(id)arg1;
- (void)contextRichLabelWithStr:(id)arg1;
- (_Bool)isRichText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
