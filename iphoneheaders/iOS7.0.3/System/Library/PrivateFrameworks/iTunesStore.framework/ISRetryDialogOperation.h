/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISDialogOperation.h>

@interface ISRetryDialogOperation : ISDialogOperation {

	BOOL _shouldRetry;

}

@property (assign) BOOL shouldRetry;              //@synthesize shouldRetry=_shouldRetry - In the implementation block
+(id)operationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(BOOL)shouldRetry;
-(void)handleButtonSelected:(int)arg1 withResponseDictionary:(id)arg2 ;
@end
