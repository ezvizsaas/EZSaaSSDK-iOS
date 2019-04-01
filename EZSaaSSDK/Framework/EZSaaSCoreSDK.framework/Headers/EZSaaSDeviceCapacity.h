//
//    EZSaaSDeviceCapacity.h
//
//    Create by jinke5 on 16/7/2018
//    Copyright © 2018. All rights reserved.
//

//    Model file Generated using JSONExport: https://github.com/Ahmed-Ali/JSONExport

#import <UIKit/UIKit.h>

//设备能力集信息
@interface EZSaaSDeviceCapacity : NSObject <NSCoding>

@property (nonatomic , assign) NSInteger support_cloud;
@property (nonatomic , assign) NSInteger support_query_play_connections;
@property (nonatomic , assign) NSInteger support_new_sound_wave;
@property (nonatomic , assign) NSInteger support_p2p_mode;
@property (nonatomic , assign) NSInteger support_resolution;
@property (nonatomic , assign) NSInteger support_unbind;
@property (nonatomic , assign) NSInteger support_wifi_userId;
@property (nonatomic , assign) NSInteger support_talk;
@property (nonatomic , assign) NSInteger support_upgrade;
@property (nonatomic , assign) NSInteger support_smart_wifi;
@property (nonatomic , assign) NSInteger support_remote_auth_randcode;
@property (nonatomic , assign) NSInteger support_weixin;
@property (nonatomic , assign) NSInteger support_sensibility_adjust;
@property (nonatomic , assign) NSInteger support_ap_mode;
@property (nonatomic , assign) NSInteger support_fullday_record;
@property (nonatomic , assign) NSInteger support_related_device;
@property (nonatomic , assign) NSInteger support_motion_detect_area;
@property (nonatomic , assign) NSInteger support_message;
@property (nonatomic , assign) NSInteger support_wifi;
@property (nonatomic , assign) NSInteger support_cloud_version;
@property (nonatomic , assign) NSInteger ptz_center_mirror;
@property (nonatomic , assign) NSInteger support_replay_speed;
@property (nonatomic , assign) NSInteger support_flow_statistics;
@property (nonatomic , assign) NSInteger support_defence;
@property (nonatomic , assign) NSInteger ptz_top_bottom;
@property (nonatomic , assign) NSInteger support_more;
@property (nonatomic , assign) NSInteger support_ptz;
@property (nonatomic , assign) NSInteger support_defenceplan;
@property (nonatomic , assign) NSInteger support_disk;
@property (nonatomic , assign) NSInteger support_alarm_voice;
@property (nonatomic , assign) NSInteger support_human_filter;
@property (nonatomic , assign) NSInteger ptz_left_right;
@property (nonatomic , assign) NSInteger support_modify_pwd;
@property (nonatomic , assign) NSInteger support_capture;
@property (nonatomic , assign) NSInteger support_talk_type;
@property (nonatomic , assign) NSInteger support_noencript_via_antproxy;
@property (nonatomic , assign) NSInteger support_privacy;
@property (nonatomic , assign) NSInteger support_encrypt;
@property (nonatomic , assign) NSInteger support_auto_offline;
@property (nonatomic , assign) NSInteger support_reverse_direct;
@property (nonatomic , assign) NSInteger support_multi_screen;
@property (nonatomic , assign) NSInteger support_protection_mode;
@property (nonatomic , assign) NSInteger ptz_close_scene;
@property (nonatomic , assign) NSInteger support_fullscreen_ptz_12;
@property (nonatomic , assign) NSInteger support_intelligent_track;
@property (nonatomic , assign) NSInteger support_human_service;
@property (nonatomic , assign) NSInteger support_preset_alarm;
@property (nonatomic , assign) NSInteger ptz_preset;
@property (nonatomic , assign) NSInteger support_audio_onoff;
@property (nonatomic , assign) NSInteger support_ssl;
@property (nonatomic , assign) NSInteger ptz_zoom;

