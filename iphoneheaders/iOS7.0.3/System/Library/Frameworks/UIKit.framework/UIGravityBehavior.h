/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior {

	CGPoint _gravity;

}

@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic) CGVector gravityDirection; 
@property (assign,nonatomic) float angle; 
@property (assign,nonatomic) float magnitude; 
-(id)init;
-(id)description;
-(void)_commonInit;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(void)_addItem:(id)arg1 ;
-(void)setXComponent:(float)arg1 yComponent:(float)arg2 ;
-(CGPoint)gravity;
-(float)magnitude;
-(void)setAngle:(float)arg1 magnitude:(float)arg2 ;
-(float)yComponent;
-(void)setGravity:(CGPoint)arg1 ;
-(float)xComponent;
-(CGVector)gravityDirection;
-(void)setGravityDirection:(CGVector)arg1 ;
-(CGPoint)denormalizedGravity;
-(void)setMagnitude:(float)arg1 ;
-(void)setXComponent:(float)arg1 ;
-(void)setYComponent:(float)arg1 ;
-(void)_setAngle:(float)arg1 magnitude:(float)arg2 ;
@end

