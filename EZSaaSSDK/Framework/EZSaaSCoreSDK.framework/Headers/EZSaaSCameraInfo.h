//
//	EZSaaSCameraInfo.h
//
//	Create by jinke5 on 31/7/2018
//	Copyright © 2018. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

@interface EZSaaSCameraInfo : NSObject

@property (nonatomic, copy) NSString * channelName;
@property (nonatomic, assign) NSInteger channelNo;
@property (nonatomic, assign) NSInteger createBy;
@property (nonatomic, copy) NSString * createDate;
@property (nonatomic, assign) NSInteger defence;
@property (nonatomic, copy) NSString * deviceSerial;
@property (nonatomic, assign) NSInteger dvcDeviceId;
@property (nonatomic, copy) NSString *idField;
@property (nonatomic, assign) NSInteger isEncrypt;
@property (nonatomic, copy) NSString * model;
@property (nonatomic, assign) NSInteger orgId;
@property (nonatomic, copy) NSString * picUrl;
@property (nonatomic, assign) NSInteger saasUserId;
@property (nonatomic, assign) NSInteger status; //0-不在线，1-在线,-1设备未上报
@property (nonatomic, assign) NSInteger videoLevel;
@property (nonatomic, copy) NSString * onOfflineDateTime;
@property (nonatomic, copy) NSString *ipcValidateCode;
@property (nonatomic,copy) NSString *ipcSerial;

-(instancetype)initWithSerialNo:(NSString*)serialNo channelNo:(NSInteger)channelNo andPassword:(NSString*)password;

@end
