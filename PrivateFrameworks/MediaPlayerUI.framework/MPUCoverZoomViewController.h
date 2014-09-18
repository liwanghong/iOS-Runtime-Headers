/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUCoverZoomViewControllerDelegate>, CADisplayLink, CAMediaTimingFunction, MPUCZCollectionViewController, MPUCoverMaskView, MPUDataSource, NSIndexPath, NSString, UIPinchGestureRecognizer, UIView, UIViewController;

@interface MPUCoverZoomViewController : UIViewController <MPUCZCollectionViewControllerDelegate, UIGestureRecognizerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    double _animationDuration;
    double _animationEndProgress;
    double _animationStartProgress;
    double _animationStartTimeInterval;
    CADisplayLink *_animationTimer;
    MPUCZCollectionViewController *_collectionViewController;
    long long _coverCountPerColumn;
    MPUDataSource *_dataSource;
    <MPUCoverZoomViewControllerDelegate> *_delegate;
    UIViewController *_detailViewController;
    MPUCoverMaskView *_maskView;
    double _pinchContentOffsetDelta;
    NSIndexPath *_pinchContentOffsetIndexPath;
    long long _pinchDirection;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    CAMediaTimingFunction *_timingFunction;
    UIView *_transformView;
    MPUCZCollectionViewController *_transitionCollectionViewController;
    long long _transitionCoverCountPerColumn;
    } _transitionEndItemSize;
    } _transitionStartItemSize;
    double _transitionStartScale;
    } _unzoomedAlbumViewTransform;
    bool_pinching;
    bool_zoomed;
}

@property(copy,readonly) NSString * debugDescription;
@property <MPUCoverZoomViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginTransitionForScale:(double)arg1;
- (double)_collectionViewHeightForItemSize:(struct CGSize { double x1; double x2; })arg1 coverCountPerColumn:(unsigned long long)arg2;
- (unsigned long long)_defaultNumberOfRows;
- (void)_displayLinkAction:(id)arg1;
- (void)_endTransitionAtProgress:(double)arg1 velocity:(double)arg2;
- (unsigned long long)_maximumNumberOfRows;
- (unsigned long long)_minimumNumberOfRows;
- (void)_pinchAction:(id)arg1;
- (void)_removeTransitionCollectionViewForEndProgress:(double)arg1;
- (void)_setTransitionProgress:(double)arg1;
- (void)_updateContentOffset;
- (void)_updateContentOffsetForCollectionView:(id)arg1;
- (void)collectionViewController:(id)arg1 didSelectCell:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)detailViewControllerRequestsExit:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (double)imageAspectRatio;
- (id)initWithDataSource:(id)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })maximumImageSize;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (void)setDelegate:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end