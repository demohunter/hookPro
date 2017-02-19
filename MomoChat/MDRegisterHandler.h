//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDRegisterBaseViewControllerDelegate.h"

@class MDRegisterUserModel, NSString;

@interface MDRegisterHandler : NSObject <MDRegisterBaseViewControllerDelegate>
{
    id <MDRegisterHandlerDelegate> _delegate;
    MDRegisterUserModel *_registerUser;
}

@property(readonly, retain, nonatomic) MDRegisterUserModel *registerUser; // @synthesize registerUser=_registerUser;
@property(nonatomic) id <MDRegisterHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)login;
- (void)back;
- (void)next;
- (void)pictureVercodeSuccess;
- (id)viewController;
- (void)dealloc;
- (id)initWithRegisterUser:(id)arg1 andDelegate:(id)arg2 title:(id)arg3;
- (id)initWithRegisterUser:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
