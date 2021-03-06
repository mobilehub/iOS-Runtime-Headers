/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMOutgoingThumbnail : PBCodable  {
    int _height;
    int _width;
}

@property int width;
@property int height;

+ (id)standardThumbnail;

- (int)height;
- (id)dictionaryRepresentation;
- (int)width;
- (void)setWidth:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)writeTo:(id)arg1;

@end
