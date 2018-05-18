//
//  OGBLEManger.h
//  OGBleSdk
//  蓝牙
//  Created by jerry on 2018/4/28.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "OgDeviceInfo.h"
#import "OGNoticeMacro.h"

//发现新设备
typedef void(^DiscoverNewEquipment)(void);
//配对回调
typedef void(^PairCallBlock)(BOOL success);

@interface OGBLEManger : NSObject<CBCentralManagerDelegate>

@property (nonatomic, assign, readonly) BOOL isOpen;

//应用秘要
@property (nonatomic, copy, readonly) NSString * appId;
@property (nonatomic, copy, readonly) NSString * appSecret;

//中心设备
@property (nonatomic, strong) CBCentralManager *centralManager;

@property (nonatomic,strong ) NSMutableArray <OgDeviceInfo*> *devices;        // 扫描到的外围设备

//发现新设备回调
@property (nonatomic, copy) DiscoverNewEquipment discoverNewEquipment;

//获取单例
+ (instancetype)sharedOGBLEManger;

//判断手机蓝牙是否可用
-(BOOL)isOpenBluetooth;

//注册秘钥
-(void)registerSdkWithAppId:(NSString *)appId andAppSecret:(NSString * )appSecret;

#pragma mark -

// 开始扫描
-(void)startScan;

//停止扫描
-(void)stopScan;

/**
 配对设备连接
 @return 返回值:BOOL，YES 表示设备配对功能可用，NO 表示设备配对功能不可用或工作状态错误
 */
-(BOOL)pairingConnectWithDevice:(OgDeviceInfo*)deviceInfo andPairCallBlock:(PairCallBlock)pairCallBlock;

/**
 断开设备
 @return 返回值:BOOL，YES 表示设备配对功能可用，NO 表示设备配对功能不可用或工作状态错误
 */
-(BOOL)cancleConnectWithDevice:(OgDeviceInfo*)deviceInfo;


@end
