/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol MBManagerDelegate
@optional
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)managerDidFinishRestore:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)managerDidCancelRestore:(id)arg1;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3;
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2;
-(void)managerDidLoseConnectionToService:(id)arg1;
@end

