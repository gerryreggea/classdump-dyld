/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MBBackup, MBSnapshot;

@interface RestorableBackupItem : NSObject {

	MBBackup* _backup;
	MBSnapshot* _snapshot;

}

@property (nonatomic,retain) MBBackup * backup;                  //@synthesize backup=_backup - In the implementation block
@property (nonatomic,retain) MBSnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
+(id)restorableBackupItemWithBackup:(id)arg1 snapshot:(id)arg2 ;
-(void)setSnapshot:(id)arg1 ;
-(void)setBackup:(id)arg1 ;
-(id)backup;
-(BOOL)isThisDevice;
-(id)deviceInfoString;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)snapshot;
-(BOOL)isCompatible;
-(id)dateString;
@end
