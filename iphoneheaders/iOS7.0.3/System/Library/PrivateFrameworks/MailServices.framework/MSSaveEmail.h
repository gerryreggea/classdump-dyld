/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MailServices/MSMailDefaultService.h>

@interface MSSaveEmail : MSMailDefaultService
+(void)saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
+(void)saveEmail:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(/*^block*/ id)arg3 ;
-(void)_saveMessageData:(id)arg1 forAccountWithID:(id)arg2 autosaveIdentifier:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)_saveEmail:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
@end
