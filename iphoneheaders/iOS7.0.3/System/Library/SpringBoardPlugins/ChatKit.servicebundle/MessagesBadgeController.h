/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MessagesBadgeController : NSObject {

	int _madridCount;
	long long _lastMadridFailure;
	BOOL _showingFailure;
	BOOL _disableDBFullDialog;

}
+(id)sharedInstance;
-(void)_clearFailureBadge;
-(void)updateBadge;
-(void)_updateBadge;
-(void)_saveMadridFailureID:(long long)arg1 ;
-(void)_displayDatabaseFullWarning;
-(long long)_savedMadridFailureID;
-(void)_madridUnreadCountChanged:(id)arg1 ;
-(void)_madridFailureCountChanged:(id)arg1 ;
-(void)_madridMessageSent:(id)arg1 ;
-(void)_databaseBecameFull;
-(void)_databaseBecameNoLongerFull;
-(void)dealloc;
-(id)init;
@end
