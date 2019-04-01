//
//  EZSaaSErrorWrapper.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSErrorWrapper : NSObject

+(NSString*)wrappedDesWithError:(NSError*)error;

+(NSString*)wrappedDesWithOriginalDes:(NSString*)errStr;

@end

NS_ASSUME_NONNULL_END
