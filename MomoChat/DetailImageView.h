//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "MDFileReceiverDelegate.h"
#import "UIScrollViewDelegate.h"

@class MDPhotoPreviewItem, NSString, SDDownloadProgressView, SDOriginDownloadProgressView, UIImage, UIImageView, UILabel;

@interface DetailImageView : UIScrollView <UIScrollViewDelegate, MDFileReceiverDelegate>
{
    UIImageView *_imageView;
    UILabel *_label;
    long long _fileSize;
    NSString *_url;
    NSString *_path;
    SDDownloadProgressView *_progressView;
    UIImage *image;
    MDPhotoPreviewItem *_previewItem;
    long long _soureType;
    id <DetailImageViewDelegate> _detailDelegate;
    long long _showImageStatus;
    SDOriginDownloadProgressView *_originProgressView;
    double _downProgress;
    struct CGRect _preRect;
}

@property(nonatomic) double downProgress; // @synthesize downProgress=_downProgress;
@property(nonatomic) __weak SDOriginDownloadProgressView *originProgressView; // @synthesize originProgressView=_originProgressView;
@property(nonatomic) long long showImageStatus; // @synthesize showImageStatus=_showImageStatus;
@property(nonatomic) id <DetailImageViewDelegate> detailDelegate; // @synthesize detailDelegate=_detailDelegate;
@property(nonatomic) long long soureType; // @synthesize soureType=_soureType;
@property(retain, nonatomic) MDPhotoPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property(nonatomic) struct CGRect preRect; // @synthesize preRect=_preRect;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) SDDownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)setWithPreviewItem:(id)arg1;
- (void)didClickLookOriginButton;
- (void)disappearToFrame:(struct CGRect)arg1;
- (void)configureWithImage:(id)arg1;
- (void)becomeBigAnimation:(id)arg1 animation:(_Bool)arg2;
- (void)didDoubleClick;
- (void)centerScrollViewContents;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
@property(nonatomic) UIImage *image; // @synthesize image;
- (void)showSmallImageByUrl:(id)arg1;
- (void)showLargeImageWithData:(id)arg1;
- (void)showLagerImageByPath:(id)arg1 withAnimation:(_Bool)arg2;
- (_Bool)showOriginImageByPath:(id)arg1;
- (_Bool)showOriginImageIfExist;
- (void)fileReceive:(id)arg1 setProgress:(float)arg2 total:(float)arg3;
- (void)fileReceiveFail:(id)arg1;
- (void)fileReceiveFinish:(id)arg1;
- (void)goWithURL:(id)arg1 andPath:(id)arg2 showImage:(long long)arg3;
- (void)resetScale;
- (void)resetPrePositon;
- (void)setPrePosition:(struct CGRect)arg1;
- (void)goWithURL:(id)arg1 andPath:(id)arg2;
- (void)decorateWithProgressView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

