//
//  SEGraphics.h
//  The Spectacular Sync Engine
//
//  Created by Michael Tyson on 5/02/2015.
//  Copyright (c) 2015 A Tasty Pixel. All rights reserved.
//
//  Generated by PaintCode (www.paintcodeapp.com)
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class PCGradient;

@interface SEGraphics : NSObject

// Colors
+ (UIColor*)activeColor;
+ (UIColor*)outerGradientColor;
+ (UIColor*)innerGradientColor;

// Gradients
+ (PCGradient*)backgroundGradient;

// Drawing Methods
+ (void)drawPauseWithFrame: (CGRect)frame;
+ (void)drawPlayWithFrame: (CGRect)frame;

@end



@interface PCGradient : NSObject
@property(nonatomic, readonly) CGGradientRef CGGradient;
- (CGGradientRef)CGGradient NS_RETURNS_INNER_POINTER;

+ (instancetype)gradientWithColors: (NSArray*)colors locations: (const CGFloat*)locations;
+ (instancetype)gradientWithStartingColor: (UIColor*)startingColor endingColor: (UIColor*)endingColor;

@end