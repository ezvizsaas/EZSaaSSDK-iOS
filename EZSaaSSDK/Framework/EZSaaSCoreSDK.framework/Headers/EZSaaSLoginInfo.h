//
//	EZSaaSLoginInfo.h
//
//	Create by jinke5 on 11/7/2018
//	Copyright © 2018. All rights reserved.
//

//	Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,EZSaaSUserType) {
    EZSaaSUserTypeEnterprise = 1,
    EZSaaSUserTypeSubAccount
};

@interface EZSaaSLoginInfo : NSObject

@property (nonatomic , copy) NSString * expireTime;
@property (nonatomic , copy) NSString * token_type;
@property (nonatomic , copy) NSString * idField;
@property (nonatomic , copy) NSString * accessToken;
@property (nonatomic , copy) NSString * mobile;
@property (nonatomic , copy) NSString * expiresDate;
@property (nonatomic , copy) NSString * scope;
@property (nonatomic , copy) NSString * refreshToken;
@property (nonatomic , copy) NSString * accountType;
@property (nonatomic , copy) NSString * jti;
@property (nonatomic , copy) NSString * token;
@property (nonatomic , copy) NSString * appKey;
@property (nonatomic , assign) NSInteger  userType; //用户类型(企业用户1，子用户2)
@property (nonatomic , copy) NSString * secretKey;
@property (nonatomic , copy) NSString * ezvizEnv;
@property (nonatomic , copy) NSArray *permission_data;
@end
