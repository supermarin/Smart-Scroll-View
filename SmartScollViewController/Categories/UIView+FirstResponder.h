//
//  UIView+FirstResponder.h
//  
//
//  Created by Marin Usalj on 9/1/11.
//  Copyright (c) 2011 http://mneorr.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView(FirstResponder)

- (UIView *)findFirstResponder;
- (BOOL)findAndResignFirstResponder;

@end
