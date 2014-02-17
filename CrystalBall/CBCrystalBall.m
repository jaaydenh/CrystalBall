//
//  CBCrystalBall.m
//  CrystalBall
//
//  Created by Halko, Jaayden on 2/7/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import "CBCrystalBall.h"

@implementation CBCrystalBall

- (NSArray*) predictions {
    if (_predictions == nil) {
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"It is decidedly so", @"All signs say yes", @"My reply is no", @"Unable to answer right now", @"Unable to answer", nil];
    }
    
    return _predictions;
}

- (NSString*) randomPrediction {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
