//
//  main.c
//  Numbers
//
//  Created by Matthew Kish on 6/30/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{

    /*
    unsigned long x = 255;
    printf("x is %lu.\n", x);
    //Octal and hex already assume the number was unsigned
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    */
    
    /*
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", 11 / (float)3);
    printf("The absolute value of -5 is %d\n", abs(-5));
    */
    
    
    double y = 12345.6789;
    printf("y is %.2f\n", y);
    printf("y is %.2e\n", y);
     
    return 0;
}

