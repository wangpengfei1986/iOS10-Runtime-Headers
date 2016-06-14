/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUZoomableGridViewControllerSpec : NSObject {
    bool  _canDisplayMultipleRightBarButtonItems;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _collectionsLevelSectionHeaderHighlightInset;
    double  _collectionsSectionHeaderHeight;
    long long  _collectionsSectionHeaderStyle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fullMomentsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fullMomentsLevelSectionHeaderHighlightInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullMomentsLevelThumbnailSize;
    double  _fullMomentsSectionHeaderHeight;
    long long  _fullMomentsSectionHeaderStyle;
    PUPhotosGridViewControllerSpec * _gridSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifiedImageSize;
    double  _magnifiedYOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    UITraitCollection * _traitCollection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _yearsLevelSectionHeaderContentInset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _yearsLevelSectionHeaderHighlightInset;
    double  _yearsSectionHeaderHeight;
    long long  _yearsSectionHeaderStyle;
}

@property (nonatomic, readonly) bool canDisplayMultipleRightBarButtonItems;
@property (nonatomic, readonly) long long collectionsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionsLevelSectionHeaderContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } collectionsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } collectionsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long collectionsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) double collectionsSectionHeaderHeight;
@property (nonatomic, readonly) long long collectionsSectionHeaderStyle;
@property (nonatomic, readonly) long long fullMomentsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullMomentsLevelSectionHeaderContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullMomentsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullMomentsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) double fullMomentsSectionHeaderHeight;
@property (nonatomic, readonly) long long fullMomentsSectionHeaderStyle;
@property (setter=_setGridSpec:, nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } magnifiedImageSize;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long yearsLevelCellFillMode;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } yearsLevelSectionHeaderContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } yearsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } yearsLevelThumbnailSize;
@property (nonatomic, readonly) unsigned long long yearsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) double yearsSectionHeaderHeight;
@property (nonatomic, readonly) long long yearsSectionHeaderStyle;

- (void).cxx_destruct;
- (void)_setGridSpec:(id)arg1;
- (bool)canDisplayMultipleRightBarButtonItems;
- (long long)collectionsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionsLevelSectionHeaderContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })collectionsLevelThumbnailSize;
- (unsigned long long)collectionsSectionHeaderBackgroundStyle;
- (double)collectionsSectionHeaderHeight;
- (long long)collectionsSectionHeaderStyle;
- (void)configureCollectionsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (void)configureFullMomentsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (void)configureYearsLevelGridLayout:(id)arg1 forWidth:(double)arg2;
- (long long)fullMomentsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })fullMomentsLevelThumbnailSize;
- (unsigned long long)fullMomentsSectionHeaderBackgroundStyle;
- (double)fullMomentsSectionHeaderHeight;
- (long long)fullMomentsSectionHeaderStyle;
- (id)gridSpec;
- (id)init;
- (id)initWithUserTraitCollection:(id)arg1 referenceSize:(struct CGSize { double x1; double x2; })arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGSize { double x1; double x2; })magnifiedImageSize;
- (double)magnifiedYOffset;
- (id)mapViewControllerSpec;
- (id)newGridSpec;
- (struct CGSize { double x1; double x2; })referenceSize;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedYOffset:(double)arg1;
- (id)traitCollection;
- (long long)yearsLevelCellFillMode;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })yearsLevelSectionHeaderContentInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })yearsLevelSectionHeaderHighlightInset;
- (struct CGSize { double x1; double x2; })yearsLevelThumbnailSize;
- (unsigned long long)yearsSectionHeaderBackgroundStyle;
- (double)yearsSectionHeaderHeight;
- (long long)yearsSectionHeaderStyle;

@end