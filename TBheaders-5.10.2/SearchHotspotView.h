//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "Knapsack01Deletage-Protocol.h"

@class NSMutableArray, NSString, UIColor, UIFont, UIImage;
@protocol HotspotsLayout, SearchHotspotViewDelegate;

@interface SearchHotspotView : UIView <Knapsack01Deletage>
{
    NSMutableArray *_hotspotButtons;	// 8 = 0x8
    NSMutableArray *_hotspots;	// 16 = 0x10
    NSMutableArray *_editingButtons;	// 24 = 0x18
    UIFont *_titleFont;	// 32 = 0x20
    id <HotspotsLayout> _layout;	// 40 = 0x28
    id <SearchHotspotViewDelegate> _delegate;	// 48 = 0x30
    UIColor *_titleColor;	// 56 = 0x38
    UIColor *_selectedTitleColor;	// 64 = 0x40
    UIColor *_hotspotButtonColor;	// 72 = 0x48
    UIColor *_hotspotButtonSelectedColor;	// 80 = 0x50
    UIColor *_hotspotButtonBorderColor;	// 88 = 0x58
    UIColor *_hotspotButtonSelectedBorderColor;	// 96 = 0x60
    double _hotspotButtonBorderWidth;	// 104 = 0x68
    UIColor *_editingBgColor;	// 112 = 0x70
    double _hotspotCornerRadius;	// 120 = 0x78
    double _hotspotButtonHeight;	// 128 = 0x80
    double _hotspotButtonWidth;	// 136 = 0x88
    double _hotspotFontSize;	// 144 = 0x90
    double _hotspotButtonPadding;	// 152 = 0x98
    double _hotspotButtonSpacing;	// 160 = 0xa0
    double _hotspotVerticalPadding;	// 168 = 0xa8
    double _hotspotButtonWidthDelta;	// 176 = 0xb0
    long long _maxLines;	// 184 = 0xb8
    long long _style;	// 192 = 0xc0
    long long _selectedStyle;	// 200 = 0xc8
    UIImage *_selectedImage;	// 208 = 0xd0
    long long _imageViewTag;	// 216 = 0xd8
    struct CGRect _imageViewFrame;	// 224 = 0xe0
}

@property(nonatomic) long long imageViewTag; // @synthesize imageViewTag=_imageViewTag;
@property(nonatomic) struct CGRect imageViewFrame; // @synthesize imageViewFrame=_imageViewFrame;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) long long selectedStyle; // @synthesize selectedStyle=_selectedStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) double hotspotButtonWidthDelta; // @synthesize hotspotButtonWidthDelta=_hotspotButtonWidthDelta;
@property(nonatomic) double hotspotVerticalPadding; // @synthesize hotspotVerticalPadding=_hotspotVerticalPadding;
@property(nonatomic) double hotspotButtonSpacing; // @synthesize hotspotButtonSpacing=_hotspotButtonSpacing;
@property(nonatomic) double hotspotButtonPadding; // @synthesize hotspotButtonPadding=_hotspotButtonPadding;
@property(nonatomic) double hotspotFontSize; // @synthesize hotspotFontSize=_hotspotFontSize;
@property(nonatomic) double hotspotButtonWidth; // @synthesize hotspotButtonWidth=_hotspotButtonWidth;
@property(nonatomic) double hotspotButtonHeight; // @synthesize hotspotButtonHeight=_hotspotButtonHeight;
@property(nonatomic) double hotspotCornerRadius; // @synthesize hotspotCornerRadius=_hotspotCornerRadius;
@property(retain, nonatomic) UIColor *editingBgColor; // @synthesize editingBgColor=_editingBgColor;
@property(nonatomic) double hotspotButtonBorderWidth; // @synthesize hotspotButtonBorderWidth=_hotspotButtonBorderWidth;
@property(retain, nonatomic) UIColor *hotspotButtonSelectedBorderColor; // @synthesize hotspotButtonSelectedBorderColor=_hotspotButtonSelectedBorderColor;
@property(retain, nonatomic) UIColor *hotspotButtonBorderColor; // @synthesize hotspotButtonBorderColor=_hotspotButtonBorderColor;
@property(retain, nonatomic) UIColor *hotspotButtonSelectedColor; // @synthesize hotspotButtonSelectedColor=_hotspotButtonSelectedColor;
@property(retain, nonatomic) UIColor *hotspotButtonColor; // @synthesize hotspotButtonColor=_hotspotButtonColor;
@property(retain, nonatomic) UIColor *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) __weak id <SearchHotspotViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)knapsack:(id)arg1 evaluateValueForObj:(id)arg2;
- (double)knapsack:(id)arg1 evaluateCostForObj:(id)arg2;
- (id)getHotspotBtn;
- (id)getHotspotData;
- (void)onClickHotspot:(id)arg1;
- (void)dealSelectedChangeBackGround:(long long)arg1;
- (void)layoutBtnWithData:(id)arg1 capacity:(double)arg2 size:(double)arg3;
- (void)layoutHotspots:(id)arg1;
- (void)resetAllSelectedFlag;
- (void)setHotspotFromArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
