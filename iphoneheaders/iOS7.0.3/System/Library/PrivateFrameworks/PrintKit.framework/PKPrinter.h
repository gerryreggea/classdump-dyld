/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSString, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableArray, NSArray, NSNumber;

@interface PKPrinter : NSObject {

	NSString* name;
	int type;
	int accessState;
	NSDictionary* printInfoSupported;
	http_s* job_http;
	NSMutableDictionary* privateData;
	NSMutableSet* mediaReady;
	NSMutableArray* rolls;
	NSMutableDictionary* specialFeedOrientation;
	NSArray* printScalingSupported;
	NSArray* mandatoryJobAttributes;
	NSString* quotaManagementURL;
	int maxPDFKBytes;
	int maxJPEGKBytes;
	int maxJPEGXDimension;
	int maxJPEGYDimension;
	int maxCopies;
	int preferred_landscape;
	BOOL isLocal;
	BOOL hasIdentifyPrinterOp;
	BOOL connectionShouldNotBeTrusted;
	BOOL isFromMCProfile;
	int kind;

}

@property (@dynamic) int accessState; 
@property (@dynamic,retain) NSDictionary * TXTRecord; 
@property (@dynamic,retain) NSString * hostname; 
@property (@dynamic,retain) NSNumber * port; 
@property (readonly) NSString * scheme; 
@property (readonly) NSString * name; 
@property (readonly) int kind; 
@property (readonly) int jobTypesSupported; 
@property (readonly) int type; 
@property (readonly) int accessState; 
@property (@dynamic,readonly) BOOL hasPrintInfoSupported; 
@property (readonly) NSDictionary * printInfoSupported; 
@property (@dynamic,readonly) BOOL isAdobeRGBSupported; 
@property (assign) BOOL isLocal; 
@property (assign) BOOL isFromMCProfile; 
@property (@dynamic,readonly) BOOL isIPPS; 
@property (@dynamic,readonly) NSString * uuid; 
@property (readonly) BOOL hasIdentifyPrinterOp; 
@property (readonly) BOOL needsSetup; 
@property (readonly) BOOL setupSupportsPasswordScope; 
+(BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2 ;
+(id)printerWithName:(id)arg1 ;
+(BOOL)urfIsOptional;
+(id)requiredPDL;
+(id)hardcodedURIs;
+(id)nameForHardcodedURI:(id)arg1 ;
+(ipp_s*)getAttributes:(const char**)arg1 count:(int)arg2 fromURI:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPort:(id)arg1 ;
-(BOOL)resolveWithTimeout:(int)arg1 ;
-(void)resolve;
-(void)updateType;
-(void)dealloc;
-(id)description;
-(id)scheme;
-(int)type;
-(id)name;
-(id)location;
-(id)displayName;
-(id)printInfoSupported;
-(BOOL)hasPrintInfoSupported;
-(BOOL)knowsReadyPaperList;
-(BOOL)isPaperReady:(id)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 forPhoto:(BOOL)arg2 ;
-(id)availableRollPapersPreferBorderless:(BOOL)arg1 ;
-(id)paperListForDuplexMode:(id)arg1 ;
-(void)cancelUnlock;
-(int)kind;
-(int)accessState;
-(BOOL)needsSetup;
-(void)unlockWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4 ;
-(int)startJob:(id)arg1 ofType:(id)arg2 ;
-(int)finishJob;
-(int)abortJob;
-(int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3 ;
-(int)sendData:(const char*)arg1 ofLength:(int)arg2 ;
-(void)validatePassCode:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)setupSupportsPasswordScope;
-(void)setupWithOptions:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)showPassCodeForSetupWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setHostname:(id)arg1 ;
-(id)uuid;
-(BOOL)isLocal;
-(id)initWithName:(id)arg1 TXT:(id)arg2 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 TXTRecord:(id)arg2 ;
-(BOOL)isIPPS;
-(BOOL)isBonjour;
-(void)setIsFromMCProfile:(BOOL)arg1 ;
-(id)TXTRecord;
-(void)setAccessStateFromTXT:(id)arg1 ;
-(void)reconfirmWithForce:(BOOL)arg1 ;
-(id)rollFromAttrs:(ipp_s*)arg1 ;
-(BOOL)hasMatchingLoadedRoll:(id)arg1 ;
-(ipp_s*)getPrinterAttributes;
-(void)createMediaReadyFromAttrs:(ipp_s*)arg1 ;
-(id)rollReadyPaperListForPhotoWithContentSize:(CGSize)arg1 ;
-(id)rollReadyPaperListForDocumentWithContentSize:(CGSize)arg1 ;
-(int)finalizeJob:(int)arg1 ;
-(void)aggdAppsAndPrinters;
-(ipp_s*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3 ;
-(void)setPrivateObject:(id)arg1 forKey:(id)arg2 ;
-(id)privateObjectForKey:(id)arg1 ;
-(void)checkOperations:(ipp_s*)arg1 ;
-(int)jobTypesSupported;
-(int)feedOrientation:(id)arg1 ;
-(void)identifySelf;
-(BOOL)isAdobeRGBSupported;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 ;
-(BOOL)isFromMCProfile;
-(BOOL)hasIdentifyPrinterOp;
-(void)setAccessState:(int)arg1 ;
-(void)setTXTRecord:(id)arg1 ;
-(id)hostname;
-(id)port;
-(id)localName;
@end

