//
//  NSObject+EZSaaSCoding.h
//  EZSaaSExtension
//
//  Created by ezsaas on 14-1-15.
//  Copyright (c) 2014年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EZSaaSExtensionConst.h"

/**
 *  Codeing协议
 */
@protocol EZSaaSCoding <NSObject>
@optional
/**
 *  这个数组中的属性名才会进行归档
 */
+ (NSArray *)ezsaas_allowedCodingPropertyNames;
/**
 *  这个数组中的属性名将会被忽略：不进行归档
 */
+ (NSArray *)ezsaas_ignoredCodingPropertyNames;
@end

@interface NSObject (EZSaaSCoding) <EZSaaSCoding>
/**
 *  解码（从文件中解析对象）
 */
- (void)ezsaas_decode:(NSCoder *)decoder;
/**
 *  编码（将对象写入文件中）
 */
- (void)ezsaas_encode:(NSCoder *)encoder;
@end

/**
 归档的实现
 */
#define EZSaaSCodingImplementation \
- (id)initWithCoder:(NSCoder *)decoder \
{ \
if (self = [super init]) { \
[self ezsaas_decode:decoder]; \
} \
return self; \
} \
\
- (void)encodeWithCoder:(NSCoder *)encoder \
{ \
[self ezsaas_encode:encoder]; \
}

#define EZSaaSExtensionCodingImplementation EZSaaSCodingImplementation
