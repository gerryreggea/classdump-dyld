/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class NSString;

@interface SCRCPhotoEvaluatorPersonFeature : NSObject {

	CGRect _faceRect;
	CGRect _leftEyeRect;
	CGRect _mouthRect;
	CGRect _rightEyeRect;
	int _faceSize;
	int _faceLocation;
	NSString* _shirtColor;

}

@property (nonatomic,readonly) CGRect faceRect;                    //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,readonly) CGRect leftEyeRect;                 //@synthesize leftEyeRect=_leftEyeRect - In the implementation block
@property (nonatomic,readonly) CGRect mouthRect;                   //@synthesize mouthRect=_mouthRect - In the implementation block
@property (nonatomic,readonly) CGRect rightEyeRect;                //@synthesize rightEyeRect=_rightEyeRect - In the implementation block
@property (nonatomic,readonly) int faceSize;                       //@synthesize faceSize=_faceSize - In the implementation block
@property (nonatomic,readonly) int faceLocation;                   //@synthesize faceLocation=_faceLocation - In the implementation block
@property (nonatomic,readonly) NSString * shirtColor;              //@synthesize shirtColor=_shirtColor - In the implementation block
-(CGRect)faceRect;
-(CGRect)leftEyeRect;
-(CGRect)rightEyeRect;
-(id)initWithCIFaceFeature:(id)arg1 ofSize:(int)arg2 andLocation:(int)arg3 andShirtColor:(id)arg4 ;
-(int)faceSize;
-(int)faceLocation;
-(CGRect)mouthRect;
-(id)shirtColor;
@end
