//
//  CBCrystalBall.h
//  CrystalBall
//
//  Created by Halko, Jaayden on 2/7/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CBCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong,nonatomic,readonly) NSArray *predictions;

- (NSString*) randomPrediction;
@end
