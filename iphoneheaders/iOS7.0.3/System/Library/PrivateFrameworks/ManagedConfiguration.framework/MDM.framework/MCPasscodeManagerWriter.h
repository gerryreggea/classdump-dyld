/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
+(BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 ;
+(id)sharedManager;
-(void)_setPrivatePasscodeDict:(id)arg1 ;
-(void)_sendPasscodeChangedNotification;
-(BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3 ;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3 ;
@end
