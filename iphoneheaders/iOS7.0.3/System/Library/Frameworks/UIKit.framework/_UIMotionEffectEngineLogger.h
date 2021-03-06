/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface _UIMotionEffectEngineLogger : NSObject {

	int _motionLevelSamples[8];
	int _sampleCount;
	int _updateFreqency;
	double _lastUpdateTimeStamp;

}
-(id)initWithFastUpdateInterval:(double)arg1 slowUpdateInterval:(double)arg2 ;
-(double)lastRecordedTimestamp;
-(void)recordMotionMagnitude:(float)arg1 atTimestamp:(double)arg2 ;
-(void)_dumpToAggregated;
@end

