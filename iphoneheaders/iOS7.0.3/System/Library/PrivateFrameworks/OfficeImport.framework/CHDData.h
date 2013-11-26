/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class CHDDataValuesCollection, CHDFormula, EDResources;

@interface CHDData : NSObject {

	CHDDataValuesCollection* mDataValues;
	CHDFormula* mFormula;
	unsigned mContentFormatId;
	unsigned mDataValueIndexCount;
	EDResources* mResources;

}
+(id)dataWithDataPointCount:(unsigned)arg1 resources:(id)arg2 ;
+(id)dataWithResources:(id)arg1 ;
-(void)dealloc;
-(bool)isEmpty;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(id)dataValues;
-(id)formula;
-(void)setContentFormatId:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setFormula:(id)arg1 chart:(id)arg2 ;
-(void)setDataValueIndexCount:(unsigned)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(id)initWithDataPointCount:(unsigned)arg1 resources:(id)arg2 ;
-(unsigned)countOfCellsBeingReferenced;
-(unsigned)dataValueIndexCount;
-(unsigned)averageDataPointDecimalCount;
-(id)firstValueContentFormatWithWorkbook:(id)arg1 ;
@end
