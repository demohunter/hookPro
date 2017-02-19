//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMSearchResultContainerViewController.h"

#import "ItemListViewControllerDelegate-Protocol.h"
#import "ItemSearchSiftViewControllerDelegate-Protocol.h"
#import "SearchToolViewControllerDelegate-Protocol.h"
#import "TMSearchResultContainerToolButtonsDelegate-Protocol.h"
#import "TMSearchSlideViewControllerDelegate-Protocol.h"

@class ItemListViewController, ItemSearchSiftViewController, NSString, NSURL, SearchResultViewModel, SearchToolViewController, ShopListViewController, UserTrackRecordV2;

@interface SearchResultListController : TMSearchResultContainerViewController <TMSearchSlideViewControllerDelegate, TMSearchResultContainerToolButtonsDelegate, SearchToolViewControllerDelegate, ItemListViewControllerDelegate, ItemSearchSiftViewControllerDelegate>
{
    _Bool _onceFor1111Hongbao;	// 16 = 0x10
    _Bool _switchToH5;	// 17 = 0x11
    NSString *_userId;	// 24 = 0x18
    NSString *_keyword;	// 32 = 0x20
    NSString *_categoryId;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSString *_prop;	// 56 = 0x38
    NSString *_orderBy;	// 64 = 0x40
    NSString *_brandId;	// 72 = 0x48
    NSString *_auctionTag;	// 80 = 0x50
    NSString *_activityTag;	// 88 = 0x58
    NSString *_customSizeId;	// 96 = 0x60
    NSString *_spos;	// 104 = 0x68
    long long _postFee;	// 112 = 0x70
    long long _miaoSha;	// 120 = 0x78
    long long _startPrice;	// 128 = 0x80
    long long _endPrice;	// 136 = 0x88
    long long _manyPoints;	// 144 = 0x90
    long long _combo;	// 152 = 0x98
    long long _wwOnline;	// 160 = 0xa0
    long long _shopType;	// 168 = 0xa8
    NSString *_extendKey;	// 176 = 0xb0
    NSString *_extendValue;	// 184 = 0xb8
    NSString *_guideTags;	// 192 = 0xc0
    NSString *_noRegulation;	// 200 = 0xc8
    NSString *_inputHint;	// 208 = 0xd0
    NSString *_source;	// 216 = 0xd8
    NSString *_searchMode;	// 224 = 0xe0
    NSString *_searchType;	// 232 = 0xe8
    SearchToolViewController *_searchToolViewController;	// 240 = 0xf0
    ItemSearchSiftViewController *_searchSiftViewController;	// 248 = 0xf8
    ItemListViewController *_itemListVC;	// 256 = 0x100
    ShopListViewController *_shopListVC;	// 264 = 0x108
    SearchResultViewModel *_searchResultVM;	// 272 = 0x110
    UserTrackRecordV2 *_originUserTrack;	// 280 = 0x118
    NSURL *_originalURL;	// 288 = 0x120
}

@property(nonatomic) _Bool switchToH5; // @synthesize switchToH5=_switchToH5;
@property(retain, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(nonatomic) _Bool onceFor1111Hongbao; // @synthesize onceFor1111Hongbao=_onceFor1111Hongbao;
@property(retain, nonatomic) UserTrackRecordV2 *originUserTrack; // @synthesize originUserTrack=_originUserTrack;
@property(retain, nonatomic) SearchResultViewModel *searchResultVM; // @synthesize searchResultVM=_searchResultVM;
@property(retain, nonatomic) ShopListViewController *shopListVC; // @synthesize shopListVC=_shopListVC;
@property(retain, nonatomic) ItemListViewController *itemListVC; // @synthesize itemListVC=_itemListVC;
@property(retain, nonatomic) ItemSearchSiftViewController *searchSiftViewController; // @synthesize searchSiftViewController=_searchSiftViewController;
@property(retain, nonatomic) SearchToolViewController *searchToolViewController; // @synthesize searchToolViewController=_searchToolViewController;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(copy, nonatomic) NSString *searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *inputHint; // @synthesize inputHint=_inputHint;
@property(copy, nonatomic) NSString *noRegulation; // @synthesize noRegulation=_noRegulation;
@property(copy, nonatomic) NSString *guideTags; // @synthesize guideTags=_guideTags;
@property(copy, nonatomic) NSString *extendValue; // @synthesize extendValue=_extendValue;
@property(copy, nonatomic) NSString *extendKey; // @synthesize extendKey=_extendKey;
@property(nonatomic) long long shopType; // @synthesize shopType=_shopType;
@property(nonatomic) long long wwOnline; // @synthesize wwOnline=_wwOnline;
@property(nonatomic) long long combo; // @synthesize combo=_combo;
@property(nonatomic) long long manyPoints; // @synthesize manyPoints=_manyPoints;
@property(nonatomic) long long endPrice; // @synthesize endPrice=_endPrice;
@property(nonatomic) long long startPrice; // @synthesize startPrice=_startPrice;
@property(nonatomic) long long miaoSha; // @synthesize miaoSha=_miaoSha;
@property(nonatomic) long long postFee; // @synthesize postFee=_postFee;
@property(copy, nonatomic) NSString *spos; // @synthesize spos=_spos;
@property(copy, nonatomic) NSString *customSizeId; // @synthesize customSizeId=_customSizeId;
@property(copy, nonatomic) NSString *activityTag; // @synthesize activityTag=_activityTag;
@property(copy, nonatomic) NSString *auctionTag; // @synthesize auctionTag=_auctionTag;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
@property(copy, nonatomic) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(copy, nonatomic) NSString *prop; // @synthesize prop=_prop;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)onQueryInputTextChangedNotification:(id)arg1;
- (void)resizeSlideNavigationController;
- (void)itemListViewControllerDidSelectRecommedation:(id)arg1 capturedImageView:(id)arg2;
- (void)scrollToTopToolButtonDidPressed;
- (void)footprintsToolButtonDidPressed;
- (void)slideViewControllerDidDisapear:(id)arg1;
- (void)slideViewControllerDidApear:(id)arg1;
- (void)itemSearchSiftViewControllerActionDidFinished;
- (_Bool)searchSegmentViewIsMenuViewShowed:(id)arg1;
- (void)searchSegmentViewDidDismissMenuView:(id)arg1;
- (void)searchSegmentView:(id)arg1 didShowMenuView:(id)arg2;
- (void)toolViewControllerDidSelectRecommedation:(id)arg1 capturedImageView:(id)arg2;
- (void)toolViewControllerFrameChangedNewToolViewHeight:(double)arg1;
- (void)toolViewControllerPushInputViewControllerWithKeyWord:(id)arg1 selectedKeyword:(id)arg2 selectedRange:(struct _NSRange)arg3;
- (void)toolViewControllerNeedPushViewControllerWithKeyWord:(id)arg1;
- (void)toolViewControllerNeedPushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)toolViewControllerSiftBtnDidPressed;
- (void)toolViewControllerBackBtnDidPressed;
- (void)onVMSearchModeChanged:(id)arg1;
- (void)onViewModelWillBeginRequest:(id)arg1;
- (void)onViewModelResultsUpdatedSuccess:(id)arg1;
- (void)loadFirstPage;
- (void)loadShopsSearchVC;
- (void)loadItemsSearchVC;
- (void)loadSiftViewController;
- (void)loadToolViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)removeSearchInputViewController;
- (void)process1111HongbaoBusinessLogicWithKeyword:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)registerNotifications;
- (void)configInitial;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
