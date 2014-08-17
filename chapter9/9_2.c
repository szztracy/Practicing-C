//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>
#include "string.h"
int  main()
{
    //define array A
    char c1;
    int lengthOfArrayA;
    char arrayA[300];
    while ((c1 = getchar()) != '\n') {
        arrayA[lengthOfArrayA] = c1;
        lengthOfArrayA++;
    }
    //define array B
    char c2;
    int lengthOfArrayB;
    char arrayB[300];
    while ((c2 = getchar()) != '\n') {
        arrayB[lengthOfArrayB] = c2;
        lengthOfArrayB++;
    }
    //define array C
    char c3;
    int lengthOfArrayC;
    char arrayC[300];
    while ((c3 = getchar()) != '\n') {
        arrayC[lengthOfArrayC] = c3;
        lengthOfArrayC++;
    }
    printf("\n");
    //claim a pointerArray
    char *arrayAssemble [] = {arrayA, arrayB, arrayC};
    char *temp; //used to store array temporarily
    //buble algorithm
    for (int iterationI = 0; iterationI < 2; iterationI++) {
        for (int iterationJ = 0; iterationJ < 2 - iterationI; iterationJ++) {
            if (strcmp (arrayAssemble[iterationJ], arrayAssemble[iterationJ + 1]) > 0) {
                temp = arrayAssemble[iterationJ];
                arrayAssemble[iterationJ] = arrayAssemble[iterationJ + 1];
                arrayAssemble[iterationJ + 1] = temp;
            }
        }
    }
    
    //output the arranged array
    printf("the results:\n");
    for (int iteration = 0; iteration < 3; iteration++) {
        printf("%s\n", arrayAssemble[iteration]);
    }

    return 0;
}
