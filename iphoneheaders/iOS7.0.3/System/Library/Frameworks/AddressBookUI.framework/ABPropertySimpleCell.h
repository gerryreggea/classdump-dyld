/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyCell.h>
#import <AddressBookUI/ABPickerControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIButton, UITextField, UIView, UIImageView, ABTransportButton, ABPropertyAction, UIColor;

@interface ABPropertySimpleCell : ABPropertyCell <ABPickerControllerDelegate, UITextFieldDelegate> {

	BOOL _allowsActions;
	UIButton* _labelButton;
	UITextField* _textField;
	UIView* _vseparator;
	UIImageView* _star;
	ABTransportButton* _transportIcon1;
	ABTransportButton* _transportIcon2;
	ABPropertyAction* _transportAction1;
	ABPropertyAction* _transportAction2;
	float _labelValueSpacing;
	UIColor* _actionsColor;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) UIButton * labelButton;                          //@synthesize labelButton=_labelButton - In the implementation block
@property (nonatomic,retain) UITextField * textField;                           //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIView * vseparator;                               //@synthesize vseparator=_vseparator - In the implementation block
@property (nonatomic,retain) UIImageView * star;                                //@synthesize star=_star - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                //@synthesize allowsActions=_allowsActions - In the implementation block
@property (nonatomic,readonly) ABTransportButton * transportIcon1;              //@synthesize transportIcon1=_transportIcon1 - In the implementation block
@property (nonatomic,readonly) ABTransportButton * transportIcon2;              //@synthesize transportIcon2=_transportIcon2 - In the implementation block
@property (nonatomic,retain) ABPropertyAction * transportAction1;               //@synthesize transportAction1=_transportAction1 - In the implementation block
@property (nonatomic,retain) ABPropertyAction * transportAction2;               //@synthesize transportAction2=_transportAction2 - In the implementation block
@property (assign,nonatomic) float labelValueSpacing;                           //@synthesize labelValueSpacing=_labelValueSpacing - In the implementation block
@property (nonatomic,retain) UIColor * actionsColor;                            //@synthesize actionsColor=_actionsColor - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                             //@synthesize chevron=_chevron - In the implementation block
-(id)contentViewEditingConstraints;
-(id)contentViewConstraints;
-(id)firstResponderItem;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setValueTextAttributes:(id)arg1 ;
-(void)setActionsColor:(id)arg1 ;
-(void)updateWithPropertyItem:(id)arg1 ;
-(BOOL)allowsActions;
-(void)transportButtonClicked:(id)arg1 ;
-(id)transportIcon1;
-(id)transportIcon2;
-(id)chevron;
-(void)setChevron:(id)arg1 ;
-(void)pickerDidCancel:(id)arg1 ;
-(void)picker:(id)arg1 didPickItem:(id)arg2 ;
-(void)setTextField:(id)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(id)star;
-(void)updateTransportButtons;
-(void)labelButtonClicked:(id)arg1 ;
-(id)vseparator;
-(void)_setupEditingViews;
-(id)labelButton;
-(id)_constraintsToOverlapView:(id)arg1 onView:(id)arg2 ;
-(void)setVseparator:(id)arg1 ;
-(void)setStar:(id)arg1 ;
-(id)transportAction1;
-(void)setTransportAction1:(id)arg1 ;
-(id)transportAction2;
-(void)setTransportAction2:(id)arg1 ;
-(float)labelValueSpacing;
-(void)setLabelValueSpacing:(float)arg1 ;
-(id)actionsColor;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)textField;
-(void)setAllowsActions:(BOOL)arg1 ;
@end

