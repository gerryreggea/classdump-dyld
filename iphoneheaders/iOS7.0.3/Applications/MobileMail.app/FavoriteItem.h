/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface FavoriteItem : NSObject {

	unsigned _type;
	NSString* _syncKey;
	BOOL _selected;

}

@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
+(id)itemForAccount:(id)arg1 ;
+(id)itemForUnifiedMailboxWithType:(int)arg1 selected:(BOOL)arg2 ;
+(id)itemForInboxWithAccount:(id)arg1 selected:(BOOL)arg2 ;
+(id)itemForSharedMailboxWithType:(unsigned)arg1 selected:(BOOL)arg2 ;
+(id)itemForMailbox:(id)arg1 selected:(BOOL)arg2 ;
+(id)itemFromDictionary:(id)arg1 ;
+(id)itemForOutbox;
-(void)configureCell:(id)arg1 ;
-(id)representingMailboxes;
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(BOOL)isMovable;
-(void)wasAddedToCollection:(id)arg1 ;
-(void)wasRemovedFromCollecion:(id)arg1 ;
-(BOOL)doesSync;
-(id)persistentIdForMigration;
-(id)syncValue;
-(void)wasChangedExternally;
-(int)_defaultCellAccessoryType;
-(id)defaultIcon;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)syncKey;
-(id)account;
-(BOOL)isDeletable;
@end
