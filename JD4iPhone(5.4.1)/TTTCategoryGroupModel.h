//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSArray, NSString, TTTJumpModel;

@interface TTTCategoryGroupModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_pictureUrl;
    NSString *_slogan;
    TTTJumpModel *_jump;
    NSString *_advertId;
    NSString *_name;
    NSArray *_categoryList;
}

+ (id)replacedKeyFromPropertyName;
+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList=_categoryList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *advertId; // @synthesize advertId=_advertId;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
- (void).cxx_destruct;
- (id)sencondJumpObject;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
