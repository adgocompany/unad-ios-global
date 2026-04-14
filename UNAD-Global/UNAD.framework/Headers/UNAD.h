//
//  UNAD.h
//  iCamSee
//
//  Created by UNAD on 2020/8/14.
//  Copyright © 2020 UNAD. All rights reserved.
//





#import <Foundation/Foundation.h>
#import <UNAD/UNADSplash.h>
#import <UNAD/UNADBannerView.h>
#import <UNAD/UNADFeedAd.h>
#import <UNAD/UNADFeedAdView.h>
#import <UNAD/UNADInterstitialAd.h>
#import <UNAD/UNADRewardedAd.h>
#import <UNAD/UNADGameViewController.h>
#import <UNAD/UNADConfig.h>
#import <UNAD/UNADContentVideoFeed.h>
#import <UNAD/UNADContentTextFeed.h>
#import <UNAD/UNADContentHorizontalVideoFeed.h>
#import <UNAD/UNADContentDelegate.h>
#import <UNAD/UNADContentCallBackProtocol.h>


//#define INCLUDE_CONTENT_SDK YES
//#define CN_ONLY YES //单独国内版本
#define HW_ONLY YES //单独海外版本
#define NO_JAD YES //移除JAD

//#define NO_MINTEGRAL YES //移除Mintegral


NS_ASSUME_NONNULL_BEGIN

//当前版本号

#define UNAD_SDK_VERSION  @"2.9.13"


//测试应用ID
#define UNAD_TEST_APPID_IOS         @"Adgo-app-1979466946"

//测试广告位
//开屏国内
#define UNAD_TEST_UNIT_ID_SPLASH_CN         @"Adgo-unit-2473039600"
//开屏海外
#define UNAD_TEST_UNIT_ID_SPLASH            @"Adgo-unit-2937299655"
//BANNER国内
#define UNAD_TEST_UNIT_ID_BANNER_CN         @"Adgo-unit-5984495773"
//BANNER海外
#define UNAD_TEST_UNIT_ID_BANNER            @"Adgo-unit-6487009665"
//信息流国内
#define UNAD_TEST_UNIT_ID_FEED_CN           @"Adgo-unit-4832009006"
//信息流海外
#define UNAD_TEST_UNIT_ID_FEED              @"Adgo-unit-7384512785"
//插页国内 半屏
#define UNAD_TEST_UNIT_ID_INTERSTITIAL_CN_HALF   @"Adgo-unit-1418604465"
//插页国内 全屏
#define UNAD_TEST_UNIT_ID_INTERSTITIAL_CN   @"Adgo-unit-1576041725"
//插页海外
#define UNAD_TEST_UNIT_ID_INTERSTITIAL      @"Adgo-unit-2273127120"
//激励国内
#define UNAD_TEST_UNIT_ID_REWARD_CN         @"Adgo-unit-9346349569"
//激励海外
#define UNAD_TEST_UNIT_ID_REWARD            @"Adgo-unit-7945631912"
//小游戏国内-梦想花园
#define UNAD_TEST_UNIT_ID_GAME_CN_HUAYUAN   @"Adgo-unit-9220717610"

//插屏横屏
#define UNAD_TEST_UNIT_ID_INTERSTITIAL_LANDSCAPE            @"UNAD_TEST_UNIT_ID_INTERSTITIAL_LANDSCAPE"
//插屏全屏竖屏
#define UNAD_TEST_UNIT_ID_INTERSTITIAL_FULLSCREEN           @"UNAD_TEST_UNIT_ID_INTERSTITIAL_FULLSCREEN"
//插屏全屏横屏
#define UNAD_TEST_UNIT_ID_INTERSTITIAL_FULLSCREEN_LANDSCAPE @"UNAD_TEST_UNIT_ID_INTERSTITIAL_FULLSCREEN_LANDSCAPE"
//激励横屏
#define UNAD_TEST_UNIT_ID_REWARD_LANDSCAPE @"UNAD_TEST_UNIT_ID_REWARD_LANDSCAPE"



typedef NS_ENUM(NSInteger,UNADArea) {
    UNADAreaCN      = 0,//国内
    UNADAreaOther   = 1 //海外
};

@interface UNAD : NSObject

//初始化
+ (void)initWithAppID:(NSString *)ID
                config:(UNADConfig *)config
              success:(void (^)(void))success
                 fail:(void(^)(NSError *))fail;

//判断SDK是否已经初始化
+ (BOOL)isSDKInited;

//设置区域
+(void)setArea:(UNADArea)area;
+(UNADArea)getArea;

//设置用户ID和公司ID
+(void)setUserId:(NSString *)userId;
+(void)setComId:(NSString *)comId;


//当前sdk的版本号
+(NSString *)version;

//广告静音
+ (void)setAdsMuted:(BOOL)muted;

@end

NS_ASSUME_NONNULL_END
