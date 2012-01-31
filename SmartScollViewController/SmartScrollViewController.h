//
//  SmartScrollViewController.h
//
//  Created by Marin Usalj on 9/1/11.
//  Copyright (c) 2011 http://mneorr.com. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "UIView+FirstResponder.h"


@interface SmartScrollViewController : UIViewController <UITextFieldDelegate> {

}

@property (atomic, retain) IBOutlet UIScrollView *scrollView;

@end
