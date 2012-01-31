//
//  UIView+FirstResponder.m
//  
//
//  Created by Marin Usalj on 9/1/11.
//  Copyright (c) 2011 http://mneorr.com. All rights reserved.
//

#import "UIView+FirstResponder.h"

@implementation UIView(FirstResponder)

- (BOOL)findAndResignFirstResponder {
    if (self.isFirstResponder) {
        [self resignFirstResponder];
        return YES;     
    }
    for (UIView *subView in self.subviews) {
        if ([subView findAndResignFirstResponder])
            return YES;
    }
    return NO;
}

- (UIView *)findFirstResponder {
    if (self.isFirstResponder) return self;     
    
    for (UIView *subView in self.subviews) {
        if ([subView findFirstResponder]) return subView;
    }
    return nil;
}

@end
