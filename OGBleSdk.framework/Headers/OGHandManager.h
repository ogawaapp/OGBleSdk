//
//  OGHandManager.h
//  OGBleSdk
//
//  Created by jerry on 2018/5/15.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBleEnum.h"
#import "OGHandringRspData.h"

@protocol OGHandManagerDelegate <NSObject>

@required

- (void)fetchValue:(OGHandringData *)data;

@optional
//蓝牙状态
- (void)bleState:(BOOL) open andState:(OGBleConnectState) connectState;

//设备连接状态
- (void)connectState:(BOOL) connect;

@end

@interface OGHandManager : NSObject

//定时检测蓝牙时间 默认：2s
@property (nonatomic, unsafe_unretained)float heatCheckTime;

@property (nonatomic, weak) id<OGHandManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

//开始扫描设备
-(void)startScanDevice;

//断开设备
- (void)stopScanBluetoothDevice;

//当前是否连接状态
-(BOOL)isConnect;

//设置为当前时间
-(void)setCurrentTime;

//获取当前时间
-(void)fetCurrentTime;

//开始同步获取心率数据
-(void)startGetDatas;

@end
