//
//  main.c
//  TheHeap
//
//  Created by Matthew Kish on 7/4/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> //malloc and free are in stdlib

typedef struct {
    float heightInMeters;
    int weightInKilos;
}Person;

float bodyMassIndex(Person *p)
{
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[])
{
    //Allocate memory for one Person structure
    Person *x = (Person *)malloc(sizeof(Person));
    
    //Fill in two members of the structure
    x->weightInKilos = 81;
    x->heightInMeters = 2.0;
    
    //Print out the BMI of the original Person
    float xBMI = bodyMassIndex(x);
    printf("x has a BMI of %f\n", xBMI);
    
    //Let the memory be recycled
    free(x);
    
    //Forget where it was
    x = NULL;
    
    return 0;
    
    /*
    //Declare a pointer
    float *startOfBuffer;
    
    //Ask to use some bytes from the heap
    startOfBuffer = malloc(1000 * sizeof(float));
    
    //...use the buffer here...
    
    //Relingquish your claim on the memory so it can be reused
    free(startOfBuffer);
    
    //Forget where that memory is
    startOfBuffer = NULL;
    
    return 0;
    */
}

