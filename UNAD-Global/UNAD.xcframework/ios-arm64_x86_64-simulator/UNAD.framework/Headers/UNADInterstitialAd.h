//
//  UNADInterstitialAd.h
//  UNAD
//
//  Created by UNAD on 2020/2/7.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@protocol UNADInterstitialAdDelegate;

@interface UNADInterstitialAd : NSObject


@property(nonatomic, weak, nullable) id<UNADInterstitialAdDelegate> delegate;

/** 播放视频开启声音，插屏默认开启 */
@property (nonatomic, assign) BOOL enableAudio;
/**点击详情页播放视频开启声音，插屏默认开启 */
@property (nonatomic, assign) BOOL enableDetailPageAudio;

- (instancetype)initWithUnitID:(NSString *)unitID;

/**
 加载广告
 */
- (void)loadAd;

/**
 显示广告
 */
- (void)showAdFromRootViewController:(nonnull UIViewController *)rootViewController;


@end



/**
 代理方法
 */
@protocol UNADInterstitialAdDelegate <NSObject>
@optional

/**
 广告已经加载
 */
- (void)interstitialAdLoaded:(UNADInterstitialAd *)interstitial;
/**
 广告加载失败
 */
- (void)interstitialAd:(UNADInterstitialAd *)interstitial didFailWithError:(NSError *)error;
/**
 广告显示
 */
- (void)interstitialAdShown:(UNADInterstitialAd *)interstitial;
/**
 广告点击
 */
- (void)interstitialAdClicked:(UNADInterstitialAd *)interstitial;
/**
 广告关闭
 */
- (void)interstitialAdDismissed:(UNADInterstitialAd *)interstitial;

@end





NS_ASSUME_NONNULL_END
