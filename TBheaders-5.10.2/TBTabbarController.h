//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBTabbarDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBTabbar, UIImageView, UIView, UIViewController;
@protocol TBTabbarControllerDelegate;

@interface TBTabbarController : TBViewController <TBTabbarDelegate>
{
    UIViewController *_selectedViewController;	// 16 = 0x10
    TBTabbar *_tbTabbar;	// 24 = 0x18
    UIView *_transitionView;	// 32 = 0x20
    NSArray *_viewControllers;	// 40 = 0x28
    unsigned long long _selectedIndex;	// 48 = 0x30
    unsigned long long _preSelectedIndex;	// 56 = 0x38
    id <TBTabbarControllerDelegate> _delegate;	// 64 = 0x40
    NSMutableArray *_tbTabBarItems;	// 72 = 0x48
    UIImageView *_shadowImageView;	// 80 = 0x50
    NSString *_className;	// 88 = 0x58
}

+ (_Bool)tbNeedToolbar;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) NSMutableArray *tbTabBarItems; // @synthesize tbTabBarItems=_tbTabBarItems;
@property(nonatomic) id <TBTabbarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long preSelectedIndex; // @synthesize preSelectedIndex=_preSelectedIndex;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)tbTabbar:(id)arg1 didSelectItem:(id)arg2;
@property(readonly, nonatomic) TBTabbar *tbTabbar;
@property(readonly, nonatomic) UIView *transitionView;
- (void)monitorTabSelectedFromVC:(id)arg1 toVC:(id)arg2;
@property(retain, nonatomic) UIViewController *selectedViewController;
- (void)privateSetSelectedViewController:(id)arg1 isAsync:(_Bool)arg2;
- (void)setInitSelectedIndex:(unsigned long long)arg1;
- (id)tabBarItems;
- (void)setTabBarItems:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)controllerForTabbarItem:(id)arg1;
- (void)privateSetSelectedController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
