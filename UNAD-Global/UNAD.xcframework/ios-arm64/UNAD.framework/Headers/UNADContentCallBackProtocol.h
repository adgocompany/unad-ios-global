
#import <Foundation/Foundation.h>
#import "UNADFeedEvent.h"
#import "UNADContentDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol UNADRequestCallBackProtocol,UNADUserInteractionCallBackProtocol;

@protocol UNADContentPageCallBackProtocol <UNADRequestCallBackProtocol, UNADUserInteractionCallBackProtocol>

@end

@protocol UNADFeedPageCallBackProtocol <UNADContentPageCallBackProtocol>

@end

/// feed 请求回调协议
@protocol UNADRequestCallBackProtocol <NSObject>

@optional
/// 请求开始回调
- (void)unad_ContentRequestStart:(UNADFeedEvent *)event;
/// 请求成功回调
- (void)unad_ContentRequestSuccess:(UNADFeedEvent *)event
                         callBack:(UNADResponseObj *)responseObj;
/// 请求开失败回调
- (void)unad_ContentRequestFail:(UNADFeedEvent *)event;

@end

@protocol UNADUserInteractionCallBackProtocol <NSObject>

@optional
- (void)unad_ClickContentShareWithItem:(NSString *)shareItem;

- (void)unad_AvaterDidClick:(UNADContentType)contentType;

- (void)unad_LikeDidClick:(UNADContentType)contentType isLike:(BOOL)isLike;

- (void)unad_CommentDidClick:(UNADContentType)contentType;

- (void)unad_SaleListDidClick:(NSString *)liveId;

- (void)unad_BuyButtonDidClick:(NSString *)liveId;

- (void)unad_GotoKwaiDidClick:(NSString *)liveId;

@end

NS_ASSUME_NONNULL_END

