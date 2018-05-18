//
//  YCGLUBlueTooth.h
//  DXFIndependentBlueTooth
//
//  Created by hukang on 2018/4/8.
//  Copyright © 2018年 段晓飞. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FTHrBlueToothDelegate <NSObject>

@optional

/** 蓝牙开始扫描外设,扫描中返回startScan1，没有扫描到stopScan1*/
- (void)ftScanForPeripheralsWithServices:(NSString *)string;

/** 蓝牙在打开的情况下，继续扫描外设，继续扫描返回startScan2,扫描不到设备返回stopScan2*/
- (void)ftCentralManagerDidUpdateState:(NSString *)string;

/** 蓝牙发现设备后，停止搜索,尝试连接蓝牙返回didDiscover,连接设备没有但回应返回didDiscoverError*/
- (void)ftDidDiscoverPeripheral:(NSString *)string;

/** 蓝牙连接设备后，没有收到数据，返回didConnectError*/
- (void)ftDidConnectPeripheral:(NSString *)string;

/** 蓝牙正在接收数据中，正在接收数据返回didUpdateNotificationState，其他原因数据接收错误返回didUpdateNotificationStateError，没有特征值蓝牙取消连接返回didUpdateNotificationStateCancelConnection
 */
- (void)ftDidUpdateNotificationStateForCharacteristic:(NSString *)string;

/** 没有数据接收时，就退出来，返回退出的状态didUpdateValue*/
- (void)ftDidUpdateValueForCharacteristic:(NSString *)string;

/**蓝牙给外设写入数据，写入数据出错，返回错误状态writeCharValueStop*/
- (void)ftWriteCharValues:(NSString *)string;

/** 没用户登录，测体成分时，返回没有用户登录状态noUserInfo*/
- (void)ftNoUserInfo:(NSString *)noUserInfo;

/** 接收数据时,如果返回设备类型错误，返回parameterError，数据接收错误返回dataReceiveError*/
- (void)ftReceveDataError:(NSString *)string;

@required

/** 返回的数据*/
- (void)ftReturnHrData:(NSDictionary *)dataDic;

@end

@interface FTHrBlueTooth : NSObject

@property (nonatomic, weak)id<FTHrBlueToothDelegate> ftBlueToothDelegate;

/**设置蓝牙开始扫描多少时间，没收到设备后断开扫描*/
@property (nonatomic, unsafe_unretained)float scanBlueTime;

/**设置蓝牙已经打开后，扫描继续多少时间，没收到设备后断开*/
@property (nonatomic, unsafe_unretained)float didUpdateTime;

/**设置蓝牙已经发现设备并尝试连接设备，多少时间没连接设备，断开*/
@property (nonatomic, unsafe_unretained)float didDiscoverTime;

/**设置蓝牙已连接到设备，多少时间没收到设备数据，断开*/
@property (nonatomic, unsafe_unretained)float didConnectTime;

/**设置蓝牙在接收数据的时间范围，超过时间范围，断开*/
@property (nonatomic, unsafe_unretained)float didUpdateNotificationStateTime;

/**设置蓝牙给设备写入数据后,多少时间没收到数据，就断开*/
@property (nonatomic, unsafe_unretained)float writeCharTime;

/*单例*/
+ (instancetype)shareFTBlueTooth;

//开始扫描蓝牙

- (void)startScanWithFTHr;

/**停止蓝牙数据搜索，断开蓝牙*/
- (void)stopScanBluetoothDevice;


@end
