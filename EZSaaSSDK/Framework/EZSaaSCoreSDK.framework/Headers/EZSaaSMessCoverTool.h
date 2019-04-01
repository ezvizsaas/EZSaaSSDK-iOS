//
//  EZSaaSImageDecryptTool.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/12/5.
//

#import <UIKit/UIKit.h>
#import "EZSaaSMessageModel.h"

typedef NS_ENUM(NSInteger, EZSaaSMessCoverStatus){
    EZSaaSMessCoverStatusInitial,
    EZSaaSMessCoverStatusDownloading,
    EZSaaSMessCoverStatusDownloadFail,
    EZSaaSMessCoverStatusDecrypting,
    EZSaaSMessCoverStatusDecryptFail,
    EZSaaSMessCoverStatusSuccess
};

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSMessCoverTool : NSObject

+(void)getMessageCoverForMess:(EZSaaSMessageModel*)info process:(void(^)(EZSaaSMessCoverStatus status,UIImage* image,BOOL async,NSError* error))processBlock;

@end

NS_ASSUME_NONNULL_END
