/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSArray * providerCommand; 
@property (nonatomic,copy) NSNumber * regionOfInterestRadiusInMiles; 
@property (nonatomic,retain) SALocation * searchRegionCenter; 
@property (nonatomic,copy) NSNumber * userCurrentLocation; 
+(id)mapItemSnippet;
+(id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)encodedClassName;
-(id)providerCommand;
-(void)setProviderCommand:(id)arg1 ;
-(id)regionOfInterestRadiusInMiles;
-(void)setRegionOfInterestRadiusInMiles:(id)arg1 ;
-(id)searchRegionCenter;
-(void)setSearchRegionCenter:(id)arg1 ;
-(id)userCurrentLocation;
-(void)setUserCurrentLocation:(id)arg1 ;
@end

