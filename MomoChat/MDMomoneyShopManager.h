//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InAppPurchaseManagerDelegate.h"

@class MDPaymentTransaction, NSMutableArray, NSString;

@interface MDMomoneyShopManager : NSObject <InAppPurchaseManagerDelegate>
{
    NSMutableArray *products;
    _Bool isLoading;
    MDPaymentTransaction *paymentTransaction;
    NSString *payProductid;
    id <MDShopDelegate> delegate;
    int circleTimes;
    unsigned long long hasProductFlag;
}

@property(retain, nonatomic) MDPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction;
@property(nonatomic) id <MDShopDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)reTryCheck;
- (void)verifyFail:(id)arg1;
- (void)verifyError:(id)arg1;
- (void)verifyOK:(id)arg1;
- (void)verify:(id)arg1;
- (void)circleVerify:(id)arg1;
- (void)payFail:(id)arg1;
- (void)payError:(id)arg1;
- (void)payOk:(id)arg1;
- (void)checkTransaction:(id)arg1;
- (void)loadAllItunesProductFail:(id)arg1;
- (void)loadAllItunesProductSuccess;
- (void)payToAppleFail:(id)arg1;
- (void)payToAppleSucceed:(id)arg1;
- (void)prepareFail:(id)arg1;
- (void)prepareError:(id)arg1;
- (void)prepareOk:(id)arg1;
- (void)prepare:(id)arg1;
- (void)payProducts:(id)arg1;
- (void)productListFail:(id)arg1;
- (void)productListError:(id)arg1;
- (void)productListOk:(id)arg1;
- (void)loadProducts;
- (id)init;

@end
