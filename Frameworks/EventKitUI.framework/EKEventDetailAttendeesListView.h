/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIColor, NSArray;



@interface EKEventDetailAttendeesListView : UIView 
{
    NSArray *_acceptedNames;
    NSArray *_maybeNames;
    NSArray *_declinedNames;
    NSArray *_noReplyNames;
    NSArray *_ungroupedNames;
    UIColor *textColor;
    UIColor *highlightedTextColor;
    BOOL highlighted;
    BOOL _groupsNames;
}

@property BOOL groupsNames;
@property BOOL highlighted;
@property(retain) UIColor *highlightedTextColor;
@property(retain) UIColor *textColor;
@property(retain) NSArray *ungroupedNames;
@property(retain) NSArray *noReplyNames;
@property(retain) NSArray *declinedNames;
@property(retain) NSArray *maybeNames;
@property(retain) NSArray *acceptedNames;


- (BOOL)highlighted;
- (void)setHighlightedTextColor:(id)arg1;
- (id)highlightedTextColor;
- (id)textColor;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)_heightForGroupOfAttendeeNames:(id)arg1;
- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 startingAtPoint:(struct CGPoint { float x1; float x2; })arg3 givenWidth:(float)arg4;
- (BOOL)groupsNames;
- (id)ungroupedNames;
- (id)noReplyNames;
- (id)declinedNames;
- (id)maybeNames;
- (id)acceptedNames;
- (void)setAcceptedNames:(id)arg1;
- (void)setMaybeNames:(id)arg1;
- (void)setDeclinedNames:(id)arg1;
- (void)setNoReplyNames:(id)arg1;
- (void)setGroupsNames:(BOOL)arg1;
- (void)setUngroupedNames:(id)arg1;

@end