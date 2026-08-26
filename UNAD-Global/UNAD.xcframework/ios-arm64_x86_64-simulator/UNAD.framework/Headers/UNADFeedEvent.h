//
//  UNADFeedEvent.h
//  UNAD
//
//  Created by xiezuan on 2022/9/3.
//  Copyright © 2022 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

typedef NSString * const UNADEventName;
/// 滑滑流请求事件名称
extern UNADEventName  UNADEventRequestPageAPI;
/*
  滑滑场景类型
 */
typedef NS_ENUM(NSInteger, UNADFeedEventScene) {
    UNADFeedEventSceneMainPage,     /// 主滑滑流
    UNADFeedEventScenePersonalPage, /// 个人作品滑滑流
    UNADFeedEventSceneOtherPage,    /// 其他类型滑滑流
};

@interface UNADFeedEvent : NSObject
/// 事件唯一标识符
@property (nonatomic, copy) NSString *eventIdentify;
/// 事件名称
@property (nonatomic, copy) UNADEventName eventName;
/// 滑滑流场景
@property (nonatomic, assign) UNADFeedEventScene eventScene;

@end

@interface UNADResponseObj : NSObject
/// 当前请求视频模型数量
@property (nonatomic, assign) NSInteger countOfVideoInRequest;

@end

NS_ASSUME_NONNULL_END

