//
//  ForumViewController.h
//  mltshop
//
//  Created by 小新 on 15/3/30.
//  Copyright (c) 2015年 manluotuo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullListViewDelegate.h"

@interface ForumViewController : UIViewController

@property(nonatomic, assign)NSObject<PullListViewDelegate> *commonListDelegate;
@property (nonatomic, weak) id<PassValueDelegate> passDelegate;

@end
