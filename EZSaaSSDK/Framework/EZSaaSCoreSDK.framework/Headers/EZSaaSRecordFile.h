//
//  EZSaaSRecordFile.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/23.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,EZSaaSRecordType) {
    EZSaaSRecordTypeCloud=1,
    EZSaaSRecordTypeDevice
};

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSRecordFile : NSObject

/// 云存储录像文件Id
@property (nonatomic, copy) NSString *fileId;
/// 云存储录像文件开始时间
@property (nonatomic, strong) NSDate *startTime;
/// 云存储录像文件结束时间
@property (nonatomic, strong) NSDate *stopTime;
/// 云存储录像截图地址
@property (nonatomic, copy) NSString *coverPic;
/// 云存储录像下载地址
@property (nonatomic, copy) NSString *downloadPath;
/// 云存储图片加密密码，如果是[NSNull null]或者nil指针则图片不加密
@property (nonatomic, copy) NSString *encryption;

@end

NS_ASSUME_NONNULL_END
