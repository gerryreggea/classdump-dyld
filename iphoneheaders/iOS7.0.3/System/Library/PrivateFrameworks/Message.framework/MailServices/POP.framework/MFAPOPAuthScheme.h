/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAuthScheme.h>

@interface MFAPOPAuthScheme : MFAuthScheme
+(void)load;
-(BOOL)requiresPassword;
-(id)name;
-(BOOL)supportsAccountType:(id)arg1 ;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(Class)authenticatorClass;
-(BOOL)hasEncryption;
-(id)humanReadableName;
@end

