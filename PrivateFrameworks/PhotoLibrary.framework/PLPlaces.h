/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPlace, NSMutableArray, MKMapView;

@interface PLPlaces : NSObject  {
    NSMutableArray *_photosWithLocationInformation;
    NSMutableArray *_places;
    NSMutableArray *_unaffectedAnnotations;
    NSMutableArray *_deletedAnnotations;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationStarts;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationEnds;
    NSMutableArray *_addedAnnotations;
    NSMutableArray *_newlyVisibleAnnotations;
    NSMutableArray *_animationOnlyAnnotations;
    MKMapView *_mapView;
    PLPlace *_nullPlace;
}


- (void)reset;
- (void)dealloc;
- (void)fullReset;
- (id)places;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRectangleForZoomedOutPins;
- (void)setMapView:(id)arg1;
- (id)initWithMapView:(id)arg1;
- (void)setupPlacesForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_partitionPhotos:(id)arg1 intoPlaces:(id)arg2 inRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)updatePlacesFromRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 viaZoom:(BOOL)arg3;
- (void)_resetAnnotationBuckets;
- (void)_splitCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 forNewRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)_updateCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 fromOriginalRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5 forNewRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (void)_createPlacesWithNewPhotos:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4;
- (void)_createMapAnnotationsFromChanges:(id)arg1 toChanges:(id)arg2 intoPlaces:(id)arg3;
- (id)unaffectedAnnotations;
- (id)deletedAnnotations;
- (id)annotationsToRemoveWhenAddAnimationEnds;
- (id)annotationsToRemoveWhenAddAnimationStarts;
- (id)addedAnnotations;
- (id)newlyVIsibleAnnotations;
- (id)animationOnlyAnnotations;
- (void)_logPhotos:(id)arg1;
- (id)_findVisiblePhotosInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_findVisiblePhotosInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 notInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_placeForPhoto:(id)arg1 inPlaces:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_placeRegionForPhoto:(id)arg1;
- (void)_loadPlacesData;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_defaultRegionForNoPlacesData;
- (id)_newPlaceForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_newAnimationAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;

@end
