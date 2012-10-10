//
//  AppDelegate.h
//  Quiz
//
//  Created by Steven Smith on 10/10/12.
//  Copyright (c) 2012 AELOGICA LLC. All rights reserved.
//

//http://brianreiter.org/2011/11/23/how-to-create-an-xcode-4-0-style-window-based-application-in-xcode-4-2/
#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    int currentQuestionIndex;
    
    //model objects
    NSMutableArray *questions;
    NSMutableArray *answers;
    
    //the view objects - don't worry about this IBOutlet macro
    //we'll talk about it shortly
    IBOutlet UILabel *questionField;
    IBOutlet UILabel *answerField;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

- (IBAction)showQuestion:(id)sender;
- (IBAction)showAnswer:(id)sender;

@end