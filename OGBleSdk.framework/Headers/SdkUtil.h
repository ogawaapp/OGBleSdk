//
//  SdkUtil.h
//  OGDeviceSdk
//
//  Created by jerry on 2018/4/25.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OgDeviceInfo.h"

@interface SdkUtil : NSObject

/**
 判断是否一样
 @param per1 待检查设备
 @param per2 待检查设备
 @return YES 表示一样， NO 表示不一样;
 */
+(BOOL) isEqulCBPeripheral:(CBPeripheral*)per1 WithCBPeripheral:(CBPeripheral*)per2;

/**
 判断是否已经有包含该设备
 @param deviceInfo 待检查设备
 @return YES 表示已经包含， NO 表示未包含;
 */
+(BOOL) isContainsOgDeviceInfo:(OgDeviceInfo*)deviceInfo WithDatas:(NSArray<OgDeviceInfo *> *)datas;

/**
 判断是否已经有包含该设备
 @param typeList 当前可用设备类型集合
 @param name 当前设备名称
 @param identifier 当前设备identifier
 @return DeviceType 设备类型;
 */
+(DeviceType)filterJudgeDevicesByTypeList:(NSArray<NSString*>*)typeList andDeviceName:(NSString *)name andDeviceUUID:(NSString *)identifier;






@end
