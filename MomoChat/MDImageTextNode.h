//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewNode.h"

@class MDImageNode, MDTextNode;

@interface MDImageTextNode : MDViewNode
{
    MDImageNode *_nodeImage;
    MDTextNode *_nodeText;
    double _margin;
}

@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) MDTextNode *nodeText; // @synthesize nodeText=_nodeText;
@property(retain, nonatomic) MDImageNode *nodeImage; // @synthesize nodeImage=_nodeImage;
- (void).cxx_destruct;
- (void)fitSizeBaseTextHegith;
- (void)fitSizeBaseImageHeight;
- (void)setText:(id)arg1 maxWidth:(double)arg2;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
