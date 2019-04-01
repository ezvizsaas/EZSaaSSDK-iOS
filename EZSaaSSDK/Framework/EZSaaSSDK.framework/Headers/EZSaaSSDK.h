//
//  EZSaaSSDK.h
//  EZSaaSCoreSDK
//
//  Created by jinke5 on 2019/3/7.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSSDK.
FOUNDATION_EXPORT double EZSaaSSDKVersionNumber;

//! Project version string for EZSaaSSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSSDK/PublicHeader.h>

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSCameraInfo,EZSaaSLoginInfo,EZCloudRecordFile,EZSaaSTreeModel;

@interface EZSaaSSDK : NSObject

/**
 初始化EZSaaSSDK

 @param appKey appKey
 @return EZSaaSSDK单例
 */
+(instancetype)initWithAppKey:(NSString*)appKey;


/**
 重置EZSaaSSDK
 */
+(void)reset;


/**
 设置EZSaaSSDK Token

 @param token token
 @param expireBlock token过期时的回调
 */
+(void)setToken:(NSString*)token withExpireBlock:(void (^ _Nullable)(void))expireBlock;


/**
 登出EZSaaSSDK
 */
+(void)logout;


/**
 获取登录页面

 @param successBlock 登录成功回调
 @return 登录页面
 */
+(UIViewController*)getLoginVCwithSuccessBlock:(void (^_Nullable)(EZSaaSLoginInfo* _Nullable info))successBlock;


/**
 获取实时预览页面

 @param list 通道列表
 @param index 初始播放序号
 @return 实时预览页面
 */
+(UIViewController*)getRealPlayViewControllerWithCameraList:(NSArray<EZSaaSCameraInfo*>*)list andIndex:(NSInteger)index;


/**
 获取设备设置页面

 @param devSerial 设备序列号
 @param channelNo 通道号
 @param code 设备验证码
 @return 设备设置页面
 */
+(UIViewController*)getDeviceSettingViewControllerWithDeviceSerial:(NSString*)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString*)code;



/**
 获取云录像回放页面

 @param devSerial 设备序列号
 @param channelNo 通道号
 @param defaultDate 播放时间
 @return 云录像回放页面
 */
+(UIViewController *)getCloudPlaybackVCWithDeviceSerial:(NSString *)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString*)code andDefaultDate:(NSDate*)defaultDate;


/**
 获取设备录像回放页面

 @param devSerial 设备序列号
 @param channelNo 通道号
 @param defaultDate 播放时间
 @return 设备回放页面
 */
+(UIViewController *)getLocalPlaybackVCWithDeviceSerial:(NSString *)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString*)code andDefaultDate:(NSDate*)defaultDate;


/**
 获取添加设备页面

 @param tree 需要添加的组织
 @return 设备添加页面
 */
+(UIViewController*)getAddDeviceVCWithOrgTreeModel:(EZSaaSTreeModel* _Nullable)tree;


/**
 获取相册页面

 @return 相册页面
 */
+(UIViewController*)getAlbumListVC;

@end

NS_ASSUME_NONNULL_END
