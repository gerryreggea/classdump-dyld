/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(id)type;
-(id)initWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(unsigned)pointCount;
-(CGPoint*)points;
@end

