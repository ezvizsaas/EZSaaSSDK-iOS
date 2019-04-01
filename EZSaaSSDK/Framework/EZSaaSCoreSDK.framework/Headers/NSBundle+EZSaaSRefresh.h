//
//  NSBundle+EZSaaSRefresh.h
//  EZSaaSRefreshExample
//
//  Created by EZSaaS Lee on 16/6/13.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSBundle (EZSaaSRefresh)
+ (instancetype)ezsaas_refreshBundle;
+ (UIImage *)ezsaas_arrowImage;
+ (NSString *)ezsaas_localizedStringForKey:(NSString *)key value:(NSString *)value;
+ (NSString *)ezsaas_localizedStringForKey:(NSString *)key;
@end
