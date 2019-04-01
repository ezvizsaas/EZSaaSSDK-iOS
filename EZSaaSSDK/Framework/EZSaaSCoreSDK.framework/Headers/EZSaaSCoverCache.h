//
//  EZSaaSImageCache.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/23.
//

#import "EZSaaSCache.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSCoverCache : EZSaaSCache
+(instancetype)sharedCoverCache;

+(void)setCover:(UIImage*)image forDevice:(NSString*)deviceSerial andChannel:(NSInteger)channelNo;

+(UIImage*)coverForDevice:(NSString*)deviceSerial andChannel:(NSInteger)channelNo;


+(void)coverForDevice:(NSString*)deviceSerial andChannel:(NSInteger)channelNo withCompletionBlock:(void(^)(UIImage* _Nullable coverImage, BOOL asyncDownloaded))comBlock;

@end

NS_ASSUME_NONNULL_END
