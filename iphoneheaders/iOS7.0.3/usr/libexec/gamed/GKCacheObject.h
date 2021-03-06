/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface GKCacheObject : NSManagedObject
+(id)uniqueAttributeName;
+(id)fetchRequestForContext:(id)arg1 ;
+(id)relationshipKeyPathsForPrefetch;
+(id)fetchSortDescriptors;
+(id)objectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)allObjectsInContext:(id)arg1 ;
+(unsigned)countObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)firstObjectMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(void)deleteObjectsMatchingPredicate:(id)arg1 context:(id)arg2 ;
+(id)uniqueObjectIDLookupWithContext:(id)arg1 ;
+(id)attributesDescriptionsForAttributesWithKeys:(id)arg1 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(id)imageCacheKeyPathsByKey;
-(void)deleteCachedImage:(id)arg1 ;
-(id)updateImagesWithImageURLs:(id)arg1 ;
-(id)imageURLDictionary;
-(void)clearImages;
-(BOOL)hasImages;
-(id)internalRepresentation;
-(void)invalidate;
-(BOOL)isValid;
@end

