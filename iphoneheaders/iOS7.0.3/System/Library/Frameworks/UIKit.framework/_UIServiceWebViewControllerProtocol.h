/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:19 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol _UIServiceWebViewControllerProtocol <NSObject>
@required
-(void)reload;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)loadEncodedRequest:(id)arg1;
-(void)loadUserTypedAddress:(id)arg1;
-(void)setShouldDecidePolicyRemotely:(BOOL)arg1;
-(void)configureWithEncodedSettings:(id)arg1;
-(void)_webContentSizeWithReplyHandler:(/*^block*/ id)arg1;
@end
