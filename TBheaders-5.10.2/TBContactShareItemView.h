//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBContactData, UIButton, UILabel;

@interface TBContactShareItemView : UIView
{
    TBContactData *_contactData;	// 8 = 0x8
    CDUnknownBlockType _tapBlock;	// 16 = 0x10
    CDUnknownBlockType _specialTapBlock;	// 24 = 0x18
    UIButton *_contactImageButton;	// 32 = 0x20
    UILabel *_contactNameLabel;	// 40 = 0x28
    UILabel *_contactPhoneLabel;	// 48 = 0x30
}

+ (id)contactShareItemViewWithImageName:(id)arg1 iconFontName:(id)arg2 itemName:(id)arg3 tapBlock:(CDUnknownBlockType)arg4;
+ (id)contactShareItemViewWithContactData:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) UILabel *contactPhoneLabel; // @synthesize contactPhoneLabel=_contactPhoneLabel;
@property(retain, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) UIButton *contactImageButton; // @synthesize contactImageButton=_contactImageButton;
@property(copy, nonatomic) CDUnknownBlockType specialTapBlock; // @synthesize specialTapBlock=_specialTapBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) TBContactData *contactData; // @synthesize contactData=_contactData;
- (void).cxx_destruct;
- (void)contactImageButtonTap:(id)arg1;
- (id)initWithImageName:(id)arg1 iconFontName:(id)arg2 itemName:(id)arg3 tapBlock:(CDUnknownBlockType)arg4;
- (id)initWithContactData:(id)arg1 tapBlock:(CDUnknownBlockType)arg2;

@end
