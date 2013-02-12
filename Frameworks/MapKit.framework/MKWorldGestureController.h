/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKWorldGestureControllerDelegate>, MKTiltGestureRecognizer, UIRotationGestureRecognizer, _UIDynamicValueAnimation;

@interface MKWorldGestureController : MKMapGestureController {
    _UIDynamicValueAnimation *_rotationDecelerationAnimation;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    _UIDynamicValueAnimation *_tiltDecelerationAnimation;
    MKTiltGestureRecognizer *_tiltGestureRecognizer;
    <MKWorldGestureControllerDelegate> *_worldDelegate;
}

@property(getter=isRotationEnabled) BOOL rotationEnabled;
@property(readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;
@property(getter=isTiltEnabled) BOOL tiltEnabled;
@property(readonly) MKTiltGestureRecognizer * tiltGestureRecognizer;
@property <MKWorldGestureControllerDelegate> * worldDelegate;

- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleTilt:(id)arg1;
- (id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3;
- (BOOL)isRotationEnabled;
- (BOOL)isTiltEnabled;
- (id)rotationGestureRecognizer;
- (void)setRotationEnabled:(BOOL)arg1;
- (void)setTiltEnabled:(BOOL)arg1;
- (void)setWorldDelegate:(id)arg1;
- (void)stopDynamicAnimations;
- (id)tiltGestureRecognizer;
- (id)worldDelegate;

@end