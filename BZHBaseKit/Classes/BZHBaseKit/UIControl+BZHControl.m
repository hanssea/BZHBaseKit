//
//  UIControl+BZHControl.m
//  BZHBaseKit_Example
//
//  Created by JinYang on 2019/9/9.
//  Copyright © 2019 hanssea. All rights reserved.
//

#import "UIControl+BZHControl.h"
#import <objc/runtime.h>
// 静态变量
static char overview = 'a';
@implementation UIControl (BZHControl)
- (void)addMethodBlock:(BZHActionBlock)actionBlock WithEvents:(UIControlEvents)controlEvents{
    ///id object, const void *key, id value, objc_AssociationPolicy policy
    objc_setAssociatedObject(self, &overview, actionBlock, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [self addTarget:self action:@selector(BZHAction) forControlEvents:controlEvents];
    
}
- (void)BZHAction{
    BZHActionBlock block = (BZHActionBlock)objc_getAssociatedObject(self, &overview);
    if (block) {
        block(self);
    }
}
@end
