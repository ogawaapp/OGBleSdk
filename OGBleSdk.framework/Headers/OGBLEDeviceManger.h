//
//  OGBLEDeviceManger.h
//  OGBleSdk
//
//  Created by jerry on 2018/5/17.
//  Copyright © 2018年 jerry. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OGBLEDeviceManger : NSObject

//应用秘要
@property (nonatomic, copy, readonly) NSString * appId;
@property (nonatomic, copy, readonly) NSString * appSecret;

//获取单例
+ (instancetype)sharedOGBLEDeviceManger;

//注册秘钥
-(void)registerSdkWithAppId:(NSString *)appId andAppSecret:(NSString * )appSecret;

@end
