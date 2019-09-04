//
//  UIButton+BZHButton.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (BZHButton)

/**
 按钮标记 类似于tag
 */
@property (nonatomic,strong) NSString *flag;

/**
 上部分是图片，下部分是文字
 @param space 间距
 */
- (void)setUpImageAndDownLableWithSpace:(CGFloat)space;


/**
 左边是文字，右边是图片（和原来的样式翻过来）
 @param space 间距
 */
- (void)setLeftTitleAndRightImageWithSpace:(CGFloat)space;


/**
 生成一个按钮

 @param title 标题
 @param titleColor 标题颜色
 @param font 字体大小
 @param backgroundColor 背景颜色
 @param flag 标记
 @return 返回自定义按钮
 */
+ (UIButton *)bzhButtonWithTitle:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont*)font backgroundColor:(UIColor *)backgroundColor flag:(NSString *)flag;
@end

NS_ASSUME_NONNULL_END
