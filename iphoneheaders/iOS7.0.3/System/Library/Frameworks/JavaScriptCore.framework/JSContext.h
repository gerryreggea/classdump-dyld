/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSVirtualMachine, JSWrapperMap, JSValue;

@interface JSContext : NSObject {

	JSVirtualMachine* m_virtualMachine;
	OpaqueJSContextRef m_context;
	JSWrapperMap* m_wrapperMap;
	Strong<JSC::JSObject>* m_exception;
	/*^block*/ id exceptionHandler;

}

@property (readonly) JSWrapperMap * wrapperMap; 
@property (retain) JSValue * exception; 
@property (copy) id exceptionHandler; 
@property (readonly) JSVirtualMachine * virtualMachine; 
+(id)currentThis;
+(id)currentArguments;
+(id)currentContext;
+(id)contextWithJSGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(id)initWithVirtualMachine:(id)arg1 ;
-(void)setExceptionHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)exceptionHandler;
-(id)valueFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(OpaqueJSContextRef)JSGlobalContextRef;
-(id)evaluateScript:(id)arg1 ;
-(id)wrapperMap;
-(id)globalObject;
-(id)virtualMachine;
-(void)notifyException:(OpaqueJSValueRef)arg1 ;
-(id)initWithGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(BOOL)boolFromNotifyException:(OpaqueJSValueRef)arg1 ;
-(void)beginCallbackWithData:(CallbackData*)arg1 thisValue:(OpaqueJSValueRef)arg2 argumentCount:(unsigned long)arg3 arguments:(const OpaqueJSValue*)arg4 ;
-(void)endCallbackWithData:(CallbackData*)arg1 ;
-(id)wrapperForObjCObject:(id)arg1 ;
-(id)wrapperForJSObject:(OpaqueJSValueRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setException:(id)arg1 ;
-(id)exception;
@end

