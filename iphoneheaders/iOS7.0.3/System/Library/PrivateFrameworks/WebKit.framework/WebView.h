/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebCore/WAKView.h>

@class WebViewPrivate, NSData;

@interface WebView : WAKView {

	WebViewPrivate* _private;

}

@property (setter=_setSourceApplicationAuditData:,getter=_sourceApplicationAuditData,nonatomic,copy) NSData * sourceApplicationAuditData; 
+(void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectedFrames:(int)arg7 ;
+(void)_setAcceleratedImageDecoding:(BOOL)arg1 ;
+(BOOL)canShowMIMEType:(id)arg1 ;
+(void)initialize;
+(void)_removeUserStyleSheetsFromGroup:(id)arg1 world:(id)arg2 ;
+(void)_addUserStyleSheetToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 ;
+(id)_productivityDocumentMIMETypes;
+(BOOL)_canHandleRequest:(id)arg1 ;
+(BOOL)isCharacterSmartReplaceExempt:(unsigned short)arg1 isPreviousCharacter:(BOOL)arg2 ;
+(unsigned)_cacheModel;
+(void)_setCacheModel:(unsigned)arg1 ;
+(void)purgeInactiveFontData;
+(BOOL)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3 allowingPlugins:(BOOL)arg4 ;
+(Class)_getPDFRepresentationClass;
+(BOOL)canShowMIMETypeAsHTML:(id)arg1 ;
+(BOOL)_canHandleRequest:(id)arg1 forMainFrame:(BOOL)arg2 ;
+(BOOL)shouldIncludeInWebKitStatistics;
+(id)sharedWebInspectorServer;
+(BOOL)_representationExistsForURLScheme:(id)arg1 ;
+(id)_generatedMIMETypeForURLScheme:(id)arg1 ;
+(Class)_getPDFViewClass;
+(void)_setPDFRepresentationClass:(Class)arg1 ;
+(void)_setPDFViewClass:(Class)arg1 ;
+(void)_registerPluginMIMEType:(id)arg1 ;
+(void)_unregisterPluginMIMEType:(id)arg1 ;
+(void)enableWebThread;
+(void)_setAllowsRoundingHacks:(BOOL)arg1 ;
+(void)registerForMemoryNotifications;
+(void)_makeAllWebViewsPerformSelector:(SEL)arg1 ;
+(id)_standardUserAgentWithApplicationName:(id)arg1 osMarketingVersion:(id)arg2 ;
+(void)_enableRemoteInspector;
+(void)drainLayerPool;
+(void)discardAllCompiledCode;
+(void)releaseFastMallocMemory;
+(void)_handleMemoryWarning;
+(void)garbageCollectNow;
+(void)_releaseMemoryNow;
+(void)registerViewClass:(Class)arg1 representationClass:(Class)arg2 forMIMEType:(id)arg3 ;
+(void)_unregisterViewClassAndRepresentationClassForMIMEType:(id)arg1 ;
+(id)_MIMETypeForFile:(id)arg1 ;
+(void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 injectedFrames:(int)arg8 ;
+(id)_standardUserAgentWithApplicationName:(id)arg1 ;
+(id)_supportedMIMETypes;
+(void)_clearPrivateBrowsingSessionCookieStorage;
+(void)willEnterBackgroundWithCompletionHandler:(/*^block*/ id)arg1 ;
+(void)_setAlwaysUsesComplexTextCodePath:(BOOL)arg1 ;
+(BOOL)_allowsRoundingHacks;
+(BOOL)canCloseAllWebViews;
+(void)closeAllWebViews;
+(BOOL)canShowFile:(id)arg1 ;
+(BOOL)_acceleratedImageDecoding;
+(void)_setAllowCookies:(BOOL)arg1 ;
+(BOOL)_allowCookies;
+(BOOL)_isUnderMemoryPressure;
+(void)_clearMemoryPressure;
+(BOOL)_shouldWaitForMemoryClearMessage;
+(void)_disableRemoteInspector;
+(void)_disableAutoStartRemoteInspector;
+(BOOL)_isRemoteInspectorEnabled;
+(BOOL)_hasRemoteInspectorSession;
+(void)_registerViewClass:(Class)arg1 representationClass:(Class)arg2 forURLScheme:(id)arg3 ;
+(id)_decodeData:(id)arg1 ;
+(void)_setShouldUseFontSmoothing:(BOOL)arg1 ;
+(BOOL)_shouldUseFontSmoothing;
+(void)_setMaximumImageSizeBeforeSubsampling:(unsigned)arg1 ;
+(unsigned)_maximumImageSizeBeforeSubsampling;
+(void)_removeOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(BOOL)arg4 ;
+(void)_resetOriginAccessWhitelists;
+(void)_addUserScriptToGroup:(id)arg1 world:(id)arg2 source:(id)arg3 url:(id)arg4 whitelist:(id)arg5 blacklist:(id)arg6 injectionTime:(int)arg7 ;
+(void)_removeUserScriptFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3 ;
+(void)_removeUserStyleSheetFromGroup:(id)arg1 world:(id)arg2 url:(id)arg3 ;
+(void)_removeUserScriptsFromGroup:(id)arg1 world:(id)arg2 ;
+(void)_removeAllUserContentFromGroup:(id)arg1 ;
+(void)_setDomainRelaxationForbidden:(BOOL)arg1 forURLScheme:(id)arg2 ;
+(void)_registerURLSchemeAsSecure:(id)arg1 ;
+(void)_registerURLSchemeAsAllowingLocalStorageAccessInPrivateBrowsing:(id)arg1 ;
+(void)_registerURLSchemeAsAllowingDatabaseAccessInPrivateBrowsing:(id)arg1 ;
+(void)_setLoadResourcesSerially:(BOOL)arg1 ;
+(BOOL)_HTTPPipeliningEnabled;
+(void)_setHTTPPipeliningEnabled:(BOOL)arg1 ;
+(void)_setTileCacheLayerPoolCapacity:(unsigned)arg1 ;
+(void)_cacheModelChangedNotification:(id)arg1 ;
+(void)_preferencesRemovedNotification:(id)arg1 ;
+(BOOL)_canShowMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2 ;
+(id)MIMETypesShownAsHTML;
+(void)setMIMETypesShownAsHTML:(id)arg1 ;
+(void)registerURLSchemeAsLocal:(id)arg1 ;
+(void)_preflightSpellChecker;
+(unsigned)_didSetCacheModel;
+(unsigned)_maxCacheModelInAnyInstance;
+(void)_preflightSpellCheckerNow:(id)arg1 ;
+(void)_reportException:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
+(void)_addOriginAccessWhitelistEntryWithSourceOrigin:(id)arg1 destinationProtocol:(id)arg2 destinationHost:(id)arg3 allowDestinationSubdomains:(BOOL)arg4 ;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(BOOL)_writeDataAtPath:(id)arg1 asArchive:(BOOL)arg2 ;
-(BOOL)_createSymlinkInDirectory:(id)arg1 pointingToPath:(id)arg2 ;
-(id)_quickLookContentFilePath;
-(void)setWebMailDelegate:(id)arg1 ;
-(void)setSmartInsertDeleteEnabled:(BOOL)arg1 ;
-(id)_webMailDelegate;
-(void)_insertNewlineInQuotedContent;
-(id)typingStyle;
-(void)scrollDOMRangeToVisible:(id)arg1 ;
-(void)updateLayoutIgnorePendingStyleSheets;
-(void)stopLoadingAndClear;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(id)undoManager;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(void)setGroupName:(id)arg1 ;
-(id)typingAttributes;
-(void)insertText:(id)arg1 ;
-(int)selectionAffinity;
-(void)setEditable:(BOOL)arg1 ;
-(id)selectedDOMRange;
-(void)setPreferences:(id)arg1 ;
-(id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4 ;
-(id)mainFrame;
-(void)setPolicyDelegate:(id)arg1 ;
-(void)setEditingDelegate:(id)arg1 ;
-(void)setCustomUserAgent:(id)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2 ;
-(void)selectAll:(id)arg1 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(void)viewDidMoveToWindow;
-(BOOL)_setMediaLayer:(id)arg1 forPluginView:(id)arg2 ;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg1 ;
-(void)_setUIKitDelegate:(id)arg1 ;
-(id)inspector;
-(void)applyStyle:(id)arg1 ;
-(id)styleAtSelectionStart;
-(void)setTypingStyle:(id)arg1 ;
-(void)_clearDelegates;
-(void)close;
-(void)_setNetworkStateIsOnline:(BOOL)arg1 ;
-(void)stopLoading:(id)arg1 ;
-(id)selectedFrame;
-(id)groupName;
-(void)_setWantsTelephoneNumberParsing:(BOOL)arg1 ;
-(id)backForwardList;
-(CGSize)_fixedLayoutSize;
-(void)_setFixedLayoutSize:(CGSize)arg1 ;
-(unsigned)_renderTreeSize;
-(BOOL)_isProcessingUserGesture;
-(void)_viewGeometryDidChange;
-(void)_setCustomFixedPositionLayoutRectInWebThread:(CGRect)arg1 synchronize:(BOOL)arg2 ;
-(void)_setCustomFixedPositionLayoutRect:(CGRect)arg1 ;
-(id)_fixedPositionContent;
-(id)preferences;
-(id)editingDelegate;
-(void)deleteBackward:(id)arg1 ;
-(void)insertDictationPhrases:(id)arg1 metadata:(id)arg2 ;
-(void)setCaretChangeListener:(id)arg1 ;
-(void)toggleBold:(id)arg1 ;
-(void)toggleItalic:(id)arg1 ;
-(BOOL)_pluginsAreRunning;
-(id)_UIKitDelegate;
-(id)_formDelegate;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(BOOL)isLoading;
-(void)setFrameLoadDelegate:(id)arg1 ;
-(void)setUIDelegate:(id)arg1 ;
-(void)setResourceLoadDelegate:(id)arg1 ;
-(void)_setFontFallbackPrefersPictographs:(BOOL)arg1 ;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(id)mainFrameURL;
-(void)reload:(id)arg1 ;
-(BOOL)goToBackForwardItem:(id)arg1 ;
-(void)goBack:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(int)_paginationMode;
-(void)_setPaginationMode:(int)arg1 ;
-(BOOL)_paginationBehavesLikeColumns;
-(void)_setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(float)_pageLength;
-(void)_setPageLength:(float)arg1 ;
-(float)_gapBetweenPages;
-(void)_setGapBetweenPages:(float)arg1 ;
-(unsigned)_pageCount;
-(id)customUserAgent;
-(BOOL)goBack;
-(BOOL)goForward;
-(BOOL)drawsBackground;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(Page*)page;
-(void)delete:(id)arg1 ;
-(void)_setFormDelegate:(id)arg1 ;
-(void)_setUIWebViewUserAgentWithBuildVersion:(id)arg1 ;
-(void)_overflowScrollPositionChangedTo:(CGPoint)arg1 forNode:(id)arg2 isUserScroll:(BOOL)arg3 ;
-(id)_touchEventRegions;
-(BOOL)defersCallbacks;
-(void)setDefersCallbacks:(BOOL)arg1 ;
-(void)setAllowsRemoteInspection:(BOOL)arg1 ;
-(void)setHostApplicationBundleId:(id)arg1 name:(id)arg2 ;
-(double)estimatedProgress;
-(BOOL)supportsTextEncoding;
-(unsigned)countMatchesForText:(id)arg1 options:(unsigned)arg2 highlight:(BOOL)arg3 limit:(unsigned)arg4 markMatches:(BOOL)arg5 ;
-(BOOL)findString:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)_isLoading;
-(void)setDownloadDelegate:(id)arg1 ;
-(void)setUsesPageCache:(BOOL)arg1 ;
-(void)setTextSizeMultiplier:(float)arg1 ;
-(float)textSizeMultiplier;
-(id)quickLookContentForURL:(id)arg1 ;
-(BOOL)acceptsFirstResponder;
-(void)finalize;
-(void)_dispatchTileDidDraw:(id)arg1 ;
-(void)_scheduleLayerFlushForPendingTileCacheRepaint;
-(void)_willStartScrollingOrZooming;
-(void)_didFinishScrollingOrZooming;
-(void)deleteForward:(id)arg1 ;
-(void)insertParagraphSeparator:(id)arg1 ;
-(void)moveDownAndModifySelection:(id)arg1 ;
-(void)moveLeftAndModifySelection:(id)arg1 ;
-(void)moveRightAndModifySelection:(id)arg1 ;
-(void)moveUpAndModifySelection:(id)arg1 ;
-(void)setNextKeyView:(id)arg1 ;
-(id)previousValidKeyView;
-(BOOL)usesPageCache;
-(id)_UIDelegateForwarder;
-(BOOL)_allowsMessaging;
-(id)_UIKitDelegateForwarder;
-(void)_closeWindow;
-(void)_mouseDidMoveOverElement:(id)arg1 modifierFlags:(unsigned)arg2 ;
-(id)_selectedOrMainFrame;
-(id)historyDelegate;
-(int)_keyboardUIMode;
-(void)_pushPerformingProgrammaticFocus;
-(void)_popPerformingProgrammaticFocus;
-(void)_setNeedsOneShotDrawingSynchronization:(BOOL)arg1 ;
-(void)_scheduleCompositingLayerFlush;
-(BOOL)_isStopping;
-(BOOL)_fetchCustomFixedPositionLayoutRect:(CGRect*)arg1 ;
-(BOOL)_canShowMIMEType:(id)arg1 ;
-(id)_UIDelegateForSelector:(SEL)arg1 ;
-(id)_frameLoadDelegateForwarder;
-(id)_resourceLoadDelegateForwarder;
-(id)_formDelegateForSelector:(SEL)arg1 ;
-(id)_deviceOrientationProvider;
-(id)downloadDelegate;
-(BOOL)isContinuousSpellCheckingEnabled;
-(id)_editingDelegateForwarder;
-(BOOL)_shouldChangeSelectedDOMRange:(id)arg1 toDOMRange:(id)arg2 affinity:(int)arg3 stillSelecting:(BOOL)arg4 ;
-(BOOL)_isClosing;
-(void)insertBacktab:(id)arg1 ;
-(void)insertTab:(id)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(Frame*)_mainCoreFrame;
-(float)_realZoomMultiplier;
-(BOOL)_realZoomMultiplierIsTextOnly;
-(void)_setZoomMultiplier:(float)arg1 isTextOnly:(BOOL)arg2 ;
-(BOOL)shouldUpdateWhileOffscreen;
-(BOOL)_includesFlattenedCompositingLayersWhenDrawingToBitmap;
-(void)_stopAllPlugIns;
-(void)_startAllPlugIns;
-(void)_addObject:(id)arg1 forIdentifier:(unsigned long)arg2 ;
-(id)_objectForIdentifier:(unsigned long)arg1 ;
-(void)_removeObjectForIdentifier:(unsigned long)arg1 ;
-(void)_didCommitLoadForFrame:(id)arg1 ;
-(id)_policyDelegateForwarder;
-(void)setMainFrameDocumentReady:(BOOL)arg1 ;
-(id)_downloadURL:(id)arg1 ;
-(void)_setGlobalHistoryItem:(HistoryItem*)arg1 ;
-(void)_stopAllPlugInsForPageCache;
-(void)_restorePlugInsFromCache;
-(String*)_userAgentString;
-(id)_pluginForExtension:(id)arg1 ;
-(id)_pluginForMIMEType:(id)arg1 ;
-(id)_videoProxyPluginForMIMEType:(id)arg1 ;
-(id)mediaStyle;
-(id)_sourceApplicationAuditData;
-(void)scrollToBeginningOfDocument:(id)arg1 ;
-(void)scrollToEndOfDocument:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(void)scrollLineUp:(id)arg1 ;
-(void)scrollLineDown:(id)arg1 ;
-(id)_webcore_effectiveFirstResponder;
-(BOOL)_useFixedLayout;
-(id)_geolocationProvider;
-(void)_geolocationDidChangePosition:(id)arg1 ;
-(void)_geolocationDidFailWithMessage:(id)arg1 ;
-(void)_resetAllGeolocationPermission;
-(void)_documentScaleChanged;
-(BOOL)_isUsingAcceleratedCompositing;
-(BOOL)maintainsInactiveSelection;
-(BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4 startInSelection:(BOOL)arg5 ;
-(BOOL)_isPerformingProgrammaticFocus;
-(void)selectWord:(id)arg1 ;
-(BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4 ;
-(void)alignCenter:(id)arg1 ;
-(void)alignJustified:(id)arg1 ;
-(void)alignLeft:(id)arg1 ;
-(void)alignRight:(id)arg1 ;
-(void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1 ;
-(void)deleteToBeginningOfLine:(id)arg1 ;
-(void)deleteToBeginningOfParagraph:(id)arg1 ;
-(void)deleteToEndOfLine:(id)arg1 ;
-(void)deleteToEndOfParagraph:(id)arg1 ;
-(void)deleteToMark:(id)arg1 ;
-(void)deleteWordBackward:(id)arg1 ;
-(void)deleteWordForward:(id)arg1 ;
-(void)ignoreSpelling:(id)arg1 ;
-(void)indent:(id)arg1 ;
-(void)insertLineBreak:(id)arg1 ;
-(void)insertNewlineIgnoringFieldEditor:(id)arg1 ;
-(void)insertTabIgnoringFieldEditor:(id)arg1 ;
-(void)makeTextWritingDirectionNatural:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)moveBackwardAndModifySelection:(id)arg1 ;
-(void)moveForward:(id)arg1 ;
-(void)moveForwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphBackwardAndModifySelection:(id)arg1 ;
-(void)moveParagraphForwardAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfDocument:(id)arg1 ;
-(void)moveToBeginningOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfLine:(id)arg1 ;
-(void)moveToBeginningOfLineAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfParagraph:(id)arg1 ;
-(void)moveToBeginningOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToBeginningOfSentence:(id)arg1 ;
-(void)moveToBeginningOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToEndOfDocument:(id)arg1 ;
-(void)moveToEndOfDocumentAndModifySelection:(id)arg1 ;
-(void)moveToEndOfLine:(id)arg1 ;
-(void)moveToEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToEndOfParagraph:(id)arg1 ;
-(void)moveToEndOfParagraphAndModifySelection:(id)arg1 ;
-(void)moveToEndOfSentence:(id)arg1 ;
-(void)moveToEndOfSentenceAndModifySelection:(id)arg1 ;
-(void)moveToLeftEndOfLine:(id)arg1 ;
-(void)moveToLeftEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveToRightEndOfLine:(id)arg1 ;
-(void)moveToRightEndOfLineAndModifySelection:(id)arg1 ;
-(void)moveWordBackward:(id)arg1 ;
-(void)moveWordBackwardAndModifySelection:(id)arg1 ;
-(void)moveWordForward:(id)arg1 ;
-(void)moveWordForwardAndModifySelection:(id)arg1 ;
-(void)moveWordLeft:(id)arg1 ;
-(void)moveWordLeftAndModifySelection:(id)arg1 ;
-(void)moveWordRight:(id)arg1 ;
-(void)moveWordRightAndModifySelection:(id)arg1 ;
-(void)outdent:(id)arg1 ;
-(void)overWrite:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageDownAndModifySelection:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(void)pageUpAndModifySelection:(id)arg1 ;
-(void)pasteAsPlainText:(id)arg1 ;
-(void)selectLine:(id)arg1 ;
-(void)selectParagraph:(id)arg1 ;
-(void)selectSentence:(id)arg1 ;
-(void)selectToMark:(id)arg1 ;
-(void)setMark:(id)arg1 ;
-(void)subscript:(id)arg1 ;
-(void)superscript:(id)arg1 ;
-(void)swapWithMark:(id)arg1 ;
-(void)transpose:(id)arg1 ;
-(void)underline:(id)arg1 ;
-(void)unscript:(id)arg1 ;
-(void)yank:(id)arg1 ;
-(void)yankAndSelect:(id)arg1 ;
-(void)clearText:(id)arg1 ;
-(void)centerSelectionInVisibleArea:(id)arg1 ;
-(void)uppercaseWord:(id)arg1 ;
-(void)lowercaseWord:(id)arg1 ;
-(void)capitalizeWord:(id)arg1 ;
-(BOOL)smartInsertDeleteEnabled;
-(void)unmarkAllTextMatches;
-(id)rectsForTextMatches;
-(BOOL)canBeRemotelyInspected;
-(id)hostApplicationBundleId;
-(id)hostApplicationName;
-(id)remoteInspectorUserInfo;
-(void)setIndicatingForRemoteInspector:(BOOL)arg1 ;
-(void)setCurrentNodeHighlight:(id)arg1 ;
-(void)_removeFromAllWebViewsSet;
-(void)_addToAllWebViewsSet;
-(void)setApplicationNameForUserAgent:(id)arg1 ;
-(void)_updateScreenScaleFromWindow;
-(void)_wakWindowScreenScaleChanged:(id)arg1 ;
-(void)_wakWindowVisibilityChanged:(id)arg1 ;
-(BOOL)_isViewVisible;
-(void)_setVisibilityState:(int)arg1 isInitialState:(BOOL)arg2 ;
-(void)_preferencesChangedNotification:(id)arg1 ;
-(void)_preferencesChanged:(id)arg1 ;
-(void)_commonInitializationWithFrameName:(id)arg1 groupName:(id)arg2 ;
-(void)setMaintainsBackForwardList:(BOOL)arg1 ;
-(void)_closePluginDatabases;
-(void)_closeWithFastTeardown;
-(void)setHostWindow:(id)arg1 ;
-(id)_notificationProvider;
-(id)preferencesIdentifier;
-(BOOL)allowsRemoteInspection;
-(BOOL)_needsPreHTML5ParserQuirks;
-(BOOL)_needsUnrestrictedGetMatchedCSSRules;
-(BOOL)interactiveFormValidationEnabled;
-(int)validationMessageTimerMagnification;
-(void)caretChanged;
-(void)removeAllCaretChangeListeners;
-(BOOL)_locked_plugInsAreRunningInFrame:(id)arg1 ;
-(void)_locked_recursivelyPerformPlugInSelector:(SEL)arg1 inFrame:(id)arg2 ;
-(void)_synchronizeCustomFixedPositionLayoutRect;
-(id)currentNodeHighlight;
-(void)_setBrowserUserAgentProductVersion:(id)arg1 buildVersion:(id)arg2 bundleVersion:(id)arg3 ;
-(void)_dispatchPendingLoadRequests;
-(id)_initWithFrame:(CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3 usesDocumentViews:(BOOL)arg4 ;
-(void)_viewWillDrawInternal;
-(void)_replaceCurrentHistoryItem:(id)arg1 ;
-(BOOL)_viewClass:(Class*)arg1 andRepresentationClass:(Class*)arg2 forMIMEType:(id)arg3 ;
-(BOOL)_isClosed;
-(void)_dispatchUnloadEvent;
-(void)_setResourceLoadSchedulerSuspended:(BOOL)arg1 ;
-(id)_openNewWindowWithRequest:(id)arg1 ;
-(void)setRemoteInspectorUserInfo:(id)arg1 ;
-(void)_loadBackForwardListFromOtherView:(id)arg1 ;
-(id)_formDelegateForwarder;
-(void)_cacheResourceLoadDelegateImplementations;
-(void)_cacheFrameLoadDelegateImplementations;
-(void)_cacheScriptDebugDelegateImplementations;
-(void)_cacheHistoryDelegateImplementations;
-(id)caretChangeListener;
-(id)caretChangeListeners;
-(void)addCaretChangeListener:(id)arg1 ;
-(void)removeCaretChangeListener:(id)arg1 ;
-(void)_setInViewSourceMode:(BOOL)arg1 ;
-(BOOL)_inViewSourceMode;
-(void)_setUseFastImageScalingMode:(BOOL)arg1 ;
-(BOOL)_inFastImageScalingMode;
-(BOOL)_cookieEnabled;
-(void)_setCookieEnabled:(BOOL)arg1 ;
-(void)_destroyAllPlugIns;
-(void)_clearBackForwardCache;
-(void)_setNeedsUnrestrictedGetMatchedCSSRules:(BOOL)arg1 ;
-(void)_attachScriptDebuggerToAllFrames;
-(void)_detachScriptDebuggerFromAllFrames;
-(void)_setAllowsMessaging:(BOOL)arg1 ;
-(id)_globalHistoryItem;
-(id)textIteratorForRect:(CGRect)arg1 ;
-(void)_executeCoreCommandByName:(id)arg1 value:(id)arg2 ;
-(void)_setCustomHTMLTokenizerTimeDelay:(double)arg1 ;
-(void)_setCustomHTMLTokenizerChunkSize:(int)arg1 ;
-(void)_clearMainFrameName;
-(void)setSelectTrailingWhitespaceEnabled:(BOOL)arg1 ;
-(BOOL)isSelectTrailingWhitespaceEnabled;
-(void)setMemoryCacheDelegateCallsEnabled:(BOOL)arg1 ;
-(BOOL)areMemoryCacheDelegateCallsEnabled;
-(BOOL)_postsAcceleratedCompositingNotifications;
-(void)_setPostsAcceleratedCompositingNotifications:(BOOL)arg1 ;
-(void)_setBaseCTM:(CGAffineTransform)arg1 forContext:(CGContextRef)arg2 ;
-(void)setInteractiveFormValidationEnabled:(BOOL)arg1 ;
-(void)setValidationMessageTimerMagnification:(int)arg1 ;
-(BOOL)_isSoftwareRenderable;
-(void)_setIncludesFlattenedCompositingLayersWhenDrawingToBitmap:(BOOL)arg1 ;
-(void)setTracksRepaints:(BOOL)arg1 ;
-(BOOL)isTrackingRepaints;
-(void)resetTrackedRepaints;
-(id)trackedRepaintRects;
-(void)_updateVisibilityState;
-(void)_updateActiveState;
-(BOOL)allowsNewCSSAnimationsWhileSuspended;
-(void)setAllowsNewCSSAnimationsWhileSuspended:(BOOL)arg1 ;
-(BOOL)cssAnimationsSuspended;
-(void)setCSSAnimationsSuspended:(BOOL)arg1 ;
-(void)_scaleWebView:(float)arg1 atOrigin:(CGPoint)arg2 ;
-(float)_viewScaleFactor;
-(void)_setUseFixedLayout:(BOOL)arg1 ;
-(void)_listenForLayoutMilestones:(unsigned)arg1 ;
-(unsigned)_layoutMilestones;
-(unsigned)markAllMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 highlight:(BOOL)arg3 limit:(unsigned)arg4 ;
-(unsigned)countMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 highlight:(BOOL)arg3 limit:(unsigned)arg4 markMatches:(BOOL)arg5 ;
-(BOOL)_wantsTelephoneNumberParsing;
-(BOOL)_webGLEnabled;
-(void)_setWebGLEnabled:(BOOL)arg1 ;
-(void)_setSourceApplicationAuditData:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3 ;
-(id)_focusedFrame;
-(float)_zoomMultiplier:(BOOL)arg1 ;
-(id)customTextEncodingName;
-(id)_mainFrameOverrideEncoding;
-(id)_frameViewAtWindowPoint:(CGPoint)arg1 ;
-(id)_elementAtWindowPoint:(CGPoint)arg1 ;
-(BOOL)_isMIMETypeRegisteredAsPlugin:(id)arg1 ;
-(id)_initWithArguments:(id)arg1 ;
-(void)setShouldCloseWithWindow:(BOOL)arg1 ;
-(BOOL)shouldCloseWithWindow;
-(void)setPreferencesIdentifier:(id)arg1 ;
-(BOOL)_canZoomOut:(BOOL)arg1 ;
-(BOOL)_canZoomIn:(BOOL)arg1 ;
-(void)_zoomOut:(id)arg1 isTextOnly:(BOOL)arg2 ;
-(void)_zoomIn:(id)arg1 isTextOnly:(BOOL)arg2 ;
-(BOOL)_canResetZoom:(BOOL)arg1 ;
-(void)_resetZoom:(id)arg1 isTextOnly:(BOOL)arg2 ;
-(id)applicationNameForUserAgent;
-(void)setMediaStyle:(id)arg1 ;
-(void)setCustomTextEncodingName:(id)arg1 ;
-(id)userAgentForURL:(id)arg1 ;
-(id)hostWindow;
-(id)documentViewAtWindowPoint:(CGPoint)arg1 ;
-(void)setMainFrameURL:(id)arg1 ;
-(id)mainFrameIconURL;
-(id)mainFrameDocument;
-(void)setShouldUpdateWhileOffscreen:(BOOL)arg1 ;
-(void)takeStringURLFrom:(id)arg1 ;
-(void)reloadFromOrigin:(id)arg1 ;
-(BOOL)canMakeTextSmaller;
-(void)makeTextSmaller:(id)arg1 ;
-(BOOL)canMakeTextLarger;
-(void)makeTextLarger:(id)arg1 ;
-(BOOL)canMakeTextStandardSize;
-(void)makeTextStandardSize:(id)arg1 ;
-(unsigned)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned)arg3 highlight:(BOOL)arg4 limit:(unsigned)arg5 markMatches:(BOOL)arg6 ;
-(id)DOMRangeOfString:(id)arg1 relativeTo:(id)arg2 options:(unsigned)arg3 ;
-(void)setTabKeyCyclesThroughElements:(BOOL)arg1 ;
-(BOOL)tabKeyCyclesThroughElements;
-(void)setHistoryDelegate:(id)arg1 ;
-(BOOL)shouldClose;
-(BOOL)canMarkAllTextMatches;
-(void)scrollDOMRangeToVisible:(id)arg1 withInset:(float)arg2 ;
-(BOOL)allowsUndo;
-(void)setAllowsUndo:(BOOL)arg1 ;
-(void)setPageSizeMultiplier:(float)arg1 ;
-(float)pageSizeMultiplier;
-(BOOL)canZoomPageIn;
-(void)zoomPageIn:(id)arg1 ;
-(BOOL)canZoomPageOut;
-(void)zoomPageOut:(id)arg1 ;
-(BOOL)canResetPageZoom;
-(void)resetPageZoom:(id)arg1 ;
-(void)setMediaVolume:(float)arg1 ;
-(float)mediaVolume;
-(void)addVisitedLinks:(id)arg1 ;
-(void)removeVisitedLink:(id)arg1 ;
-(id)computedStyleForElement:(id)arg1 pseudoElement:(id)arg2 ;
-(BOOL)_continuousCheckingAllowed;
-(id)editableDOMRangeForPoint:(CGPoint)arg1 ;
-(id)styleDeclarationWithText:(id)arg1 ;
-(BOOL)isAutomaticQuoteSubstitutionEnabled;
-(BOOL)isAutomaticLinkDetectionEnabled;
-(BOOL)isAutomaticDashSubstitutionEnabled;
-(BOOL)isAutomaticTextReplacementEnabled;
-(BOOL)isAutomaticSpellingCorrectionEnabled;
-(void)replaceSelectionWithNode:(id)arg1 ;
-(void)replaceSelectionWithText:(id)arg1 ;
-(void)replaceSelectionWithMarkupString:(id)arg1 ;
-(void)replaceSelectionWithArchive:(id)arg1 ;
-(void)deleteSelection;
-(id)_responderForResponderOperations;
-(void)_performResponderOperation:(SEL)arg1 with:(id)arg2 ;
-(void)changeAttributes:(id)arg1 ;
-(void)changeBaseWritingDirection:(id)arg1 ;
-(void)changeBaseWritingDirectionToLTR:(id)arg1 ;
-(void)changeBaseWritingDirectionToRTL:(id)arg1 ;
-(void)changeColor:(id)arg1 ;
-(void)changeDocumentBackgroundColor:(id)arg1 ;
-(void)changeFont:(id)arg1 ;
-(void)changeSpelling:(id)arg1 ;
-(void)checkSpelling:(id)arg1 ;
-(void)complete:(id)arg1 ;
-(void)copyFont:(id)arg1 ;
-(void)makeBaseWritingDirectionLeftToRight:(id)arg1 ;
-(void)makeBaseWritingDirectionRightToLeft:(id)arg1 ;
-(void)orderFrontSubstitutionsPanel:(id)arg1 ;
-(void)pasteAsRichText:(id)arg1 ;
-(void)pasteFont:(id)arg1 ;
-(void)performFindPanelAction:(id)arg1 ;
-(void)showGuessPanel:(id)arg1 ;
-(void)startSpeaking:(id)arg1 ;
-(void)stopSpeaking:(id)arg1 ;
-(void)takeFindStringFromSelection:(id)arg1 ;
-(void)toggleBaseWritingDirection:(id)arg1 ;
-(void)_replaceSelectionWithNode:(id)arg1 matchStyle:(BOOL)arg2 ;
-(BOOL)_selectionIsCaret;
-(BOOL)_selectionIsAll;
-(void)_simplifyMarkup:(id)arg1 endNode:(id)arg2 ;
-(void)_retrieveKeyboardUIModeFromPreferences:(id)arg1 ;
-(BOOL)_flushCompositingChanges;
-(BOOL)_becomingFirstResponderFromOutside;
-(BOOL)_needsOneShotDrawingSynchronization;
-(CGPoint)_convertPointFromRootView:(CGPoint)arg1 ;
-(CGRect)_convertRectFromRootView:(CGRect)arg1 ;
-(void)_setDeviceOrientationProvider:(id)arg1 ;
-(void)_setGeolocationProvider:(id)arg1 ;
-(void)_setNotificationProvider:(id)arg1 ;
-(void)_notificationDidShow:(unsigned long long)arg1 ;
-(void)_notificationDidClick:(unsigned long long)arg1 ;
-(void)_notificationsDidClose:(id)arg1 ;
-(unsigned long long)_notificationIDForTesting:(OpaqueJSValueRef)arg1 ;
-(id)fullScreenPlaceholderView;
-(id)_displayURL;
-(int)_visibilityState;
-(id)mainFrameTitle;
-(id)windowScriptObject;
-(void)setScriptDebugDelegate:(id)arg1 ;
-(id)frameLoadDelegate;
-(id)policyDelegate;
-(id)resourceLoadDelegate;
-(id)UIDelegate;
-(id)scriptDebugDelegate;
-(void)_close;
@end

