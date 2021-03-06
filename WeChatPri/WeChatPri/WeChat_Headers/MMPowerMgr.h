//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INewABTestMgrExt-Protocol.h"

@class NSMutableArray;

@interface MMPowerMgr : NSObject <INewABTestMgrExt>
{
    unsigned int m_cultivateCpuUsage;
    unsigned int m_cultivateTime;
    unsigned int m_cultivateCount;
    _Bool m_bLowPowerMode;
    NSMutableArray *m_minuteCPUUsageArray;
    double m_foregroundTime;
    double m_backgroundTime;
    _Bool m_bQuickSyncFilter;
    _Bool m_bBackgroundControl;
    _Bool m_bMonitorCPUAverage;
}

+ (long long)getVirtualMemory;
+ (long long)getResidentMemory;
+ (float)getCurrentCpuUsage;
+ (id)shareInstance;
- (void).cxx_destruct;
- (_Bool)cultivateCpuUsage:(float)arg1 periodTime:(float)arg2;
- (_Bool)isLowPowerMode;
- (void)processPowerModeChange;
- (void)p_setPowerMode;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (_Bool)controlBackgroundTime;
- (_Bool)filterQuickSync;
- (double)getBackgroundTime;
- (double)getForegroundTime;
- (void)processEnterBackground;
- (void)processEnterForeground;
- (void)dealloc;
- (void)checkABTest;
- (id)init;

@end

