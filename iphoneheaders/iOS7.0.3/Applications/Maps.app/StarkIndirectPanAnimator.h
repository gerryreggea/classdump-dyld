/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer, StarkIndirectPanController;

@interface StarkIndirectPanAnimator : NSObject {

	float _currentSpeedScalar;
	float _targetSpeedScalar;
	BOOL _forceIsConstant;
	NSTimer* _updateTimer;
	double _absoluteLastTickTime;
	BOOL _animating;
	StarkIndirectPanController* _owner;
	float _topSpeed;
	float _currentValue;

}

@property (assign,nonatomic) StarkIndirectPanController * owner;               //@synthesize owner=_owner - In the implementation block
@property (assign,nonatomic) float topSpeed;                                   //@synthesize topSpeed=_topSpeed - In the implementation block
@property (nonatomic,readonly) float currentValue;                             //@synthesize currentValue=_currentValue - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating;              //@synthesize animating=_animating - In the implementation block
+(double)_fallingDuration;
+(double)_risingDuration;
-(float)topSpeed;
-(void)startImpulseInDirection:(float)arg1 isMomentary:(BOOL)arg2 ;
-(void)stopImpulse;
-(void)setTopSpeed:(float)arg1 ;
-(void)dealloc;
-(BOOL)isAnimating;
-(void)_tick;
-(id)owner;
-(float)currentValue;
-(void)setOwner:(id)arg1 ;
@end

