//
//  ViewController.h
//  DaySix_DelegatePattern
//
//  Created by Anuj Katiyal on 28/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>

- (IBAction)tappedButton:(id)sender;

@end

