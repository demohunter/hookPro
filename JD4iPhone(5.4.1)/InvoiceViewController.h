//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "InvoiceElectrDelegate.h"
#import "InvoiceNormalDelegate.h"
#import "InvoiceVatDelegate.h"
#import "JDAddressViewDataSource.h"
#import "JDAddressViewDelegate.h"
#import "JDBaseToastTextListViewDataSource.h"
#import "JDBaseToastViewDelegate.h"
#import "JDContentViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class COPlaceholderBlankView, InvoiceContactViewModel, InvoiceNetworkManager, JDAddressView, JDButton, JDContentView, JDShippingAddressModel, NOINotifyView, NSArray, NSMutableArray, NSString, NewInVoiceModel, OrderInfoModel, SaveInvoiceModel, UITableView;

@interface InvoiceViewController : JDViewController <InvoiceNormalDelegate, InvoiceElectrDelegate, InvoiceVatDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, JDContentViewDataSource, JDBaseToastTextListViewDataSource, JDBaseToastViewDelegate, JDAddressViewDataSource, JDAddressViewDelegate>
{
    struct CGRect _priorFrame;
    double _keyboardTop;
    struct CGRect _textFiletRect;
    struct CGRect _titleConvertRect;
    _Bool _isShowInvoiceTypeView;
    _Bool _isSolidCard;
    _Bool _isPresale;
    NOINotifyView *_notifyView;
    _Bool _notifyViewShowBool;
    _Bool _isTitleTextFieldEditing;
    _Bool _isKeyBoardEditing;
    COPlaceholderBlankView *_errorView;
    CDUnknownBlockType _useNewInvoiceBlock;
    OrderInfoModel *_orderInfoModel;
    InvoiceNetworkManager *_networkManager;
    JDContentView *_contentView;
    NSMutableArray *_subviews;
    JDButton *_sureBtn;
    UITableView *_popListView;
    NSArray *_invoiceNotice;
    NewInVoiceModel *_invoiceNewModel;
    OrderInfoModel *_lastOrderInfo;
    SaveInvoiceModel *_saveInvoiceModel;
    NSString *_productTypeParam;
    InvoiceContactViewModel *_addressViewModel;
    JDAddressView *_addressView;
    JDShippingAddressModel *_shippingAddressModel;
    NSString *_addressMobile;
}

