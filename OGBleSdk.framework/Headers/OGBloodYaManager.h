//
//  OGBloodYaManager.h
//  OGBleSdk
//  血压
//  Created by jerry on 2018/5/15.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBleEnum.h"
#import "OGBloodPressureResData.h"


//读取历史记录数据
typedef void(^OGHistoryDataBlock)(NSArray<OGBloodPressureData*> * datas);

@protocol OGBloodYaManagerDelegate <NSObject>

@required

//获取解析回来的数据
- (void)fetchValue:(OGBloodPressureData *)data;

@optional
//蓝牙状态
- (void)bleState:(BOOL) open andState:(OGBleConnectState) connectState;

//设备连接状态
- (void)connectState:(BOOL) connect;

@end

@interface OGBloodYaManager : NSObject

//定时检测蓝牙时间 默认：2s
@property (nonatomic, unsafe_unretained)float heatCheckTime;

@property (nonatomic, weak) id<OGBloodYaManagerDelegate>delegate;

//获取单例
+ (instancetype)sharedManager;

//开始扫描设备
-(void)startScanDevice;

//断开设备
- (void)stopScanBluetoothDevice;

//当前是否连接状态
-(BOOL)isConnect;

//判断手机蓝牙是否可用
-(BOOL)isOpenBluetooth;

//读取历史记录
-(void)getHistoryDataWithBlock:(OGHistoryDataBlock)block;

//开始测量
-(void)startMeasure;
//结束测量
-(void)endMeasure;

//关机
-(void)offMeasure;

@end
