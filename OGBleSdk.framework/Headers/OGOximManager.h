//
//  OGOximManager.h
//  OGBleSdk
//  血氧仪
//  Created by jerry on 2018/5/15.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBleEnum.h"
#import "OGOximeterRspData.h"

@protocol OGOximManagerDelegate <NSObject>

@required

//实时获取解析回来的数据
- (void)fetchValue:(OGOximeterData *)data;

@optional

//蓝牙状态
- (void)bleState:(BOOL) open andState:(OGBleConnectState) connectState;

//设备连接状态
- (void)connectState:(BOOL) connect;

@end

@interface OGOximManager : NSObject

//定时检测蓝牙时间 默认：2s
@property (nonatomic, unsafe_unretained)float heatCheckTime;

@property (nonatomic, weak) id<OGOximManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

//开始扫描血氧设备
-(void)startScanDevice;

//断开血氧设备
- (void)stopScanBluetoothDevice;

//当前是否连接状态
-(BOOL)isConnect;

//判断手机蓝牙是否可用
-(BOOL)isOpenBluetooth;

@end
