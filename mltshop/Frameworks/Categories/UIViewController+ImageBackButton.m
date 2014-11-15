//
//  UIViewController+ImageBackButton.m
//  bitmedia
//
//  Created by meng qian on 14-3-19.
//  Copyright (c) 2014年 thinktube. All rights reserved.
//

#import "UIViewController+ImageBackButton.h"
#import "FAHoverButton.h"

@implementation UIViewController (ImageBackButton)

- (void)setUpImageBackButton
{
    CGFloat leftMargin = 10.0f;
    FAHoverButton *backButton = [[FAHoverButton alloc] initWithFrame:CGRectMake(0, 0, 12+leftMargin, 21)];
//    [backButton setTitle:ICON_BACK forState:UIControlStateNormal];
//    [backButton.titleLabel setFont:FONT_AWESOME_36];
    backButton.iconImage = [UIImage imageNamed:@"back_btn"];
    [backButton setImageEdgeInsets:UIEdgeInsetsMake(0, leftMargin, 0, 0)];

//    [backButton setTitleColor:GREENDARKCOLOR forState:UIControlStateNormal];
//    [backButton.titleLabel setTextAlignment:NSTextAlignmentLeft];
    
    UIBarButtonItem *barBackButtonItem = [[UIBarButtonItem alloc] initWithCustomView:backButton];
    [backButton addTarget:self action:@selector(popCurrentViewController) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = barBackButtonItem;
    self.navigationItem.hidesBackButton = YES;
}

- (void)setUpImageCloseButton
{
    UIButton *leftButton = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
    [leftButton setImage:[UIImage imageNamed:@"del_btn"] forState:UIControlStateNormal];
    UIBarButtonItem *leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:leftButton];
    self.navigationItem.leftBarButtonItem = leftBarButtonItem;
    [leftButton addTarget:self action:@selector(downAction) forControlEvents:UIControlEventTouchUpInside];
    
    self.navigationItem.hidesBackButton = YES;
}

- (void)setUpImageDownButton:(NSInteger)position
{
    CGFloat leftMargin = 10.0f;
    UIButton *cancelButton = [UIButton buttonWithType:UIButtonTypeCustom];
    [cancelButton setFrame:CGRectMake(0, 0, 12+leftMargin, 21)];
    
    [cancelButton setImage:[UIImage imageNamed:@"back_btn"] forState:UIControlStateNormal];
    [cancelButton setImageEdgeInsets:UIEdgeInsetsMake(0, leftMargin, 0, 0)];
    UIBarButtonItem *barBackButtonItem = [[UIBarButtonItem alloc] initWithCustomView:cancelButton];
    [cancelButton addTarget:self action:@selector(downAction) forControlEvents:UIControlEventTouchUpInside];

    if (position == 0) {
        self.navigationItem.leftBarButtonItem = barBackButtonItem;
    }else{
        self.navigationItem.rightBarButtonItem = barBackButtonItem;
    }
    self.navigationItem.hidesBackButton = YES;
}

- (void)navigationGreenStyle
{
    if (OSVersionIsAtLeastiOS7()) {
        self.navigationController.navigationBar.barTintColor = GREENCOLOR;
        self.navigationController.navigationBar.titleTextAttributes = @{NSForegroundColorAttributeName:WHITECOLOR};
        [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent animated:NO];
    }else{
        [[UINavigationBar appearance] setBackgroundImage:[[UIImage alloc] init] forBarMetrics:UIBarMetricsDefault];
        [[UINavigationBar appearance] setBackgroundColor:GREENCOLOR];


    }
}

- (void)navigationGrayStyle
{
    if (OSVersionIsAtLeastiOS7()) {
        self.navigationController.navigationBar.barTintColor = GRAYEXLIGHTCOLOR;
        self.navigationController.navigationBar.titleTextAttributes = @{NSForegroundColorAttributeName:DARKCOLOR};
        [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleDefault animated:NO];
    }else{
        [[UINavigationBar appearance] setBackgroundImage:[[UIImage alloc] init] forBarMetrics:UIBarMetricsDefault];
        [[UINavigationBar appearance] setBackgroundColor:GRAYEXLIGHTCOLOR];
    }
}

- (void)popCurrentViewController
{
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)downAction
{
    NSLog(@"downAction");
    [self dismissViewControllerAnimated:YES completion:^{}];
}

@end