//
//  UIView+BZHView.h
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/8/30.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BZHViewModelProtocol.h"
NS_ASSUME_NONNULL_BEGIN

#define TagValue  3333
typedef NS_ENUM(NSInteger, JKCustomAnimationMode) {
    JKCustomAnimationModeAlert = 0,//弹出效果
    JKCustomAnimationModeDrop, //由上方掉落
    JKCustomAnimationModeShare,//下方弹出（类似分享效果）
    JKCustomAnimationModeNone,//没有动画
};


@interface UIView (BZHView)<BZHViewModelProtocol>

/******************frame相关**********************/
@property (nonatomic, assign) CGFloat bzh_x;
@property (nonatomic, assign) CGFloat bzh_y;
@property (nonatomic, assign) CGFloat bzh_width;
@property (nonatomic, assign) CGFloat bzh_height;
@property (nonatomic, assign) CGFloat bzh_centerX;
@property (nonatomic, assign) CGFloat bzh_centerY;
@property (nonatomic, assign) CGSize  bzh_size;
@property (nonatomic, assign) CGPoint bzh_origin;
@property (nonatomic, assign, readonly) CGFloat bzh_maxX;
@property (nonatomic, assign, readonly) CGFloat bzh_maxY;







/******************动画相关**********************/
/**
 背景的透明度
 */
@property (nonatomic,assign) CGFloat bgAlpha;
/**
 动画时间
 */
@property (nonatomic,assign) CGFloat animationTime;
/**
 点击背景是否隐藏 默认是false 隐藏
 */
@property (nonatomic,assign) BOOL isTapBgViewUnUse;
/**
 显示 弹出view 任意view导入头文件之后即可调用
 @param animationMode CustomAnimationMode 三种模式
 @param alpha CGFloat  背景透明度 0-1  默认0.2  传-1即为默认值
 @param isNeed BOOL 是否需要背景模糊效果
 */
-(void)jk_showInWindowWithMode:(JKCustomAnimationMode)animationMode inView:(UIView *)superV bgAlpha:(CGFloat)alpha needEffectView:(BOOL)isNeed;


/**
 隐藏 view
 */
-(void)jk_hideView;


/**
 给view 各个边加 layer.border
 */
- (void)jk_setBorderWithView:(UIView *)view top:(BOOL)top left:(BOOL)left bottom:(BOOL)bottom right:(BOOL)right borderColor:(UIColor *)color borderWidth:(CGFloat)width;



/******************************/

/**
 从xib中加载视图

 @return 返回需要的视图
 */
+ (instancetype)bzh_viewfromXib;



/**
 设置全部q圆角

 @param cornerdious 设置过得圆角视图
 */
-(void)bzh_cornerdious:(CGFloat)cornerdious;

/**
 指定位置圆角

 @param cornerdious 角度
 @param corners 设置过得圆角视图
 */
-(void)bzh_cornerdious:(CGFloat)cornerdious  corners:(UIRectCorner)corners ;

/**
 设置视图边框和颜色

 @param borderWidth 边框线宽
 @param borderColor 边框颜色
 */
-(void)bzh_borderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;


@end

NS_ASSUME_NONNULL_END
