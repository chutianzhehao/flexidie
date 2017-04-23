/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "WCBaseInfoItem.h"

//#import "UITextFieldDelegate-Protocol.h"

@class WCUITextField;

@interface WCBaseTextFieldItem : NSObject //WCBaseInfoItem <UITextFieldDelegate>
{
    WCUITextField *m_textField;
    int m_iMaxInputLen;
    BOOL m_bRealLen;
}

- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setMaxRealStringLen:(int)arg1;
- (void)setMaxInputLen:(int)arg1;
- (void)setClearButtonMode:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (id)getTextField;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)setRestrictShareMenu:(BOOL)arg1;
- (void)setEnable:(BOOL)arg1;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;

@end

