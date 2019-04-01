//
//  EZSaaSRecordDBNetTool.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSRecordDBNetTool : NSObject

+(void)getCachedAndUpdatedCloudRecordForDate:(NSDate*)date withDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo completion:(void(^)(NSArray*_Nullable resultArr, NSError*_Nullable error))completionBlock;

+(void)getCachedAndUpdatedDeviceRecordForDate:(NSDate*)date withDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo completion:(void(^)(NSArray*_Nullable resultArr, NSError*_Nullable error))completionBlock;


@end

NS_ASSUME_NONNULL_END
