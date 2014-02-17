//
//  CBViewController.h
//  CrystalBall
//
//  Created by Halko, Jaayden on 2/6/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CBCrystalBall;

@interface CBViewController : UIViewController

@property (strong, nonatomic) CBCrystalBall *crystalBall;
@property (weak, nonatomic) IBOutlet UILabel *predictionLabel;
- (IBAction)buttonPressed;
- (void) makePrediction;
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@end
