//
//  UNADGameViewController.h
//  UNAD
//
//  Created by xiezuan on 2021/11/7.
//  Copyright © 2021 UNAD. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UNADGameViewController : UIViewController


//游戏点击微信登录回调
@property(nonatomic,copy) void(^wxLoginBlock)(void);


/// 初始化
/// @param unitID 广告单元id
- (id)initWithUnitID:(NSString *)unitID;
      


//登录
- (void)wxLoginCallBack:(NSString *)code;

//测试登录方法
- (void)testWxLoginCallBack:(NSString *)code;



@end

NS_ASSUME_NONNULL_END
