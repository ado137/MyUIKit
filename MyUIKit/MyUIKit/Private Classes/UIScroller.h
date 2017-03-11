//  完全实现ok  UIScrollerView的水平或竖直滚动条
//  UIScroller.h
//  MyUIKit
//
//  Created by 邓翔 on 17/3/8.
//  Copyright © 2017年 Jack. All rights reserved.
//

#import "UIView.h"
#import "UIScrollView.h"

@class UIScroller;

@interface UIScroller : UIView

- (void)flash;
- (void)quickFlash;

@property (nonatomic, assign) BOOL alwaysVisible;
@property (nonatomic, assign) CGFloat contentSize;
@property (nonatomic, assign) CGFloat contentOffset;
@property (nonatomic) UIScrollViewIndicatorStyle indicatorStyle;

@end
