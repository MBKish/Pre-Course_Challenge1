//
//  main.c
//  Ch7-Challenge
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 99;
    for (i = 99; i > -1; i-=3) {
        printf("%d\n", i);
        if (i % 5 == 0) {
            printf("Found One.\n");
        }
    }
    return 0;
}

