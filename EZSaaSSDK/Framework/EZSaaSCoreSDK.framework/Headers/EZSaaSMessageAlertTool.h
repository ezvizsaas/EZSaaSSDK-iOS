//
//  EZSaaSMessageAlertTool.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/11/19.
//

#import <Foundation/Foundation.h>
#import "EZSaaSMessageModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSMessageAlertTool : NSObject

+(void)showMessageAlertWithMessageJSONStr:(NSString *)messageJSON;

+(instancetype)sharedAlertTool;

+(void)reset;

@end

NS_ASSUME_NONNULL_END
