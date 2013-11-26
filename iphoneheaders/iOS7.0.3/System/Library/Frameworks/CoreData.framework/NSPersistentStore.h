/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSURL, NSDictionary;

@interface NSPersistentStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSString* _configurationName;
	NSURL* _url;
	NSDictionary* _options;
	id* _oidFactories;
	id _defaultFaultHandler;
	struct {
		unsigned isReadOnly : 1;
		unsigned cleanOnRemove : 1;
		unsigned isMDDirty : 1;
		unsigned _RESERVED : 29;
	}  _flags;
	void* _temporaryIDClass;
	id _externalRecordsMonitor;
	void* _reserved3;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)doURLStuff:(id)arg1 createdStubFile:(BOOL*)arg2 readOnly:(BOOL*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(void)initialize;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)configurationName;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(BOOL)arg2 ;
-(BOOL)load:(id*)arg1 ;
-(id)_rawMetadata__;
-(id)faultHandler;
-(BOOL)_isMetadataDirty;
-(void)_setMetadataDirty:(BOOL)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(void)doFilesystemCleanupOnRemove:(BOOL)arg1 ;
-(id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(BOOL)_unload:(id*)arg1 ;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(Class)faultHandlerClass;
-(Class)_objectIDClass;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_defaultMetadata;
-(void)_updateMetadata;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)type;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)identifier;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)options;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
-(id)persistentStoreCoordinator;
-(BOOL)isReadOnly;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(void)finalize;
-(void)setReadOnly:(BOOL)arg1 ;
@end
