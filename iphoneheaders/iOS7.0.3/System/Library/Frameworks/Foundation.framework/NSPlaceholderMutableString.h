/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSPlaceholderMutableString : NSMutableString
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(void*)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned)retainCount;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 ;
-(unsigned)length;
-(id)initWithCapacity:(unsigned)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned)arg2 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 encoding:(unsigned)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned)arg2 freeWhenDone:(BOOL)arg3 ;
@end
