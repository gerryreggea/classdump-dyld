/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MFMimeCharset : NSObject {

	unsigned long _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;

}
+(id)preferredMimeCharset;
+(id)allMimeCharsets:(BOOL)arg1 ;
+(id)allMimeCharsets;
+(id)charsetForEncoding:(unsigned long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)primaryLanguage;
-(unsigned long)encoding;
-(id)initWithEncoding:(unsigned long)arg1 ;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(BOOL)canBeUsedForOutgoingMessages;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)useBase64InHeaders;
-(id)charsetName;
@end

