/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *  文件名称: AppHeader.h
 *                                                             *
 *  创建时间: 16/8/23
 *                                                             *
 *  创 建 人: YXT
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef YXTAppHeader_h
#define YXTAppHeader_h

/* * * * 获 * * * * 取 * * * * 设 * * * * 备 * * * * 大 * * * * 小 * * * */

#define kWidth [UIScreen mainScreen].bounds.size.width //主屏幕 宽

#define kHeight [UIScreen mainScreen].bounds.size.height //主屏幕 高

#define kTabBarHeight           (49.0f) //UITabBar 高度

#define kStatusBarHeight        (20.0f) //顶部状态栏高度

#define kNavigationBarHeight    (44.0f) //UINavigationBar 高度

#define kCellDefaultHeight      (44.f)  //cell 默认高度

#define kEnglishKeyboardHeight  (216.f) //英文键盘高度

#define kChineseKeyboardHeight  (252.f) //中文键盘高度

#define KFaceViewHeight         (216.f) //表情键盘高度

#define MaxX(v)                 CGRectGetMaxX((v).frame)

#define MaxY(v)                 CGRectGetMaxY((v).frame)

#define MinX(v)                 CGRectGetMinX((v).frame)

#define MinY(v)                 CGRectGetMinY((v).frame)

// View 坐标(x,y)和宽高(width,height)
#define X(v)                    (v).frame.origin.x

#define Y(v)                    (v).frame.origin.y

#define WIDTH(v)                (v).frame.size.width

#define HEIGHT(v)               (v).frame.size.height


/* * * * 打 * * * * 印 * * * * 日 * * * * 志 * * * */

//debug 模式下打印日志
#ifdef DEBUG

#define NSLog(...) NSLog(__VA_ARGS__)

#else

#define NSLog(...)

#endif


/* * * * 判 * * * * 断 * * * * 机 * * * * 型 * * * */

/** 判断是否为iPhone */
#define iPhone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

/** 判断是否是iPad */
#define iPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

/** 判断是否为iPod */
#define iPod ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

/** 设备是否为iPhone 4/4S 分辨率320x480，像素640x960，@2x */
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 5C/5/5S 分辨率320x568，像素640x1136，@2x */
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6/6S 分辨率375x667，像素750x1334，@2x */
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)

/** 设备是否为iPhone 6/6S Plus 分辨率414x736，像素1242x2208，@3x */
#define iPhone6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)




/* * * * 操 * * * *作 * * * * 系 * * * * 统 * * * * 版 * * * * 本 * * * */

#define kCurrent_iOS_SystemVersion  [UIDevice currentDevice].systemVersion



/* * * * 真 * * * * 机 * * * * or * * * * 模 * * * * 拟 * * * * 器 * * * */

#if TARGET_OS_IPHONE

#endif

#if TARGET_IPHONE_SIMULATOR

#endif



/* * * * 颜 * * * * 色 * * * */

#define RGBA(r,g,b,a) ([UIColor colorWithRed:r/255.0 green:r/255.0 blue:b/255.0 alpha:a])



/* * * * 文 * * * * 件 * * * * 路 * * * * 径 * * * */

#define SearchDirectoryPath(NSSearchPathDirectory) [NSSearchPathForDirectoriesInDomains(NSSearchPathDirectory, NSUserDomainMask, YES) lastObject]


#endif /* YXTAppHeader_h */
