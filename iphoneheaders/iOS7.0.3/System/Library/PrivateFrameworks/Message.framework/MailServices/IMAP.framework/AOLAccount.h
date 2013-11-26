/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:07 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMAP/IMAPAccount.h>

@interface AOLAccount : IMAPAccount
+(BOOL)setupIsAutomated;
+(id)descriptionPlaceholder;
+(int)advancedSpecifiersOptions;
+(id)userInfoForAccountTopLevelSpecifier;
+(id)_usernameWithHostname:(id)arg1 ;
+(id)emailAddressHostPart;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
+(id)displayedAccountTypeString;
+(BOOL)usesSSL;
+(BOOL)isPredefinedAccountType;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(BOOL)usernameIsEmailAddress;
+(id)hostname;
-(void)setUsername:(id)arg1 ;
-(BOOL)usesSSL;
-(void)setUsesSSL:(BOOL)arg1 ;
-(void)setHostname:(id)arg1 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)emailAddresses;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(id)displayUsername;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)statisticsKind;
-(id)iconString;
-(id)hostname;
@end
