//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailShopDsrItemModel, UILabel;

@interface AliDetailShopServiceItemView : AliDetailComponent
{
    int levelState;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_scoreLabel;	// 24 = 0x18
    UILabel *_levelLabel;	// 32 = 0x20
    AliDetailShopDsrItemModel *_itemModel;	// 40 = 0x28
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(nonatomic) __weak AliDetailShopDsrItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetLevelInfo;
- (void)resetScoreInfo;
- (void)resetTitle;
- (void)setObject:(id)arg1;
- (void)setupComponentSize:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

