//
//  OGBloodSugarManager.h
//  OGBleSdk
//  血糖
//  Created by jerry on 2018/5/14.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBleEnum.h"
#import "OGBloodGlucoseRspData.h"

@protocol OGBloodSugarManagerDelegate <NSObject>

@required

//获取结果值
- (void)fetchValue:(OGBloodGlucoseData *)data;

//倒计时过程
- (void)countDownNum:(NSInteger)num;

@optional
//蓝牙状态
- (void)bleState:(BOOL) open andState:(OGBleConnectState) connectState;

//设备连接状态
- (void)connectState:(BOOL) connect;

@end

@interface OGBloodSugarManager : NSObject

//定时检测蓝牙时间 默认：2s
@property (nonatomic, unsafe_unretained)float heatCheckTime;

@property (nonatomic, weak) id<OGBloodSugarManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

//开始扫描血糖仪设备
-(void)startScanDevice;

//断开血糖仪设备
- (void)stopScanBluetoothDevice;

//当前是否连接状态
-(BOOL)isConnect;

//判断手机蓝牙是否可用
-(BOOL)isOpenBluetooth;

@end
