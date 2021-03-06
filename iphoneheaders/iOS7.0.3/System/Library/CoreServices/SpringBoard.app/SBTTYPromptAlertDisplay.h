/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAlertView.h>
#import <Conference/TPSuperBottomBarDelegateProtocol.h>

@class UIView, UIImageView, TPSuperBottomBar, TPLCDView, UIImage;

@interface SBTTYPromptAlertDisplay : SBAlertView <TPSuperBottomBarDelegateProtocol> {

	UIView* _containerView;
	UIImageView* _backgroundView;
	UIView* _voiceAndTTYWrapperView;
	TPSuperBottomBar* _cancelBar;
	TPLCDView* _promptView;
	BOOL _didAnimateIn;
	UIImage* _calleeImage;
	BOOL _isFullscreenImage;
	BOOL _imageSetupDone;

}
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(void)startAnimatingIn;
-(void)_chooseVoiceMode:(id)arg1 ;
-(void)_chooseTTYMode:(id)arg1 ;
-(void)_ignore:(id)arg1 ;
-(void)_makeCall;
-(void)computeImageInformation;
-(float)_lcdYOffset;
-(void)dealloc;
-(id)backgroundImage;
-(void)dismiss;
-(id)thumbnailImage;
-(BOOL)isSupportedInterfaceOrientation:(int)arg1 ;
-(void)bottomBarActionPerformed:(int)arg1 fromBar:(id)arg2 ;
-(id)customizedTitleForItemInBar:(id)arg1 withActionType:(int)arg2 ;
@end

