//
//  main.c
//  Ch8-Challenge
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[])
{
    float a;
    short b;
    short c;
    unsigned short d;
    printf("A float is %zu bytes\n", sizeof(a));
    printf("The largest short is %d at %zu bytes\n", SHRT_MAX, sizeof(b));
    printf("The smallest short is %d at %zu bytes\n", SHRT_MIN, sizeof(c));
    printf("The largest unsigned short is %d at %zu bytes\n", USHRT_MAX, sizeof(d));
    return 0;
}

