//
//  customFilter.h
//  photoSphereRotation
//
//  Created by Tom Tong on 25/12/2016.
//  Copyright © 2016 Tom Tong. All rights reserved.
//

#ifndef customFilter_h
#define customFilter_h


#endif /* customFilter_h */

#import <CoreImage/CoreImage.h>


@interface rectRotation2 : CIFilter //warp kernel
{
    CIImage *inputImage;
    NSNumber* roll;
    NSNumber* yaw;
    NSNumber* pitch;
}
@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber* roll;
@property (retain, nonatomic) NSNumber* yaw;
@property (retain, nonatomic) NSNumber* pitch;

@end
