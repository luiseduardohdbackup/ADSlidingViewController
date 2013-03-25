/*
 * Copyright (c) 2012-2013 Adam Debono. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIStepper *leftAnchorAmountStepper;
@property (strong, nonatomic) IBOutlet UIStepper *rightAnchorAmountStepper;
@property (strong, nonatomic) IBOutlet UILabel *leftAnchorAmountLabel;
@property (strong, nonatomic) IBOutlet UILabel *rightAnchorAmountLabel;

@property (strong, nonatomic) IBOutlet UISegmentedControl *leftAnchorWidthType;
@property (strong, nonatomic) IBOutlet UISegmentedControl *rightAnchorWidthType;

@property (strong, nonatomic) IBOutlet UISegmentedControl *leftAnchorLayoutType;
@property (strong, nonatomic) IBOutlet UISegmentedControl *rightAnchorLayoutType;

@property (strong, nonatomic) IBOutlet UISegmentedControl *leftSecondaryLayoutType;
@property (strong, nonatomic) IBOutlet UISegmentedControl *rightSecondaryLayoutType;

@property (strong, nonatomic) IBOutlet UISegmentedControl *undersidePersistencyControl;


- (IBAction)leftBarButton:(UIBarButtonItem *)sender;
- (IBAction)rightBarButton:(UIBarButtonItem *)sender;
- (IBAction)updatePressed:(UIButton *)sender;

- (IBAction)leftAnchorValueChanged:(UIStepper *)sender;
- (IBAction)rightAnchorValueChanged:(UIStepper *)sender;
@end
