/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BKSystemApplication : NSObject {

	NSString* _jobLabel;
	NSString* _bundleIdentifier;
	int _pid;
	unsigned _port;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                      //@synthesize jobLabel=_jobLabel - In the implementation block
@property (assign,nonatomic) unsigned port;                          //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) int pid;                                //@synthesize pid=_pid - In the implementation block
-(id)jobLabel;
-(void)setJobLabel:(id)arg1 ;
-(void)setPort:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)bundleIdentifier;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(unsigned)port;
-(void)setBundleIdentifier:(id)arg1 ;
@end

