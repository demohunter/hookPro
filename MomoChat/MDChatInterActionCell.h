//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDChatBaseCell.h"

@class NSMutableArray;

@interface MDChatInterActionCell : MDChatBaseCell
{
    NSMutableArray *_actionButtons;
}

@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
- (void).cxx_destruct;
- (void)actionButtonClicked:(id)arg1;
- (void)updateSeparateLine:(_Bool)arg1 superView:(id)arg2;
- (void)configActionButtons:(id)arg1;
- (void)updateInterActions:(id)arg1;
- (void)updateContentText:(id)arg1;
- (void)updateContentImage:(id)arg1;
- (void)updateBubbleImage:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)bindModel:(id)arg1;
- (Class)chatLayoutClass;
- (void)resetToDefault;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

