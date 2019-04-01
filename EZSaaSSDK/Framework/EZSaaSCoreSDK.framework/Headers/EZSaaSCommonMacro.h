//
//  Macro.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 19/05/2018.
//

//获取系统对象
#define kApplication        [UIApplication sharedApplication]
#define kAppWindow          [UIApplication sharedApplication].delegate.window
#define kAppDelegate        (AppDelegate*)[[UIApplication sharedApplication]delegate]
#define kRootViewController [UIApplication sharedApplication].delegate.window.rootViewController
#define kUserDefaults       [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

//获取屏幕宽高
#ifndef kScreenWidth
#define kScreenWidth ([[UIScreen mainScreen] bounds].size.width)
#endif

#ifndef kScreenHeight
#define kScreenHeight ([[UIScreen mainScreen] bounds].size.height)
#endif

#define kScaledSizeW(wid) ((wid)*(([[UIScreen mainScreen] bounds].size.width)/375.0f))
#define kScaledSizeH(hei) ((hei)*(([[UIScreen mainScreen] bounds].size.height)/667.0f))

#define kScreenBounds [UIScreen mainScreen].bounds

//根据iPhone6的尺寸来缩放,根据iPhone6尺寸计算
#define kSizeRatioW (kScreenWidth/375.0)
#define kSizeRationH (kScreenHeight/667.0)


#define kIsIphoneXSerial [EZSaaSDeviceUtil isIPhoneXSerial]
#define kNavigationBarHeight          44.0
#define kStatusBarHeight (kIsIphoneXSerial?44.0:20.0)
#define KNavTotalHeight (kNavigationBarHeight+kStatusBarHeight)

//强弱引用
#define kWeakSelf(type)  __weak typeof(type) weak##type = type;
#define kStrongSelf(type) __strong typeof(type) type = weak##type;

//View 圆角和加边框
#define kViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define kViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]

///IOS 版本判断
#define kIOSAVAILABLEVERSION(version) ([[UIDevice currentDevice] availableVersion:version] < 0)

#define kNOTIPHONE4 (!CGSizeEqualToSize(CGSizeMake(320, 480), [UIScreen mainScreen].bounds.size) && !CGSizeEqualToSize(CGSizeMake(480, 320), [UIScreen mainScreen].bounds.size))

// 当前系统版本
#define kCurrentSystemVersion [[UIDevice currentDevice].systemVersion doubleValue]

//当前语言
#define kCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//-------------------打印日志-------------------------
//DEBUG  模式下打印日志,当前行
#ifdef DEBUG
#define EZSaaSLog(fmt, ...) NSLog((@"EZSaaSLog:%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define EZSaaSLog(...)
#endif

//拼接字符串
#define kNSStringFormat(format,...) [NSString stringWithFormat:format,##__VA_ARGS__]

//数据验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define SafeStr(f) (StrValid(f) ? f:@"")
#define HasString(str,key) ([str rangeOfString:key].location!=NSNotFound)

#define ValidStr(f) StrValid(f)
#define ValidDict(f) (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define ValidArray(f) (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define ValidNum(f) (f!=nil && [f isKindOfClass:[NSNumber class]])
#define ValidClass(f,cls) (f!=nil && [f isKindOfClass:[cls class]])
#define ValidData(f) (f!=nil && [f isKindOfClass:[NSData class]])

//发送通知
#define kPostNotification(name,obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];

//色值
#define kRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define kRGB(r,g,b) RGBA(r,g,b,1.0f)

#define kHexColor(hex) [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:1]

#define COLOR_RGB(rgbValue,a) [UIColor colorWithRed:((float)(((rgbValue) & 0xFF0000) >> 16))/255.0 green:((float)(((rgbValue) & 0xFF00)>>8))/255.0 blue: ((float)((rgbValue) & 0xFF))/255.0 alpha:(a)]

#define kUIColorFromHex(rgbValue, alp)    [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 \
alpha:alp]

#define kClearColor [UIColor clearColor]
#define kYellowColor [UIColor yellowColor]
#define kGreenColor [UIColor greenColor]
#define kWhiteColor [UIColor whiteColor]
#define kBlackColor [UIColor blackColor]
#define kGrayColor [UIColor grayColor]
#define kGray2Color [UIColor lightGrayColor]
#define kBlueColor [UIColor blueColor]
#define kRedColor [UIColor redColor]
#define kRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]     //随机色生成

//字体
#define kSystemFontSize(size) [UIFont systemFontOfSize:size]
#define kBoldSystemFontSize(size) [UIFont boldSystemFontOfSize:size]

//Library/Caches 文件路径
//#define kCachePath ([[NSFileManager defaultManager] URLForDirectory:NSCachesDirectory inDomain:NSUserDomainMask appropriateForURL:nil create:YES error:nil])
//获取temp
#define kTempPath NSTemporaryDirectory()
//获取沙盒 Document
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject]
//获取沙盒 Cache
#define kCachePath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject]

//获取图片
#define kSelfBundle  [NSBundle bundleForClass:[self class]]
#define ZS_GetImgByBundle(selfBundle,imgName) [UIImage imageNameSelf:selfBundle name:imgName]

//masonry补充
#define kSafeAreaInsets(view) ({UIEdgeInsets i; if(@available(iOS 11.0, *)) {i = view.safeAreaInsets;} else {i = UIEdgeInsetsZero;} i;})
#define kSafeMasTop(view) ({NSObject *mas;if(@available(iOS 11.0, *)) {mas = view.mas_safeAreaLayoutGuideTop;} else {mas = view.mas_top;} mas;})
#define kSafeMasBottom(view) ({NSObject *mas;if(@available(iOS 11.0, *)) {mas = view.mas_safeAreaLayoutGuideBottom;} else {mas = view.mas_bottom;} mas;})
#define kSafeMasLeft(view) ({NSObject *mas;if(@available(iOS 11.0, *)) {mas = view.mas_safeAreaLayoutGuideLeft;} else {mas = view.mas_left;} mas;})
#define kSafeMasRight(view) ({NSObject *mas;if(@available(iOS 11.0, *)) {mas = view.mas_safeAreaLayoutGuideRight;} else {mas = view.mas_right;} mas;})
