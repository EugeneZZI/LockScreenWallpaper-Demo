//
//  LSDesignElementShape.h
//  LockScreenWallpaper
//
//  Created by Yevhenii Zozulia on 3/12/15.
//  Copyright (c) 2015 Yevhenii Zozulia. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, LSElementShapeType) {
    LSElementShapeNone,
    LSElementShapeCurveNone,
    LSElementShapeCurveSmall,
    LSElementShapeCurveLarge,
    LSElementShapeCircle
};

@interface LSDesignElementShape : NSObject

@property (nonatomic, assign) LSElementShapeType                shapeType;
@property (nonatomic, assign) CGFloat                           curveRadius;
@property (nonatomic, strong) UIImage                           *previewImage;

@end
