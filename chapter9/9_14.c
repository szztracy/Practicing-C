//
//  main.c
//  test2
//
//  Created by Tracy on 8/5/14.
//  Copyright (c) 2014 Kansas State University. All rights reserved.
//

#include <stdio.h>

#define arrayCapacity 300
int  main()
{
    float array[300];
    float *arrayPointer;
    arrayPointer = array;
    
    //define the number of inputs
    int countInput;
    printf(" The number of elements you want to input:\n");
    scanf("%d", &countInput);
    
    //input an array
    for (int iteration = 0; iteration < countInput; iteration++) {
        scanf("%f", (arrayPointer + iteration));
    }
    
    //define a variable used to exchange the sequence of two numbers
    float t = 0.0;
    
    //if the number of elements in the array is odd, exchange the first (n - 1) / 2 elements; if the array is even, exchange the first n / 2 elements
    if (countInput % 2 != 0 ) {
        for (int iteration = 0; iteration < (countInput - 1) / 2; iteration++) {
            t = *(arrayPointer + iteration);
            *(arrayPointer + iteration) = *(arrayPointer + countInput - 1 - iteration); *(arrayPointer + countInput - 1 - iteration) = t;
        }
    }else {
        for (int iteration = 0; iteration < (countInput) / 2; iteration++) {
            t = *(arrayPointer + iteration);
            *(arrayPointer + iteration) = *(arrayPointer + countInput - 1 - iteration); *(arrayPointer + countInput - 1 - iteration) = t;
        }
    }
    
    //output the ordered array
    for (int iteration = 0; iteration < countInput; iteration++) {
        printf(" %f", *(arrayPointer + iteration));
    }
    printf("\n");
    return 0;
}


