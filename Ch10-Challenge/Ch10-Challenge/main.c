//
//  main.c
//  Ch10-Challenge
//
//  Created by Matthew Kish on 7/3/13.
//  Copyright (c) 2013 Matthew Kish. All rights reserved.
//

#include <stdio.h>
#include <time.h>

/*
struct tm {
 int    tm_sec  Seconds [0,60].
 int    tm_min  Minutes [0,59].
 int    tm_hour Hour [0,23].
 int    tm_mday Day of month [1,31].
 int    tm_mon  Month of year [0,11].
 int    tm_year Years since 1900. // Need 1900 for the future date!
 int    tm_wday Day of week [0,6] (Sunday =0).
 int    tm_yday Day of year [0,365].
 int    tm_isdst    Daylight Savings flag.
 long   tm_gmtoff   offset from CUT in seconds
 char   *tm_zone    timezone abbreviation
};
*/


int main(int argc, const char * argv[])
{

    long secondsSince1970 = time(NULL);
    long secondsAdded = 4000000;
    long futureTime = secondsSince1970 + secondsAdded;
    
    //printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm future;
    localtime_r(&futureTime, &future);
    printf("The date in 4 million seconds is %d-%d-%d\n", future.tm_mon + 1, future.tm_mday, future.tm_year + 1900);
    
    /*
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The time is %d: %d: %d\n", now.tm_hour, now.tm_min, now.tm_sec);
    */
    
    return 0;
}