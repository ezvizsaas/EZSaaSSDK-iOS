//
//  EZSaaSDeviceSettingSDK.h
//  EZSaaSDeviceSettingSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSDeviceSettingSDK.
FOUNDATION_EXPORT double EZSaaSDeviceSettingSDKVersionNumber;

//! Project version string for EZSaaSDeviceSettingSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSDeviceSettingSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSDeviceSettingSDK/PublicHeader.h>

#ifndef EZSaaSDeviceSettingSDK_h
#define EZSaaSDeviceSettingSDK_h
#endif

@interface EZSaaSDeviceSettingSDK : NSObject

+(UIViewController*)getDeviceSettingVCWithSerialNo:(NSString*)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString* _Nullable)code;

@end
