/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <CoreLocation/CoreLocation.h>

#import "RCTConvert.h"

@interface RCTConvert (CoreLocation)

+ (CLLocationDegrees)CLLocationDegrees:(id)json;
+ (CLLocationDistance)CLLocationDistance:(id)json;
+ (CLLocationCoordinate2D)CLLocationCoordinate2D:(id)json;

@end
