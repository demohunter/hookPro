//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SHAVPlayerProgressView, SHAVPlayerSlider, UIButton, UILabel;

@interface SHAVPlayerToolBar : UIView
{
    _Bool _fullScreen;
    UIButton *_playerButton;
    UIButton *_fullScreenButton;
    SHAVPlayerSlider *_slider;
    UILabel *_playedTimeLabel;
    UILabel *_totalTimeLabel;
    SHAVPlayerProgressView *_progressView;
}

@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) SHAVPlayerProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UILabel *playedTimeLabel; // @synthesize playedTimeLabel=_playedTimeLabel;
@property(retain, nonatomic) SHAVPlayerSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) UIButton *playerButton; // @synthesize playerButton=_playerButton;
- (void).cxx_destruct;
- (void)setReadytoPlay;
- (void)setPlaying;
- (void)setUnPlay;
- (void)resetToZero;
- (id)initWithFrame:(struct CGRect)arg1;

@end

