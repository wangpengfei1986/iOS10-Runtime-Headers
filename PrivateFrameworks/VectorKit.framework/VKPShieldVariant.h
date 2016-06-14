/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShieldVariant : PBCodable <NSCopying> {
    unsigned int  _atlasIndex;
    unsigned int  _backgroundColor;
    unsigned int  _borderColor;
    float  _capWidthLeft;
    float  _capWidthRight;
    float  _centerOffsetX;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _centerPoints;
    struct { 
        float _a; 
        unsigned int _b; 
        unsigned int _g; 
        unsigned int _r; 
    }  _fontColor;
    NSString * _fontName;
    float  _fontSize;
    struct { 
        unsigned int textShadow : 1; 
        unsigned int textStroke : 1; 
        unsigned int fontColor : 1; 
        unsigned int atlasIndex : 1; 
        unsigned int backgroundColor : 1; 
        unsigned int borderColor : 1; 
        unsigned int capWidthLeft : 1; 
        unsigned int capWidthRight : 1; 
        unsigned int centerOffsetX : 1; 
        unsigned int fontSize : 1; 
        unsigned int lineSpacing : 1; 
        unsigned int maxDigits : 1; 
        unsigned int minDigits : 1; 
        unsigned int nonDigitFontSize : 1; 
        unsigned int paddingLeft : 1; 
        unsigned int paddingRight : 1; 
        unsigned int quadIndex : 1; 
        unsigned int textBaseline : 1; 
        unsigned int textMaskColor : 1; 
    }  _has;
    struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } * _layers;
    unsigned long long  _layersCount;
    unsigned long long  _layersSpace;
    float  _lineSpacing;
    unsigned int  _maxDigits;
    unsigned int  _minDigits;
    NSString * _nonDigitFontName;
    float  _nonDigitFontSize;
    float  _paddingLeft;
    float  _paddingRight;
    unsigned int  _quadIndex;
    float  _textBaseline;
    int  _textMaskColor;
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _offsetX; 
        float _offsetY; 
        float _size; 
        struct { 
            unsigned int offsetX : 1; 
            unsigned int offsetY : 1; 
        } _has; 
    }  _textShadow;
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _width; 
    }  _textStroke;
}

@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) unsigned int backgroundColor;
@property (nonatomic) unsigned int borderColor;
@property (nonatomic) float capWidthLeft;
@property (nonatomic) float capWidthRight;
@property (nonatomic) float centerOffsetX;
@property (nonatomic, readonly) float*centerPoints;
@property (nonatomic, readonly) unsigned long long centerPointsCount;
@property (nonatomic) struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; } fontColor;
@property (nonatomic, retain) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic) bool hasAtlasIndex;
@property (nonatomic) bool hasBackgroundColor;
@property (nonatomic) bool hasBorderColor;
@property (nonatomic) bool hasCapWidthLeft;
@property (nonatomic) bool hasCapWidthRight;
@property (nonatomic) bool hasCenterOffsetX;
@property (nonatomic) bool hasFontColor;
@property (nonatomic, readonly) bool hasFontName;
@property (nonatomic) bool hasFontSize;
@property (nonatomic) bool hasLineSpacing;
@property (nonatomic) bool hasMaxDigits;
@property (nonatomic) bool hasMinDigits;
@property (nonatomic, readonly) bool hasNonDigitFontName;
@property (nonatomic) bool hasNonDigitFontSize;
@property (nonatomic) bool hasPaddingLeft;
@property (nonatomic) bool hasPaddingRight;
@property (nonatomic) bool hasQuadIndex;
@property (nonatomic) bool hasTextBaseline;
@property (nonatomic) bool hasTextMaskColor;
@property (nonatomic) bool hasTextShadow;
@property (nonatomic) bool hasTextStroke;
@property (nonatomic, readonly) struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*layers;
@property (nonatomic, readonly) unsigned long long layersCount;
@property (nonatomic) float lineSpacing;
@property (nonatomic) unsigned int maxDigits;
@property (nonatomic) unsigned int minDigits;
@property (nonatomic, retain) NSString *nonDigitFontName;
@property (nonatomic) float nonDigitFontSize;
@property (nonatomic) float paddingLeft;
@property (nonatomic) float paddingRight;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) float textBaseline;
@property (nonatomic) int textMaskColor;
@property (nonatomic) struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; } textShadow;
@property (nonatomic) struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; } textStroke;

