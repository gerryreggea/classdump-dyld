/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _workPhone;
	NSString* _mobilePhone;
	NSString* _company;
	NSString* _title;
	NSString* _homePhone;
	NSString* _alias;
	NSString* _office;
	NSString* _serverSource;
	NSString* _recordName;
	NSString* _faxPhone;
	NSString* _department;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _zip;
	NSString* _country;
	NSData* _jpegPhoto;
	NSString* _imService;
	NSString* _imUsername;
	NSString* _uri;
	NSString* _buildingName;
	NSString* _appleFloor;
	NSString* _pagerNumber;
	NSString* _postalAddress;
	NSString* _homePostalAddress;
	NSString* _principalPath;
	NSString* _preferredUserAddress;
	NSArray* _cuAddresses;
	NSString* _iPhone;
	NSString* _mainPhone;
	NSString* _workFaxPhone;
	NSString* _identifierOnServer;

}

@property (copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (copy) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (copy) NSString * lastName;                          //@synthesize lastName=_lastName - In the implementation block
@property (copy) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (copy) NSString * workPhone;                         //@synthesize workPhone=_workPhone - In the implementation block
@property (copy) NSString * mobilePhone;                       //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (copy) NSString * company;                           //@synthesize company=_company - In the implementation block
@property (copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (copy) NSString * alias;                             //@synthesize alias=_alias - In the implementation block
@property (copy) NSString * homePhone;                         //@synthesize homePhone=_homePhone - In the implementation block
@property (copy) NSString * office;                            //@synthesize office=_office - In the implementation block
@property (copy) NSString * serverSource;                      //@synthesize serverSource=_serverSource - In the implementation block
@property (copy) NSString * recordName;                        //@synthesize recordName=_recordName - In the implementation block
@property (copy) NSString * faxPhone;                          //@synthesize faxPhone=_faxPhone - In the implementation block
@property (copy) NSString * department;                        //@synthesize department=_department - In the implementation block
@property (copy) NSString * street;                            //@synthesize street=_street - In the implementation block
@property (copy) NSString * city;                              //@synthesize city=_city - In the implementation block
@property (copy) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (copy) NSString * zip;                               //@synthesize zip=_zip - In the implementation block
@property (copy) NSString * country;                           //@synthesize country=_country - In the implementation block
@property (copy) NSData * jpegPhoto;                           //@synthesize jpegPhoto=_jpegPhoto - In the implementation block
@property (copy) NSString * imService;                         //@synthesize imService=_imService - In the implementation block
@property (copy) NSString * imUsername;                        //@synthesize imUsername=_imUsername - In the implementation block
@property (copy) NSString * uri;                               //@synthesize uri=_uri - In the implementation block
@property (copy) NSString * buildingName;                      //@synthesize buildingName=_buildingName - In the implementation block
@property (copy) NSString * appleFloor;                        //@synthesize appleFloor=_appleFloor - In the implementation block
@property (copy) NSString * pagerNumber;                       //@synthesize pagerNumber=_pagerNumber - In the implementation block
@property (copy) NSString * postalAddress;                     //@synthesize postalAddress=_postalAddress - In the implementation block
@property (copy) NSString * homePostalAddress;                 //@synthesize homePostalAddress=_homePostalAddress - In the implementation block
@property (copy) NSString * principalPath;                     //@synthesize principalPath=_principalPath - In the implementation block
@property (copy) NSString * preferredUserAddress;              //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (copy) NSArray * cuAddresses;                        //@synthesize cuAddresses=_cuAddresses - In the implementation block
@property (copy) NSString * iPhone;                            //@synthesize iPhone=_iPhone - In the implementation block
@property (copy) NSString * mainPhone;                         //@synthesize mainPhone=_mainPhone - In the implementation block
@property (copy) NSString * workFaxPhone;                      //@synthesize workFaxPhone=_workFaxPhone - In the implementation block
@property (retain) NSString * identifierOnServer;              //@synthesize identifierOnServer=_identifierOnServer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void*)newAddressBookRecordWithSource:(void*)arg1 ;
-(void)setCountry:(id)arg1 ;
-(id)workPhone;
-(id)mobilePhone;
-(id)homePhone;
-(id)faxPhone;
-(id)pagerNumber;
-(id)iPhone;
-(id)mainPhone;
-(id)workFaxPhone;
-(id)company;
-(id)city;
-(id)zip;
-(id)postalAddress;
-(id)homePostalAddress;
-(id)jpegPhoto;
-(id)imUsername;
-(id)imService;
-(id)buildingName;
-(id)appleFloor;
-(id)identifierOnServer;
-(void)setCity:(id)arg1 ;
-(id)alias;
-(void)setAlias:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)state;
-(void)setState:(id)arg1 ;
-(id)title;
-(id)displayName;
-(void)setEmailAddress:(id)arg1 ;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(void)setPreferredUserAddress:(id)arg1 ;
-(id)cuAddresses;
-(void)setCuAddresses:(id)arg1 ;
-(id)preferredUserAddress;
-(void)setOffice:(id)arg1 ;
-(void)setCompany:(id)arg1 ;
-(void)setHomePhone:(id)arg1 ;
-(void)setMobilePhone:(id)arg1 ;
-(void)setWorkPhone:(id)arg1 ;
-(id)office;
-(void)setJpegPhoto:(id)arg1 ;
-(void)setIdentifierOnServer:(id)arg1 ;
-(void)setPagerNumber:(id)arg1 ;
-(void)setDepartment:(id)arg1 ;
-(id)department;
-(id)serverSource;
-(id)recordName;
-(BOOL)isEqualToDAContactSearchResultElement:(id)arg1 ;
-(void)setServerSource:(id)arg1 ;
-(void)setRecordName:(id)arg1 ;
-(void)setFaxPhone:(id)arg1 ;
-(void)setZip:(id)arg1 ;
-(void)setImService:(id)arg1 ;
-(void)setImUsername:(id)arg1 ;
-(void)setBuildingName:(id)arg1 ;
-(void)setAppleFloor:(id)arg1 ;
-(void)setPostalAddress:(id)arg1 ;
-(void)setHomePostalAddress:(id)arg1 ;
-(void)setIPhone:(id)arg1 ;
-(void)setMainPhone:(id)arg1 ;
-(void)setWorkFaxPhone:(id)arg1 ;
-(void)setStreet:(id)arg1 ;
-(id)emailAddress;
-(id)uri;
-(void)setDisplayName:(id)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)country;
-(void)setUri:(id)arg1 ;
-(id)street;
@end

