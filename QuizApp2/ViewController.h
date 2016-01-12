//
//  ViewController.h
//  QuizApp2
//
//  Created by 井上圭一 on 2016/01/10.
//  Copyright © 2016年 keiichi, inoue. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
-(IBAction)answer1:(id)sender;
-(IBAction)answer2:(id)sender;
@property(nonatomic,weak) IBOutlet UITextView *tv;
@property(nonatomic,weak) IBOutlet UILabel *textLabel1;
@property(nonatomic,weak) IBOutlet UILabel *textLabel2;
@property(nonatomic,weak) IBOutlet UILabel *textLabel4;
@end

