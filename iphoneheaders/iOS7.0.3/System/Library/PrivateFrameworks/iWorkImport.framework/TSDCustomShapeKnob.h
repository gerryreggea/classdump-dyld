/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDKnob.h>

@class TSDBezierPath, TSUColor;

@interface TSDCustomShapeKnob : TSDKnob {

	TSDBezierPath* mPath;
	TSUColor* mColor;
	float mAngle;

}

@property (nonatomic,retain) TSDBezierPath * path; 
@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) float angle; 
+(id)diamondPath;
+(id)trianglePath;
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(float)arg3 tag:(unsigned)arg4 onRep:(id)arg5 ;
-(void)createKnobLayers;
-(id)darkColor;
-(void)dealloc;
-(id)layer;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setAngle:(float)arg1 ;
-(float)angle;
@end

