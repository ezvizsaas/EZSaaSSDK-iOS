//
//  EZSaaSRealPlaySDK.h
//  EZSaaSRealPlaySDK
//
//  Created by jinke5 on 2019/1/16.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSRealPlaySDK.
FOUNDATION_EXPORT double EZSaaSRealPlaySDKVersionNumber;

//! Project version string for EZSaaSRealPlaySDK.
FOUNDATION_EXPORT const unsigned char EZSaaSRealPlaySDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSRealPlaySDK/PublicHeader.h>

@class EZSaaSCameraInfo;

@interface EZSaaSRealPlaySDK : NSObject

+(UIViewController *)getRealPlayVCWithCameraList:(NSArray<EZSaaSCameraInfo *> *)arr andIndex:(NSInteger)index;

//+(void)showDeviceSettingBtnOnNavigationBarWithClickBlock:(void(^)(NSString *deviceSerial, NSInteger channelNo, NSString* _Nullable verifyCode))clickBlock;

@end
