//
//	EZSaaSCloudServiceStatus.h
//
//	Create by jinke5 on 28/6/2018
//	Copyright © 2018. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

@interface EZSaaSCloudServiceStatus : NSObject

@property (nonatomic, assign) NSInteger channelNo;
@property (nonatomic, copy) NSString * deviceSerial;
@property (nonatomic, assign) NSInteger expireTime;
@property (nonatomic, strong) NSObject * serviceDetail;
@property (nonatomic, assign) NSInteger startTime;
////云存储状态，-2:设备不支持，-1:未开通云存储，0:未激活，1:激活，2:过期
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, assign) NSInteger totalDays;
@property (nonatomic, copy) NSString * userName;
@property (nonatomic, assign) NSInteger validDays;

@end
