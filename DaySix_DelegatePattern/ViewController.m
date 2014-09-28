//
//  ViewController.m
//  DaySix_DelegatePattern
//
//  Created by Anuj Katiyal on 28/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)tappedButton:(id)sender {
    SecondViewController *secondViewController = [self.storyboard instantiateViewControllerWithIdentifier:@"secondViewController"];
    secondViewController.delegate = self;
    [self.navigationController pushViewController:secondViewController animated:YES];
}

- (void)doSomethingWithSecondViewController:(SecondViewController *)secondViewController{
    [self.navigationController popViewControllerAnimated:YES];
}

@end
