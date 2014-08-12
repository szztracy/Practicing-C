//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

//declare a function named outputFunction
void outputFunction (int *arrayPointer, int n);
//declare a function that can rearrange this array following a specific rule
void rearrangeFunction (int *arrayPointer, int n);

int  main()
{
    int *arrayPointer; //define a pointer which points to the first element in an array
    int array[10]; //define an array
    arrayPointer = array; //locate pointer's position
    //input an array
    for (int iteration = 0; iteration < 10; iteration++) {
        scanf("%d", arrayPointer++);
    }
    
    arrayPointer = array;
    rearrangeFunction (arrayPointer, 10);
    
    arrayPointer = array;
    outputFunction(arrayPointer, 10);
    
    return 0;
}


//rearrange an array, exchange the first element to min and the last element to max
void rearrangeFunction (int *arrayPointer, int n)
{
    int *pointPositionOfArray;
    int *arrayEnd;
    int max = *arrayPointer;
    int min = *arrayPointer;
    int number = 0;
    
    arrayEnd = arrayPointer + n;
    for (pointPositionOfArray = arrayPointer + 1; pointPositionOfArray < arrayEnd; pointPositionOfArray++) {
        if (*pointPositionOfArray > max) {
            max = *pointPositionOfArray;
        }else if (*pointPositionOfArray < min) min = *pointPositionOfArray;
    }
    
    number = *arrayPointer; *arrayPointer = min; min = number;
    number = *(arrayEnd - 1); *(arrayEnd - 1) = max; max = number;
    
}

//output an array
void outputFunction (int *arrayPointer, int n)
{
    for (int iteration = 0; iteration < n; iteration++) {
        printf(" %d", *(arrayPointer++));
    }
    printf("\n");
}


