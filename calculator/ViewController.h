//
//  ViewController.h
//  calculator
//
//  Created by 峙　泰稀 on 13/11/07.
//  Copyright (c) 2013年 universityofkitakyushu. All rights reserved.
//

#import <UIKit/UIKit.h>

int Method;
int SelectNumber;
float RunningTotal;


@interface ViewController : UIViewController
{
    IBOutlet UILabel *Screen;
}

- (IBAction)Number0:(id)sender;
- (IBAction)Number1:(id)sender;
- (IBAction)Number2:(id)sender;
- (IBAction)Number3:(id)sender;
- (IBAction)Number4:(id)sender;
- (IBAction)Number5:(id)sender;
- (IBAction)Number6:(id)sender;
- (IBAction)Number7:(id)sender;
- (IBAction)Number8:(id)sender;
- (IBAction)Number9:(id)sender;
- (IBAction)additionButton:(id)sender;
- (IBAction)subtractionButton:(id)sender;
- (IBAction)multiplicationButton:(id)sender;
- (IBAction)divisionButton:(id)sender;
- (IBAction)answerButton:(id)sender;
- (IBAction)clearButton:(id)sender;

@end
