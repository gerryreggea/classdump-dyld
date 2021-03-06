/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSError, NSData;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying> {

	NSError* _error;
	NSData* _playInfoData;

}

@property (nonatomic,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * playInfoData;              //@synthesize playInfoData=_playInfoData - In the implementation block
-(id)playInfoData;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)error;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPlayInfoData:(id)arg1 error:(id)arg2 ;
@end

