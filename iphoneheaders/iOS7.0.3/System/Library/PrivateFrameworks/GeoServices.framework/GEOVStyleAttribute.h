/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface GEOVStyleAttribute : PBCodable {

	int _intValue;
	unsigned _key;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) unsigned key;                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) int intValue;                  //@synthesize intValue=_intValue - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)intValue;
-(unsigned)key;
-(id)dictionaryRepresentation;
-(void)setKey:(unsigned)arg1 ;
-(BOOL)hasIntValue;
-(void)setIntValue:(int)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
