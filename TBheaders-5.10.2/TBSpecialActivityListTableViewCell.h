//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MZTimerLabelDelegate-Protocol.h"

@class MZTimerLabel, NSString, TBSpecialActivityItem, UIButton, UIImageView, UILabel, UIView;

@interface TBSpecialActivityListTableViewCell : UITableViewCell <MZTimerLabelDelegate>
{
    UIView *_activityContentView;	// 8 = 0x8
    UIButton *_ActivityButton;	// 16 = 0x10
    UIImageView *_ActivityImageView;	// 24 = 0x18
    UILabel *_ActivityNameLabel;	// 32 = 0x20
    UILabel *_ActivityTimerLabel;	// 40 = 0x28
    MZTimerLabel *_timer;	// 48 = 0x30
    UILabel *_timeFill;	// 56 = 0x38
    CDUnknownBlockType _clickActionBlock;	// 64 = 0x40
    TBSpecialActivityItem *_activityItem;	// 72 = 0x48
    NSString *_imagePath;	// 80 = 0x50
}

+ (float)height;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) TBSpecialActivityItem *activityItem; // @synthesize activityItem=_activityItem;
@property(copy, nonatomic) CDUnknownBlockType clickActionBlock; // @synthesize clickActionBlock=_clickActionBlock;
@property(retain, nonatomic) UILabel *timeFill; // @synthesize timeFill=_timeFill;
@property(retain, nonatomic) MZTimerLabel *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *ActivityTimerLabel; // @synthesize ActivityTimerLabel=_ActivityTimerLabel;
@property(retain, nonatomic) UILabel *ActivityNameLabel; // @synthesize ActivityNameLabel=_ActivityNameLabel;
@property(retain, nonatomic) UIImageView *ActivityImageView; // @synthesize ActivityImageView=_ActivityImageView;
@property(retain, nonatomic) UIButton *ActivityButton; // @synthesize ActivityButton=_ActivityButton;
@property(retain, nonatomic) UIView *activityContentView; // @synthesize activityContentView=_activityContentView;
- (void).cxx_destruct;
- (id)timerLabel:(id)arg1 customTextToDisplayAtTime:(double)arg2;
- (void)startCountDown;
- (void)imageViewWithPath:(id)arg1;
- (void)configCellWithActivityItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)clickActivityAction:(id)arg1;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
