//
//  OGDeviceEnum.h
//  OGDeviceSdk
//
//  Created by jerry on 2018/4/24.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>

//设备类型
typedef NS_ENUM(NSInteger, DeviceType) {
    //未知类型设备
    UNKNOWN,
    //体脂称设备
    FAT_SCALE,
    //血压计设备
    SPHYGMOMANOMETER,
    //体温计设备
    THERMOMETER,
    //血氧仪设备
    OXIMETER,
    //心电检测仪设备
    ELECTROCARDIOGRAM,
    //血糖仪设备
    BLOODGLUCOSE,
    //手环设备
    HANDRING
};

//性别类型
typedef NS_ENUM(NSInteger, SexType) {
    //未知
    S_UNKNOWN,
    //男性
    S_MALE,
    //女性
    S_FEMALE
};

//单位类型
typedef NS_ENUM(NSInteger, UnitType) {
    //以kg为计量单位
    UNIT_KG,
    //以lb为计量单位
    UNIT_LB,
    //以st为计量单位
    UNIT_ST
};

//时间类型
typedef NS_ENUM(NSInteger, HourSystem) {
    //24小时制
    HOUR_24,
    //12小时制
    HOUR_12
};

//设备连接状态
typedef NS_ENUM(NSInteger, DeviceConnectState) {
    //未知
    D_UNKNOWN,
    //表示连接成功
    CONNECTED_SUCCESS,
    //表示连接失败
    CONNECTED_FAILED,
    //表示连接断开
    DISCONNECTED
};

//星期
typedef NS_ENUM(NSInteger, WeekDay) {
    //表示周一
    MONDAY,
    //表示周二
    TUESDAY,
    //表示周三
    WEDNESDAY,
    //表示周四
    THURSDAY,
    //表示周五
    FRIDAY,
    //表示周六
    SATURDAY,
    //表示周日
    SUNDAY
};


@interface OGDeviceEnum : NSObject

@end
