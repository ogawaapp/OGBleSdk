//
//  OGElectrocardiogramRspData.h
//  OGDeviceSdk
//  心电解析返回数据
//  Created by jerry on 2018/4/27.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"
@class OGElectrocardiogramData;
@interface OGElectrocardiogramRspData : OGBaseSModel

@property(nonatomic,strong) OGElectrocardiogramData *data;

@end

@interface OGElectrocardiogramData : OGBaseModel

@property(nonatomic,strong) NSArray  * dataArray;         //Ecg心率图数据
@property(nonatomic,assign) NSString * deviceid;          //设备序列号
@property(nonatomic,assign) NSString * ecgMeasureMode;
@property(nonatomic,assign) NSString * heartRate;         //心电值
@property(nonatomic,assign) NSString * measureTime;       //时间数据13位


@property(nonatomic,assign) NSString * ecgVaue;  //心电值
@property(nonatomic,assign) NSString * ecgData;  //心电图数据 如: 142，52，25


@end
