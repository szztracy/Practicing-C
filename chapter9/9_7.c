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
    //declare an array A (orignial array)
    char arrayA[300];
    //declare an array B (used to store a new array)
    char arrayB[300];
    //declare an array pointer connected to array A
    char *arrayAPointer;
    //declare an array pointer connected to arrayB
    char *arrayBPointer;
    arrayAPointer = arrayA;
    arrayBPointer = arrayB;
    
    printf("Please decide how many elements in the array:\n");
    int numberOfArrayA;
    scanf("%d\n", &numberOfArrayA);
    //input arrayA
    for (int iteration = 0 ; iteration < numberOfArrayA; iteration++) {
        scanf("%c", arrayAPointer++);
    }
    
    //reset array A pointer's position
    arrayAPointer = arrayA;
    
    printf("Please input the start position of Array A to incorporate into arrayB:");
    int startPosition;
    scanf("%d", &startPosition);
    //incorporate arrayA to arrayB
    for (int iteration = startPosition - 1; iteration < numberOfArrayA; iteration++) {
        *(arrayBPointer++) = *((arrayAPointer+iteration));
    }
    //reset array B pointer's position
    arrayBPointer = arrayB;
    //output arrayB
    printf("\n");
    printf("the results:\n");
    for (int iteration = 0; iteration < numberOfArrayA - startPosition + 1 ; iteration++) {
        printf("%c", *(arrayBPointer++));
    }
    printf("\n");
    return 0;
}

