/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@class ;

@interface SBLockOverlayViewController : UIViewController {

	<SBLockOverlayViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <SBLockOverlayViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)overlayView;
@end
