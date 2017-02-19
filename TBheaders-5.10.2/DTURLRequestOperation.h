//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSData, NSError, NSInputStream, NSMutableURLRequest, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSThread, NSURLConnection, NSURLResponse;

@interface DTURLRequestOperation : NSOperation <NSURLConnectionDataDelegate>
{
    _Bool _networkActivityIndicatorVisible;	// 24 = 0x18
    _Bool _requestBodyGZip;	// 25 = 0x19
    int _state;	// 28 = 0x1c
    NSMutableURLRequest *_request;	// 32 = 0x20
    NSURLResponse *_response;	// 40 = 0x28
    NSData *_responseData;	// 48 = 0x30
    NSString *_responseString;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    NSInputStream *_inputStream;	// 72 = 0x48
    NSOutputStream *_outputStream;	// 80 = 0x50
    NSSet *_runLoopModes;	// 88 = 0x58
    long long _totalBytesRead;	// 96 = 0x60
    NSRecursiveLock *_lock;	// 104 = 0x68
    NSThread *_runningThread;	// 112 = 0x70
    NSThread *_createdThread;	// 120 = 0x78
    NSURLConnection *_connection;	// 128 = 0x80
    id _responseObject;	// 136 = 0x88
}

+ (_Bool)stateTransitionIsValid:(int)arg1 toState:(int)arg2 cancelled:(_Bool)arg3;
+ (id)keyPathFromState:(int)arg1;
+ (id)URLRequestThread;
+ (void)URLRequestThreadProc:(id)arg1;
+ (id)defaultOperationQueue;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool requestBodyGZip; // @synthesize requestBodyGZip=_requestBodyGZip;
@property(nonatomic) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
@property(retain, nonatomic) NSThread *createdThread; // @synthesize createdThread=_createdThread;
@property(retain, nonatomic) NSThread *runningThread; // @synthesize runningThread=_runningThread;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelConnection;
- (void)finish;
- (void)startConnection;
- (void)cancel;
- (void)start;
- (_Bool)isReady;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (void)didFinish;
- (void)didStart;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRequest:(id)arg1 outputStream:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
