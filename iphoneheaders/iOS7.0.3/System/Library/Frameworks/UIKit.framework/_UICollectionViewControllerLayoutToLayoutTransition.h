/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UICollectionViewLayout, UIPercentDrivenInteractiveTransition;

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _crossFadeNavigationBar;
	BOOL _crossFadeBottomBars;
	BOOL _interactionAborted;
	UICollectionViewLayout* _toLayout;
	UIPercentDrivenInteractiveTransition* _interactionController;
	int _operation;

}

@property (nonatomic,retain) UICollectionViewLayout * toLayout;                                         //@synthesize toLayout=_toLayout - In the implementation block
@property (assign,nonatomic) BOOL crossFadeNavigationBar;                                               //@synthesize crossFadeNavigationBar=_crossFadeNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL crossFadeBottomBars;                                                  //@synthesize crossFadeBottomBars=_crossFadeBottomBars - In the implementation block
@property (assign,nonatomic) UIPercentDrivenInteractiveTransition * interactionController;              //@synthesize interactionController=_interactionController - In the implementation block
@property (assign,nonatomic) BOOL interactionAborted;                                                   //@synthesize interactionAborted=_interactionAborted - In the implementation block
@property (assign,nonatomic) int operation;                                                             //@synthesize operation=_operation - In the implementation block
+(id)transitionForOperation:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)dealloc;
-(id)interactionController;
-(void)setInteractionAborted:(BOOL)arg1 ;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)setInteractionController:(id)arg1 ;
-(BOOL)interactionAborted;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)_shouldCrossFadeNavigationBar;
-(BOOL)_shouldCrossFadeBottomBars;
-(void)setToLayout:(id)arg1 ;
-(void)setCrossFadeNavigationBar:(BOOL)arg1 ;
-(void)setCrossFadeBottomBars:(BOOL)arg1 ;
-(id)toLayout;
-(BOOL)crossFadeNavigationBar;
-(BOOL)crossFadeBottomBars;
@end

