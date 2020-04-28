//
//  LSThemesViewController.h
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 2/10/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LSThemeModel.h"

@class LSDesignViewController;

@interface LSThemesViewController : UIViewController

@property (nonatomic, weak) LSDesignViewController                  *designViewController;

- (void)prepareToShowView;
- (void)showViewCompletion:(void(^)(void))completion;
- (void)hideViewCompletion:(void(^)(void))completion;

@end
