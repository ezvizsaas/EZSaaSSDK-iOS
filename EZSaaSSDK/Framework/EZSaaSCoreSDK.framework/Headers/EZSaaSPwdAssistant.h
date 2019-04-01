//
//  YSPasswordStrenghtManager.h
//  VideoGo
//
//  Created by yanchao on 2017/1/20.
//  Copyright © 2017年 hikvision. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EZSaaSPwdAssistant : NSObject

+ (EZSaaSPwdAssistant *)getInstance;


- (NSString *)judgePassword:(NSString *)_password;
-(NSInteger) judgePasswordStrength:(NSString*) pwd account:(NSString *)account;
- (NSString*) judgePasswordStrength:(NSString *) _password;

- (BOOL)judgeReversePassword:(NSString *)_password AndUserName:(NSString *)userName;

@end






