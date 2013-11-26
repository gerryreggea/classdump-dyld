/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, SPSearchResult;

@interface SPApplication : NSObject {

	NSString* _displayIdentifier;
	NSString* _displayName;
	NSString* _longDisplayName;

}

@property (nonatomic,retain) NSString * displayIdentifier;                 //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * longDisplayName;                   //@synthesize longDisplayName=_longDisplayName - In the implementation block
@property (nonatomic,readonly) SPSearchResult * searchResult; 
-(void)dealloc;
-(id)description;
-(id)displayIdentifier;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setDisplayIdentifier:(id)arg1 ;
-(void)setLongDisplayName:(id)arg1 ;
-(id)searchResult;
-(id)longDisplayName;
@end
