//
//  UNADContentTextFeed.h
//  UNAD
//
//  Created by xiezuan on 2022/8/21.
//  Copyright © 2022 UNAD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UNADHorizontalFeedCallBackProtocol.h"
#import "UNADImageTextDetailDelegate.h"


NS_ASSUME_NONNULL_BEGIN



@interface UNADContentTextFeed : NSObject


@property (nonatomic, readonly) UIViewController *feedViewController;


- (instancetype)initWithUnitId:(NSString *)unitID;



@property (nonatomic, weak) id<UNADHorizontalFeedCallBackProtocol> videoDetailDelegate;
@property (nonatomic, weak) id<UNADImageTextDetailDelegate> imageTextDelegate;



@end

NS_ASSUME_NONNULL_END
