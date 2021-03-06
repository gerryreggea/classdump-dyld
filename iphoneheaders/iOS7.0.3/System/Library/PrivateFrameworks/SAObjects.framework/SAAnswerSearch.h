/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SALocation, NSString, NSArray;

@interface SAAnswerSearch : SADomainCommand

@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSString * miscQuestion; 
@property (nonatomic,copy) NSString * placeAttribute; 
@property (nonatomic,copy) NSArray * product; 
@property (nonatomic,copy) NSString * timeQuestion; 
@property (nonatomic,copy) NSString * verbType; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)attribute;
-(void)setAddress:(id)arg1 ;
-(id)groupIdentifier;
-(id)address;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAttribute:(id)arg1 ;
-(id)miscQuestion;
-(void)setMiscQuestion:(id)arg1 ;
-(id)placeAttribute;
-(void)setPlaceAttribute:(id)arg1 ;
-(id)product;
-(void)setProduct:(id)arg1 ;
-(id)timeQuestion;
-(void)setTimeQuestion:(id)arg1 ;
-(id)verbType;
-(void)setVerbType:(id)arg1 ;
@end

