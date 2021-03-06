//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"

@class NSString;

@interface AccountBaseViewController : MMUIViewController <PBMessageObserverDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    unsigned int m_uiAccountID;
    NSString *m_unbindOKTip;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSetPwd;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)OnUnBindAccountOK;
- (void)onUnBindAccount;
- (void)prepareToUnbindAccount:(unsigned int)arg1;
- (void)checkUnbindAccount;
- (void)onCheckUnbindFail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

