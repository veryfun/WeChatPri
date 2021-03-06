//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTSJSEventDelegate-Protocol.h"
#import "WCCommentDetailViewControllerFBDelegate-Protocol.h"
#import "WSMusicDelegate-Protocol.h"

@class FTSWebSearchMgr, MMUIViewController, NSString;
@protocol WSJSEventHandleDelegate;

@interface WSJSEventHandler : NSObject <WCCommentDetailViewControllerFBDelegate, WSMusicDelegate, FTSJSEventDelegate>
{
    MMUIViewController *_baseViewController;
    id <WSJSEventHandleDelegate> _delegate;
    FTSWebSearchMgr *_webSearchMgr;
}

@property(retain, nonatomic) FTSWebSearchMgr *webSearchMgr; // @synthesize webSearchMgr=_webSearchMgr;
@property(nonatomic) __weak id <WSJSEventHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
- (void).cxx_destruct;
- (void)startMusicPlayer:(id)arg1;
- (void)notifyPageOfMusicStatusChanged:(id)arg1;
- (void)onDeleteData;
- (void)onOpenWAWidgetLogViewWithParams:(id)arg1;
- (void)onUpdateWAWidgetWithParams:(id)arg1;
- (void)onRemoveWAWidgetWithParams:(id)arg1;
- (id)onInsertWAWidgetWithParams:(id)arg1;
- (id)onGetBaseViewController;
- (void)onInsertHistoryOperation:(id)arg1;
- (void)onSwitchSearchContext:(id)arg1;
- (void)onClearHistoryOperation:(id)arg1;
- (void)onOpenEmotionPage:(id)arg1;
- (void)onOpenWeAppPage:(id)arg1;
- (void)onRequestLocalSuggestion:(id)arg1;
- (void)onClickRecmdWord:(id)arg1;
- (void)onOpenContact:(id)arg1;
- (void)onOpenSnsDetail:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onLaunchDetailPageForWeApp:(id)arg1;
- (void)onLaunchDetailPage:(id)arg1;
- (void)onPreSearch:(id)arg1 bizType:(unsigned long long)arg2;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(id)arg1;
- (void)enableSearchBar;
- (void)hideKeyboard;
- (void)registerWSMusicHandler;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

