/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying> {
    UIColor * _backgroundColor;
    LPPointUnit * _backgroundInset;
    LPPointUnit * _cornerRadius;
    float  _darkeningAmount;
    int  _filter;
    float  _foregroundOpacity;
    LPPadding * _margin;
    UIColor * _maskColor;
    LPPadding * _padding;
    LPSize * _size;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) LPPointUnit *backgroundInset;
@property (nonatomic, retain) LPPointUnit *cornerRadius;
@property (nonatomic) float darkeningAmount;
@property (nonatomic) int filter;
@property (nonatomic) float foregroundOpacity;
@property (nonatomic, readonly, retain) LPPadding *margin;
@property (nonatomic) UIColor *maskColor;
@property (nonatomic, readonly, retain) LPPadding *padding;
@property (nonatomic, retain) LPSize *size;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)backgroundInset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerRadius;
- (float)darkeningAmount;
- (id)emailCompatibleMargin;
- (int)filter;
- (float)foregroundOpacity;
- (id)init;
- (id)margin;
- (id)maskColor;
- (id)padding;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundInset:(id)arg1;
- (void)setCornerRadius:(id)arg1;
- (void)setDarkeningAmount:(float)arg1;
- (void)setFilter:(int)arg1;
- (void)setForegroundOpacity:(float)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setSize:(id)arg1;
- (id)size;

@end
