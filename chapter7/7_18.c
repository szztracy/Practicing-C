//
//  main.c
//  Chapter 7
//
//  Created by Mac Wang on 7/23/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //normal years
    int dayOfYear = 0;
    int year = 0;
    int month = 0;
    int day = 0;
    
    printf("input year,month,day:\n");
    
    if(scanf("%d,%d,%d", &year, &month, &day))
    {
        //input is valid
        
        if (year % 4 == 0) {
            //29 days for February
            //change days of February
            daysOfMonth[1] = 29;
        }
        
        //calculate entire months
        for (int iteration = 0; iteration < month - 1; iteration++) {
            dayOfYear += daysOfMonth[iteration];
        }
        
        //calculate remaining days in the last month
        dayOfYear += day;
        
        printf("Day of Year %d: %d\n", year, dayOfYear);
        
    } else {
        //input is not valid
        printf("invalid input, try again!\n");
    }

    
    
    return 0;
}

