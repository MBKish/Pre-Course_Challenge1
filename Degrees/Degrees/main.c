//
//  main.c
//  Degrees
//
//  Created by Matthew Kish on 6/29/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

// Declare a static variable
static float lastTemperature = 50.0;

float fahrenheitFromCelsius(float cel)
{
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    printf("The last tmperature converted was %f\n", lastTemperature);
    return EXIT_SUCCESS;
}