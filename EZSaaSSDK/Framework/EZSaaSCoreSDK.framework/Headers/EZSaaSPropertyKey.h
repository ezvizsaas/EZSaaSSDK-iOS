//
//  EZSaaSPropertyKey.h
//  EZSaaSExtensionExample
//
//  Created by EZSaaS Lee on 15/8/11.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    EZSaaSPropertyKeyTypeDictionary = 0, // 字典的key
    EZSaaSPropertyKeyTypeArray // 数组的key
} EZSaaSPropertyKeyType;

/**
 *  属性的key
 */
@interface EZSaaSPropertyKey : NSObject
/** key的名字 */
@property (copy,   nonatomic) NSString *name;
/** key的种类，可能是@"10"，可能是@"age" */
@property (assign, nonatomic) EZSaaSPropertyKeyType type;

/**
 *  根据当前的key，也就是name，从object（字典或者数组）中取值
 */
- (id)valueInObject:(id)object;

@end
