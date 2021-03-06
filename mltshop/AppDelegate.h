//
//  AppDelegate.h
//  mltshop
//
//  Created by mactive.meng on 12/11/14.
//  Copyright (c) 2014 manluotuo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Me.h"
#import "HostViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) Me *me;
@property (strong, nonatomic) NSMutableArray *allCategory;
@property(nonatomic, assign)NSObject<PassValueDelegate> *passDelegate;
@property(nonatomic, strong)HostViewController *centerViewController;

// 跳过intro
- (void)skipIntroView;
// 打开注册页面
- (void)showRegisterView;
// 随便看看
- (void)showDrawerView;
// 登陆页面
- (void)showLoginView;




@end

