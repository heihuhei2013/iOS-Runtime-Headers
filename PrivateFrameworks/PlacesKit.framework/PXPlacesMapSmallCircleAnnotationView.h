/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapSmallCircleAnnotationView : MKAnnotationView <PXPlacesMapAnnotationViewFadable, PXPlacesMapAnnotationViewHighlightable> {
    CALayer * _backThumbNail;
    double  _circleAnnotationRadius;
    CALayer * _circleLayer;
    <PXPlacesGeotaggable> * _currentGeo;
    int  _highlightLevel;
    CALayer * _highlightedCircleLayer;
    CALayer * _highlightedCircleLayer2;
    CALayer * _thumbnailLayer;
    UIView * _touchView;
}

@property (nonatomic) double circleAnnotationRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int highlightLevel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)circleAnnotationRadius;
- (void)createThumbnailLayer;
- (int)highlightLevel;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)renderArrowForThumbnail:(struct CGSize { float x1; float x2; })arg1 withColor:(struct CGColor { }*)arg2 andOrigin:(struct CGSize { float x1; float x2; })arg3;
- (id)renderBackThumbnailLayer:(struct CGSize { float x1; float x2; })arg1 withColor:(struct CGColor { }*)arg2;
- (id)renderCircleWithRadius:(float)arg1 color:(struct UIColor { Class x1; }*)arg2;
- (id)renderThumbnailWithGraphicContext:(struct CGImage { }*)arg1 withThumbnailSize:(struct CGSize { float x1; float x2; })arg2 origin:(struct CGPoint { float x1; float x2; })arg3;
- (void)setCircleAnnotationRadius:(double)arg1;
- (void)setHighlightLevel:(int)arg1;
- (void)tapImage:(id)arg1;

@end
