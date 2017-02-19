//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSString, UIPickerView;

@interface JDPDatePickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    id <JDPDatePickerViewDelegate> _delegate;
    UIPickerView *_pickerView;
    NSArray *_yearArray;
    NSArray *_monthArray;
}

@property(copy, nonatomic) NSArray *monthArray; // @synthesize monthArray=_monthArray;
@property(copy, nonatomic) NSArray *yearArray; // @synthesize yearArray=_yearArray;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <JDPDatePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)yearString;
- (id)monthString;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)createPickerView;
- (void)prepareDataSource;
- (void)confirmButtonAction:(id)arg1;
- (void)createConfirmButton;
- (void)cancelButtonAction:(id)arg1;
- (void)createCancelButton;
- (void)createTitleLabel;
- (void)commonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
