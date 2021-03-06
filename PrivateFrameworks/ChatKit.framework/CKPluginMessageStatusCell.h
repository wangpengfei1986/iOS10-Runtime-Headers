/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell {
    UIImageView * _imageView;
    UIView * _previousPluginSnapshot;
}

@property (nonatomic, copy) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIView *previousPluginSnapshot;

- (void).cxx_destruct;
- (void)configureForChatItem:(id)arg1;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (id)previousPluginSnapshot;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPreviousPluginSnapshot:(id)arg1;

@end
