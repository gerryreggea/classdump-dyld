/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:56 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MFComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PLInvitationRecipient : NSObject {

	MFComposeRecipient* _mfRecipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,readonly) NSString * firstName; 
@property (nonatomic,readonly) NSString * lastName; 
@property (nonatomic,readonly) NSArray * allEmails;                          //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,readonly) NSArray * allPhones;                          //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
+(id)validPhoneNumberFromString:(id)arg1 ;
+(id)validEmailAddressFromComposeRecipient:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(id)firstName;
-(id)lastName;
-(id)invalidAddressString;
-(id)allEmails;
-(id)allPhones;
-(id)initWithRecipient:(id)arg1 ;
-(id)selectedPhoneString;
-(id)selectedEmailString;
@end
