/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSCore-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSString, NSNumber, NSDate, NSData, NSDictionary, NSMutableArray;

@interface IDSAppleRegistration : NSObject <NSCopying> {

	BOOL _needsMigration;
	BOOL _needsProvisioning;
	BOOL _runningSimpleAuthentication;
	BOOL _isDisabled;
	BOOL _shouldRegisterUsingDSHandle;
	BOOL _shouldAutoRegisterAllHandles;
	NSArray* _vettedEmails;
	NSString* _dsHandle;
	NSString* _profileID;
	NSNumber* _IDSVersion;
	NSNumber* _applicationVersion;
	NSString* _environment;
	NSDate* _registrationDate;
	NSDate* _nextRegistrationDate;
	NSData* _pushToken;
	NSNumber* _isC2K;
	int _registrationStatus;
	int _registrationType;
	int _retries;
	int _absintheRetries;
	NSString* _mainID;
	NSArray* _dependantRegistrations;
	NSString* _regionID;
	NSString* _deviceName;
	NSString* _regionBasePhoneNumber;
	NSDictionary* _regionServerContext;
	NSData* _registrationCert;
	NSDictionary* _userInfo;
	NSString* _serviceType;
	NSString* _guid;
	NSMutableArray* _candidateEmails;
	NSDictionary* _migrationContext;
	NSNumber* _identityVersion;
	NSString* _keyPairSignature;
	NSString* _idsUserID;
	NSString* _serviceIdentifier;
	NSArray* _uris;

}

