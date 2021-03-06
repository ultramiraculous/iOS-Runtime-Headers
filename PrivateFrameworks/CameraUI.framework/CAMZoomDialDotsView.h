/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomDialDotsView : UIView {
    CALayer * __dotLayer;
    float  _dotSpacingAngle;
}

@property (nonatomic, readonly) CALayer *_dotLayer;
@property (nonatomic) struct CGPoint { float x1; float x2; } dotCenter;
@property (nonatomic) int dotCount;
@property (nonatomic) float dotSpacingAngle;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_dotLayer;
- (id)_replicatorLayer;
- (struct CGPoint { float x1; float x2; })dotCenter;
- (int)dotCount;
- (float)dotSpacingAngle;
- (id)initWithDotImage:(id)arg1;
- (void)setDotCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDotCount:(int)arg1;
- (void)setDotSpacingAngle:(float)arg1;

@end
