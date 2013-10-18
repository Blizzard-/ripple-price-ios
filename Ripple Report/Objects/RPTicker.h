//
//  RPTicker.h
//  Ripple Report
//
//  Created by Kevin Johnson on 10/18/13.
//  Copyright (c) 2013 Ripple Labs Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RPTicker : NSObject

@property (strong, nonatomic) NSString * sym;
@property (strong, nonatomic) NSNumber * vol;
@property (strong, nonatomic) NSNumber * last;

@end