@property (nonatomic,@dynamic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSDictionary * migrationContext;                                 //@synthesize migrationContext=_migrationContext - In the implementation block
@property (assign,nonatomic) int registrationStatus;                                          //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (assign,nonatomic) int registrationType;                                            //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) NSString * serviceIdentifier;                                    //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) int retries;                                                     //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) int absintheRetries;                                             //@synthesize absintheRetries=_absintheRetries - In the implementation block
@property (assign,nonatomic) BOOL needsMigration;                                             //@synthesize needsMigration=_needsMigration - In the implementation block
@property (assign,nonatomic) BOOL needsProvisioning;                                          //@synthesize needsProvisioning=_needsProvisioning - In the implementation block
@property (assign,nonatomic) BOOL runningSimpleAuthentication;                                //@synthesize runningSimpleAuthentication=_runningSimpleAuthentication - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,readonly) NSString * userID; 
@property (nonatomic,copy) NSString * mainID;                                                 //@synthesize mainID=_mainID - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                             //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSDate * registrationDate;                                         //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,copy) NSDate * nextRegistrationDate;                                     //@synthesize nextRegistrationDate=_nextRegistrationDate - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                                                //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,copy) NSString * email; 
@property (nonatomic,readonly) NSArray * confirmedEmails; 
@property (nonatomic,retain) NSArray * vettedEmails;                                          //@synthesize vettedEmails=_vettedEmails - In the implementation block
@property (setter=setDSHandle:,nonatomic,retain) NSString * dsHandle;                         //@synthesize dsHandle=_dsHandle - In the implementation block
@property (nonatomic,readonly) NSArray * candidateEmails; 
@property (nonatomic,copy) NSString * environment;                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * keyPairSignature;                                       //@synthesize keyPairSignature=_keyPairSignature - In the implementation block
@property (nonatomic,copy) NSNumber * isCDMA;                                                 //@synthesize isC2K=_isC2K - In the implementation block
@property (nonatomic,copy) NSNumber * IDSVersion;                                             //@synthesize IDSVersion=_IDSVersion - In the implementation block
@property (nonatomic,copy) NSNumber * applicationVersion;                                     //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSNumber * identityVersion;                                        //@synthesize identityVersion=_identityVersion - In the implementation block
@property (nonatomic,copy) NSString * profileID;                                              //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,copy) NSString * regionID;                                               //@synthesize regionID=_regionID - In the implementation block
@property (nonatomic,copy) NSString * regionBasePhoneNumber;                                  //@synthesize regionBasePhoneNumber=_regionBasePhoneNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * regionServerContext;                                //@synthesize regionServerContext=_regionServerContext - In the implementation block
@property (nonatomic,readonly) NSString * signaturePrefix; 
@property (nonatomic,copy) NSDictionary * userInfo;                                           //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * dependantRegistrations;                                  //@synthesize dependantRegistrations=_dependantRegistrations - In the implementation block
@property (nonatomic,copy) NSString * idsUserID;                                              //@synthesize idsUserID=_idsUserID - In the implementation block
@property (nonatomic,copy) NSArray * uris;                                                    //@synthesize uris=_uris - In the implementation block
@property (nonatomic,copy) NSData * authenticationCert; 
@property (nonatomic,copy) NSData * registrationCert;                                         //@synthesize registrationCert=_registrationCert - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoRegisterAllHandles;                               //@synthesize shouldAutoRegisterAllHandles=_shouldAutoRegisterAllHandles - In the implementation block
@property (assign,nonatomic) BOOL shouldRegisterUsingDSHandle;                                //@synthesize shouldRegisterUsingDSHandle=_shouldRegisterUsingDSHandle - In the implementation block
@property (nonatomic,readonly) NSArray * emailsToRegister; 
@property (nonatomic,readonly) BOOL hasSentinel; 
@property (nonatomic,readonly) BOOL canRegister; 
@property (nonatomic,readonly) BOOL canSendRegistration; 
@property (nonatomic,copy) NSMutableArray * _candidateEmails;                                 //@synthesize candidateEmails=_candidateEmails - In the implementation block
-(id)serviceIdentifier;
-(void)setPhoneNumber:(id)arg1 ;
-(BOOL)canRegister;
-(void)setEnvironment:(id)arg1 ;
-(void)setPushToken:(id)arg1 ;
-(id)pushToken;
-(void)setServiceIdentifier:(id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)environment;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)userInfo;
-(id)phoneNumber;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(id)arg1 ;
-(void)setApplicationVersion:(id)arg1 ;
-(void)setEmail:(id)arg1 ;
-(id)deviceName;
-(void)setServiceType:(id)arg1 ;
-(id)serviceType;
-(id)authenticationToken;
-(void)setProfileID:(id)arg1 ;
-(id)profileID;
-(BOOL)isDisabled;
-(void)setRegionID:(id)arg1 ;
-(void)setRegionBasePhoneNumber:(id)arg1 ;
-(void)setRegionServerContext:(id)arg1 ;
-(int)registrationStatus;
-(void)setRegistrationStatus:(int)arg1 ;
-(void)removeCandidateEmail:(id)arg1 ;
-(BOOL)saveToKeychain;
-(BOOL)removeBinding:(id)arg1 ;
-(void)addCandidateEmail:(id)arg1 ;
-(id)vettedEmails;
-(void)setVettedEmails:(id)arg1 ;
-(id)dsHandle;
-(void)setDSHandle:(id)arg1 ;
-(void)setAuthenticationToken:(id)arg1 ;
-(int)registrationType;
-(id)uris;
-(void)setUris:(id)arg1 ;
-(void)setRegistrationType:(int)arg1 ;
-(id)idsUserID;
-(id)mainID;
-(void)setMainID:(id)arg1 ;
-(id)_userID;
-(id)candidateEmails;
-(id)confirmedEmails;
-(id)isCDMA;
-(id)registrationCert;
-(id)userID;
-(id)regionID;
-(id)regionBasePhoneNumber;
-(id)authenticationCert;
-(id)nextRegistrationDate;
-(BOOL)shouldRegisterUsingDSHandle;
-(BOOL)shouldAutoRegisterAllHandles;
-(BOOL)hasSentinel;
-(id)emailsToRegister;
-(BOOL)removeFromKeychain;
-(id)signaturePrefix;
-(BOOL)canSendRegistration;
-(void)setAuthenticationCert:(id)arg1 ;
-(id)IDSVersion;
-(void)setIDSVersion:(id)arg1 ;
-(id)applicationVersion;
-(id)registrationDate;
-(void)setRegistrationDate:(id)arg1 ;
-(void)setNextRegistrationDate:(id)arg1 ;
-(void)setIsCDMA:(id)arg1 ;
-(void)setNeedsMigration:(BOOL)arg1 ;
-(BOOL)needsProvisioning;
-(void)setNeedsProvisioning:(BOOL)arg1 ;
-(int)retries;
-(void)setRetries:(int)arg1 ;
-(int)absintheRetries;
-(void)setAbsintheRetries:(int)arg1 ;
-(id)dependantRegistrations;
-(void)setDependantRegistrations:(id)arg1 ;
-(id)regionServerContext;
-(void)setRegistrationCert:(id)arg1 ;
-(id)_candidateEmails;
-(void)set_candidateEmails:(id)arg1 ;
-(id)migrationContext;
-(void)setMigrationContext:(id)arg1 ;
-(id)identityVersion;
-(void)setIdentityVersion:(id)arg1 ;
-(BOOL)runningSimpleAuthentication;
-(void)setRunningSimpleAuthentication:(BOOL)arg1 ;
-(void)setIsDisabled:(BOOL)arg1 ;
-(id)keyPairSignature;
-(void)setKeyPairSignature:(id)arg1 ;
-(void)setIdsUserID:(id)arg1 ;
-(void)setShouldRegisterUsingDSHandle:(BOOL)arg1 ;
-(void)setShouldAutoRegisterAllHandles:(BOOL)arg1 ;
-(id)_keychain_comparisonValue;
-(BOOL)_keychain_isEqual:(id)arg1 ;
-(id)guid;
-(BOOL)needsMigration;
-(id)email;
@end

