//
//  main.c
//  BMICalc
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>

//Here is the declaration of the type Person
typedef struct {
    float heightInMeters;
    int weightInKilos;
}Person;

float bodyMassIndex(Person p)
{
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}

int main(int argc, const char * argv[])
{
    Person person;
    person.weightInKilos = 96;
    person.heightInMeters = 1.8;
    float bmi = bodyMassIndex(person);
    printf("person has a BMI of %.2f\n", bmi);
    
//    printf("person weight %i kilograms\n", person.weightInKilos);
//    printf("person is %.2f meters tall\n", person.heightInMeters);

    
    return 0;
}
