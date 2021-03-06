/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    unsigned int _sectionIndex;
}

@property unsigned int sectionIndex;
@property struct _NSRange { unsigned int location; unsigned int length; } range;


- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)dealloc;
- (id)description;
- (unsigned int)sectionIndex;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSectionIndex:(unsigned int)arg1;

@end
