/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSURL;

@interface WFWhitelistSite : NSObject {

	NSString* urlString;
	NSURL* url;
	NSString* domainName;
	NSString* normalizedURLString;

}

@property (copy) NSString * urlString; 
@property (copy) NSURL * url; 
@property (readonly) NSString * domainName; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setUrlString:(id)arg1 ;
-(id)urlString;
-(id)initWithURLString:(id)arg1 ;
-(id)domainName;
-(BOOL)hasMetasitePrefix:(id)arg1 ;
@end
