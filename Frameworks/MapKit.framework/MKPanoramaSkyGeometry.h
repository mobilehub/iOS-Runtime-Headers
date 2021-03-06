/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPanoramaSkyGeometry : MKStreetViewGeometry  {
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _tileSize;
    unsigned int _numLevels;
    unsigned int _numImageLevels;
    float _longitudeTiles;
    float _latitudeTiles;
}


- (id)initWithImageSize:(struct CGSize { float x1; float x2; })arg1 tileSize:(struct CGSize { float x1; float x2; })arg2;
- (void)drawWithTextures:(id)arg1;

@end
