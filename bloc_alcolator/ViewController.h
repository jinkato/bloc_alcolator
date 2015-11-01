//
//  ViewController.h
//  bloc_alcolator
//
//  Created by Jin Kato on 10/30/15.
//  Copyright © 2015 Jin Kato. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (IBAction)buttonPressed:(UIButton *)sender;
@end

