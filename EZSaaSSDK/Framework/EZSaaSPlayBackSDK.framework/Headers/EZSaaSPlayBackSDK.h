//
//  EZSaaSPlayBackSDK.h
//  EZSaaSPlayBackSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSPlayBackSDK.
FOUNDATION_EXPORT double EZSaaSPlayBackSDKVersionNumber;

//! Project version string for EZSaaSPlayBackSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSPlayBackSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSPlayBackSDK/PublicHeader.h>

@class EZCloudRecordFile;

@interface EZSaaSPlayBackSDK : NSObject

+(UIViewController*)getCloudPlaybackVCWithDeviceSerial:(NSString *)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString*)code andDefaultDate:(NSDate*)defaultDate;

+(UIViewController*)getLocalPlaybackVCWithDeviceSerial:(NSString *)devSerial channelNo:(NSInteger)channelNo verifyCode:(NSString*)code andDefaultDate:(NSDate*)defaultDate;

@end


