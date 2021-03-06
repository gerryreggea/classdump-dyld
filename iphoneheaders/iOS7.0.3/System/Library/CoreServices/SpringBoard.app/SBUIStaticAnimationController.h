/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBApplication;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController {

	BOOL _relaunchExpected;
	BOOL _awaitingKeybagRefetch;
	BOOL _appWasActivating;
	UIView* _staticAppView;

}

@property (nonatomic,readonly) SBApplication * app; 
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(BOOL)_shouldDismissBanner;
-(BOOL)_animationShouldStart;
-(BOOL)_willAnimate;
-(id)initWithApp:(id)arg1 ;
-(id)app;
-(void)dealloc;
-(void)_startAnimation;
@end

