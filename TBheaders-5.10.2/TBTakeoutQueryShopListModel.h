//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBTakeoutShopItemModel;

@interface TBTakeoutQueryShopListModel : TBJSONModel
{
    _Bool _haveNext;	// 8 = 0x8
    NSString *_success;	// 16 = 0x10
    NSString *_totalRecords;	// 24 = 0x18
    NSString *_currentPage;	// 32 = 0x20
    NSString *_nextId;	// 40 = 0x28
    NSString *_scm;	// 48 = 0x30
    NSString *_totalNum;	// 56 = 0x38
    NSString *_totalPage;	// 64 = 0x40
    NSString *_pageNo;	// 72 = 0x48
    NSString *_pageSize;	// 80 = 0x50
    NSArray<TBTakeoutShopItemModel> *_storeList;	// 88 = 0x58
}

@property(retain, nonatomic) NSArray<TBTakeoutShopItemModel> *storeList; // @synthesize storeList=_storeList;
@property(retain, nonatomic) NSString *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSString *totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) NSString *totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) _Bool haveNext; // @synthesize haveNext=_haveNext;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *nextId; // @synthesize nextId=_nextId;
@property(retain, nonatomic) NSString *currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSString *totalRecords; // @synthesize totalRecords=_totalRecords;
@property(retain, nonatomic) NSString *success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
