/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TCPConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, NSMutableData, TCPServer;

@interface TCPConnection : NSObject {

	<TCPConnectionDelegate>* _delegate;
	int _socket;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	NSObject<OS_dispatch_source>* _inputSource;
	NSObject<OS_dispatch_source>* _outputSource;
	BOOL _shutdown;
	BOOL _outputSourceSuspended;
	BOOL _inputSourceCancelled;
	BOOL _outputSourceCancelled;
	NSMutableArray* _outputMessageQueue;
	NSMutableData* _incomingData;
	TCPServer* _server;

}

@property (assign,nonatomic) <TCPConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)TCPConnectionWithPort:(unsigned short)arg1 ;
+(id)TCPConnectionWithResolvedNetService:(id)arg1 ;
-(void)_shutdown;
-(void)startReceiving;
-(void)_createOutputSource;
-(void)_createInputSource;
-(void)_setOutputSourceSuspended:(BOOL)arg1 ;
-(void)_handleOutput;
-(void)_dispatchSourceCancelled;
-(void)_handleInput;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)sendMessage:(id)arg1 ;
-(id)initWithServer:(id)arg1 socket:(int)arg2 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)_processIncomingBytes:(const char*)arg1 length:(long)arg2 ;
@end

