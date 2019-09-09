//
//  UIControl+BZHControl.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/9/9.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

// 创建block
typedef void (^BZHActionBlock)(UIControl *control);

@interface UIControl (BZHControl)
// 封装button的点击方法
- (void)addMethodBlock:(BZHActionBlock)actionBlock WithEvents:(UIControlEvents)controlEvents;
@end

NS_ASSUME_NONNULL_END
