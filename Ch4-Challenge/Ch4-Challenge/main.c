//
//  main.c
//  Ch4-Challenge
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 20;
    int j = 25;
    
    int k = ( i > j ) ? 10 : 5;
    
    if ( 5 < j - k ) { //first expression
        printf("The first expression is true.");
    } else if ( j > i ) { // second expression
        printf("The second expression is true.");
    }else {
        printf("Neither expression is true.");
    }
    return 0;
}
//Only the first expression prints, despite both the first and second being true.

