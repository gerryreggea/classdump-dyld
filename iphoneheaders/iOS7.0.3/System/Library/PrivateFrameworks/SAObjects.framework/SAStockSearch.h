/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSArray;

@interface SAStockSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSArray * companyNameList; 
@property (nonatomic,copy) NSArray * stockReferences; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)targetAppId;
-(void)setTargetAppId:(id)arg1 ;
-(id)stockReferences;
-(void)setStockReferences:(id)arg1 ;
-(id)companyNameList;
-(void)setCompanyNameList:(id)arg1 ;
@end

