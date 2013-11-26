/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableData, NSInputStream, NSOutputStream, NSMutableArray, NSObject;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {

	NSString* _remoteServiceName;
	NSString* _localServiceName;
	BOOL _connected;
	NSMutableData* _dataReceived;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _shouldSendHello;
	BOOL _readyToWrite;
	NSMutableData* _dataToSend;
	unsigned _currentSequenceNumber;
	NSMutableData* _dataToSendHoldingQueue;
	NSMutableArray* _receivedDataHoldingQueue;
	NSMutableArray* _messageReceiptHandlerList;
	NSMutableArray* _messageReceiptHandlerHoldingQueue;
	/*^block*/ id _receiveDataHandler;
	/*^block*/ id _connectedHandler;
	NSObject<OS_dispatch_queue>* _syncQueue;
	NSObject<OS_dispatch_queue>* _targetQueue;

}

@property (nonatomic,copy) NSString * remoteServiceName;                             //@synthesize remoteServiceName=_remoteServiceName - In the implementation block
@property (nonatomic,copy) id receiveDataHandler;                                    //@synthesize receiveDataHandler=_receiveDataHandler - In the implementation block
@property (nonatomic,copy) id connectedHandler;                                      //@synthesize connectedHandler=_connectedHandler - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * syncQueue;                //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) NSObject<OS_dispatch_queue> * targetQueue;              //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,copy) NSString * localServiceName;                              //@synthesize localServiceName=_localServiceName - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                            //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                          //@synthesize outputStream=_outputStream - In the implementation block
+(unsigned)receiveDataLimit;
+(unsigned)sendDataLimit;
+(void)checkConstants;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(id)syncQueue;
-(void)syncSendData;
-(void)setupInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)setInputStream:(id)arg1 ;
-(void)setOutputStream:(id)arg1 ;
-(void)syncAppendDataToSend:(id)arg1 ;
-(void)syncReadFromInputStream;
-(id)stringForStreamEventCode:(unsigned)arg1 ;
-(void)syncHandleInputStreamEvent:(unsigned)arg1 ;
-(void)syncHandleOutputStreamEvent:(unsigned)arg1 ;
-(void)connectToNetService:(id)arg1 ;
-(void)attachInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)outputStream;
-(void)dealloc;
-(void)invalidate;
-(void)setReceiveDataHandler:(/*^block*/ id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setConnectedHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)receiveDataHandler;
-(id)localServiceName;
-(id)initWithLocalServiceName:(id)arg1 ;
-(id)targetQueue;
-(/*^block*/ id)connectedHandler;
-(void)setSyncQueue:(id)arg1 ;
-(void)setLocalServiceName:(id)arg1 ;
-(void)syncSendHello;
-(void)syncReceivedData:(id)arg1 error:(id)arg2 ;
-(id)remoteServiceName;
-(void)syncCloseConnectionNow;
-(void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(void)setRemoteServiceName:(id)arg1 ;
-(void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned)arg2 ;
-(BOOL)shouldDecideAboutConnection;
-(void)syncSendAccept;
-(void)syncAcceptedConnection;
-(void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned)arg3 ;
-(void)setTargetQueue:(id)arg1 ;
-(id)inputStream;
@end
