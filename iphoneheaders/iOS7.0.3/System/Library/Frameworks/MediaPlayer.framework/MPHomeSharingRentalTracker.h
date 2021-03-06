/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequestDelegate.h>

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {

	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_loadRentals;
-(void)_saveRentals;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
@end

