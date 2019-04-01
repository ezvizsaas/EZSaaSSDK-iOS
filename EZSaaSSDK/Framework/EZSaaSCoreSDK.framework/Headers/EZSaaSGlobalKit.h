//
//  EZSaaSGlobalKit.h
//  EZOpenSDKDemo
//
//  Created by DeJohn Dong on 15/10/27.
//  Copyright © 2015年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

#define EZSaaSCommonGlobal(prop) [EZSaaSGlobalKit sharedKit].prop
#define EZSaaSCameraKey(serial,channelNo) [NSString stringWithFormat:@"%@_%02ld",serial,(long)channelNo]

@class EZSaaSCameraInfo,EZDeviceInfo;

@interface EZSaaSGlobalKit : NSObject

@property (nonatomic, strong) NSMutableDictionary <NSString*,EZSaaSCameraInfo*>*cameraInfoDict;  //设备序列号
@property (nonatomic,strong) NSDate *smsCodeValidTime;
@property (nonatomic,strong) NSMutableDictionary <NSString*,EZDeviceInfo*>*deviceInfoDict;

@property (nonatomic,copy) void (^tokenExpireBlock)(void);

+ (instancetype)sharedKit;

+ (void)getDeviceInfoFromGlobalWithDeivceSerial:(NSString*)deviceSerial completion:(void (^)(EZDeviceInfo *deviceInfo, NSError *error))completion;

//
//- (void)clearDeviceInfo;


@end
