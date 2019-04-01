//
//  EZSaaSVerifyCodeGlobalKit.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/12/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSVerifyCodeGlobalKit : NSObject

+(instancetype)sharedKit;

+(void)setCode:(NSString*)code forDeivice:(NSString*)deviceSerial needSync:(BOOL)sync;

///同步获取缓存密码,不会调用弹窗
+(NSString*)codeForDevice:(NSString*)deviceSerial;

///异步获取缓存密码,如果没有缓存,会弹窗提示输入
+(void)codeForDevice:(NSString*)deviceSerial withCompletionBlock:(void(^)(NSString*code))comBlock;

///异步获取缓存密码,如果没有缓存,会弹窗提示输入
+(void)codeForDevice:(NSString*)deviceSerial withCustomTip:(NSString*)tipStr andCompletionBlock:(void(^)(NSString*code))comBlock;

///异步获取缓存密码,如果没有缓存,会弹窗提示输入
+(void)codeForDevice:(NSString*)deviceSerial withCompletionBlock:(void(^)(NSString*code))comBlock cancelBlock:(void(^)(void))cancelBlock;

///异步获取缓存密码,如果没有缓存,会弹窗提示输入
+(void)codeForDevice:(NSString*)deviceSerial withTipStr:(NSString* _Nullable)tipStr andCompletionBlock:(void(^ _Nullable)(NSString*code))comBlock cancelBlock:(void(^ _Nullable)(void))cancelBlock;

///直接弹窗提示输入验证码,不会读取缓存密码
+(void)promtCodeInputAlertWithoutReadingCacheWithTipStr:(NSString* _Nullable)tipStr andCompletionBlock:(void(^ _Nullable)(NSString*code))comBlock cancelBlock:(void(^ _Nullable)(void))cancelBlock;


@end

NS_ASSUME_NONNULL_END
