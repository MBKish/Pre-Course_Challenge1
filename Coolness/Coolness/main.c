//
//  main.c
//  Coolness
//
//  Created by Matthew Kish on 6/30/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    /*
    int i = 0;
    while (i < 12) {
        printf("Aaron is Cool\n");
        i++;
    }
    */
    
    /*
    for (int i = 0; i < 12; i++) {
        printf("%d. Aaron is Cool\n", i+1);
    }
    */
    
    /*
    int i = 0;
    for (i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
    }
    printf("The answer is %d.\n", i);
    return 0;
     */
    
    int i = 0;
    do {
        printf("%d. Aaron is Cool\n", i);
        i++;
    } while (i < 12);
    return 0;

}

