/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureMetadataOutputInternal, NSArray;

@interface AVCaptureMetadataOutput : AVCaptureOutput {

	AVCaptureMetadataOutputInternal* _internal;

}

@property (nonatomic,readonly) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue; 
@property (nonatomic,readonly) NSArray * availableMetadataObjectTypes; 
@property (nonatomic,copy) NSArray * metadataObjectTypes; 
@property (assign,nonatomic) CGRect rectOfInterest; 
+(void)initialize;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)didStartForSession:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)didStartForSessionWithoutGraphRebuild:(id)arg1 ;
-(id)metadataObjectTypes;
-(CGRect)rectOfInterest;
-(id)availableMetadataObjectTypes;
-(BOOL)_faceMetadataIsActive;
-(id)metadataObjectsDelegate;
-(id)metadataObjectsCallbackQueue;
-(void)applyLiveSourceProperties;
-(void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setMetadataObjectTypes:(id)arg1 ;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_input;
@end
