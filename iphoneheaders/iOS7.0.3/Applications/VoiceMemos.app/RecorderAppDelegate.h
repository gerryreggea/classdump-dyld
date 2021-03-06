/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, RCMainViewController, UINavigationController, NSTimer;

@interface RecorderAppDelegate : NSObject <UIAlertViewDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	RCMainViewController* _mainViewController;
	UINavigationController* _navigationController;
	NSTimer* _timeUpdateTimer;
	unsigned _backgroundTaskIdentifier;
	int _lockscreenWillAppearToken;
	int _lockscreenDidDisappearToken;
	BOOL _canUseDoubleHeightStatusBar;
	BOOL _recordingActiveOrPaused;
	BOOL _isActive;
	BOOL _hasBecomeActiveOnce;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)_recordingDidBegin:(id)arg1 ;
-(void)_recordingDidPause:(id)arg1 ;
-(void)_recordingDidResume:(id)arg1 ;
-(void)_recordingDidEnd:(id)arg1 ;
-(void)_recordingDidFinishWritingToDisk:(id)arg1 ;
-(void)setCanUseDoubleHeightStatusBar:(BOOL)arg1 ;
-(void)updateDoubleHeightStatusBarForForegroundState;
-(double)_lastSuspendTime;
-(void)resetNavigationStateAnimated:(BOOL)arg1 ;
-(void)_updateLastSuspendTime;
-(void)_showDoubleHeightStatusBarIfNecessary;
-(void)_hideDoubleHeightStatusBar;
-(void)applicationDidResume:(id)arg1 ;
-(void)disableDoubleHeightStatusBar;
-(void)enableDoubleHeightStatusBar;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)_applicationDidFinishLaunching;
-(void)_updateTime:(id)arg1 ;
-(void).cxx_destruct;
@end

