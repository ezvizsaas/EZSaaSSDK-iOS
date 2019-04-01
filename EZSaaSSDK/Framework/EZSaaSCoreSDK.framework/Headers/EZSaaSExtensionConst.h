
#ifndef __EZSaaSExtensionConst__H__
#define __EZSaaSExtensionConst__H__

#import <Foundation/Foundation.h>

// 信号量
#define EZSaaSExtensionSemaphoreCreate \
static dispatch_semaphore_t signalSemaphore; \
static dispatch_once_t onceTokenSemaphore; \
dispatch_once(&onceTokenSemaphore, ^{ \
    signalSemaphore = dispatch_semaphore_create(1); \
});

#define EZSaaSExtensionSemaphoreWait \
dispatch_semaphore_wait(signalSemaphore, DISPATCH_TIME_FOREVER);

#define EZSaaSExtensionSemaphoreSignal \
dispatch_semaphore_signal(signalSemaphore);

// 过期
#define EZSaaSExtensionDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

// 构建错误
#define EZSaaSExtensionBuildError(clazz, msg) \
NSError *error = [NSError errorWithDomain:msg code:250 userInfo:nil]; \
[clazz setEzsaas_error:error];

// 日志输出
#ifdef DEBUG
#define EZSaaSExtensionLog(...) NSLog(__VA_ARGS__)
#else
#define EZSaaSExtensionLog(...)
#endif

/**
 * 断言
 * @param condition   条件
 * @param returnValue 返回值
 */
#define EZSaaSExtensionAssertError(condition, returnValue, clazz, msg) \
[clazz setEzsaas_error:nil]; \
if ((condition) == NO) { \
    EZSaaSExtensionBuildError(clazz, msg); \
    return returnValue;\
}

#define EZSaaSExtensionAssert2(condition, returnValue) \
if ((condition) == NO) return returnValue;

/**
 * 断言
 * @param condition   条件
 */
#define EZSaaSExtensionAssert(condition) EZSaaSExtensionAssert2(condition, )

/**
 * 断言
 * @param param         参数
 * @param returnValue   返回值
 */
#define EZSaaSExtensionAssertParamNotNil2(param, returnValue) \
EZSaaSExtensionAssert2((param) != nil, returnValue)

/**
 * 断言
 * @param param   参数
 */
#define EZSaaSExtensionAssertParamNotNil(param) EZSaaSExtensionAssertParamNotNil2(param, )

/**
 * 打印所有的属性
 */
#define EZSaaSLogAllIvars \
-(NSString *)description \
{ \
    return [self ezsaas_keyValues].description; \
}
#define EZSaaSExtensionLogAllProperties EZSaaSLogAllIvars

/**
 *  类型（属性类型）
 */
extern NSString *const EZSaaSPropertyTypeInt;
extern NSString *const EZSaaSPropertyTypeShort;
extern NSString *const EZSaaSPropertyTypeFloat;
extern NSString *const EZSaaSPropertyTypeDouble;
extern NSString *const EZSaaSPropertyTypeLong;
extern NSString *const EZSaaSPropertyTypeLongLong;
extern NSString *const EZSaaSPropertyTypeChar;
extern NSString *const EZSaaSPropertyTypeBOOL1;
extern NSString *const EZSaaSPropertyTypeBOOL2;
extern NSString *const EZSaaSPropertyTypePointer;

extern NSString *const EZSaaSPropertyTypeIvar;
extern NSString *const EZSaaSPropertyTypeMethod;
extern NSString *const EZSaaSPropertyTypeBlock;
extern NSString *const EZSaaSPropertyTypeClass;
extern NSString *const EZSaaSPropertyTypeSEL;
extern NSString *const EZSaaSPropertyTypeId;

#endif
