//
//  OGBleEnum.h
//  OGBleSdk
//
//  Created by jerry on 2018/5/17.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>

//蓝牙连接状态类型
typedef NS_ENUM(NSInteger, OGBleConnectState) {
    OGBleConnectStateUnknown = 0,
    OGBleConnectStateResetting,
    OGBleConnectStateUnsupported,      //不支持蓝牙
    OGBleConnectStateUnauthorized,
    OGBleConnectStatePoweredOff,       //蓝牙未开启
    OGBleConnectStatePoweredOn,        //蓝牙已开启
};

@interface OGBleEnum : NSObject



@end
