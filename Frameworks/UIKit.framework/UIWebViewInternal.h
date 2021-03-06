/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebBrowserView, NSURLRequest, UIScrollView, <UIWebViewDelegate>, UIWebViewWebViewDelegate, UICheckeredPatternView;

@interface UIWebViewInternal : NSObject  {
    UIScrollView *scroller;
    UIWebBrowserView *browserView;
    UICheckeredPatternView *checkeredPatternView;
    <UIWebViewDelegate> *delegate;
    unsigned int scalesPageToFit : 1;
    unsigned int isLoading : 1;
    unsigned int drawsCheckeredPattern : 1;
    unsigned int usedGeolocation : 1;
    unsigned int webSelectionEnabled : 1;
    unsigned int drawInWebThread : 1;
    NSURLRequest *request;
    int clickedAlertButtonIndex;
    UIWebViewWebViewDelegate *webViewDelegate;
}



@end
