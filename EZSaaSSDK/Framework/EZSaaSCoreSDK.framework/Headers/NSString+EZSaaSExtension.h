//
//  NSString+EZSaaSExtension.h
//  EZSaaSExtensionExample
//
//  Created by EZSaaS Lee on 15/6/7.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSExtensionConst.h"

@interface NSString (EZSaaSExtension)
/**
 *  驼峰转下划线（loveYou -> love_you）
 */
- (NSString *)ezsaas_underlineFromCamel;
/**
 *  下划线转驼峰（love_you -> loveYou）
 */
- (NSString *)ezsaas_camelFromUnderline;
/**
 * 首字母变大写
 */
- (NSString *)ezsaas_firstCharUpper;
/**
 * 首字母变小写
 */
- (NSString *)ezsaas_firstCharLower;

- (BOOL)ezsaas_isPureInt;

- (NSURL *)ezsaas_url;
@end

@interface NSString (EZSaaSExtensionDeprecated_v_2_5_16)
- (NSString *)underlineFromCamel EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
- (NSString *)camelFromUnderline EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
- (NSString *)firstCharUpper EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
- (NSString *)firstCharLower EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
- (BOOL)isPureInt EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
- (NSURL *)url EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
@end
