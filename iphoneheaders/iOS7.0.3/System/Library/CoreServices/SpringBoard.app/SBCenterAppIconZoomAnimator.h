/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCenterIconZoomAnimator.h>

@class UIView, SBCenterAppZoomSettings;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {

	UIView* _appView;
	float _distantScale;

}

@property (nonatomic,retain) SBCenterAppZoomSettings * settings; 
@property (assign) float distantScale;                                        //@synthesize distantScale=_distantScale - In the implementation block
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/ id)arg3 ;
-(id)initWithFolderController:(id)arg1 appView:(id)arg2 ;
-(double)_iconZoomDelay;
-(void)setDistantScale:(float)arg1 ;
-(void)_delayedForRotation;
-(void)_zoomAppForZoomFraction:(float)arg1 ;
-(void)_fadeAppForZoomFraction:(float)arg1 ;
-(double)_appZoomDelay;
-(float)distantScale;
-(void)dealloc;
@end

