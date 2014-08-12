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
    int array[3]; //input an array with 3 elements
    for (int iteration = 0; iteration < 3; iteration++) {
        scanf("%d",&array[iteration]);
    }
    
    // Exchange the sequence of elements in the array
    int number = 0;
    for (int iterationI = 0; iterationI < 2; iterationI++) {
        for (int iterationJ = 0; iterationJ < 2 - iterationI; iterationJ++) {
            if (* (array + iterationJ) > * (array + iterationJ + 1)) {
                number = * (array + iterationJ);
                * (array + iterationJ) = * (array + iterationJ + 1);
                * (array + iterationJ + 1) = number;
            }
        }
    }
    
    // Output the array
    for (int iteration = 0; iteration < 3; iteration++) {
        printf(" %d", array[iteration]);
    }
    
    printf("\n");
    
    return 0;
}




