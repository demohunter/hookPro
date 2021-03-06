//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IRemoteControlMusicPlayerExt-Protocol.h"
#import "KSAudioLogProtocol-Protocol.h"
#import "KSAudioPlayerDelegate-Protocol.h"
#import "KSAudioPlayerUserDefineProtocol-Protocol.h"
#import "MMMusicPlayerNotifyExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCAudioSessionExt-Protocol.h"

@class KSAudioPlayer, MMMusicInfo, MMTimer, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface MMKSMusicPlayer : MMService <MMMusicPlayerNotifyExt, WCAudioSessionExt, IRemoteControlMusicPlayerExt, KSAudioPlayerDelegate, KSAudioPlayerUserDefineProtocol, KSAudioLogProtocol, MMService>
{
    KSAudioPlayer *m_audioPlayer;
    _Bool m_isQQMusicWifiPlay;
    _Bool m_isCyclePlay;
    _Bool m_isNeedRestartByOthers;
    MMMusicInfo *m_musicInfo;
    MMTimer *m_playPercentTimer;
    NSObject *m_clientInfo;
    _Bool m_isQQMusicPlay;
    _Bool m_isPlayerResuming;
}

- (void).cxx_destruct;
- (id)bcdStringFromUrl_WechatMusicUrl:(id)arg1;
- (id)bcdStringFromUrl_QQMusic:(id)arg1;
- (id)bcdStringHanding:(id)arg1;
- (void)onSetNeedRestartMusicByOthers:(_Bool)arg1;
- (void)onPlayPreviousMusic;
- (void)onPlayNextMusic;
- (void)onWCAudioSessionOverride;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)arg1;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)notifyMusicPlayerRestartMusic;
- (void)notifyMusicPlayerPauseMusic;
- (void)log:(long long)arg1 file:(const char *)arg2 func:(const char *)arg3 line:(int)arg4 module:(id)arg5 EFDict:(id)arg6 fullmsg:(id)arg7;
- (id)limitNetParam;
- (unsigned int)downloadRetryCnt;
- (id)createAudioDownloader;
- (_Bool)isNetOk;
- (void)audioPlayer:(id)arg1 dataBuffering:(double)arg2;
- (void)audioPlayer:(id)arg1 status:(unsigned long long)arg2 params:(id)arg3;
- (double)getBufferPercent;
- (double)getDuration;
- (double)getCurTime;
- (_Bool)isQQMusicWifiPlay;
- (_Bool)isNeedRestartByOthers;
- (void)setNeedRestartByOthers:(_Bool)arg1;
- (long long)status;
- (_Bool)isIdle;
- (_Bool)isPaused;
- (_Bool)isPlaying;
- (_Bool)isWaiting;
- (void)resume;
- (void)pause;
- (void)tryStopClientId:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)forceStopMusic;
- (void)stop;
- (void)start:(id)arg1;
- (void)playWithUrl:(id)arg1 MusicID:(id)arg2 isQQMusic:(_Bool)arg3;
- (void)ignoreCurrentMusicItem;
- (void)addMusicItem:(id)arg1;
- (void)destroyStreamer;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;
- (id)cachePathForMusicFromUrl:(id)arg1;
- (id)getUrlPathExt:(id)arg1;
- (id)hashForUrl:(id)arg1;
- (id)cacheRootPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

