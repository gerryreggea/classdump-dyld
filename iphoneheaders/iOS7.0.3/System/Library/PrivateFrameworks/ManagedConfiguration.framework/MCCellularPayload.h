/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload {

	MCAPNConfiguration* _attachAPN;
	NSArray* _APNs;

}

@property (nonatomic,retain) MCAPNConfiguration * attachAPN;              //@synthesize attachAPN=_attachAPN - In the implementation block
@property (nonatomic,retain) NSArray * APNs;                              //@synthesize APNs=_APNs - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)attachAPN;
-(id)APNs;
-(id)attachAPNConfigurationLabel;
-(id)APNsLabel;
-(id)APNConfigurationDescription;
-(id)APNsDescription;
-(void)setAttachAPN:(id)arg1 ;
-(void)setAPNs:(id)arg1 ;
-(void).cxx_destruct;
@end
