//
//  LSWallpaperGenerator.h
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 2/12/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSWallpaperView.h"
#import "LSDesignViewScheme.h"

@interface LSWallpaperGenerator : NSObject

- (instancetype)initWithDrawScheme:(LSDesignViewScheme*)designViewScheme;

- (LSWallpaperView*)generateWallpaperViewWithFakeElements:(BOOL)fake;
- (UIImage*)generateImage;
- (UIImage*)generateImageForSharing;
- (void)saveImage:(UIImage*)image withCompletion:(void(^)(NSError *error))completion;

@end
