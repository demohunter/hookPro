//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNLogisticOrderListItem, CNLogisticService, CNLogisticsItemView;

@interface CNLogisticsCompanyView : UIView
{
    CNLogisticOrderListItem *_bagItem;	// 8 = 0x8
    CNLogisticsItemView *_itemView;	// 16 = 0x10
    CNLogisticService *_pingjiaService;	// 24 = 0x18
}

@property(retain, nonatomic) CNLogisticService *pingjiaService; // @synthesize pingjiaService=_pingjiaService;
@property(nonatomic) CNLogisticsItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) CNLogisticOrderListItem *bagItem; // @synthesize bagItem=_bagItem;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewWithImage:(id)arg1 rect:(struct CGRect)arg2;
- (struct CGSize)getSizeWithFont:(id)arg1 font:(id)arg2;
- (void)logistics:(id)arg1;
- (void)alertTocallPostmanPhone:(id)arg1;
- (void)setupLogoView:(id)arg1;
- (void)setupView;
- (id)initWithY:(float)arg1 addView:(id)arg2 bagItem:(id)arg3;
- (float)getCompanyHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end
