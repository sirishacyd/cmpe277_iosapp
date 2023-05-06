//
//  FileExampleViewController.h
//  FileExample
//
//  Created by Neil Smyth on 9/18/13.
//  Copyright (c) 2013 Neil Smyth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FileExampleViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *textBox;
- (IBAction)saveText:(id)sender;

@end
