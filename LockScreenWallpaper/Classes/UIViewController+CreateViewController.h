//
//  UIViewController+CreateViewController.h
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 2/10/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (CreateViewController)

+ (instancetype)loadViewControllerFromStoryBoardWithIdentifier:(NSString *)className;
+ (instancetype)createViewControllerWithClassName:(NSString *)className;

@end
