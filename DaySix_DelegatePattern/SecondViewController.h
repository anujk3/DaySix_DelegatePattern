//
//  SecondViewController.h
//  DaySix_DelegatePattern
//
//  Created by Anuj Katiyal on 28/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>
- (void)doSomethingWithSecondViewController:(SecondViewController *)secondViewController;
@end

@interface SecondViewController : UIViewController

@property (weak, nonatomic) id <SecondViewControllerDelegate> delegate;
- (IBAction)tappedClose:(id)sender;



@end
