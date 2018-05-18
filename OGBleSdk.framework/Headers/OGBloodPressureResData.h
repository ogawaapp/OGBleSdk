//
//  OGBloodPressureResData.h
//  OGDeviceSdk
//  血压解析返回数据
//  Created by jerry on 2018/4/26.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGBloodPressureData;
@interface OGBloodPressureResData : OGBaseSModel

@property(nonatomic,strong) OGBloodPressureData *data;

@end

@interface OGBloodPressureData : OGBaseModel

@property(nonatomic,assign)   int diastolic;    //舒张压
@property(nonatomic,assign)   int heartRate;    //心率值
@property(nonatomic,assign)   int systolic;     //收缩压
@property(nonatomic,assign)   int arrhythmia;   //心率不齐 0正常 1心率不齐

@end
