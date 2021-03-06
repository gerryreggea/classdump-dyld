/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPreheatItem.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSString, NSObject, UIImage;

@interface _PLJPEGPreheatItem : PLPreheatItem {

	NSString* _imagePath;
	NSObject<OS_dispatch_queue>* _queue;
	UIImage* _cachedImage;
	unsigned long _requestID;
	NSObject<OS_dispatch_group>* _requestGroup;
	NSObject<OS_dispatch_group>* _waitGroup;

}
-(void)dealloc;
-(void)startPreheatRequest;
-(id)initWithImagePath:(id)arg1 ;
-(void)_cacheImage;
-(id)cachedImage;
-(id)cachedImageIfAvailable;
-(BOOL)addImageHandler:(/*^block*/ id)arg1 ;
-(void)cancelPreheatRequest;
@end

