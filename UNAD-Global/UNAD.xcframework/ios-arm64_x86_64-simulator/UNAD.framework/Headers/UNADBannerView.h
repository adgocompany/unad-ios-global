//
//  UNADBannerView.h
//  GDTMobSample
//
//  Created by UNAD on 2020/4/3.
//  Copyright © 2020 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN




@protocol UNADBannerViewDelegate;
@class AdGrowRequestError;

@interface UNADBannerView : UIView

@property (nonatomic, copy, readonly) NSString *unitID;
@property (nonatomic, assign) BOOL isAnimationOn;
@property (nonatomic, assign) int showSeconds;


/**
 用来接收 Banner 广告读取和展示状态变化通知的 delegate
 */
@property (nonatomic, weak) id<UNADBannerViewDelegate> delegate;


/**
 初始化方法
 @param unitID 广告位 ID
 @param rootViewController 广告点击后弹出全屏的广告需要指定ViewController
 @return Banner 广告对象
 */
- (instancetype)initWithUnitID:(NSString *)unitID
            rootViewController:(UIViewController *)rootViewController;

/**
 Banner 加载
 */
- (void)loadAd;
/**
 Banner 广告移除 开发者自行调用
 */
- (void)closeAd;

@end

/**
 代理方法
 */
@protocol UNADBannerViewDelegate <NSObject>

@optional

/**
 Banner加载成功
 */
- (void)bannerDidReceiveAd:(UNADBannerView *)bannerView;

/**
 Banner点击
 */
- (void)bannerDidClick:(UNADBannerView *)bannerView;

/**
 * 信息流广告展示
 */
- (void)bannerDidShow:(UNADBannerView *)feedAdView;

/**
 广告显示完被关闭
 */
- (void)adDidClose:(UNADBannerView *)bannerView;

/**
 广告弹出全屏
 */
- (void)adWillPresentFullScreen:(UNADBannerView *)bannerView;

/**
 广告从全屏关闭
 */
- (void)adWillDismissFullScreen:(UNADBannerView *)bannerView;


/**
 Banner请求失败
 */
- (void)banner:(UNADBannerView *)bannerView didFailWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
