/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:30 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class iAP2GroupParam;

@interface iAP2Message : NSObject {

	unsigned long long msgTimestampMs;
	unsigned short msgLen;
	unsigned short msgID;
	unsigned short msgLenRemain;
	int msgParseState;
	iAP2GroupParam* pGroupParams;

}
+(id)createMsgWithID:(unsigned short)arg1 ;
-(void)setMsgID:(unsigned short)arg1 ;
-(unsigned short)getMsgID;
-(unsigned short)getMsgLen;
-(int)createParamWithID:(unsigned short)arg1 ;
-(int)createParamWithIDAndDataRaw:(unsigned short)arg1 :(char*)arg2 :(unsigned short)arg3 ;
-(int)createParamWithIDAndDataBool:(unsigned short)arg1 :(bool)arg2 ;
-(int)createParamWithIDAndDataU8:(unsigned short)arg1 :(unsigned char)arg2 ;
-(int)createParamWithIDAndDataU16:(unsigned short)arg1 :(unsigned short)arg2 ;
-(int)createParamWithIDAndDataU32:(unsigned short)arg1 :(unsigned)arg2 ;
-(int)createParamWithIDAndDataU64:(unsigned short)arg1 :(unsigned long long)arg2 ;
-(int)createParamWithIDAndNSData:(unsigned short)arg1 :(id)arg2 ;
-(int)createParamWithIDAndNSString:(unsigned short)arg1 :(id)arg2 ;
-(id)getParamArray;
-(id)allocAndAddGroupWithID:(unsigned short)arg1 ;
-(id)initWithMsgID:(unsigned short)arg1 ;
-(unsigned short)getRawMsgLength;
-(void)reinit;
-(int)parseMsgBuffer:(unsigned long long)arg1 :(const char*)arg2 :(unsigned short)arg3 :(unsigned short*)arg4 ;
-(unsigned short)getParamCount;
-(id)getGroupParams;
-(void)setGroupParams:(id)arg1 ;
-(unsigned short)generateRawMsgBuffer:(char*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
