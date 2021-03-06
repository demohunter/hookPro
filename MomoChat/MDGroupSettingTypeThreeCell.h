//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDMutiTableViewCell.h"

@class MDGroupSettingCellModel, MDSwitch, UILabel, UIView;

@interface MDGroupSettingTypeThreeCell : MDMutiTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    MDSwitch *_switchView;
    UIView *_paySwitchCoverView;
    UIView *_bottomLineView;
    MDGroupSettingCellModel *_cellModel;
}

+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) MDGroupSettingCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *paySwitchCoverView; // @synthesize paySwitchCoverView=_paySwitchCoverView;
@property(retain, nonatomic) MDSwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)alertForInvalidPayGroup;
- (void)switchValueChanged:(id)arg1;
- (void)bindModel:(id)arg1;
- (void)configUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

