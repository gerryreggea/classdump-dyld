/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class TSCH3DDataBuffer;

@interface TSCH3DResource : NSObject <NSCopying> {

	int mCaching;
	TSCH3DDataBuffer* mCache;
	int mUpdate;
	BOOL mChanged;
	BOOL mCached;
	DataBufferInfo mDataBufferInfo;
	unsigned long long mUniqueIdentifier;

}

@property (nonatomic,readonly) TSCH3DDataBuffer * buffer; 
@property (nonatomic,readonly) DataBufferInfo bufferInfo; 
@property (assign,nonatomic) int update; 
@property (assign,nonatomic) BOOL changed; 
@property (nonatomic,readonly) BOOL isTexturable; 
@property (assign,nonatomic) int caching; 
@property (nonatomic,readonly) unsigned long long uniqueIdentifier; 
+(unsigned long long)allocateResourceUniqueIdentifier;
+(void)deallocateResourceUniqueIdentifier:(unsigned long long)arg1 ;
+(id)resourceWithCaching:(int)arg1 ;
+(id)resource;
-(DataBufferInfo)bufferInfo;
-(BOOL)isTexturable;
-(id)initWithCaching:(int)arg1 ;
-(int)caching;
-(void)flushMemory;
-(void)updateBufferInfoFromBuffer:(id)arg1 ;
-(BOOL)cacheNeedsUpdate;
-(void)setCaching:(int)arg1 ;
-(BOOL)changed;
-(void)dealloc;
-(id)init;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(int)update;
-(id).cxx_construct;
-(unsigned long long)uniqueIdentifier;
-(void)setCache:(id)arg1 ;
-(void)setUpdate:(int)arg1 ;
-(void)setChanged:(BOOL)arg1 ;
-(id)buffer;
@end

