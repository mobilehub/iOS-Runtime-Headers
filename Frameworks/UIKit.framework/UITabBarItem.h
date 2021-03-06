/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, NSString, UIView, NSSet;

@interface UITabBarItem : UIBarItem  {
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    NSString *_badgeValue;
    UIView *_view;
    int _tag;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
}

@property(retain) UIView * view;
@property BOOL viewIsCustom;
@property BOOL animatedBadge;
@property(retain) UIImage * selectedImage;
@property(retain) UIImage * unselectedImage;
@property SEL action;
@property id target;
@property(copy) NSString * badgeValue;
@property int tag;

+ (void)_initializeSafeCategory;

- (void)setTag:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBadgeValue:(id)arg1;
- (id)badgeValue;
- (int)systemItem;
- (void)setViewIsCustom:(BOOL)arg1;
- (BOOL)viewIsCustom;
- (void)setAnimatedBadge:(BOOL)arg1;
- (BOOL)animatedBadge;
- (void)setUnselectedImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (id)_internalTitle;
- (void)_setInternalTemplateImage:(id)arg1;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setSelectedImage:(id)arg1;
- (int)tag;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)_updateView;
- (id)_internalTemplateImage;
- (id)selectedImage;
- (id)unselectedImage;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (void)setView:(id)arg1;
- (id)image;
- (id)view;
- (BOOL)isSystemItem;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (id)nextResponder;
- (id)init;
- (BOOL)isEnabled;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;

@end
