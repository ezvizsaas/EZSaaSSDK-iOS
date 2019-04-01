//
//  NSObject+EZSaaSProperty.h
//  EZSaaSExtensionExample
//
//  Created by EZSaaS Lee on 15/4/17.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSExtensionConst.h"

@class EZSaaSProperty;

/**
 *  遍历成员变量用的block
 *
 *  @param property 成员的包装对象
 *  @param stop   YES代表停止遍历，NO代表继续遍历
 */
typedef void (^EZSaaSPropertiesEnumeration)(EZSaaSProperty *property, BOOL *stop);

/** 将属性名换为其他key去字典中取值 */
typedef NSDictionary * (^EZSaaSReplacedKeyFromPropertyName)(void);
typedef id (^EZSaaSReplacedKeyFromPropertyName121)(NSString *propertyName);
/** 数组中需要转换的模型类 */
typedef NSDictionary * (^EZSaaSObjectClassInArray)(void);
/** 用于过滤字典中的值 */
typedef id (^EZSaaSNewValueFromOldValue)(id object, id oldValue, EZSaaSProperty *property);

/**
 * 成员属性相关的扩展
 */
@interface NSObject (EZSaaSProperty)
#pragma mark - 遍历
/**
 *  遍历所有的成员
 */
+ (void)ezsaas_enumerateProperties:(EZSaaSPropertiesEnumeration)enumeration;

#pragma mark - 新值配置
/**
 *  用于过滤字典中的值
 *
 *  @param newValueFormOldValue 用于过滤字典中的值
 */
+ (void)ezsaas_setupNewValueFromOldValue:(EZSaaSNewValueFromOldValue)newValueFormOldValue;
+ (id)ezsaas_getNewValueFromObject:(__unsafe_unretained id)object oldValue:(__unsafe_unretained id)oldValue property:(__unsafe_unretained EZSaaSProperty *)property;

#pragma mark - key配置
/**
 *  将属性名换为其他key去字典中取值
 *
 *  @param replacedKeyFromPropertyName 将属性名换为其他key去字典中取值
 */
+ (void)ezsaas_setupReplacedKeyFromPropertyName:(EZSaaSReplacedKeyFromPropertyName)replacedKeyFromPropertyName;
/**
 *  将属性名换为其他key去字典中取值
 *
 *  @param replacedKeyFromPropertyName121 将属性名换为其他key去字典中取值
 */
+ (void)ezsaas_setupReplacedKeyFromPropertyName121:(EZSaaSReplacedKeyFromPropertyName121)replacedKeyFromPropertyName121;

#pragma mark - array model class配置
/**
 *  数组中需要转换的模型类
 *
 *  @param objectClassInArray          数组中需要转换的模型类
 */
+ (void)ezsaas_setupObjectClassInArray:(EZSaaSObjectClassInArray)objectClassInArray;
@end

@interface NSObject (EZSaaSPropertyDeprecated_v_2_5_16)
+ (void)enumerateProperties:(EZSaaSPropertiesEnumeration)enumeration EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
+ (void)setupNewValueFromOldValue:(EZSaaSNewValueFromOldValue)newValueFormOldValue EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
+ (id)getNewValueFromObject:(__unsafe_unretained id)object oldValue:(__unsafe_unretained id)oldValue property:(__unsafe_unretained EZSaaSProperty *)property EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
+ (void)setupReplacedKeyFromPropertyName:(EZSaaSReplacedKeyFromPropertyName)replacedKeyFromPropertyName EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
+ (void)setupReplacedKeyFromPropertyName121:(EZSaaSReplacedKeyFromPropertyName121)replacedKeyFromPropertyName121 EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
+ (void)setupObjectClassInArray:(EZSaaSObjectClassInArray)objectClassInArray EZSaaSExtensionDeprecated("请在方法名前面加上ezsaas_前缀，使用ezsaas_***");
@end
