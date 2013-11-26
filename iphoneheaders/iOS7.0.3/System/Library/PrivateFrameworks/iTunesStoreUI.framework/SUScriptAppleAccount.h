/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccount, ACAccountStore, NSString, SUScriptAppleAccountType, SUScriptAppleAccountCredential;

@interface SUScriptAppleAccount : SUScriptObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (readonly) ACAccount * nativeAccount; 
@property (readonly) ACAccountStore * nativeAccountStore; 
@property (readonly) NSString * accountDescription; 
@property (readonly) SUScriptAppleAccountType * accountType; 
@property (readonly) SUScriptAppleAccountCredential * credential; 
@property (readonly) NSString * identifier; 
@property (readonly) NSString * username; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(void)reload;
-(id)identifier;
-(id)accountDescription;
-(id)username;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)nativeAccount;
-(id)initWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)accountType;
-(id)credential;
-(id)nativeAccountStore;
@end
