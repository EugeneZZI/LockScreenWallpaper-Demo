//
//  LSStyleCollectionViewCell.h
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 2/18/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LSStyleCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) UIImage               *styleImage;
@property (nonatomic, assign) BOOL                   selectWithAnimation;
@property (nonatomic, assign) BOOL                   showCell;

@end