- (struct Matrix<float, 4, 1> { float x1[4]; })_colorForMaskColor:(int)arg1 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg2;
- (void)addCenterPoint:(float)arg1;
- (void)addLayer:(struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (unsigned int)atlasIndex;
- (unsigned int)backgroundColor;
- (unsigned int)borderColor;
- (float)capWidthLeft;
- (float)capWidthRight;
- (float)centerOffsetX;
- (float)centerPointAtIndex:(unsigned long long)arg1;
- (float*)centerPoints;
- (unsigned long long)centerPointsCount;
- (void)clearCenterPoints;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })fontColor;
- (id)fontName;
- (float)fontSize;
- (bool)hasAtlasIndex;
- (bool)hasBackgroundColor;
- (bool)hasBorderColor;
- (bool)hasCapWidthLeft;
- (bool)hasCapWidthRight;
- (bool)hasCenterOffsetX;
- (bool)hasFontColor;
- (bool)hasFontName;
- (bool)hasFontSize;
- (bool)hasLineSpacing;
- (bool)hasMaxDigits;
- (bool)hasMinDigits;
- (bool)hasNonDigitFontName;
- (bool)hasNonDigitFontSize;
- (bool)hasPaddingLeft;
- (bool)hasPaddingRight;
- (bool)hasQuadIndex;
- (bool)hasTextBaseline;
- (bool)hasTextMaskColor;
- (bool)hasTextShadow;
- (bool)hasTextStroke;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned long long)arg1;
- (struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (unsigned long long)layersCount;
- (float)lineSpacing;
- (unsigned int)maxDigits;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minDigits;
- (struct CGImage { }*)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 atlasToImageCacheLock:(id)arg3 contentScale:(double)arg4 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg5;
- (id)nonDigitFontName;
- (float)nonDigitFontSize;
- (float)paddingLeft;
- (float)paddingRight;
- (unsigned int)quadIndex;
- (bool)readFrom:(id)arg1;
- (void)setAtlasIndex:(unsigned int)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setBorderColor:(unsigned int)arg1;
- (void)setCapWidthLeft:(float)arg1;
- (void)setCapWidthRight:(float)arg1;
- (void)setCenterOffsetX:(float)arg1;
- (void)setCenterPoints:(float*)arg1 count:(unsigned long long)arg2;
- (void)setFontColor:(struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasAtlasIndex:(bool)arg1;
- (void)setHasBackgroundColor:(bool)arg1;
- (void)setHasBorderColor:(bool)arg1;
- (void)setHasCapWidthLeft:(bool)arg1;
- (void)setHasCapWidthRight:(bool)arg1;
- (void)setHasCenterOffsetX:(bool)arg1;
- (void)setHasFontColor:(bool)arg1;
- (void)setHasFontSize:(bool)arg1;
- (void)setHasLineSpacing:(bool)arg1;
- (void)setHasMaxDigits:(bool)arg1;
- (void)setHasMinDigits:(bool)arg1;
- (void)setHasNonDigitFontSize:(bool)arg1;
- (void)setHasPaddingLeft:(bool)arg1;
- (void)setHasPaddingRight:(bool)arg1;
- (void)setHasQuadIndex:(bool)arg1;
- (void)setHasTextBaseline:(bool)arg1;
- (void)setHasTextMaskColor:(bool)arg1;
- (void)setHasTextShadow:(bool)arg1;
- (void)setHasTextStroke:(bool)arg1;
- (void)setLayers:(struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setLineSpacing:(float)arg1;
- (void)setMaxDigits:(unsigned int)arg1;
- (void)setMinDigits:(unsigned int)arg1;
- (void)setNonDigitFontName:(id)arg1;
- (void)setNonDigitFontSize:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setQuadIndex:(unsigned int)arg1;
- (void)setTextBaseline:(float)arg1;
- (void)setTextMaskColor:(int)arg1;
- (void)setTextShadow:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })arg1;
- (void)setTextStroke:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })arg1;
- (float)textBaseline;
- (int)textMaskColor;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })textShadow;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })textStroke;
- (void)writeTo:(id)arg1;

@end