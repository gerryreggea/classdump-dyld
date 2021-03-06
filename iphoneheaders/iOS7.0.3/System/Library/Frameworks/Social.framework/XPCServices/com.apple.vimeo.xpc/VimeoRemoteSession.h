/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.vimeo/com.apple.vimeo-Structs.h>
#import <VUSocialUpload/VURemoteSession.h>
#import <VUSocialUpload/VimeoRemoteSessionProtocol.h>
#import <com.apple.vimeo/VimeoPostDelegate.h>

@interface VimeoRemoteSession : VURemoteSession <VimeoRemoteSessionProtocol, VimeoPostDelegate>
-(void)alertWithDictionary:(CFDictionaryRef)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)uploadPost:(id)arg1 withXPCTransferCompletion:(/*^block*/ id)arg2 ;
-(id)account;
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2 ;
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2 ;
-(void)vimeoPostUploadSucceeded:(id)arg1 ;
-(void)vimeoPost:(id)arg1 uploadSucceededWithWarning:(int)arg2 ;
@end

