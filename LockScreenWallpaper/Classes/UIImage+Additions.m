//
//  UIImage+Additions.m
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 2/27/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import "UIImage+Additions.h"

@implementation UIImage (Additions)

+ (UIImage*)imageWithView:(UIView*)view {
    UIGraphicsBeginImageContextWithOptions(view.bounds.size, view.opaque, 0.0);
    [view.layer renderInContext:UIGraphicsGetCurrentContext()];
    
    UIImage * img = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return img;
}

@end
