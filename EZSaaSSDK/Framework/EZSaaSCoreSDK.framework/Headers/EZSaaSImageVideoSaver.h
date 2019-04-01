//
//  EZSaaSImageVideoSaver.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/8/18.
//

#import <UIKit/UIKit.h>

@interface EZSaaSImageVideoSaver : NSObject

+(void)saveImageToSystemAlbumWithImage:(UIImage*)image;

+(void)saveImageToSystemAlbumWithImagePath:(NSString*)imagePath;

+(void)saveVideoToSystemAlbumWithVideoPath:(NSString*)videoPath;

@end
