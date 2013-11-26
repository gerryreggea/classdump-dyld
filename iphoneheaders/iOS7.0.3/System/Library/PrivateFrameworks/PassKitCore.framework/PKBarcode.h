/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	int _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign) int format;                                  //@synthesize format=_format - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_imageFromBarcodeMessage;
-(id)_imageFromTextMessage;
-(id)image;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(id)messageData;
-(id)initWithBarcodeDictionary:(id)arg1 ;
-(id)altText;
-(void)setMessageData:(id)arg1 ;
-(void)setAltText:(id)arg1 ;
-(BOOL)isTall;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end
