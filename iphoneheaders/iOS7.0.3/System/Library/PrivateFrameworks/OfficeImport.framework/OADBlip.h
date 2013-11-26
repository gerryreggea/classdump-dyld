/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class OADSubBlip;

@interface OADBlip : NSObject {

	unsigned long mReferenceCount;
	OADSubBlip* mMainSubBlip;
	OADSubBlip* mAltSubBlip;

}
+(id)pathExtensionForBlipType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)mainSubBlip;
-(void)setMainSubBlip:(id)arg1 ;
-(unsigned*)referenceCount;
-(void)setAltSubBlip:(id)arg1 ;
-(id)altSubBlip;
@end
