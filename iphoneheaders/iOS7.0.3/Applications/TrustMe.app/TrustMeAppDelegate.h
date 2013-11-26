/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/TrustMe.app/TrustMe
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <TrustMe/TrustMe-Structs.h>
#import <TrustMe/CertInfoSheetViewControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UIView, UIViewController, UINavigationController, CPDistributedMessagingCenter, CPDistributedMessagingDelayedReplyContext, NSMutableArray, NSTimer;

@interface TrustMeAppDelegate : NSObject <CertInfoSheetViewControllerDelegate, UIApplicationDelegate> {

	CGRect _appFrame;
	int _orientation;
	UIView* _remoteView;
	UIViewController* _rootController;
	BOOL _rootControllerIsDismissing;
	UINavigationController* _sheetController;
	CPDistributedMessagingCenter* _center;
	CPDistributedMessagingDelayedReplyContext* _replyContext;
	NSMutableArray* _queuedMessages;
	NSMutableArray* _queuedReplyContexts;
	NSTimer* _killTimer;

}

@property (nonatomic,retain) UIWindow * window; 
-(void)_killTimerFired;
-(BOOL)_usingFormSheet;
-(void)_presentNextQueuedMessage;
-(void)_endRemoteSheet;
-(void)_remoteSheetDidEnd:(id)arg1 returnCode:(int)arg2 context:(void*)arg3 ;
-(void)_sendResponse:(int)arg1 ;
-(void)_presentSheetWithInfo:(id)arg1 replyContext:(id)arg2 ;
-(void)_queueMessage:(id)arg1 withReplyContext:(id)arg2 ;
-(void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 ;
-(void)_sheetControllerDismissedView;
-(void)_startCenter;
-(void)_clearTimer;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)_dismissSheet;
-(void)sheetViewController:(id)arg1 finishedWithReturnCode:(int)arg2 ;
-(void)_scheduleTimer;
@end
