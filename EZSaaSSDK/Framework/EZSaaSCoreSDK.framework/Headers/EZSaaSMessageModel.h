//
//  EZSaaSMessageModel.h
//  EZSaaSMessagePlugin
//
//  Created by jinke5 on 2018/8/2.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,EZSaaSMessageType) {
    EZSaaSMessageTypeAll =0,
    EZSaaSMessageTypeBody
};

@interface EZSaaSMessageModel : NSObject

@property (nonatomic, strong) NSDate * alarmDate;
@property (nonatomic,copy) NSString *alarmTime;

@property (nonatomic, strong) NSDate *createTime;
@property (nonatomic, strong) NSDate *updateTime;
@property (nonatomic, assign) NSInteger  channelNo;
@property (nonatomic, copy) NSString * alarmType;
@property (nonatomic, copy) NSString * createBy;
@property (nonatomic, strong) NSDate * createDate;
@property (nonatomic, copy) NSString * deviceName;
@property (nonatomic, copy) NSString * deviceSerial;
@property (nonatomic, copy) NSString * idField;
@property (nonatomic, assign) BOOL isEncrypt;
@property (nonatomic, assign) BOOL isRead;
@property (nonatomic, copy) NSString * picUrl;
@property (nonatomic, copy) NSString *saasUserId;
@property (nonatomic, copy) NSString * shortUrl;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *ipcValidateCode;
//@property (nonatomic,strong) NSData *imageData;
//@property (nonatomic,strong) UIImage *decryptedImage;
@end
