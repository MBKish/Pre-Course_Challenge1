//
//  main.c
//  ClassCertificates
//
//  Created by Matthew Kish on 6/29/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void congragulateStudent(char * student, char * course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

int main(int argc, const char * argv[])
{
    congragulateStudent("Mark", "Cocoa", 5);
    sleep(2);
    congragulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congragulateStudent("Mike", "Python", 5);
    sleep(2);
    congragulateStudent("Ted", "iOS", 5);
    
    return 0;
}