//1    support_defence    是否支持布撤防,活动检测开关
//2    support_talk    是否支持对讲: 0-不支持, 1-全双工, 2-半双工
//3    support_defenceplan    是否支持布撤防计划 0-不支持， 1-支持,2-支持新的设备计划协议
//4    support_disk    是否支持存储格式化 0-不支持, 1-支持
//5    support_privacy    是否支持隐私保护 0-不支持, 1-支持
//6    support_message    是否支持留言 0-不支持, 1-支持
//7    support_alarm_voice    是否支持告警声音配置 0-不支持, 1-支持
//8    support_auto_offline    是否支持设备自动上下线 0-不支持, 1-支持
//9    supprot_encrypt    是否支持视频图像加密 0-不支持, 1-支持
//10    support_upgrade    是否支持设备升级 0-不支持, 1-支持
//11    support_cloud    该设备型号是否支持云存储 0-不支持, 1-支持
//12    support_cloud_version    该设备版本是否支持云存储 0-不支持, 1-支持
//需要和support_cloud组合使用:
//support_cloud = 1 , support_cloud_version = 1 才支持云存储
//support_cloud =1 ,support_cloud_version = 0,该型号的设备支持云存储,但是当前固件版本不支持云存储
//support_cloud = 0 该型号的设备不支持云存储
//13    support_wifi    是否支持WI-FI:
//0-不支持, 1-支持netsdk配置WI-FI,2-支持带userId的新WI-FI配置方式,3-支持一键配置WI-FI
//14    support_capture    是否支持封面抓图: 0-不支持, 1-支持
//15    support_modify_pwd    是否支持修改设备加密密码: 0-不支持, 1-支持
//16    support_resolution    视频播放比例 16-9表示16:9分辨率,默认16-9
//17    support_multi_screen    是否支持多画面播放 0-不支持, 1-支持(客户端使用,与设备无关)
//18    support_upload_cloud_file    是否支持手机拍照上传到云存储 `0-不支持，1-支持
//19    support_add_del_detector    是否支持app远程添加删除外设(探测器): 0-不支持, 1-支持
//20    support_ipc_link    是否支持IPC与A1联动关系设置: 0-不支持, 1-支持
//21    support_modify_detectorname    是否支持修改外设(探测器)名称: 0-不支持,1`-支持
//22    support_safe_mode_plan    是否支持定时切换安全功能模式: 0-不支持, 1-支持
//23    support_modify_detectorguard    A1设备是否支持单独布撤防:
//该字段不存在:不支持
//该字段存在:各个外设用逗号隔开，如表顺序排列，每个值32位数值按位标识每种模式下是否可以设置某个模式下，某个探测器如果可以设置使能这个参数，就该位置1 例如"support_modify_guard":"0,0,7,7,7,0,7,0,0,0" 为下面的能力说明
//探测器类型    外出模式(bit0)    睡眠模式(bit1)    在家模式(bit2)
//烟感    0    0    0
//紧急按钮    0    0    0
//门磁    1    1    1
//红外    1    1    1
//幕帘    1    1    1
//紧急按钮    0    0    0
//单体门磁    1    1    1
//警号    0    0    0
//燃气探测器    0    0    0
//水患探测器    0    0    0
//24    support_weixin    是否支持微信互联:0-不支持, 1-支持
//25    support_ssl    是否支持声源定位:0-不支持, 1-支持
//26    support_related_device    是否支持关联设备 0-无关联设备, 1-关联监控点或N1, 2-关联探测器或A1, 3-关联监控点探测器或R1, 4关联多通道设备
//27    support_related_storage    NVR/R1是否支持关联IPC存储: 0-不支持, 1-支持
//28    support_remote_auth_randcode    是否支持设备远程授权获取密码, 0-不支持, 1-支持
//29    support_sdk_transport    是否支持设备跨公网配置的能力级：0-不支持, 1-支持
//30    ptz_top_bottom    是否支持云台上下转动 0-不支持, 1-支持
//31    ptz_left_right    是否支持云台左右转动 0-不支持, 1-支持
//32    ptz_45    是否支持云台45度方向转动 0-不支持, 1-支持
//33    ptz_zoom    是否支持云台缩放控制 0-不支持, 1-支持
//34    support_ptz    是否支持云台控制 0-不支持, 1-支持, 注:新设备的该能力集拆分为30-33这四个能力
//35    ptz_preset    是否支持云台预置点 0-不支持, 1-支持
//36    ptz_common_cruise    是否支持普通巡航 0-不支持, 1-支持
//37    ptz_figure_cruise    是否支持花样巡航0-不支持, 1-支持
//38    ptz_center_mirror    是否支持中心镜像0-不支持, 1-支持
//39    ptz_left_right_mirror    是否支持左右镜像 0-不支持, 1-支持
//40    ptz_top_bottom_mirror    是否支持上下镜像 0-不支持, 1-支持
//41    ptz_close_scene    是否支持关闭镜头 0-不支持, 1-支持
//42    support_wifi_2.4G    是否支持2.4G无线频段 0-不支持, 1-支持
//43    support_wifi_5G    是否支持5G无线频段 0-不支持, 1-支持
//44    support_wifi_portal    是否支持营销wifi，只有support_wifi_2.4G=1的时候才生效：1-支持但不能设置营销页（X1），2-支持且可以设置营销页，0-不支持
//45    support_unbind    是否支持用户解绑设备 0-不支持, 1-支持reset键解绑，2-支持界面点击确定按钮解绑
//46    support_auto_adjust    是否支持自适应码流 0-不支持, 1-支持
//47    support_timezone    是否支持时区配置 0-不支持, 1-支持
//48    support_language    支持的语言类型：ENGLISH,SIMPCN,....
//49    support_close_infrared_light    是否支持红外开关 0-不支持, 1-支持
//50    support_modify_chan_name    是否支持通道名称配置到设备（IPC/NVR) 0-不支持, 1-支持
//51    support_ptz_model    0-支持直连+转发云台控制， 1-支持直连云台控制，2-支持转发云台控制
//52    support_talk_type    0-采用上面的麦克风, 1-对讲采用下面的麦克风
//53    support_chan_type    通道类型，1-数字通道，2-模拟通道
//54    support_flow_statistics    是否支持客流统计 0-不支持, 1-支持
//55    support_more    是否支持设备设置功能 0-不支持, 1-支持
//注:设备设置页面新增"更多配置"，该项按【设备能力级】实现，更多配置进入H5网页展现
//56    support_remote_quiet    A1是否支持远程消警（静音）功能 0-不支持, 1-支持
//57    support_customize_rate    是否支持自定义码率 0-不支持, 1-支持
//58    support_rectify_image    是否支持畸形矫正 0-不支持, 1-支持
//59    support_bluetooth    是否支持蓝牙 0-不支持, 1-支持
//60    support_p2p_mode    默认0，表示老的p2p协议；配置为1，表示该版本支持新的p2p协议
//61    support_microscope    是否支持显微镜功能 0-不支持, 1-支持
//62    support_sensibility_adjust    是否支持移动侦测灵敏度调节 0-不支持, 1-支持
//63    support_sleep    是否支持睡眠功能 0-不支持, 1-支持
//64    support_audio_onoff    是否支持声音开关设置 0-不支持, 1-支持
//65    support_protection_mode    0：无防护模式，可能有活动检测（根据support_denfence(序号1)判断）
//1：只有防护模式2：有防护模式，可能有活动检测（根据support_denfence判断(序号1))能力级配置情况举例：
//support_protection_mode    support_denfence
//A1    1    1
//普通IPC    0    1
//C1S    2    1
//66    support_rate_limit    是否支持高清码率限制 0-不支持码率限制, 1-支持高清码率限制
//67    support_userId    是否支持通过UserID关联设备 0-不支持, 1-支持
//68    support_music    是否支持儿歌播放功能 0-不支持, 1-支持
//69    support_replay_speed    是否支持调节回放播放速度功能 0-不支持, 1-支持(仅IPC支持)
//70    support_reverse_direct    是否支持反向直连功能 0-不支持, 1-支持
//71    support_channel_offline_notify    是否支持通道下线通知,支持后通道下线会触发ideoloss的告警 0-不支持, 1-支持
//72    support_fullscreen_ptz    是否支持全景云台功能 0-不支持, 1-支持(C6B等云台摄像机支持).如存在能力集support_fullscreen_ptz_12(序号82),则优先参考能力集support_fullscreen_ptz_12
//73    support_preset_alarm    是否支持预置点告警联动 0-不支持, 1-支持(C6B等云台摄像机支持)
//74    support_intelligent_track    是否支持智能跟踪 0-不支持, 1-支持(C6B等云台摄像机支持)
//75    support_key_focus    是否支持一键聚焦 0-不支持, 1-支持(F1、F2等变焦摄像机支持)
//76    support_volumn_set    是否支持音量调节 0-不支持, 1-支持
//77    support_temperature_alarm    是否支持温湿度告警 0-不支持, 1-支持( F2、C1S等带温湿度传感器的摄像机支持)
//78    support_mcvolumn_set    是否支持麦克风音量调节：0-不支持，1-支持
//79    support_unlock    是否支持支持开锁 0-不支持, 1-支持
//80    support_noencript_via_antproxy    是否支持支持走代理时可以自动加密“没有开启视频加密”的流 0-不支持, 1-支持
//81    support_device_offline_notify    是否支持设备下线通知 0-不支持, 1-支持
//82    support_fullscreen_ptz_12    是否支持全景云台功能 0-不支持, 1-支持(C6B等云台摄像机支持,12张全景云台图片)
//83    support_speech_recognition    是否支持语音识别 0-不支持, 1-支持
//84    support_message_cover    是否支持留言封面 0-不支持, 1-支持
//85    support_nat_pass    是否支持NAT组合为3-4的NAT穿透（P2PV2.1） 0-不支持, 1-支持
//86    support_nvr_whitelist    NVR是否支持白名单成员管理 0-不支持, 1-支持
//87    support_voice_alarmclock    是否支持语音闹钟功能 0-不支持, 1-支持
//88    support_new_talk    是否支持新对讲服务 0-不支持, 1-支持
//89    support_fullday_record    是否支持全天录像配置开关 0-不支持, 1-支持
//90    support_query_play_connections    是否支持查询当前预览，回放链接信息 0-不支持, 1-支持
//91    support_ptz_auto_reset    是否支持云台自动复位 0-不支持, 1-支持
//92    support_fisheye_mode    是否支持鱼眼模式 0-不支持, 1-支持
//93    support_custom_voice    是否支持自定义语音 0-不支持, 1-支持(语音闹钟，告警声音使用)
//94    support_new_sound_wave    是否支持声波配置（高频版本） 0-不支持, 1-支持
//95    replay_chan_nums    X3或者N1可以关联的通道数
//96    support_horizontal_panoramic    是否支持水平全景 0-不支持, 1-支持
//97    support_active_defense    是否支持主动防御功能：0-不支持，1-主动防御按钮，2-主动防御按钮+灯光提醒开关
//98    support_motion_detect_area    是否支持移动侦测区域绘制 0-不支持, 1-支持
//99    support_chan_defence    是否支持通道布撤防 0-不支持, 1-支持
//100    ptz_focus    是否支持焦距模式 0-不支持, 1-支持
//101    support_pir_detect    是否支持红外检测能力 0-不支持, 1-支持(猫眼)
//102    support_doorbell_talk    是否支持门铃呼叫能力 0-不支持, 1-支持(猫眼)
//103    support_face_detect    是否支持人脸检测能力 0-不支持, 1-支持(猫眼)
//104    support_restart_time    设备重启时间，配置单位为秒数，默认120s
//105    support_human_filter    是否支持人形过滤能力 0-不支持, 1-支持)(C5SI型号，设备通过智能芯片硬件来支持)
//106    support_human_service    是否支持人形检测能力 0-不支持, 1-支持 (设备+平台服务开通，实现人形检测服务能力设备通过更新软件版本可以支持)
//107    support_ap_mode    是否支持添加设备配置WiFi使用，0：不支持，1：smartconfig+声波失败后，支持AP配网，2：设备默认AP配网
//108    support_continuous_cloud    是否支持连续云存储 0-不支持, 1-支持,注:与support_cloud(序号11)完全无关
//109    support_doorbell_sound    是否支持焦距模式 0-不支持, 1-支持
//110    support_associate_detector    是否支持关联探测器 0-不支持, 1-支持
//111    support_modify_username    是否支持修改门锁用户备注名称 0-不支持, 1-支持
//112    support_transfertype    预览取流格式传输类型：0-tcp，1-udp，默认0表示tcp
//113    support_vertical_panoramic    是否支持垂直全景(与support_horizontal_panoramic(序号96)对应) 0-不支持, 1-支持
//114    support_alarm_light    是否支持安防灯 0-不支持, 1-支持
//115    support_alarm_area    是否支持安防灯 0-不支持, 1-支持
//116    support_chime    是否支持门铃扩展 0-不支持, 1-支持
//117    support_video_mode    是否支持support_video_mode 0-不支持, 1-支持
//118    support_relation_camera    是否支持W2D 关联摄像机功能 0-不支持, 1-支持
//119    support_pir_setting    是否支持PIR(红外)区域设置 0-不支持, 1-支持
//120    support_battery_manage    是否支持电量管理 0-不支持, 1-支持
@end
