//
//  UIButton+BZHButton.m
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import "UIButton+BZHButton.h"

@implementation UIButton (BZHButton)
/**
 上部分是图片，下部分是文字
 
 @param space 间距
 */
- (void)setUpImageAndDownLableWithSpace:(CGFloat)space{
    
    CGSize imageSize = self.imageView.frame.size;
    CGSize titleSize = self.titleLabel.frame.size;
    
    // titleLabel的宽度不一定正确的时候，需要进行判断
    CGFloat labelWidth = self.titleLabel.intrinsicContentSize.width;
    if (titleSize.width < labelWidth) {
        titleSize.width = labelWidth;
    }
    
    // 文字距上边框的距离增加imageView的高度+间距，距离左边框减少imageView的宽度，距离下边框和右边框距离不变
    [self setTitleEdgeInsets:UIEdgeInsetsMake(imageSize.height+space, -imageSize.width, -space, 0.0)];
    
    // 图片距右边框的距离减少图片的宽度，距离上面的间隔，其它不变
    [self setImageEdgeInsets:UIEdgeInsetsMake(-space, 0.0,0.0,-titleSize.width)];
}
/**
 左边是文字，右边是图片（和原来的样式翻过来）
 
 @param space 间距
 */
- (void)setLeftTitleAndRightImageWithSpace:(CGFloat)space{
    
    CGSize imageSize = self.imageView.frame.size;
    CGSize titleSize = self.titleLabel.frame.size;
    // titleLabel的宽度不一定正确的时候，需要进行判断
    CGFloat labelWidth = self.titleLabel.intrinsicContentSize.width;
    if (titleSize.width < labelWidth) {
        titleSize.width = labelWidth;
    }
    
    // 文字距左边框的距离减少imageView的宽度-间距，右侧增加距离imageView的宽度
    [self setTitleEdgeInsets:UIEdgeInsetsMake(0.0, -imageSize.width - space, 0.0, imageSize.width)];
    
    // 图片距左边框的距离增加titleLable的宽度,距右边框的距离减少titleLable的宽度
    [self setImageEdgeInsets:UIEdgeInsetsMake(0.0, titleSize.width,0.0,-titleSize.width)];
}

+ (UIButton *)bzhButtonWithTitle:(NSString *)title titleColor:(UIColor *)titleColor font:(UIFont*)font backgroundColor:(UIColor *)backgroundColor flag:(NSString *)flag
{
    UIButton *looter=[UIButton buttonWithType:UIButtonTypeCustom];
    looter.backgroundColor=backgroundColor;
    [looter setTitle:title forState:0];
    looter.titleLabel.font=font;
    looter.flag=flag;
    [looter setTitleColor:titleColor forState:0];
    return looter;
}
@end
