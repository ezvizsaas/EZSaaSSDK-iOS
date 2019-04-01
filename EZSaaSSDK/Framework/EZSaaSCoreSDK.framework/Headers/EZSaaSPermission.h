//
//  EZSaaSPermission.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZSaaSPermission : NSObject <NSCoding>

@property (nonatomic, copy) NSString * createBy;
@property (nonatomic, copy) NSString * createDate;
@property (nonatomic, copy) NSString * href;
@property (nonatomic, copy) NSString * idField;
@property (nonatomic, copy) NSString * name;
@property (nonatomic, copy) NSString * parentId;
@property (nonatomic, copy) NSString * permission;
@property (nonatomic, copy) NSString * permissionCheck;
@property (nonatomic, copy) NSString * permissionType;
@property (nonatomic, copy) NSString * updateBy;
@property (nonatomic, copy) NSString * updateDate;

@end

NS_ASSUME_NONNULL_END
