/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol NSSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(id)arg1 didEncounterSyncMessage:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didEncounterErrorAtIndex:(unsigned long long)arg2 ofString:(id)arg3 message:(id)arg4;
- (void)speechSynthesizer:(id)arg1 willSpeakPhoneme:(short)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakWord:(struct _NSRange)arg2 ofString:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeaking:(BOOL)arg2;
@end

