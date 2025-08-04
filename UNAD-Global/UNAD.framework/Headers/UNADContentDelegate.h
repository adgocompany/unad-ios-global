//
//  UNADContentVideoDelegate.h
//  UNAD
//
//  Created by xiezuan on 2022/2/26.
//  Copyright © 2022 UNAD. All rights reserved.
//


#ifndef UNADVideoStateDelegate_h
#define UNADVideoStateDelegate_h

typedef NS_ENUM(NSUInteger, UNADContentType) {
    UNADContentTypeUnknown,         //未知，正常不会出现
    UNADContentTypeNormal,          //普通信息流
    UNADContentTypeAd,              //广告
    UNADContentTypeLive             //直播
};


@interface UNADContentInfo :NSObject

////内容标识
//- (NSString *)publicContentId;
////内容类型
//- (UNADContentType)publicContentType;
////视频时长. 毫秒
//- (NSTimeInterval)publicVideoDuration;

@property(nonatomic, copy) NSString *publicContentId;

@property(nonatomic, assign) UNADContentType publicContentType;

@property(nonatomic, assign) NSTimeInterval publicVideoDuration;

@end

/**
 * 视频播放状态代理
 */
@protocol UNADVideoStateDelegate <NSObject>
@optional
/**
 * 视频开始播放
 * @param videoContent 内容模型
 */
- (void)unad_videoDidStartPlay:(UNADContentInfo*)videoContent;
/**
* 视频暂停播放
* @param videoContent 内容模型
*/
- (void)unad_videoDidPause:(UNADContentInfo*)videoContent;
/**
* 视频恢复播放
* @param videoContent 内容模型
*/
- (void)unad_videoDidResume:(UNADContentInfo*)videoContent;
/**
* 视频停止播放
* @param videoContent 内容模型
* @param finished     是否播放完成
*/
- (void)unad_videoDidEndPlay:(UNADContentInfo*)videoContent isFinished:(BOOL)finished;
/**
* 视频播放失败
* @param videoContent 内容模型
* @param error        失败原因
*/
- (void)unad_videoDidFailedToPlay:(UNADContentInfo*)videoContent withError:(NSError *)error;

@end


/**
* 内容展示状态代理
*/
@protocol UNADContentStateDelegate <NSObject>
@optional
/**
* 内容展示
* @param content 内容模型
*/
- (void)unad_contentDidFullDisplay:(UNADContentInfo*)content;
/**
* 内容隐藏
* @param content 内容模型
*/
- (void)unad_contentDidEndDisplay:(UNADContentInfo*)content;
/**
* 内容暂停显示，ViewController disappear或者Application resign active
* @param content 内容模型
*/
- (void)unad_contentDidPause:(UNADContentInfo*)content;
/**
* 内容恢复显示，ViewController appear或者Application become active
* @param content 内容模型
*/
- (void)unad_contentDidResume:(UNADContentInfo*)content;

@end


#endif
