//
//  EZSaaSPermissionCache.h
//  EZSaaSCommonPlugin
//
//  Created by jinke5 on 2018/10/26.
//

#import <Foundation/Foundation.h>
#import "EZSaaSCache.h"

NS_ASSUME_NONNULL_BEGIN

//7 实时预览
//8 录像回放
//9 告警提醒
//10 语音对讲
//11 云台控制
//12 隐私遮蔽
//13 听声辨位
//14 录制
//15 抓图
//16 全天录像开关
//17 修改设备名称
//18 活动检测开关
//19 设备添加/删除
//20 移动侦测灵敏度
//21 摄像机指示灯设置
//22 开关视频图片加密
//23 设备升级
//24 告警消息编辑

typedef NS_ENUM(NSInteger,EZSaaSPermissionType) {
    EZSaaSPermissionTypeRealPlay = 7,
    EZSaaSPermissionTypePlayBack,
    EZSaaSPermissionTypeMessage,
    EZSaaSPermissionTypeVoiceTalk,
    EZSaaSPermissionTypePTZ,
    EZSaaSPermissionTypeHide,
    EZSaaSPermissionTypeSoundTrack,
    EZSaaSPermissionTypeRecord,
    EZSaaSPermissionTypeCapture,
    EZSaaSPermissionTypeAllDayRec,
    EZSaaSPermissionTypeModifyDeviceName,
    EZSaaSPermissionTypeMovingDetect,
    EZSaaSPermissionTypeAddDevice,
    EZSaaSPermissionTypeMovingDetectSense,
    EZSaaSPermissionTypeLight,
    EZSaaSPermissionTypeEncryptSwitch,
    EZSaaSPermissionTypeDeviceUpdate,
    EZSaaSPermissionTypeCameraList,
    EZSaaSPermissionTypeLiveList,
};

@interface EZSaaSPermissionCache : EZSaaSCache

+(instancetype)sharedPermissionCache;

+(BOOL)checkPermissionWithID:(NSString*)idField;

//+(BOOL)checkPermissionWithName:(NSString*)name;

+(void)requestForUpdatedPermission;

+(BOOL)checkPermissionWithType:(EZSaaSPermissionType)type;

@end

NS_ASSUME_NONNULL_END