@property(retain, nonatomic) NSString *addressMobile; // @synthesize addressMobile=_addressMobile;
@property(retain, nonatomic) JDShippingAddressModel *shippingAddressModel; // @synthesize shippingAddressModel=_shippingAddressModel;
@property(retain, nonatomic) JDAddressView *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) InvoiceContactViewModel *addressViewModel; // @synthesize addressViewModel=_addressViewModel;
@property(copy, nonatomic) NSString *productTypeParam; // @synthesize productTypeParam=_productTypeParam;
@property(retain, nonatomic) SaveInvoiceModel *saveInvoiceModel; // @synthesize saveInvoiceModel=_saveInvoiceModel;
@property(retain, nonatomic) OrderInfoModel *lastOrderInfo; // @synthesize lastOrderInfo=_lastOrderInfo;
@property(retain, nonatomic) NewInVoiceModel *invoiceNewModel; // @synthesize invoiceNewModel=_invoiceNewModel;
@property(retain, nonatomic) NSArray *invoiceNotice; // @synthesize invoiceNotice=_invoiceNotice;
@property(retain, nonatomic) UITableView *popListView; // @synthesize popListView=_popListView;
@property(retain, nonatomic) JDButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) NSMutableArray *subviews; // @synthesize subviews=_subviews;
@property(retain, nonatomic) JDContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) InvoiceNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) OrderInfoModel *orderInfoModel; // @synthesize orderInfoModel=_orderInfoModel;
@property(copy, nonatomic) CDUnknownBlockType useNewInvoiceBlock; // @synthesize useNewInvoiceBlock=_useNewInvoiceBlock;
- (void).cxx_destruct;
- (void)notifyViewWillDisapper:(long long)arg1 animated:(_Bool)arg2;
- (void)notifyViewWillApper:(long long)arg1 animated:(_Bool)arg2;
- (void)showNotifyMessage:(id)arg1 notifyType:(long long)arg2;
- (void)getRegionAddressWithTab:(long long)arg1 selectedRow:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dismissAddressViewAndUpdateAddressModel:(_Bool)arg1;
- (void)presentSemiAddressView:(CDUnknownBlockType)arg1;
- (void)setEnabledSwipeToParent:(_Bool)arg1;
- (void)addressView:(id)arg1 didClickRightButton:(id)arg2;
- (void)addressView:(id)arg1 didSelectRow:(long long)arg2 inTab:(long long)arg3;
- (id)addressView:(id)arg1 titleForRow:(long long)arg2 inTab:(long long)arg3;
- (long long)addressView:(id)arg1 numberOfRowsInTab:(long long)arg2;
- (void)normalReceiveInfoViewTextViewBeginEdit:(id)arg1;
- (void)normalReceiveInfoViewTextFieldBeginEdit:(id)arg1;
- (void)normalReceiveInfoViewUpdateTextViewHeight:(id)arg1;
- (void)normalReceiveInfoViewButtonTaped:(id)arg1;
- (void)normalInvoiceMakeWayWithModel:(id)arg1;
- (void)resetNormalHeight;
- (void)normalTitleTextFieldBeginEdit:(id)arg1;
- (void)normalDistributeTextViewBeginEdit:(id)arg1;
- (void)normalDistributeTextFieldBeginEdit:(id)arg1;
- (void)distributeUpdateTextViewHeight:(id)arg1;
- (void)distributeAreaButtonTaped:(id)arg1;
- (void)resetNormalHeightWithDistributeViewHeightChange;
- (void)invoiceElectrPersonInfoTextFieldBeginEdit;
- (void)normalInvoiceCheckViewSolidCardBottomBtnTaped:(id)arg1;
- (void)normalInvoiceSolidCardCheckViewSelected:(id)arg1;
- (void)electTitleTextFieldBeginEdit:(id)arg1;
- (void)resetInvoiceElectHeight;
- (void)checkViewSelected;
- (void)vatInvoiceMakeWayWithModel:(id)arg1;
- (void)vatTextFieldBeginEdit:(id)arg1;
- (void)vatTextViewBeginEdit:(id)arg1;
- (void)vatViewBtnTaped:(id)arg1;
- (void)upDateVatReceiveInfoTextViewHeight:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)heigtForSeparatorViewOfSection:(long long)arg1;
- (id)separatorViewOfSection:(long long)arg1;
- (long long)numberOfSectionsInConentView:(id)arg1;
- (id)contentView:(id)arg1 sectionAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didClickBackgroundInToastView:(id)arg1;
- (id)toastView:(id)arg1 DetailForSection:(long long)arg2;
- (id)toastView:(id)arg1 titleForSection:(long long)arg2;
- (long long)numberOfSectionsInToastView:(id)arg1;
- (void)handleBlankViewEvent:(id)arg1;
- (void)selectInvoiceType:(id)arg1;
- (id)invoiceTitleView;
- (id)normalReceivePersonInfoView;
- (id)normalDistributeView;
- (id)vatReceivePersonInfoView;
- (id)getVatView;
- (id)getElectroView;
- (id)getNormalView;
- (id)getInvoiceTypeView;
- (void)gestureEvent;
- (void)showTitleListView;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)getLastOrderInfo;
- (id)swipeGestureWithAction:(SEL)arg1;
- (void)addHideKeyboardGesture;
- (void)addErrorView;
- (void)addRightBarButtonItem;
- (void)addTypeView;
- (void)showInvoiceUseRuleToast;
- (void)popupRuleInvoice;
- (void)showAddressViewWithButton:(id)arg1;
- (void)initializeViewModelWithAddressModel:(id)arg1 ContentItem:(id)arg2;
- (void)changViews;
- (_Bool)hideOrShowInvoiceTypeView;
- (void)dismissPopListView;
- (void)createPopListView;
- (id)getVatInvoice;
- (id)getNInvoice;
- (id)getEInvoice;
- (_Bool)checkVatReceivePersonInfoViewIsOk;
- (_Bool)checkElectInvoiceIsOk;
- (_Bool)checkInvoiceTitleIsOk:(id)arg1 andInvoiceType:(int)arg2;
- (_Bool)checkNormalInvoiceIsOk;
- (id)saveInvoiceModelWithOrderInfoModel:(id)arg1;
- (void)sureAction:(id)arg1;
- (void)getInvoiceData;
- (void)refreshTypeView;
- (void)backButtonClicked;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
