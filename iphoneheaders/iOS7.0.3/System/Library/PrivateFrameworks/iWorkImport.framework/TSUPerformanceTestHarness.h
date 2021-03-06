/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	BOOL mQuiet;
	int mPassingTests;
	int mTotalTests;
	BOOL mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) BOOL quiet; 
@property (nonatomic,readonly) int passingTestCount; 
@property (nonatomic,readonly) int testCount; 
@property (nonatomic,readonly) BOOL passed; 
+(id)harness;
-(void)setQuiet:(BOOL)arg1 ;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)testSuite;
-(BOOL)passed;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(BOOL)runTests;
-(BOOL)quiet;
-(int)passingTestCount;
-(int)testCount;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)report;
-(void)setup;
@end

