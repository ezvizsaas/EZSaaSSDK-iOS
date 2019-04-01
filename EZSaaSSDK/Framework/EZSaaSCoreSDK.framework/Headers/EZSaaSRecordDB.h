//
//  EZSaaSRecordDB.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/23.
//

#import <Foundation/Foundation.h>
#import "EZSaaSRecordFile.h"

@class EZCloudRecordFile;
@class EZDeviceRecordFile;

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSRecordDB : NSObject

+(void)dropAllTables;

//Cloud Past
+(void)savePastCloudRecordArr:(NSArray<EZCloudRecordFile*>*)arr withDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

+(NSArray<EZCloudRecordFile*>*)getPastCloudRecordArrWithDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

+(BOOL)isCloudTableExistForDeviceSeiral:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

//Cloud Today
+(void)saveTodayCloudRecordArr:(NSArray<EZCloudRecordFile*>*)arr withDeviceSerial:(NSString*)deviceSerial andChannelNo:(NSInteger)channelNo;

+(NSArray<EZCloudRecordFile*>*)getTodayCloudRecordArrWithDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo;

//Device Past
+(void)savePastDeviceRecordArr:(NSArray<EZDeviceRecordFile*>*)arr withDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

+(NSArray<EZDeviceRecordFile*>*)getPastDeviceRecordArrWithDeviceSerial:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

+(BOOL)isDeviceTableExistForDeviceSeiral:(NSString*)deviceSerial channelNo:(NSInteger)channelNo andDateStr:(NSString*)dateStr;

//Device Today
//+(void)saveTodayDeviceRecordArr:(NSArray<EZDeviceRecordFile*>*)arr withDeviceSerial:(NSString*)deviceSerial andChannelNo:(NSInteger)channelNo;

@end

NS_ASSUME_NONNULL_END
