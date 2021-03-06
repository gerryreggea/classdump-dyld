/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/SBAXServer.bundle/SBAXServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol AXSpringBoardServerInstanceDelegate <NSObject>
@required
-(void)showAlertType:(int)arg1 withHandler:(/*^block*/ id)arg2 withData:(id)arg3;
-(BOOL)isPasscodeRequiredOnLock;
-(BOOL)isSpringBoardFrontmost;
-(void)openCustomGestureCreationForAST;
-(void)openCustomGestureCreationForSCAT;
-(BOOL)isNotificationCenterVisible;
-(void)toggleNotificationCenter;
-(void)openSiri;
-(BOOL)isSiriVisible;
-(void)openVoiceControl;
-(BOOL)isVoiceControlRunning;
-(BOOL)isMakingEmergencyCall;
-(BOOL)isSystemSleeping;
-(BOOL)isOrientationLocked;
-(BOOL)isMediaPlaying;
-(void)resetDimTimer;
-(BOOL)isSideSwitchUsedForOrientation;
-(BOOL)isRingerMuted;
-(float)volumeLevel;
-(void)hideAlert;
-(BOOL)isControlCenterVisible;
-(void)showControlCenter:(BOOL)arg1;
-(BOOL)isAppSwitcherVisible;
-(void)openAppSwitcher;
-(BOOL)isGuidedAccessActive;
-(BOOL)isSyncingRestoringResettingOrUpdating;
-(BOOL)isScreenLocked;
@end

