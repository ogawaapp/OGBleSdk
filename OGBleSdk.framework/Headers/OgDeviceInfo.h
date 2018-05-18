//
//  OgDeviceInfo.h
//  OGDeviceSdk
//  设备信息
//  Created by jerry on 2018/4/24.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OGDeviceEnum.h"

@interface OgDeviceInfo : NSObject

//设备ID
@property(nonatomic,copy) NSString * deviceId;
//设备SN号
@property(nonatomic,copy) NSString * deviceSn;
//设备名称
@property(nonatomic,copy) NSString * deviceName;


//设备类型
@property(nonatomic,assign) DeviceType deviceType;
//设备型号
@property(nonatomic,copy) NSString * modelNumber;
//软件版本
@property(nonatomic,copy) NSString * softwareVersion;
//硬件版本
@property(nonatomic,copy) NSString * hardwareVersion;
//固件版本
@property(nonatomic,copy) NSString * firmwareVersion;
//制造商名称
@property(nonatomic,copy) NSString * manufactureName;
//设备用户编号
@property(nonatomic,copy) NSString * deviceUserNumber;


//设备硬件地址
@property(nonatomic,copy) NSString * macAddress;
//厂商自定义数据
@property(nonatomic,copy) NSString * manufactureData;

@property(nonatomic,strong) CBPeripheral * peripheral;
//是否已经连接
@property(nonatomic,assign) BOOL isconnect;

@end
