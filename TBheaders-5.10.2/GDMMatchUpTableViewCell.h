//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GDMFeedFooterView, GDMFeedHeaderView, GDMFeedTagsView, GDMMatchItemModel, GDMRecommendHeaderView, GDMTagImageView, GMHomePageFeedHeaderView, UILabel;

@interface GDMMatchUpTableViewCell : UITableViewCell
{
    int _type;	// 8 = 0x8
    GDMMatchItemModel *_viewModel;	// 16 = 0x10
    GMHomePageFeedHeaderView *_homepageFeedHeaderView;	// 24 = 0x18
    GDMFeedHeaderView *_darenBarView;	// 32 = 0x20
    GDMRecommendHeaderView *_recommendHeaderView;	// 40 = 0x28
    UILabel *_feedInfoLabel;	// 48 = 0x30
    GDMFeedTagsView *_tagsView;	// 56 = 0x38
    GDMTagImageView *_matchUpImageView;	// 64 = 0x40
    GDMFeedFooterView *_feedFooterView;	// 72 = 0x48
}

+ (double)cellHeightForViewModel:(id)arg1;
@property(retain, nonatomic) GDMFeedFooterView *feedFooterView; // @synthesize feedFooterView=_feedFooterView;
@property(retain, nonatomic) GDMTagImageView *matchUpImageView; // @synthesize matchUpImageView=_matchUpImageView;
@property(retain, nonatomic) GDMFeedTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *feedInfoLabel; // @synthesize feedInfoLabel=_feedInfoLabel;
@property(retain, nonatomic) GDMRecommendHeaderView *recommendHeaderView; // @synthesize recommendHeaderView=_recommendHeaderView;
@property(retain, nonatomic) GDMFeedHeaderView *darenBarView; // @synthesize darenBarView=_darenBarView;
@property(retain, nonatomic) GMHomePageFeedHeaderView *homepageFeedHeaderView; // @synthesize homepageFeedHeaderView=_homepageFeedHeaderView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) GDMMatchItemModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellType:(int)arg3;

@end

