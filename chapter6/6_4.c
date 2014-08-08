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
    int arrayA [15]; //create an arrayA
    int arrayB [16]; //create an arrayB
    int marker = 0; // ensure the position of insertion
    //input an array named arrayA
    printf("Please input an array:\n");
    for (int iteration = 0; iteration < 4; iteration++) {
        scanf("%d", &arrayA[iteration]);
        
    }
    
    // order arrayA in a dscending order
    for (int iterationI = 0; iterationI < 3; iterationI++) {
        for (int iterationJ = 0; iterationJ < 3 - iterationI; iterationJ++) {
            int t = 0;
            if (arrayA[iterationJ] < arrayA[iterationJ + 1]) {
                t = arrayA[iterationJ]; arrayA[iterationJ] = arrayA [iterationJ + 1]; arrayA[iterationJ + 1] = t;
            }
        }
    }
    
    // output ordered arrayA named orderedArrayA;
    for (int iteration = 0; iteration < 4; iteration++) {
        printf(" %d", arrayA[iteration]);
    }
    printf("\n");
    
    //input a new number named number
    int number = 0;
    printf("Please input the number you want to insert:\n");
    scanf("%d", &number);
    
    //find the position of insertion
    int loop = 0;
    for (int iteration = 0; iteration < 4; iteration++) {
        if (number > arrayA[iteration] && loop == 0) {
            marker = iteration;
            loop = 1;
        }
    }
    printf("marker=%d", marker);
    // insert the number to ordered arrayA
    for (int iteration = 0; iteration < marker; iteration++) {
        arrayB[iteration] = arrayA[iteration];
        
    }
    
    for (int iteration = marker; iteration < 4; iteration++) {
        arrayB[iteration + 1] = arrayA[iteration];
        arrayB[marker]=number;
    }
    
    //output the arrayB
    for (int iteration = 0; iteration < 5; iteration++) {
        printf(" %d", arrayB[iteration]);
    }
    printf("\n");
    return 0;
    
}


