//
//  EZSaaSAlbumSDK.h
//  EZSaaSAlbumSDK
//
//  Created by jinke5 on 2019/1/21.
//  Copyright © 2019 jinke5. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for EZSaaSAlbumSDK.
FOUNDATION_EXPORT double EZSaaSAlbumSDKVersionNumber;

//! Project version string for EZSaaSAlbumSDK.
FOUNDATION_EXPORT const unsigned char EZSaaSAlbumSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <EZSaaSAlbumSDK/PublicHeader.h>

#ifndef EZSaaSAlbumSDK_h
#define EZSaaSAlbumSDK_h
#endif

@interface EZSaaSAlbumSDK : NSObject

+(UIViewController*)getAlbumViewController;

+(BOOL)saveOriginalImageFile:(UIImage *)image withDeviceSerial:(NSString *)deviceSerial;

+(BOOL)saveRecordFile:(NSData*)recordData withCapImage:(UIImage*)image andDeviceSerial:(NSString*)deviceSerial;

@end

