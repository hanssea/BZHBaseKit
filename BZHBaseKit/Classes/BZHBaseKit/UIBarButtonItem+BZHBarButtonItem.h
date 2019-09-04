//
//  UIBarButtonItem+BZHBarButtonItem.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIBarButtonItem (BZHBarButtonItem)

/**
 设置图标模式item

 @param image 普通图标
 @param highImage 高亮图标
 @param target 响应对象
 @param action 事件
 @return 返回自定义UIBarButtonItem
 */
+ (UIBarButtonItem *)itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;

/**
 设置文字模式item

 @param title 标题
 @param target 对象
 @param action 事件
 @return 返回自定义UIBarButtonItem
 */
+ (UIBarButtonItem *)itemWithTitle:(NSString *)title  target:(id)target action:(SEL)action;
@end

NS_ASSUME_NONNULL_END
