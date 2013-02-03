/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIColor, UIFont;

@interface IUHyperlinkCellConfiguration : IUArrayCellConfiguration {
    struct CGSize { 
        float width; 
        float height; 
    } _labelSize;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_titleShadowColor;
}

@property(retain) UIColor * titleColor;
@property(retain) UIFont * titleFont;
@property(retain) UIColor * titleShadowColor;

+ (id)backgroundColorWithModifiers:(unsigned int)arg1;
+ (float)rowHeightForGlobalContext:(id)arg1;
+ (BOOL)showsUntruncationCallout;

- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (void)reloadLayoutInformation;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleShadowColor:(id)arg1;
- (id)titleColor;
- (id)titleFont;
- (id)titleShadowColor;

@end