//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBShopCartBasicCell.h"

@class TBBlockButton, UIImageView, UILabel;

@interface TBShopCartPromotionCell : TBShopCartBasicCell
{
    UILabel *_promotionLabel;	// 8 = 0x8
    TBBlockButton *_coudanButton;	// 16 = 0x10
    UILabel *_coudanLabel;	// 24 = 0x18
    UIImageView *_arrowView;	// 32 = 0x20
    UIImageView *_coudanImgView;	// 40 = 0x28
}

+ (double)cellCalHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *coudanImgView; // @synthesize coudanImgView=_coudanImgView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *coudanLabel; // @synthesize coudanLabel=_coudanLabel;
@property(retain, nonatomic) TBBlockButton *coudanButton; // @synthesize coudanButton=_coudanButton;
@property(retain, nonatomic) UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
- (void).cxx_destruct;
- (void)registerAction;
- (void)exposeTrack:(id)arg1;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

