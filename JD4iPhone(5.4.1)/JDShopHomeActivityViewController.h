//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopCommonErrorViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDFooterLoadingView, JDShopCommonErrorView, JDStoreNetwork, NSMutableArray, NSString, UITableView;

@interface JDShopHomeActivityViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, JDShopCommonErrorViewDelegate>
{
    UITableView *_tableView;
    long long currentPage;
    long long totalCount;
    JDFooterLoadingView *_footerView;
    JDStoreNetwork *_net;
    _Bool isGetMore;
    _Bool _bHaveBottomToolView;
    NSString *_shopId;
    NSString *_vendorId;
    CDUnknownBlockType _scrollBlock;
    NSMutableArray *_dataArr;
    JDShopCommonErrorView *_errorView;
}

@property(retain, nonatomic) JDShopCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) _Bool bHaveBottomToolView; // @synthesize bHaveBottomToolView=_bHaveBottomToolView;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void)getJshopActivityPage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)attachFooterViewForScrolling;
- (void)removeErrorView;
- (void)showErrorView:(long long)arg1;
- (void)resetSubViewFrame:(struct CGRect)arg1;
- (void)backTopButtonPressed:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)reloadDataAfterError;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
