/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKImageMediaObject.h>

@interface CKAnimatedImageMediaObject : CKImageMediaObject
+(id)UTITypes;
-(id)previewForOrientation:(BOOL)arg1 ;
-(id)savedAnimatedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2 ;
-(id)generateThumbnails;
-(id)generateAnimatedPreviewFromThumbnails:(id)arg1 forOrientation:(BOOL)arg2 ;
-(void)saveAnimatedPreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3 ;
-(id)notificationCenter;
-(BOOL)previewDispatchCache:(id)arg1 shouldReplaceCachedPreview:(id)arg2 withPreview:(id)arg3 ;
@end

