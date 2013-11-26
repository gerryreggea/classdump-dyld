/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <PhotoLibrary/PLModalDimmingContained.h>

@protocol PUCloudSharedPostCommentViewControllerDelegate;
@class UIView, NSArray, PUStackView, PUCloudSharedBackdropView, UILabel, UITextView, NSMutableArray, UIColor, NSString, UITableView, ;

@interface PUCloudSharedPostCommentViewController : UIViewController <UITextViewDelegate, UITableViewDataSource, UITableViewDelegate, PLModalDimmingContained> {

	UIView* _backgroundView;
	NSArray* _dialogConstraints;
	NSArray* _backgroundConstraints;
	PUStackView* _imageStackView;
	PUCloudSharedBackdropView* _containerView;
	UILabel* _textPlaceholderLabel;
	UITextView* _textView;
	NSMutableArray* _attachments;
	UIColor* _placeholderColor;
	UIColor* _separatorColor;
	NSString* _albumName;
	UITableView* _tableView;
	UIView* _dialogView;
	struct {
		unsigned hasDidCancelComment : 1;
		unsigned hasDidSendComment : 1;
	}  _delegateFlags;
	BOOL _isNewAlbum;
	/*^block*/ id _completionHandler;
	NSString* _placeholderText;
	int _selectedAlbumIndex;
	<PUCloudSharedPostCommentViewControllerDelegate>* _commentDelegate;

}

@property (nonatomic,copy) id completionHandler;                                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                                               //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,readonly) NSString * commentText; 
@property (assign,nonatomic) BOOL isNewAlbum;                                                                        //@synthesize isNewAlbum=_isNewAlbum - In the implementation block
@property (assign,nonatomic) int selectedAlbumIndex;                                                                 //@synthesize selectedAlbumIndex=_selectedAlbumIndex - In the implementation block
@property (assign,nonatomic,__weak) <PUCloudSharedPostCommentViewControllerDelegate> * commentDelegate;              //@synthesize commentDelegate=_commentDelegate - In the implementation block
-(void)dealloc;
-(id)_contentView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)navigationItem;
-(/*^block*/ id)completionHandler;
-(id)_separatorColor;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)addImage:(id)arg1 ;
-(id)_placeholderColor;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)commentText;
-(void)setIsNewAlbum:(BOOL)arg1 ;
-(BOOL)isNewAlbum;
-(void)setCommentDelegate:(id)arg1 ;
-(id)placeholderText;
-(void)_addDialogConstraintsInView:(id)arg1 ;
-(void)_addBackgroundViewConstraintsInView:(id)arg1 ;
-(void)_updateKeyboard;
-(id)_constraintsForBackgroundView:(id)arg1 inContainerView:(id)arg2 ;
-(void)_cancelAction:(id)arg1 ;
-(void)_postAction:(id)arg1 ;
-(id)commentDelegate;
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
-(id)initWithAlbumName:(id)arg1 isCreateAlbum:(BOOL)arg2 ;
-(void)setPlaceholderText:(id)arg1 ;
-(int)selectedAlbumIndex;
-(void)setSelectedAlbumIndex:(int)arg1 ;
-(void).cxx_destruct;
@end
