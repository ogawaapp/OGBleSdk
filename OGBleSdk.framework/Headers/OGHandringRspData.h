//
//  OGHandringRspData.h
//  OGBleSdk
//
//  Created by jerry on 2018/5/2.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGBaseModel.h"
#import "OGBaseSModel.h"

@class OGHandringData;

@interface OGHandringRspData : OGBaseSModel

@property(nonatomic,strong) OGHandringData *data;

@end

@interface OGHandringData : OGBaseSModel

@property(nonatomic,copy) NSString * heartRate; //心率图数据

@end
