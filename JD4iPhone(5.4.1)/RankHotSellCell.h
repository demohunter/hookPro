//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSString, UIImageView, UITableView, UIView;

@interface RankHotSellCell : UITableViewCell <UITableViewDataSource, UITableViewDelegate>
{
    _Bool m_scrollIn;
    int m_type;
    UIView *m_contentView;
    UIImageView *m_logoImg;
    UITableView *m_scrollView;
    UIView *m_tipContainerView;
    NSDictionary *m_rankInfoDic;
    UIImageView *m_daogouView;
    NSDictionary *m_cityDic;
    long long m_index;
    NSString *m_bigEnter;
    NSString *m_smallEnter;
    NSString *m_testType;
    id delegate;
    id <RankHotSellCellDelegate> _homeVC;
}

@property(nonatomic) id <RankHotSellCellDelegate> homeVC; // @synthesize homeVC=_homeVC;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) NSString *m_testType; // @synthesize m_testType;
@property(retain, nonatomic) NSString *m_smallEnter; // @synthesize m_smallEnter;
@property(retain, nonatomic) NSString *m_bigEnter; // @synthesize m_bigEnter;
@property(nonatomic) long long m_index; // @synthesize m_index;
@property(retain, nonatomic) NSDictionary *m_cityDic; // @synthesize m_cityDic;
@property(retain, nonatomic) UIImageView *m_daogouView; // @synthesize m_daogouView;
@property(retain, nonatomic) NSDictionary *m_rankInfoDic; // @synthesize m_rankInfoDic;
@property(retain, nonatomic) UIView *m_tipContainerView; // @synthesize m_tipContainerView;
@property(nonatomic) int m_type; // @synthesize m_type;
@property(retain, nonatomic) UITableView *m_scrollView; // @synthesize m_scrollView;
@property(retain, nonatomic) UIImageView *m_logoImg; // @synthesize m_logoImg;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)setContent:(id)arg1;
- (void)jump2CateId:(id)arg1;
- (void)jump2HotSearch:(id)arg1;
- (void)jump2DetailPage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

