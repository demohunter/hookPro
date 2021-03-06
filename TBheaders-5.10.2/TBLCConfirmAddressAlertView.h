//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, UITextView;

@interface TBLCConfirmAddressAlertView : UIView
{
    _Bool _keyboardShow;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UIView *_mainView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UITextView *_textView;	// 40 = 0x28
    UIView *_separator1;	// 48 = 0x30
    UIView *_separator2;	// 56 = 0x38
    UIButton *_cancelButton;	// 64 = 0x40
    UIButton *_confirmButton;	// 72 = 0x48
    UIButton *_clearTextButton;	// 80 = 0x50
    CDUnknownBlockType _cancelAction;	// 88 = 0x58
    CDUnknownBlockType _confirmAction;	// 96 = 0x60
}

+ (id)showInView:(id)arg1 withTitle:(id)arg2 textViewText:(id)arg3 cancelAction:(CDUnknownBlockType)arg4 confirmAction:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType confirmAction; // @synthesize confirmAction=_confirmAction;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
@property(retain, nonatomic) UIButton *clearTextButton; // @synthesize clearTextButton=_clearTextButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *separator2; // @synthesize separator2=_separator2;
@property(retain, nonatomic) UIView *separator1; // @synthesize separator1=_separator1;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)dismissKeyBoard:(id)arg1;
- (void)keyBoardWillHide:(id)arg1;
- (void)keyBoardWillShow:(id)arg1;
- (void)clearTextAction:(id)arg1;
- (void)confirmButtonAction:(id)arg1;
- (void)cancelButtonAction:(id)arg1;
- (id)getText;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

