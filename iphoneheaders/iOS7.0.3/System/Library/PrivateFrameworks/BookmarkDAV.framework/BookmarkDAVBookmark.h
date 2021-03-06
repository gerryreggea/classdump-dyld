/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVLeafDataPayload.h>
#import <GeoServices/NSXMLParserDelegate.h>

@class NSURL, NSData, NSString, NSArray, NSMutableString, NSDictionary, CoreDAVErrorItem;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {

	NSURL* _bookmarkURL;
	NSURL* _serverID;
	NSString* _name;
	NSString* _syncKey;
	NSMutableString* _appleAttributeString;
	NSDictionary* _appleAttributes;
	int _parseState;
	int _ignoreLevel;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (readonly) NSURL * bookmarkURL;                               //@synthesize bookmarkURL=_bookmarkURL - In the implementation block
@property (readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (readonly) NSDictionary * appleAttributes;                    //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (retain) CoreDAVErrorItem * bulkUploadErrorItem;              //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (retain) NSURL * serverID;                                    //@synthesize serverID=_serverID - In the implementation block
@property (readonly) NSData * dataPayload; 
@property (readonly) NSString * syncKey;                                //@synthesize syncKey=_syncKey - In the implementation block
@property (readonly) NSArray * childrenOrder; 
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
-(id)name;
-(void)setPropertiesFromXBEL:(id)arg1 ;
-(id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5 ;
-(id)bookmarkURL;
-(id)appleAttributes;
-(id)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(id)dataPayload;
-(void)setServerID:(id)arg1 ;
-(id)serverID;
-(id)syncKey;
@end

