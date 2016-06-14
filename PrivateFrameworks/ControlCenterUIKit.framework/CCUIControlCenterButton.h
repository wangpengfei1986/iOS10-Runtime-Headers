/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

@interface CCUIControlCenterButton : SBFButton <CCUIControlCenterControl> {
    UIImageView * _alteredStateGlyphImageView;
    UILabel * _alteredStateLabel;
    bool  _animatesStateChanges;
    UIImage * _backgroundImage;
    UIImageView * _backgroundImageView;
    unsigned long long  _buttonType;
    <CCUIControlCenterButtonDelegate> * _delegate;
    UIImage * _glyphImage;
    UIImageView * _glyphImageView;
    NSString * _glyphName;
    UILabel * _label;
    double  _naturalHeight;
    unsigned long long  _roundCorners;
    UIImage * _selectedBackgroundImage;
    UIImageView * _selectedBackgroundImageView;
    UIColor * _selectedColor;
    UIImage * _selectedGlyphImage;
    bool  _showingMenu;
}

@property (nonatomic) bool animatesStateChanges;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIControlCenterButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, copy) NSString *glyphName;
@property (readonly) unsigned long long hash;
@property (getter=isInternal, nonatomic, readonly) bool internal;
@property (nonatomic) double naturalHeight;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) unsigned long long roundCorners;
@property (nonatomic, retain) UIImage *selectedBackgroundImage;
@property (nonatomic, retain) UIImage *selectedGlyphImage;
@property (getter=isShowingMenu, nonatomic) bool showingMenu;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;

+ (id)_buttonWithGlyphImage:(id)arg1 selectedColor:(id)arg2 text:(id)arg3 type:(unsigned long long)arg4;
+ (id)_circleBackgroundOverlayImageForDiameter:(double)arg1;
+ (id)_roundRectBackgroundImageWithRoundCorners:(unsigned long long)arg1;
+ (id)circularButtonWithSelectedColor:(id)arg1;
+ (id)roundRectButton;
+ (id)roundRectButtonWithText:(id)arg1;
+ (id)roundRectButtonWithText:(id)arg1 selectedGlyphColor:(id)arg2;
+ (id)smallCircularButtonWithSelectedColor:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateRectForGlyph:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 rectForLabel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 ignoringBounds:(bool)arg3;
- (id)_colorOverlayBackgroundImage;
- (id)_controlStateStringFromState:(long long)arg1;
- (long long)_currentState;
- (bool)_drawingAsSelected;
- (id)_glyphImageForState:(long long)arg1;
- (bool)_isCircleButton;
- (bool)_isRectButton;
- (bool)_isTextButton;
- (void)_pressAction;
- (void)_setBackgroundImageAndStuff:(id)arg1;
- (void)_setButtonType:(unsigned long long)arg1;
- (void)_setSelectedBackgroundImageAndStuff:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBackgroundForStateChange;
- (void)_updateEffects;
- (void)_updateForReduceTransparencyChange;
- (void)_updateForStateChange;
- (void)_updateGlyphAndTextForStateChange;
- (void)_updateNaturalHeight;
- (bool)animatesStateChanges;
- (id)backgroundImage;
- (id)ccuiPunchOutMaskForView:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)font;
- (id)glyphImage;
- (id)glyphName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 glyphImage:(id)arg2 selectedColor:(id)arg3 text:(id)arg4 type:(unsigned long long)arg5;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInternal;
- (bool)isShowingMenu;
- (void)layoutSubviews;
- (double)naturalHeight;
- (long long)numberOfLines;
- (unsigned long long)roundCorners;
- (id)selectedBackgroundImage;
- (id)selectedGlyphImage;
- (void)setAnimatesStateChanges:(bool)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2;
- (void)setGlyphImage:(id)arg1 selectedGlyphImage:(id)arg2 name:(id)arg3;
- (void)setGlyphName:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setNaturalHeight:(double)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setRoundCorners:(unsigned long long)arg1;
- (void)setSelectedBackgroundImage:(id)arg1;
- (void)setSelectedGlyphImage:(id)arg1;
- (void)setShowingMenu:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end