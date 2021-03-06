//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate-Protocol.h"
#import "WCPayFacingReceiveFixedAmountViewControllerDelegate-Protocol.h"

@class NSString;

@interface WCPayFixedAmountReceiveControlLogic : WCPayControlLogic <WCPayFacingReceiveFixedAmountViewControllerDelegate, WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate>
{
    NSString *m_nsFacingAmountTotalMoney;
    NSString *m_nsFacingAmountDesc;
}

- (void).cxx_destruct;
- (void)OnGetFixedAmountQRCode:(id)arg1 Error:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountQRCodeViewControllerCancel;
- (void)WCPayFacingReceiveFixedAmountViewControllerNext:(id)arg1 Description:(id)arg2;
- (void)WCPayFacingReceiveFixedAmountViewControllerCancel:(_Bool)arg1;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

