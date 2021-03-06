/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, NSMutableArray, UIButton;

@interface CKSingleRecipientTableViewCell : UITableViewCell {

	BOOL _showMailButton;
	BOOL _showPhoneButton;
	BOOL _showFaceTimeVideoButton;
	BOOL _showInfoButton;
	NSString* _entityName;
	NSMutableArray* _visibleButtons;
	id _actionDelegate;
	UIButton* _mailButton;
	UIButton* _phoneButton;
	UIButton* _facetimeVideoButton;
	UIButton* _infoButton;

}

@property (nonatomic,copy) NSString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleButtons;              //@synthesize visibleButtons=_visibleButtons - In the implementation block
@property (assign,nonatomic) id actionDelegate;                            //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) BOOL showMailButton;                          //@synthesize showMailButton=_showMailButton - In the implementation block
@property (assign,nonatomic) BOOL showPhoneButton;                         //@synthesize showPhoneButton=_showPhoneButton - In the implementation block
@property (assign,nonatomic) BOOL showFaceTimeVideoButton;                 //@synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) BOOL showInfoButton;                          //@synthesize showInfoButton=_showInfoButton - In the implementation block
@property (nonatomic,retain) UIButton * mailButton;                        //@synthesize mailButton=_mailButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                       //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeVideoButton;               //@synthesize facetimeVideoButton=_facetimeVideoButton - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                        //@synthesize infoButton=_infoButton - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setInfoButton:(id)arg1 ;
-(id)infoButton;
-(id)facetimeVideoButton;
-(id)phoneButton;
-(id)mailButton;
-(id)visibleButtons;
-(void)setEntityName:(id)arg1 ;
-(void)setActionDelegate:(id)arg1 ;
-(void)setShowFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowMailButton:(BOOL)arg1 ;
-(void)setShowPhoneButton:(BOOL)arg1 ;
-(void)setShowInfoButton:(BOOL)arg1 ;
-(void)setMailButton:(id)arg1 ;
-(void)setPhoneButton:(id)arg1 ;
-(void)setFacetimeVideoButton:(id)arg1 ;
-(void)updateCurrentlyVisibleButtons;
-(BOOL)showInfoButton;
-(BOOL)showFaceTimeVideoButton;
-(BOOL)showPhoneButton;
-(BOOL)showMailButton;
-(void)setVisibleButtons:(id)arg1 ;
-(id)actionDelegate;
-(id)entityName;
@end

