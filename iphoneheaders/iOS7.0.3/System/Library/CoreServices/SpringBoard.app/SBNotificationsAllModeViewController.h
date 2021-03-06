/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationsModeViewController.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>

@class SBNotificationCenterTouchEater, SBNotificationsSectionHeaderView;

@interface SBNotificationsAllModeViewController : SBNotificationsModeViewController <UIGestureRecognizerDelegatePrivate> {

	SBNotificationCenterTouchEater* _clearButtonTouchEater;
	SBNotificationsSectionHeaderView* _headerViewCurrentlyInClearState;

}
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 ;
-(id)infoForBulletinSection:(id)arg1 ;
-(void)commitReloadOfSections:(id)arg1 ;
-(int)widgetIdiomForCategory:(int)arg1 ;
-(UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)arg1 ;
-(void)_handleEatenTouch:(id)arg1 ;
-(void)_installClearButtonTouchEater;
-(void)_setHeaderViewCurrentlyInClearState:(id)arg1 ;
-(id)_headerViewCurrentlyInClearState;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

