//
//  EZSaaSBaseURLViewController.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/6/13.
//
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@class WebViewJavascriptBridge;

@interface EZSaaSBaseURLViewController : UIViewController

@property (nonatomic,assign) BOOL  allowRefresh;
@property (nonatomic,assign) BOOL  showControlBar;
@property (nonatomic,assign) BOOL  customTitle;
@property (nonatomic,assign) BOOL  scrollEnable;
@property (nonatomic,assign) BOOL  hideNav;
@property (nonatomic,assign) BOOL  showRefreshBtn;
@property (nonatomic,strong) WebViewJavascriptBridge* bridge;
@property (nonatomic,strong) WKWebView *webView;

+(instancetype)webViewControllerWithURLStr:(NSString*)urlstr andTitle:(NSString*)title;

@end
