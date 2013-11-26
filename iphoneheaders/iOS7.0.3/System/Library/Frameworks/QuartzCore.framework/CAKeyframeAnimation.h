/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyAnimation.h>

@class NSArray, NSString;

@interface CAKeyframeAnimation : CAPropertyAnimation

@property (copy) NSArray * values; 
@property (assign) CGPathRef path; 
@property (copy) NSArray * keyTimes; 
@property (copy) NSArray * timingFunctions; 
@property (copy) NSString * calculationMode; 
@property (copy) NSArray * tensionValues; 
@property (copy) NSArray * continuityValues; 
@property (copy) NSArray * biasValues; 
@property (copy) NSString * rotationMode; 
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(id)calculationMode;
-(id)tensionValues;
-(id)continuityValues;
-(id)biasValues;
-(id)rotationMode;
-(void)setContinuityValues:(id)arg1 ;
-(void)setBiasValues:(id)arg1 ;
-(void)setRotationMode:(id)arg1 ;
-(CGPathRef)path;
-(void)setCalculationMode:(id)arg1 ;
-(void)setValues:(id)arg1 ;
-(void)setKeyTimes:(id)arg1 ;
-(id)keyTimes;
-(id)values;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setTimingFunctions:(id)arg1 ;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)CA_prepareRenderValue;
-(void)setTensionValues:(id)arg1 ;
-(id)timingFunctions;
@end
