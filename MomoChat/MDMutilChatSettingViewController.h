//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "DiscussHelperProfileDelegate.h"
#import "MDMutiTableHelperDelegate.h"
#import "MDPhotoWallControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class MBProgressHUD, MDChatBaseHander, MDChatSettingPhotoWallHandler, MDDiscussProfileHelper, MDMutiTableHelper, MDMutilChatAPIHelper, MDMutilChatSettingModel, NSString, UIButton, UITableView;

@interface MDMutilChatSettingViewController : MDViewController <DiscussHelperProfileDelegate, MDMutiTableHelperDelegate, MDPhotoWallControllerDelegate, UIAlertViewDelegate>
{
    _Bool _isFromMutilChat;
    NSString *_discussId;
    MDChatBaseHander *_chatBaseHandler;
    MDMutilChatSettingModel *_switchModel;
    MDDiscussProfileHelper *_profileHelper;
    MDMutilChatAPIHelper *_apiHelper;
    UIButton *_chatButton;
    UITableView *_tableView;
    MDMutiTableHelper *_tableHelper;
    MBProgressHUD *_hud;
    MDChatSettingPhotoWallHandler *_photoHandler;
}

@property(retain, nonatomic) MDChatSettingPhotoWallHandler *photoHandler; // @synthesize photoHandler=_photoHandler;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) MDMutiTableHelper *tableHelper; // @synthesize tableHelper=_tableHelper;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *chatButton; // @synthesize chatButton=_chatButton;
@property(retain, nonatomic) MDMutilChatAPIHelper *apiHelper; // @synthesize apiHelper=_apiHelper;
@property(retain, nonatomic) MDDiscussProfileHelper *profileHelper; // @synthesize profileHelper=_profileHelper;
@property(retain, nonatomic) MDMutilChatSettingModel *switchModel; // @synthesize switchModel=_switchModel;
@property(nonatomic) _Bool isFromMutilChat; // @synthesize isFromMutilChat=_isFromMutilChat;
@property(retain, nonatomic) MDChatBaseHander *chatBaseHandler; // @synthesize chatBaseHandler=_chatBaseHandler;
@property(copy, nonatomic) NSString *discussId; // @synthesize discussId=_discussId;
- (void).cxx_destruct;
- (id)dataSource;
- (void)removeHud;
- (void)showHud;
- (void)addNavigationBar;
- (void)refreshData;
- (void)refreshNavbarTitle;
- (void)backToTheVCBeforeDiscussProfileVC;
- (void)backToEarlierController;
- (void)didDismissOrQuitDiscussion:(_Bool)arg1 andResponse:(id)arg2;
- (void)handleQuitMutilChat;
- (void)chatButtonClicked:(id)arg1;
- (void)setChatViewTopClick;
- (void)back;
- (void)discussHelper:(id)arg1 fetchProfile:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)didSelectCellWithModel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)photoWallController:(id)arg1 willRelayImageWithMsgID:(id)arg2;
- (void)photoWallController:(id)arg1 didClickAnchorMsgID:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDiscussid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

