//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSArray, NSString;

@interface MDGroupCategoryInfo : EtaModel
{
    NSString *_title;
    NSArray *_labelsList;
    NSString *_categoryId;
    NSString *_miniCategoryId;
    NSString *_actionStr;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *actionStr; // @synthesize actionStr=_actionStr;
@property(copy, nonatomic) NSString *miniCategoryId; // @synthesize miniCategoryId=_miniCategoryId;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(retain, nonatomic) NSArray *labelsList; // @synthesize labelsList=_labelsList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
