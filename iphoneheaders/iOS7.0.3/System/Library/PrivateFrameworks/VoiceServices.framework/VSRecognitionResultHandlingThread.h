/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionResultHandlingThreadDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSMutableArray, NSConditionLock;

@interface VSRecognitionResultHandlingThread : NSObject {

	<VSRecognitionResultHandlingThreadDelegate>* _delegate;
	NSMutableArray* _requests;
	NSConditionLock* _lock;
	struct {
		unsigned running : 1;
		unsigned delegateDidHandleResults : 1;
		unsigned valid : 1;
	}  _resultHandlingFlags;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)handleResults:(id)arg1 withHandler:(id)arg2 ;
-(void)_handleRequests;
-(void)_notifyRequestHandled:(id)arg1 ;
@end

