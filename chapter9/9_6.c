//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
//calculate the length of an array
int  main()
{
    char *array;
    int lengthOfarray = 0;
    char c = '\0';
    
    while ((c = getchar()) != '\n') {
        *(array + lengthOfarray) = c;
        lengthOfarray += 1;
    }
    printf("The length of the array is:%d\n", lengthOfarray);
    return 0;
}


