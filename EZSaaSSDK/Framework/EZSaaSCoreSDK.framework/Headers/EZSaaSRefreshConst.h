//  代码地址: https://github.com/CoderEZSaaSLee/EZSaaSRefresh
//  代码地址: http://code4app.com/ios/%E5%BF%AB%E9%80%9F%E9%9B%86%E6%88%90%E4%B8%8B%E6%8B%89%E4%B8%8A%E6%8B%89%E5%88%B7%E6%96%B0/52326ce26803fabc46000000
#import <UIKit/UIKit.h>
#import <objc/message.h>

// 弱引用
#define EZSaaSWeakSelf __weak typeof(self) weakSelf = self;

// 日志输出
#ifdef DEBUG
#define EZSaaSRefreshLog(...) NSLog(__VA_ARGS__)
#else
#define EZSaaSRefreshLog(...)
#endif

// 过期提醒
#define EZSaaSRefreshDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

// 运行时objc_msgSend
#define EZSaaSRefreshMsgSend(...) ((void (*)(void *, SEL, UIView *))objc_msgSend)(__VA_ARGS__)
#define EZSaaSRefreshMsgTarget(target) (__bridge void *)(target)

// RGB颜色
#define EZSaaSRefreshColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

// 文字颜色
#define EZSaaSRefreshLabelTextColor EZSaaSRefreshColor(90, 90, 90)

// 字体大小
#define EZSaaSRefreshLabelFont [UIFont boldSystemFontOfSize:14]

// 常量
UIKIT_EXTERN const CGFloat EZSaaSRefreshLabelLeftInset;
UIKIT_EXTERN const CGFloat EZSaaSRefreshHeaderHeight;
UIKIT_EXTERN const CGFloat EZSaaSRefreshFooterHeight;
UIKIT_EXTERN const CGFloat EZSaaSRefreshFastAnimationDuration;
UIKIT_EXTERN const CGFloat EZSaaSRefreshSlowAnimationDuration;

UIKIT_EXTERN NSString *const EZSaaSRefreshKeyPathContentOffset;
UIKIT_EXTERN NSString *const EZSaaSRefreshKeyPathContentSize;
UIKIT_EXTERN NSString *const EZSaaSRefreshKeyPathContentInset;
UIKIT_EXTERN NSString *const EZSaaSRefreshKeyPathPanState;

UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderLastUpdatedTimeKey;

UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderIdleText;
UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderPullingText;
UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderRefreshingText;

UIKIT_EXTERN NSString *const EZSaaSRefreshAutoFooterIdleText;
UIKIT_EXTERN NSString *const EZSaaSRefreshAutoFooterRefreshingText;
UIKIT_EXTERN NSString *const EZSaaSRefreshAutoFooterNoMoreDataText;

UIKIT_EXTERN NSString *const EZSaaSRefreshBackFooterIdleText;
UIKIT_EXTERN NSString *const EZSaaSRefreshBackFooterPullingText;
UIKIT_EXTERN NSString *const EZSaaSRefreshBackFooterRefreshingText;
UIKIT_EXTERN NSString *const EZSaaSRefreshBackFooterNoMoreDataText;

UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderLastTimeText;
UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderDateTodayText;
UIKIT_EXTERN NSString *const EZSaaSRefreshHeaderNoneLastDateText;

// 状态检查
#define EZSaaSRefreshCheckState \
EZSaaSRefreshState oldState = self.state; \
if (state == oldState) return; \
[super setState:state];

// 异步主线程执行，不强持有Self
#define EZSaaSRefreshDispatchAsyncOnMainQueue(x) \
__weak typeof(self) weakSelf = self; \
dispatch_async(dispatch_get_main_queue(), ^{ \
typeof(weakSelf) self = weakSelf; \
{x} \
});

