/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)prop;
-(void)setProp:(id)arg1 ;
-(id)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setMatchTypeAttribute:(id)arg1 ;
-(void)write:(id)arg1 ;
@end

