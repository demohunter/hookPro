//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBOActionContainer, UIImageView, UILabel;

@interface TBOActionItemView : UIView
{
    TBOActionContainer *_owner;	// 8 = 0x8
    id _model;	// 16 = 0x10
    UIImageView *_iconImage;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_desLabel;	// 40 = 0x28
}

+ (id)cancelActionItem;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(nonatomic) __weak TBOActionContainer *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

