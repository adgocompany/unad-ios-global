//
//  UNADSpalash.h
//  GDTMobSample
//
//  Created by UNAD on 2020/4/1.
//  Copyright © 2020 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <UNAD/UNADRequestError.h>


NS_ASSUME_NONNULL_BEGIN




typedef enum : NSUInteger {
    SplashSkipTypeClick  = 1,    //按钮点击
    SplashSkipTypeTiming         //倒记时
} SplashSkipType;


@class UNADRequestError;

@protocol UNADSplashDelegate;

@interface UNADSplash : NSObject


/**
 用来接收开屏广告读取和展示状态变化通知的 delegate
 */
@property (nonatomic, weak) id<UNADSplashDelegate> delegate;

/**
 开屏广告的背景图片
 可以设置背景图片作为开屏加载时的默认背景
 */
@property (nonatomic, strong) UIImage *backgroundImage;


/**
 显示在顶部的logo图片
 */
@property (nonatomic, strong) UIImage *logoImage;



//显示加载图片
+(void)showLaunchImage:(UIImage *)image;
//关闭加载图片
+(void)hideLaunchImage;

/**
 初始化方法
 @param unitID 广告位 ID
 @param lifeTime 请求广告的倒数时间，单位秒 
 @param fetchDelay 请求广告超时的时间，单位秒
 @return 开屏广告对象
 */
- (instancetype)initWithUnitID:(NSString *)unitID
                       lifeTime:(NSInteger)lifeTime
                     fetchDelay:(NSInteger)fetchDelay NS_DESIGNATED_INITIALIZER;



/**
 请求开屏广告
 */
- (void)loadAd;

/**
 * 返回广告是否可展示
 * 对于并行请求，在调用showAd前时需判断下
 * @return 当广告已经加载完成且未曝光时，为YES，否则为NO
 */
- (BOOL)isAdValid;

/**
 展示广告
 */
- (void)showAd:(UIViewController *)rootViewController;

/**
 请求并显示加载开屏广告
 */
- (void)loadAndShow:(UIViewController *)rootViewController;

/**
 *设置跳过类型,只有海外版有效
 */
- (void)setSkipType:(SplashSkipType)skipType;



@end

/**
 代理方法
 */
@protocol UNADSplashDelegate <NSObject>

@optional

/**
 @return 展示下部logo位置，需要给传入view设置尺寸。
 */
- (UIView *)splashBottomView;


/**
 广告加载成功
 */
- (void)splashAdDidLoad:(UNADSplash *)splash;

/**
 开屏打开
 */
- (void)splashDidPresentScreen:(UNADSplash *)splash;

/**
 开屏消失
 */
- (void)splashDidDismissScreen:(UNADSplash *)splash;

/**
 开屏请求失败
 */
- (void)splash:(UNADSplash *)splash didFailWithError:(NSError *)error;

/**
 开屏点击
 */
- (void)splashDidClick:(UNADSplash *)splash;


@end


NS_ASSUME_NONNULL_END
