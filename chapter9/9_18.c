//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

int  main()
{
    //define an pointerArray
    char *year [] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    printf("Please input the month number you want to search:\n");
    //claim the month number 
    int monthNumber;
    scanf("%d", &monthNumber);
    printf("%s\n", year[monthNumber - 1]);
    return 0;
}
