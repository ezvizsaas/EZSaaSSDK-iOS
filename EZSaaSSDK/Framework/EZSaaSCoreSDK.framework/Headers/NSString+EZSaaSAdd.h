//
//  NSString+EZSaaSAdd.h
//  EZSaaSCategories <https://github.com/ibireme/EZSaaSCategories>
//
//  Created by ibireme on 13/4/3.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provide hash, encrypt, encode and some common method for 'NSString'.
 */
@interface NSString (EZSaaSAdd)

/**
 Returns a lowercase NSString for md5 hash.
 */
- (nullable NSString *)ezsaas_md5String;

/**
 Trim blank characters (space and newline) in head and tail.
 @return the trimmed string.
 */
- (NSString *)ezsaas_stringByTrim;

/**
 judge the phone no

 @return result
 */
-(BOOL)ezsaas_isValidPhoneNoFromChina;

/**< 加密方法 */
- (NSString*)ezsaas_aci_encryptWithAESKey:(NSString*)aesKey;

/**< 解密方法 */
- (NSString*)ezsaas_aci_decryptWithAESKey:(NSString*)aesKey;


@end

NS_ASSUME_NONNULL_END
