//
//  EZSaaSCommonAPI.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/8.
//

#import <Foundation/Foundation.h>
#import "EZSaaSBaseNetworkManager.h"

NS_ASSUME_NONNULL_BEGIN

@class EZSaaSPermission,EZSaaSDeviceStatus;

@interface EZSaaSCommonAPI : NSObject

///登录接口
+(void)loginWithName:(NSString*)name password:(NSString*)password verifyCode:(NSString* _Nullable )verifyCode successCallback:(serverSuccessFn)successFn failCallBack:(serverFailureFn)failFn;

///刷新token
+(void)refreshTokenSuccessCallBack:(serverSuccessFn)successFn failCallBack:(serverFailureFn)failFn andRetryBlock:(void(^)(void))retryBlock;

///通过Token获取AccessToken
+(void)getAccessTokenCompletion:(void(^)(NSError* _Nullable error, NSString* _Nullable accessToken, NSString* _Nullable appKey, NSString* _Nullable secretKey))completion;

///获取设备状态信息
+(void)getDeviceStatusWithDeviceSerial:(NSString*)serialNo channel:(NSInteger)channelNo completion:(void(^)(EZSaaSDeviceStatus * _Nullable deviceStatus, NSError* _Nullable error))completion;

///查找对应管理用户下的权限
+(void)getUserPermissionCompletion:(void(^)(NSArray<EZSaaSPermission*>* _Nullable permissionArr, NSError* _Nullable error))completion;

///查询未读消息数量
+(void)getUnreadMessageNumberCompletion:(void(^)(NSInteger unreadNo, NSError* _Nullable error))completion;

///更新设备验证码
+(void)updateDeviceVerifyCode:(NSString*)newCode withDeviceSerail:(NSString*)devSerial channelNo:(NSInteger)channelNo completion:(void(^)(NSError* _Nullable error))completion;

@end

NS_ASSUME_NONNULL_END
