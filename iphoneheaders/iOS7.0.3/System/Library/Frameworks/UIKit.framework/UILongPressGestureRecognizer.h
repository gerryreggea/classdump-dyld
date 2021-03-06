/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSArray, NSMutableSet;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {

	NSArray* _touches;
	NSMutableSet* _activeTouches;
	unsigned _numberOfTouchesRequired;
	double _minimumPressDuration;
	float _allowableMovement;
	CGPoint _startPointScreen;
	id _enoughTimeElapsed;
	id _tooMuchTimeElapsed;
	id _imp;
	unsigned _gotTouchEnd : 1;
	unsigned _gotTooMany : 1;
	unsigned _gotEnoughTaps : 1;
	unsigned _cancelPastAllowableMovement : 1;
	int _buttonType;

}

@property (assign,nonatomic) unsigned numberOfTapsRequired; 
@property (assign,nonatomic) unsigned numberOfTouchesRequired;                    //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) double minimumPressDuration; 
@property (assign,nonatomic) float allowableMovement;                             //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (assign,nonatomic) double delay;                                        //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (nonatomic,readonly) NSArray * touches;                                 //@synthesize touches=_touches - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint centroid; 
@property (assign,nonatomic) BOOL cancelPastAllowableMovement; 
@property (assign,setter=_setButtonType:,nonatomic) int _buttonType;              //@synthesize buttonType=_buttonType - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)invalidate;
-(void)setDelay:(double)arg1 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(int)_buttonType;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setView:(id)arg1 ;
-(float)_touchSloppinessFactor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned)arg1 inView:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(CGPoint)startPoint;
-(void)_setButtonType:(int)arg1 ;
-(unsigned)numberOfTouchesRequired;
-(unsigned)numberOfTapsRequired;
-(double)delay;
-(void)setNumberOfTapsRequired:(unsigned)arg1 ;
-(void)setNumberOfTouchesRequired:(unsigned)arg1 ;
-(void)_resetGestureRecognizer;
-(void)setAllowableMovement:(float)arg1 ;
-(CGPoint)centroid;
-(id)touches;
-(void)clearTimer;
-(void)setTouches:(id)arg1 ;
-(void)enoughTimeElapsed:(id)arg1 ;
-(void)tooMuchElapsed:(id)arg1 ;
-(CGPoint)centroidScreen;
-(void)startTimer;
-(void)_interactionsEndedWithValidTouches:(BOOL)arg1 ;
-(void)_startTapFinishedTimer;
-(double)minimumPressDuration;
-(BOOL)cancelPastAllowableMovement;
-(void)setCancelPastAllowableMovement:(BOOL)arg1 ;
-(BOOL)tapIsPossibleForTapRecognizer:(id)arg1 ;
-(void)tapRecognizerRecognizedTap:(id)arg1 ;
-(void)tapRecognizerFailedToRecognizeTap:(id)arg1 ;
-(float)allowableMovement;
@end

