//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDCreateCommonGroupProfile : NSObject
{
    int _groupSiteType;
    int _groupSiteStatus;
    NSString *_groupPartyid;
    NSString *_groupName;
    NSString *_groupSign;
    NSString *_groupSiteName;
    NSString *_groupSiteid;
    double _groupLat;
    double _groupLng;
}

+ (id)parseToCommonGroupProfileWithPartyid:(id)arg1 dataDict:(id)arg2;
@property(nonatomic) int groupSiteStatus; // @synthesize groupSiteStatus=_groupSiteStatus;
@property(nonatomic) double groupLng; // @synthesize groupLng=_groupLng;
@property(nonatomic) double groupLat; // @synthesize groupLat=_groupLat;
@property(nonatomic) int groupSiteType; // @synthesize groupSiteType=_groupSiteType;
@property(retain, nonatomic) NSString *groupSiteid; // @synthesize groupSiteid=_groupSiteid;
@property(retain, nonatomic) NSString *groupSiteName; // @synthesize groupSiteName=_groupSiteName;
@property(retain, nonatomic) NSString *groupSign; // @synthesize groupSign=_groupSign;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *groupPartyid; // @synthesize groupPartyid=_groupPartyid;
- (void)dealloc;
- (id)initWithPartyid:(id)arg1;

@end
