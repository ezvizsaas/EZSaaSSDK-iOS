//
//  EZSaaSAlertTool.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/8/28.
//

#import <Foundation/Foundation.h>

@interface EZSaaSAlertTool : NSObject

+(void)showAlertWithDes:(NSString *)des confirmTitle:(NSString*)confirmTitle confirmBlock:(void (^)(void))confirmBlock;

@end
