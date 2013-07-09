//
//  main.c
//  Ch5-Challenge
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>

//Add your new function here
float remainingAngle(angleA, angleB)
{
    float angleC = 180 - (angleA + angleB);
    return angleC;
}

int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
}
