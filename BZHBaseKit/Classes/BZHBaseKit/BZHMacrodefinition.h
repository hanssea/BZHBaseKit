//
//  BZHMacrodefinition.h
//  BZHBaseKit
//
//  Created by JinYang on 2019/9/9.
//  Copyright © 2019 hanssea. All rights reserved.
//

#ifndef BZHMacrodefinition_h
#define BZHMacrodefinition_h


/**基础宽高*/
#define IWScreenWidth   [UIScreen mainScreen].bounds.size.width
#define IWScreenHeight  [UIScreen mainScreen].bounds.size.height

/**自定义Log*/
#ifdef DEBUG
#define IWLog(...) NSLog(__VA_ARGS__)
#else
#define IWLog(...)
#endif


/**获得RGB颜色*/
#define IWColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

/**字号*/
#define IWCustomizeFont(NAME, FONTSIZE)     [UIFont fontWithName:(NAME) size:(FONTSIZE)]
#define IWFont(size)    [UIFont systemFontOfSize:size]

/**判断它是否是空字符串*/
#define IWIsEmptyString(s) (s == nil || [s isKindOfClass:[NSNull class]] || ([s isKindOfClass:[NSString class]] && s.length == 0))

#define IWIsString(s) (([s isKindOfClass:[NSString class]] && s.length != 0))

/**判断它是否为nil或null对象*/
#define IWIsEmptyObject(obj) (obj == nil || [obj isKindOfClass:[NSNull class]])

/**判断它是否是一个有效的字典*/
#define IWIsDictionary(objDict) (objDict != nil && [objDict isKindOfClass:[NSDictionary class]])

/**判断它是否是一个有效的数组*/
#define IWIsArray(objArray) (objArray != nil && [objArray isKindOfClass:[NSArray class]])

/**加载图片*/
#define IWImg(imgName)      [UIImage imageNamed:imgName]

/**获取系统版本*/
#define IWiOSVerson [[[UIDevice currentDevice] systemVersion] floatValue]

#endif /* BZHMacrodefinition_h */
